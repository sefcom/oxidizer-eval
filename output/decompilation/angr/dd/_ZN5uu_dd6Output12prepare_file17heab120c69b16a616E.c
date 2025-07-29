long long uu_dd::Output::prepare_file(struct_2 *a0, unsigned int a1, struct_0 *a2)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x2f]
    char v2;  // [bp-0x20], Other Possible Types: unsigned long long
    char v3;  // [bp-0x18]
    struct_1 *v5;  // rbx
    unsigned long long v7;  // rax

    v5 = a2;
    v1 = a2->field_90 ^ 1;
    v0 = 1;
    v2.map_err_context((unsigned long long)v0.seek(*((long long *)&a2->field_88)), a2);
    v7 = v2;
    if (v2)
    {
        v5 = *((long long *)&v3);
        *((unsigned long long *)&a0->padding_1[7]) = v2;
        a0->field_0 = 4;
        v7 = ::0x4cbc70::core::ptr::drop_in_place<uu_dd::Dest>(*((int *)&v0), a1);
    }
    else
    {
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
    }
    a0->field_10 = v5;
    return v7;
}
