long long fish::parse_util::parse_util_detect_errors_in_argument_list(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long *v0;  // [bp-0xd8]
    void* v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    void* v3;  // [bp-0xc0]
    char *v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    unsigned long long v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    char v9;  // [bp-0x90]
    unsigned long long v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbx
    unsigned long long v15;  // rax
    void* v17;  // rdx
    void* v18;  // rdx

    v5 = a1;
    v6 = a2;
    v7 = a3;
    v8 = a4;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    fish::ast::parse_argument_list(&v9, a1, a2, 0, &v1);
    if (*((long long *)&v11))
    {
        v13 = *((long long *)&v11) * 12;
        do
        {
            v14 = v13;
            v15 = v10.try_source(a1, a2);
            if (!v15)
                v17 = 0;
            else
                v17 = v18;
            if (!v15)
                v15 = 4;
            v4 = &v1;
            if (((char)fish::parse_util::parse_util_detect_errors_in_argument(v10, v15, v17, &v4) & 1))
            {
                fish::parse_util::parse_util_detect_errors_in_argument_list::{{closure}}(a0, &v5, 8, 0);
                core::ptr::drop_in_place<fish::ast::Ast<fish::ast::FreestandingArgumentList>>(&v9);
                core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v1);
                return a0;
            }
            v10 += 12;
            v13 = v14 - 12;
        } while (v14 != 12);
    }
    *(v0) = 0x8000000000000000;
    core::ptr::drop_in_place<fish::ast::Ast<fish::ast::FreestandingArgumentList>>(&v9);
    core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v1);
    return a0;
}
