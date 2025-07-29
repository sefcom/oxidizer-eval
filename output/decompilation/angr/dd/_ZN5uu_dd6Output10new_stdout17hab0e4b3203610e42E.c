long long uu_dd::Output::new_stdout(struct_2 *a0, struct_0 *a1)
{
    char v0[4];  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    unsigned long long v2;  // [bp-0x28]
    char v3;  // [bp-0x20], Other Possible Types: unsigned long
    char v4;  // [bp-0x18]
    struct_1 *v6;  // r14
    unsigned long long v8;  // rdx

    v6 = a1;
    v2 = std::io::stdio::stdout();
    *(v0) = 0;
    v3.map_err_context((unsigned long long)v0.seek(*((long long *)&a1->field_88)), v8);
    if (v3)
    {
        v6 = *((long long *)&v4);
        *((unsigned long *)&a0->padding_1[7]) = v3;
        a0->field_0 = 4;
        ::0x4cbc70::core::ptr::drop_in_place<uu_dd::Dest>((char)v0, v1);
    }
    else
    {
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
    }
    a0->field_10 = v6;
    return a0;
}
