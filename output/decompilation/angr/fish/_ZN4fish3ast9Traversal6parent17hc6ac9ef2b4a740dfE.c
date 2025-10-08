long long fish::ast::Traversal::parent(unsigned long long a0[3], unsigned long long a1, struct_1 *a2)
{
    unsigned long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    char *v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    char *v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    void* v8;  // [bp-0x40]
    char v9;  // [bp-0x30]
    unsigned long long v11;  // rax
    void* v12;  // rdx
    unsigned long long v13;  // rax

    v0 = a0[1];
    v1 = a0[1] + a0[2] * 24;
    do
    {
        if (!v0.try_rfold())
        {
            a2->field_68(&v9, a1);
            v2 = &v9;
            v3 = <widestring::utfstring::Utf32String as core::fmt::Debug>::fmt;
            v4 = &g_14c4e58;
            v5 = 2;
            v8 = 0;
            v6 = &v2;
            v7 = 1;
            core::panicking::panic_fmt(&v4, &g_14c4e90); /* do not return */
        }
    } while (!(char)fish::ast::is_same_node(a1, a2, v11, v12));
    v13 = v0.try_rfold();
    if (!v13)
        core::option::expect_failed("Node is root and has no parentNode  has either been popped off of the stack or not yet visited. Cannot find parent.Passed node is not on the stackPassed node is not the last visited node", 30, &g_14c4e78); /* do not return */
    return v13;
}
