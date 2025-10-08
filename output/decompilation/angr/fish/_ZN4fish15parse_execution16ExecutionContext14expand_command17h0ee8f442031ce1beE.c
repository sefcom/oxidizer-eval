long long fish::parse_execution::ExecutionContext::expand_command(unsigned long a0, void* a1, struct_0 *a2, void* a3, unsigned long long a4)
{
    unsigned long v0;  // [bp-0xf8]
    void* v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    void* v3;  // [bp-0xd0]
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
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx

    v8 = v10;
    v7 = v11;
    v6 = v12;
    v5 = v13;
    v4 = v14;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v0 = a0;
    v15 = (unsigned long long)a0.node_source(a2, fish::ast::Node::source);
    if (!(a2->field_0 & 1))
        core::option::unwrap_failed(&g_14dcd10); /* do not return */
    a2->field_4.start();
    fish::expand::expand_to_command_and_args(v15, v16, a1, a3, a4, &v1, 0);
    goto (long long)(g_9f5170[(unsigned int)v16] + (char *)&g_9f5170[0]);
}
