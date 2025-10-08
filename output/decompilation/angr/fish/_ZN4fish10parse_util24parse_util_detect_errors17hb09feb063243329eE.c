long long fish::parse_util::parse_util_detect_errors(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0xc1]
    void* v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    void* v3;  // [bp-0xb0]
    char v4;  // [bp-0xa8]
    unsigned int v7;  // eax

    v0 = 0;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    if (a3)
    {
        fish::ast::parse(&v4, a0, a1, 8, &v1);
        v1.retain(&v0);
        if ((v0 & 1))
        {
            core::ptr::drop_in_place<fish::ast::Ast>(&v4);
            core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v1);
            return (unsigned int)a2 & 0xffffff00 | 1;
        }
    }
    else
    {
        fish::ast::parse(&v4, a0, a1, 0, &v1);
    }
    v7 = fish::parse_util::parse_util_detect_errors_in_ast(&v4, a0, a1, a2);
    core::ptr::drop_in_place<fish::ast::Ast>(&v4);
    core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v1);
    return v7;
}
