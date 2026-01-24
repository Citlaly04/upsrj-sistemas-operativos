#ifndef PROCESS_H
#define PROCESS_H


 /*Estructura del proceso*/
typedef struct {
    int id;               // Identificador del proceso
    int arrival_time;     // Tiempo de llegada
    int burst_time;       // Tiempo total de ejecución
    int remaining_time;   // Tiempo restante (Round Robin)
    int waiting_time;     // Tiempo de espera
    int turnaround_time;  // Tiempo de retorno
    int completed;        // Indica si el proceso terminó
} Process;

/*Funciones auxiliares (infraestructura)*/
void read_processes(Process p[], int n);
void init_processes(Process p[], int n);
void print_results(Process p[], int n, const char *title);

/* Algoritmos de planificación*/

/* FCFS (First Come, First Served)
 * La lógica está en su archivo .c correspondiente
 */
void fcfs_schedule(Process p[], int n);

/* SJF (Shortest Job First) no preventivo */
void sjf_schedule(Process p[], int n);

/* Round Robin */
void rr_schedule(Process p[], int n, int quantum);

#endif
