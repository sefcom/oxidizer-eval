long long fish::parse_execution::ExecutionContext::eval_node(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_1 *a3, char a4, unsigned long long a5)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long
    char v1;  // [bp-0x30]

    a3->field_40(&v0, a2);
    if (v0 == 7)
    {
        return (unsigned long long)a0.eval_statement(a1, *((long long *)&v1));
    }
    else if ((unsigned int)v0 != 37)
    {
        core::panicking::panic("internal error: entered unreachable codeINFinfNANnan", 40, &g_14dcbd8); /* do not return */
    }
    else if ((a4 & 1))
    {
        return a0.eval_job_list(a1, *((long long *)&v1), a5);
    }
    else
    {
        core::option::unwrap_failed(&g_14dcbc0); /* do not return */
    }
}
