long long fish::parse_execution::ExecutionContext::run_if_statement(struct_0 *a0, void* a1, struct_1 *a2)
{
    unsigned long v0;  // [bp-0x60]
    char v1;  // [bp-0x58], Other Possible Types: uint128_t
    unsigned int v2;  // [bp-0x48]
    unsigned short v3;  // [bp-0x44]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v10;  // r15
    unsigned long long v11;  // r14
    unsigned long long v12;  // r13
    unsigned long long v13;  // r12
    unsigned long long v14;  // rbx
    unsigned long long v16;  // rax
    void* v17;  // r15
    struct_1 *v18;  // 4096
    unsigned long long v19;  // cc_ndep
    unsigned long long v20;  // cc_ndep
    struct_1 *v21;  // r12
    void* v22;  // r15
    char v23;  // al
    unsigned long long v24;  // cc_op
    unsigned long v25;  // cc_dep1
    char v26;  // al
    unsigned int v27;  // eax
    unsigned long long v28;  // cc_ndep
    void* v29;  // r15
    void* v30;  // r12
    struct_1 *v32;  // r12
    unsigned long long v33;  // rax
    unsigned int v34;  // ebp
    unsigned long v35;  // r12
    unsigned long long v36;  // r12
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    char v41;  // al

    v8 = v10;
    v7 = v11;
    v6 = v12;
    v5 = v13;
    v4 = v14;
    fish::trace::trace_if_enabled(a1.parser(), "i", 2);
    v16 = a0->field_28.check_end_execution(a1);
    if ((char)v16 == 4)
    {
        v0 = a2->field_110;
        v17 = 0;
        v18 = a2;
    }
    else
    {
        v34 = v16;
        goto LABEL_13dedb6;
    }
    while (true)
    {
        v20 = v19;
        v21 = v18;
        v22 = v17;
        v23 = a0.run_job_conjunction(a1, &v21->padding_0[16]);
        v24 = 17;
        v25 = v23;
        if (!v23)
        {
            v26 = a0.run_andor_job_list(a1, &v21->padding_0[176]);
            v24 = 17;
            v25 = v26;
            if (v26)
                goto LABEL_13ded50;
            v27 = a1.parser().get_last_status();
            v24 = 19;
            v25 = v27;
            if (v27)
                goto LABEL_13ded50;
            v35 = &v21->padding_0[192];
            v34 = 0;
            goto LABEL_13dee0f;
        }
LABEL_13ded50:
        v28 = _ccall(v24, v25, 0, v20);
        v29 = v22 + 1;
        if ((char)_ccall(4, 24, v22 + 1, 0, _ccall(v24, v25, 0, v20)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14dcf68); /* do not return */
        v30 = v29 - 1;
        if (v30 >= a2->field_118)
            break;
        fish::trace::trace_if_enabled(a1.parser(), "e", 7);
        v32 = v0 + v30 * 224 + 16;
        v33 = a0->field_28.check_end_execution(a1);
        v17 = v29;
        v18 = v32;
        v19 = v28;
        if ((char)v33 != 4)
        {
            v34 = v33;
            goto LABEL_13dedb2;
        }
    }
    v34 = 0;
LABEL_13dedb2:
LABEL_13dedb6:
    v36 = a1.parser();
    if (a2->field_e0 == 2)
    {
        v1.just(0);
        v36.set_last_statuses(&v1);
    }
    else
    {
        fish::trace::trace_if_enabled(v36, "e", 4);
        v35 = &a2->padding_e4[28];
LABEL_13dee0f:
        v3 = 4;
        v1 = 0;
        v2 = 0;
        v37 = a1.parser().push_block(&v1);
        a0.run_job_list(a1, v35);
        v38 = a0->field_28.check_end_execution(a1);
        if ((char)v38 != 4)
            v34 = v38;
        a1.parser().pop_block(v37);
    }
    fish::trace::trace_if_enabled(a1.parser(), "e", 6);
    v41 = a0->field_28.check_end_execution(a1);
    return (v41 != 4 ? v34 : v41);
}
