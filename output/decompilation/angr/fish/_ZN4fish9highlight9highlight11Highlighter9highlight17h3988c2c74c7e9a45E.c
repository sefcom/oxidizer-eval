void fish::highlight::highlight::Highlighter::highlight(struct_0 *a0, void* a1)
{
    char v0;  // [bp-0x88]
    unsigned int v1[2];  // [bp-0x80]
    char v2;  // [bp-0x78]
    unsigned int v3[2];  // [bp-0x68]
    char v4;  // [bp-0x60]
    unsigned int v5[2];  // [bp-0x50]
    unsigned long v6;  // [bp-0x48]
    char v7;  // [bp-0x40]
    unsigned long v9;  // r15
    unsigned long long v10;  // r12
    unsigned long long v11;  // r12
    unsigned long long v12;  // r12

    if ((char)a1[145])
        core::panicking::panic("assertion failed: !self.doneOut of range", 28, &g_14d95c8); /* do not return */
    *((char *)&a1[145]) = 1;
    if ((char)a1[144])
        fish::threads::assert_is_background_thread();
    v9 = a1 + 72;
    v9.resize((long long)a1[128]);
    fish::ast::parse(&v0, (long long)a1[120], (long long)a1[128], 47, 0);
    a1.visit_children(&v7, <fish::ast::JobList as fish::ast::Acceptor>::accept);
    if (!(char)(long long)a1[136].check_cancel())
    {
        for (v10 = *((long long *)&v2) * 8; v10; v1 += 1)
        {
            v10 -= 8;
            (long long)a1[80].color_range((long long)a1[88], v1[0], v1[1], 0x70000);
        }
        for (v11 = *((long long *)&v4) * 8; v11; v3 += 1)
        {
            v11 -= 8;
            (long long)a1[80].color_range((long long)a1[88], v3[0], v3[1], 0x40000);
        }
        for (v12 = v6 * 8; v12; v5 += 1)
        {
            v12 -= 8;
            (long long)a1[80].color_range((long long)a1[88], v5[0], v5[1], 0x10000);
        }
    }
    a0->field_10 = *((long long *)(v9 + 16));
    a0->field_0 = *((int128_t *)v9);
    *((unsigned long long *)&a1[72]) = 0;
    *((unsigned long long *)&a1[80]) = 1;
    *((unsigned long long *)&a1[88]) = 0;
    core::ptr::drop_in_place<fish::ast::Ast>(&v0);
    return;
}
