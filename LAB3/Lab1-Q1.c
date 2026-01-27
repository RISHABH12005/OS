int main() {
    char state[20] = "New";

    printf("Process P1 created\n");
    printf("Current State: %s\n\n", state);

    strcpy(state, "Ready");
    printf("Process P1 admitted to ready queue\n");
    printf("Current State: %s\n\n", state);

    strcpy(state, "Running");
    printf("CPU scheduler selects P1\n");
    printf("Current State: %s\n\n", state);

    strcpy(state, "Waiting");
    printf("Process P1 requests I/O operation\n");
    printf("Current State: %s\n\n", state);

    strcpy(state, "Ready");
    printf("I/O operation completed\n");
    printf("Current State: %s\n\n", state);

    strcpy(state, "Terminated");
    printf("Process P1 finishes execution\n");
    printf("Current State: %s\n", state);

    return 0;
}