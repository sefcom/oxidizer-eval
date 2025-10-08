long long starship::module::ansi_line(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x300]
    unsigned long long v1;  // [bp-0x2f8]
    void* v2;  // [bp-0x2f0]
    struct_0 *v3;  // [bp-0x2e8]
    void* v4;  // [bp-0x2e0]
    unsigned long long v5;  // [bp-0x2d8]
    void* v6;  // [bp-0x2d0]
    int v7;  // [bp-0x2c8], Other Possible Types: char
    char v8;  // [bp-0x2b8]
    unsigned long long v9;  // [bp-0x2a0]
    int v12;  // [bp-0x288]
    int v13;  // [bp-0x258]
    unsigned long long v14;  // [bp-0x248]
    int v19;  // [bp-0x148]
    int v20;  // [bp-0x148]
    void* v21;  // [bp-0x138]
    unsigned long v22;  // [bp-0x130]
    void* v24;  // rbp
    unsigned int *v25;  // rax
    unsigned int *v26;  // r14
    unsigned long long v27;  // rax
    char *v28;  // rdx

    v9 = a2;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v4 = 0;
    v5 = 8;
    v6 = 0;
    v7 = 2;
    v24 = 0;
    while (true)
    {
        v25 = a1.next();
        if (!v25)
            break;
        v26 = v25;
        if (*(v25) == 1)
        {
            v21 = 0;
            memcpy(&v19, &v0, 16);
            v22 = v26 + 2;
            v4.push(&v19);
            v0 = 0;
            v1 = 8;
            v2 = 0;
            v7 = 2;
            v19 = v20;
            if (*(v26) == 2)
                break;
        }
        else
        {
            v27 = v26.width_graphemes();
            v28 = &v7;
            if (v7 == 2)
                v28 = 0;
            v12.ansi_string(v26, v28, a3);
            v8 = v14;
            v7 = v13;
            v0.push(&v12);
            v24 += v27;
            if (*(v26) == 2)
                break;
        }
    }
    v3->field_10 = 0;
    v3->field_0 = *((int128_t *)&v0);
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(alloc::vec::Vec<nu_ansi_term::display::AnsiGenericString<str>>,&starship::segment::FillSegment)>>(&v4);
}
