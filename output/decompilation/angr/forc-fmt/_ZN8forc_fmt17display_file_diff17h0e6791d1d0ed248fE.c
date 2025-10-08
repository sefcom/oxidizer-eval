void forc_fmt::display_file_diff(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x1c8]
    char v1;  // [bp-0x110]
    char v2;  // [bp-0xa8]
    char v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    unsigned long long v7;  // r14
    unsigned long long v8;  // r13

    v5 = v7;
    v4 = v8;
    prettydiff::text::diff_lines(&v3, a0, a1, a2, a3);
    v0.diff(&v3);
    v2.into_iter(&v0);
    v1.next(&v2);
    if (*((long long *)&v1) != 4)
        goto (long long)(g_567220[*((long long *)&v1)] + (char *)&g_567220[0]);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<prettydiff::basic::DiffOp<&str>>>(&v2);
    core::ptr::drop_in_place<prettydiff::text::LineChangeset>(&v3);
    return;
}
