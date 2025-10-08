long long fish::parse_execution::ExecutionContext::run_switch_statement(struct_0 *a0, void* a1, struct_1 *a2)
{
    unsigned long v0;  // [bp-0x140]
    void* v1;  // [bp-0x120]
    unsigned long long v2;  // [bp-0x118]
    void* v3;  // [bp-0x110]
    unsigned long long v4[3];  // [bp-0x108]
    unsigned long long v5;  // [bp-0x100]
    void* v6;  // [bp-0xf8]
    char v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned long long v11;  // [bp-0x18]
    unsigned long long v12;  // [bp-0x10]
    unsigned long long v14;  // r15
    unsigned long long v15;  // r14
    unsigned long long v16;  // r13
    unsigned long long v17;  // r12
    unsigned long long v18;  // rbx
    unsigned long v19;  // r14
    unsigned int v21;  // edx

    v12 = v14;
    v11 = v15;
    v10 = v16;
    v9 = v17;
    v8 = v18;
    v19 = &a2->field_50;
    v0 = a0->field_18;
    v7.node_source_owned(a0->field_18, v19, 19903088);
    v1 = 0;
    v2 = 8;
    v3 = 0;
    *(v4) = 0;
    v5 = 8;
    v6 = 0;
    fish::expand::expand_string(&v7, &v1, 0, a1, &v4);
    if (!(*((char *)v19) & 1))
        core::option::unwrap_failed(&g_14dcf80); /* do not return */
    fish::parse_constants::parse_error_offset_source_start(&v4, a2->field_54.start());
    goto (long long)(g_9f51d0[v21] + (char *)&g_9f51d0[0]);
}
