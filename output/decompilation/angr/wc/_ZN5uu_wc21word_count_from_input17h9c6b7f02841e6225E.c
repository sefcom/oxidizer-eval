long long uu_wc::word_count_from_input::h9c6b7f02841e6225(struct_0 *a0, unsigned long long *a1, char a2[29])
{
    unsigned long v0;  // [bp-0x50]
    char v1;  // [bp-0x4c]
    char v2;  // [bp-0x48]
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x30]
    char v5;  // [bp-0x20]
    char v6;  // [bp-0x18]
    unsigned int v8;  // edx
    unsigned long long v9;  // rax
    int v10;  // xmm0
    unsigned long long v11;  // rax

    if (*(a1) == 9223372036854775809)
    {
        v0 = std::io::stdio::stdin::h7215cc131abb55d8();
        uu_wc::word_count_from_reader::h5f3d93b09ec956fa(&v3, std::io::stdio::Stdin::lock::h161a36d857331d7f(&v0), v8 & 1, a2);
    }
    else
    {
        std::fs::File::open::h29294cdd33afafbd(&v0, a1);
        if ((int)v0)
        {
            v9 = *((long long *)&v2);
            a0->field_8 = v9;
            a0->field_0 = 2;
            return v9;
        }
        uu_wc::word_count_from_reader::hd0ebac2d03e30fcc(&v3, *((int *)&v1), a2);
    }
    *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v5);
    v10 = *((int128_t *)&v3);
    *((int128_t *)&(&a0->padding_10)[1]) = *((int128_t *)&v4);
    *((void*)&a0->field_8) = v10;
    v11 = *((long long *)&v6);
    if (!v11)
    {
        v9 = 0;
    }
    else
    {
        a0->field_28 = v11;
        v9 = 1;
    }
    a0->field_0 = v9;
    return v9;
}
