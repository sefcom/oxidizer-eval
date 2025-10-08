long long uu_ls::return_total(unsigned long a0, void* a1, unsigned long a2, struct_0 *a3, unsigned long long a4)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    char *v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    void* v5;  // [bp-0x90]
    char *v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    unsigned long v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x68]
    int v10;  // [bp-0x60], Other Possible Types: char
    unsigned long v11;  // [bp-0x50]
    char v12;  // [bp-0x48]
    unsigned long long v14;  // rbx
    void* v15;  // r15
    unsigned long long v16;  // rbx
    unsigned long v17;  // rbx
    struct_0 *v18;  // rbx
    unsigned long long v19;  // rax
    unsigned long v20;  // rdx

    if (a2)
    {
        v14 = a2 * 304;
        v15 = 0;
        do
        {
            v16 = v14;
            v1 = a1.get_metadata(a4);
            v15 += (v1 ? &v1 : 0).map_or(a3->field_d8, a3->field_f9);
            a1 += 304;
            v17 = v16 - 304;
            v14 = v17;
        } while (v16 != 304);
        v18 = a3;
        if (v18->field_f6)
            goto LABEL_59c020;
    }
    else
    {
        v15 = 0;
        v18 = a3;
        if (v18->field_f6)
        {
LABEL_59c020:
            v19 = uu_ls::dired::indent(a4);
            if (v19)
            {
                *((unsigned long long *)&v0[8]) = v19;
                *((unsigned long *)&v0[16]) = v20;
                *((unsigned long long *)v0) = 0x8000000000000000;
                return 0x8000000000000000;
            }
        }
    }
    uu_ls::display_size(&v12, v15, v18->field_f9);
    v6 = &v12;
    v7 = <alloc::string::String as core::fmt::Display>::fmt;
    v8 = &v18[1].padding_0[8];
    v9 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v1 = &g_686bf8;
    v2 = 2;
    v5 = 0;
    v3 = &v6;
    v4 = 2;
    v10.map_or_else(&v1);
    core::ptr::drop_in_place<alloc::string::String>(&v12);
    *((unsigned long *)&v0[16]) = v11;
    *(v0) = v10;
    return v11;
}
