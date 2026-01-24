#include <stdio.h>
#include "process.h"

/* ============================================================
 * Student implementation area
 * ============================================================ */
void sjf_schedule(Process p[], int n)
{
    int time = 0;
    int completed = 0;

    while (completed < n) {
        int idx = -1;
        int min_burst = 999999;

        /* Buscar el proceso disponible con menor ráfaga */
        for (int i = 0; i < n; i++) {
            if (p[i].arrival_time <= time &&
                !p[i].completed &&
                p[i].burst_time < min_burst) {

                min_burst = p[i].burst_time;
                idx = i;
            }
        }

        /* CPU ocioso */
        if (idx == -1) {
            time++;
            continue;
        }

        printf("Tiempo %d: Ejecutando P%d (BT=%d)\n",
               time, p[idx].id, p[idx].burst_time);

        p[idx].waiting_time = time - p[idx].arrival_time;
        time += p[idx].burst_time;
        p[idx].turnaround_time =
            p[idx].waiting_time + p[idx].burst_time;
        p[idx].completed = 1;
        completed++;

        printf("   -> P%d terminó en tiempo %d\n",
               p[idx].id, time);
    }
}


/* ============================================================
 * DO NOT MODIFY MAIN
 * ============================================================ */
#ifndef UNIT_TEST
int main(void)
{
    int n;
    printf("Número de procesos: ");
    scanf("%d", &n);

    Process p[n];
    read_processes(p, n);
    init_processes(p, n);

    sjf_schedule(p, n);

    print_results(p, n, "SJF Scheduling");
    return 0;
}
#endif