long long fish::highlight::highlight::colorize(unsigned long a0, unsigned long long a1, unsigned long a2, unsigned int *a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned int v0;  // [bp-0x10c]
    unsigned short v1;  // [bp-0x108]
    unsigned short v2;  // [bp-0x106]
    char v3;  // [bp-0x104]
    char v4;  // [bp-0x103]
    unsigned short v5;  // [bp-0x102]
    char v6;  // [bp-0x100]
    char v7;  // [bp-0xff]
    unsigned short v8;  // [bp-0xfe]
    char v9;  // [bp-0xfc]
    unsigned int v10;  // [bp-0xf8]
    unsigned int v11;  // [bp-0xf4]
    unsigned int v12;  // [bp-0xf0]
    unsigned int v13;  // [bp-0xec]
    void* v14;  // [bp-0xe8]
    unsigned long long v15;  // [bp-0xe0]
    void* v16;  // [bp-0xd8]
    unsigned long long v17;  // [bp-0xd0]
    unsigned int v18;  // [bp-0xc8]
    unsigned short v19;  // [bp-0xc4]
    unsigned short v20;  // [bp-0xc2]
    char v21;  // [bp-0xc0]
    char v22;  // [bp-0xbf]
    unsigned short v23;  // [bp-0xbe]
    char v24;  // [bp-0xbc]
    char v25;  // [bp-0xbb]
    unsigned short v26;  // [bp-0xba]
    char v27;  // [bp-0xb8]
    unsigned long long v28;  // [bp-0xa8]
    int v29;  // [bp-0x89]
    char v30;  // [bp-0x80]
    unsigned long long v31;  // [bp-0x78]
    unsigned long long v32;  // [bp-0x70]
    void* v33;  // [bp-0x68]
    char v34;  // [bp-0x60], Other Possible Types: unsigned long long
    char v35;  // [bp-0x58]
    char v36;  // r14b
    unsigned long long v37;  // rax
    unsigned int v38;  // edx
    unsigned long v39;  // r13
    char v40;  // r12b
    unsigned long v41;  // r15
    unsigned long v42;  // rbp

    if (a4 != a2)
        core::panicking::panic("assertion failed: colors.len() == text.len()src/highlight/highlight.rs", 44, &g_14d9168); /* do not return */
    v34.new();
    v4 = 3;
    v7 = 0;
    v0 = 0;
    v1 = 773;
    v14 = 0;
    v15 = 1;
    v16 = 0;
    v17 = 0xffffffff00000000;
    v27 = v9;
    v18 = v0;
    v19 = 773;
    v20 = v2;
    v21 = v3;
    v22 = 3;
    v23 = v5;
    v24 = v6;
    v25 = 0;
    v26 = v8;
    v31 = a1;
    v32 = a1 + a4 * 4;
    v33 = 0;
    v12 = 0;
    v36 = 0;
    v10 = 0;
    v11 = 0;
    while (true)
    {
        v37 = v31.next();
        if (v38 == 0x110000)
        {
            v14.set_text_face(&v0);
            v28.to_vec(v15, 0);
            core::ptr::drop_in_place<fish::io::BufferElement>(v14, v15);
            core::ptr::drop_in_place<fish::highlight::highlight::HighlightColorResolver>(v34, *((long long *)&v35));
            return a0;
        }
        if (v37 >= a4)
            core::panicking::panic_bounds_check(v37, a4, &g_14d9180); /* do not return */
        v39 = a3[v37];
        v13 = v39;
        v40 = (unsigned int)v39 >> 16;
        v41 = (unsigned int)v39 >> 24;
        v42 = (unsigned int)v39 >> 8;
        if (!((char)v12 ^ (char)v41) && !(v36 ^ v40) && !(((char)v11 ^ (char)v39) & 1))
        {
            v36 = v36;
            if (!(((char)v10 ^ (char)v42) & 1))
                goto LABEL_13ba130;
        }
        v29.resolve_spec(&v34, &v13, a5, a6);
        v30 = 3;
        v14.set_text_face(&v29);
        v12 = v41;
        v10 = v42;
        v11 = v39;
        v36 = v40;
LABEL_13ba130:
        v14.writech(v38);
    }
}
