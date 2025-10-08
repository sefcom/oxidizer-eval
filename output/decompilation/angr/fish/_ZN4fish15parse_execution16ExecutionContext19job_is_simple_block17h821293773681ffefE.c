long long fish::parse_execution::ExecutionContext::job_is_simple_block(struct_0 *a0)
{
    unsigned long v1;  // rcx
    unsigned long v2;  // rcx

    if (a0->field_68)
        return 0;
    v1 = a0->field_20;
    v2 = v1 - 1;
    if (5 <= (unsigned int)(v1 - 2))
        v2 = 0;
    goto (long long)(g_9f5184[v2] + (char *)&g_9f5184[0]);
}
