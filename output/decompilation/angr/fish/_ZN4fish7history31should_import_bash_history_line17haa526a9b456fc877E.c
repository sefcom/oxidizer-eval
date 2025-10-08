long long fish::history::should_import_bash_history_line(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x80]
    void* v2;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    unsigned long long v11;  // [bp-0x30]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx

    if (!a1 || a0.starts_with(a1, 35))
        return 0;
    v0 = a0;
    v1 = a0 + a1 * 4;
    if (!v0.try_fold().eq(1))
    {
        v0 = 0;
        v1 = 5;
        v2 = "[";
        v3 = 2;
        v4 = "]";
        v5 = 2;
        v6 = "(";
        v7 = 2;
        v8 = ")";
        v9 = 2;
        v10 = "<";
        v11 = 2;
        do
        {
            if (!v0.next())
            {
                fish::ast::parse(&v0, a0, a1, 0, 0);
                core::ptr::drop_in_place<fish::ast::Ast>(&v0);
                if (!(char)v11)
                {
                    v0 = 0;
                    v1 = 8;
                    v2 = 0;
                    fish::parse_util::parse_util_detect_errors(a0, a1, &v0, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v0);
                    return 1;
                }
                return 0;
            }
        } while (fish::util::find_subslice(v13, v14, a0, a1) != 1);
    }
    return 0;
}
