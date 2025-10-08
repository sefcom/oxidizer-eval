void fish::parse_execution::ExecutionContext::eval_statement(unsigned long a0, unsigned long a1, unsigned int *a2)
{
    unsigned long v1;  // rax
    unsigned long v2;  // rax

    v1 = *(a2);
    v2 = v1 - 1;
    if ((unsigned int)(v1 - 2) >= 5)
        v2 = 0;
    goto (long long)(g_9f5158[v2] + (char *)&g_9f5158[0]);
}
