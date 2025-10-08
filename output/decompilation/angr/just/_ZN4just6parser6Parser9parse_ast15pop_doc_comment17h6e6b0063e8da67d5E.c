long long just::parser::Parser::parse_ast::pop_doc_comment(unsigned long long a0[3], unsigned int a1)
{
    char v0;  // [bp-0x128]
    unsigned long long v2;  // r12
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    void* v5;  // rax
    unsigned long long v6;  // r14
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax
    unsigned long v10;  // r12

    if (a1)
        return 0;
    v2 = a0[2];
    if (v2)
    {
        v3 = a0[1];
        v4 = v2 * 0x100;
        if (*((long long *)(v3 + v4 - 0x100)) == 9223372036854775810)
        {
            v5 = v4 + v3;
            v6 = (long long)v5[240];
            v7 = 1.get((long long)v5[248], v6);
            if (!v7)
                core::str::slice_error_fail((long long)v5[248], v6, 1, v6, &g_8308a0); /* do not return */
            v9 = core::str::<impl str>::trim_start_matches(v7, v8);
            v10 = v2 - 1;
            a0[2] = v10;
            memcpy(&v0, v3 + v10 * 0x100, 0x100);
            core::ptr::drop_in_place<core::option::Option<just::item::Item>>(&v0);
            return v9;
        }
    }
    return 0;
}
