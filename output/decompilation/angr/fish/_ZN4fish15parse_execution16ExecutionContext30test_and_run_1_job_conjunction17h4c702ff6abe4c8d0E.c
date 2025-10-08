long long fish::parse_execution::ExecutionContext::test_and_run_1_job_conjunction(struct_1 *a0, void* a1, struct_0 *a2)
{
    unsigned long long v1;  // rax
    unsigned int v2;  // eax

    v1 = a0->field_28.check_end_execution(a1);
    if ((char)v1 != 4)
        return v1;
    if (a2->field_0 == 2)
        return a0.run_job_conjunction(a1, a2);
    v2 = a1.parser().get_last_status();
    switch (a2->field_c)
    {
    case 15:
        if (!v2)
            return 0;
    case 1:
        if (v2)
            return 0;
    default:
        core::panicking::panic("internal error: entered unreachable codeINFinfNANnan", 40, &g_14dd270); /* do not return */
    }
    return a0.run_job_conjunction(a1, a2);
}
