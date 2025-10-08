void uu_expr::syntax_tree::AstNode::eval(unsigned long long a0, unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0x290]
    unsigned long long v1;  // [bp-0x288]
    struct_0 **v2;  // [bp-0x280]
    void* v3;  // [bp-0x278]
    void* v4;  // [bp-0x270]
    void* v5;  // [bp-0x260]
    unsigned long long *v6;  // [bp-0x178]
    unsigned long long v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]
    unsigned long long v10;  // [bp-0x18]
    unsigned long long v11;  // [bp-0x10]
    unsigned long long v13;  // r15
    unsigned long long v14;  // r14
    unsigned long long v15;  // r13
    unsigned long long v16;  // r12
    unsigned long long v17;  // rbx
    struct_0 **v18;  // rax

    v11 = v13;
    v10 = v14;
    v9 = v15;
    v8 = v16;
    v7 = v17;
    v0 = a0;
    v18 = 8.alloc_impl(8);
    if (!v18)
        alloc::alloc::handle_alloc_error(8, 8); /* do not return */
    v6 = a1;
    *(v18) = a1;
    v1 = 1;
    v2 = v18;
    v4 = 0;
    v5 = 0;
    v3 = 0;
    goto (long long)(g_41ca2c[(0x8000000000000000 + *(v2)->field_0 - 1 < 4 ? *(v2)->field_0 ^ 0x8000000000000000 : 0)] + (char *)&g_41ca2c[0]);
}
