long long fish::parse_execution::ExecutionContext::run_job_conjunction(struct_2 *a0, unsigned long a1, struct_1 *a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    void* v4;  // rax
    unsigned long v5;  // r15
    unsigned long long v6;  // r12
    unsigned long long v7;  // r12
    unsigned long long v8;  // rax
    unsigned int v9;  // eax
    unsigned int v10;  // ecx

    v0 = v2;
    v3 = a0->field_28.check_end_execution(a1);
    if ((char)v3 != 4)
        return v3;
    v4 = a0.run_1_job(a1, &a2->padding_0[16]);
    if (!a2->field_98)
        return v4;
    v5 = &a2->field_90[1].padding_0[3];
    v6 = a2->field_98 * 144;
    while (true)
    {
        v7 = v6;
        if ((char)v4)
            return v4;
        v8 = a0->field_28.check_end_execution(a1);
        if ((char)v8 != 4)
            return v8;
        v9 = a1.parser().get_last_status();
        v10 = *((char *)(v5 - 4));
        if (v10 != 8)
        {
            if (v10 != 9)
                core::panicking::panic("internal error: entered unreachable codeINFinfNANnan", 40, &g_14dd288); /* do not return */
            if (!v9)
                goto LABEL_13e1df4;
            goto LABEL_13e1d90;
        }
        else if (!v9)
        {
LABEL_13e1d90:
            v4 = a0.run_1_job(a1, v5);
            v5 += 144;
            v6 = v7 - 144;
            if (v7 == 144)
                return v4;
        }
        else
        {
LABEL_13e1df4:
            v4 = 0;
            v5 += 144;
            v6 = v7 - 144;
            if (v7 == 144)
                return 0;
        }
    }
}
