long long uu_comm::open_file::hf1a97c9c21fc0fa7(struct_0 *a0, char *a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v0;  // [sp-0x38]
    char v1;  // [bp-0x30], Other Possible Types: unsigned int
    unsigned short v2;  // [sp-0x2c]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x24]
    char v5;  // [bp-0x20]
    unsigned long long v7;  // rbp
    unsigned int v8;  // r14d
    unsigned long long v9;  // rax

    v7 = a3;
    if (a2 != 1 || *(a1) != 45)
    {
        v0 = 0x1b600000000;
        v1 = 0;
        v2 = 0;
        v1 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v3, &v0, a1, a2);
        if (*((int *)&v3))
        {
            a0->field_0 = *((long long *)&v5);
            v7 = v7 | -0x100 | 11;
        }
        else
        {
            v8 = *((int *)&v4);
            v9 = __rust_alloc(0x2000, 1);
            if (!v9)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            a0->field_0 = v9;
            a0->field_8 = 0x2000;
            a0->field_10 = 0;
            a0->field_20 = 0;
            a0->field_28 = v8;
        }
    }
    else
    {
        a0->field_0 = 0;
        a0->field_8 = std::io::stdio::stdin::h7215cc131abb55d8();
    }
    a0->field_30 = v7;
    return a0;
}
