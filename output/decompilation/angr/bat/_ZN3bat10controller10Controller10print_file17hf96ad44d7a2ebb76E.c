long long bat::controller::Controller::print_file(void* a0, struct_4 **a1, unsigned long long a2, struct_3 *a3, unsigned long long a4, struct_0 *a5, char a6, unsigned long long *a7)
{
    void* v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0x100]
    void* v2;  // [bp-0xf8]
    int v3;  // [bp-0xf0], Other Possible Types: char
    int v4;  // [bp-0xe0]
    int v5;  // [bp-0xd0]
    int v6;  // [bp-0xc0]
    int v7;  // [bp-0xb0]
    struct_4 *v8;  // [bp-0x88]
    char v9;  // [bp-0x80]
    unsigned long long v10;  // [bp-0x80]
    char v11;  // [bp-0x78]
    int v12;  // [bp-0x68]
    unsigned long v13;  // [bp-0x58]
    void* v14;  // [bp-0x50]
    void* v15;  // [bp-0x48]
    void* v16;  // [bp-0x40]
    unsigned long long v17;  // [bp-0x38]
    struct_4 *v18;  // r12
    unsigned long long v19;  // r12
    unsigned int *v20;  // rax
    unsigned long v21;  // rax
    void* v22;  // rax

    a4 = a4;
    a3 = a3;
    a2 = a2;
    if (a5->field_38 || *(a1)->field_b8.header())
    {
        a3->field_18(&v3, a2, a4, a5, a6);
        if (v3 != 13)
        {
            a0[64] = v7;
            a0[48] = v6;
            a0[32] = v5;
            a0[16] = v4;
            *(a0) = v3;
            return a0;
        }
    }
    if (a5->field_38)
    {
        v18 = *(a1);
        if ((char)(((0 ^ v18->field_90) & (0 ^ -(v18->field_90))) >> 63))
        {
            v8 = v18;
            v19 = v18->field_98;
            v0 = 0;
            v1 = 8;
            v2 = 0;
            if (*(a7))
            {
                v3.iter(a7);
                if (v3.next())
                {
                    do
                    {
                        v21 = *(v20);
                        v22 = v21 - v19;
                        if (v21 < v19)
                            v22 = 0;
                        v14 = 0;
                        v15 = v22;
                        v16 = 0;
                        v17 = v19 + v21;
                        v0.push(&v14, &g_ace390);
                        v20 = v3.next();
                    } while (v20);
                }
            }
            (char)v10.from(&v0);
            v8 = v8;
        }
        else
        {
            v9.clone(v18->field_98, v18->field_a0);
            *((int128_t *)&v12) = *((int128_t *)&(&v18->field_a0)[1]);
            v13 = *((long long *)((char *)&v18->field_a8 + 8));
            v8 = v18;
        }
        v3.print_file_ranges(v8, a2, a3->field_28, a3->field_30, a4, &a5->padding_0[40], &(char)v10);
        if ((char)v3 != 13)
        {
            a0[64] = v7;
            a0[48] = v6;
            a0[32] = v5;
            a0[16] = v4;
            *(a0) = v3;
            core::ptr::drop_in_place<bat::line_range::LineRanges>(v10, *((long long *)&v11));
            return a0;
        }
        core::ptr::drop_in_place<bat::line_range::LineRanges>(v10, *((long long *)&v11));
    }
    a3->field_20(&v3, a2, a4, a5);
    if ((char)v3 != 13)
    {
        a0[64] = v7;
        a0[48] = v6;
        a0[32] = v5;
        a0[16] = v4;
        *(a0) = v3;
        return a0;
    }
    *((char *)a0) = 13;
    return a0;
}
