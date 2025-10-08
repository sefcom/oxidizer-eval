long long uu_dd::Output::prepare_file(void* a0, unsigned int a1, struct_0 *a2)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x2f]
    char v2;  // [bp-0x20], Other Possible Types: unsigned long long
    char v3;  // [bp-0x18]
    struct_0 *v5;  // rbx
    unsigned long long v7;  // rax

    v5 = a2;
    v1 = a2->field_90 ^ 1;
    v0 = 1;
    v2.map_err_context((unsigned long long)v0.seek(), a2);
    v7 = v2;
    if (v2)
    {
        v5 = *((long long *)&v3);
        *((unsigned long long *)&a0[8]) = v2;
        *((char *)a0) = 4;
        v7 = core::ptr::drop_in_place<uu_dd::Dest>(*((int *)&v0), a1);
    }
    else
    {
        *((int128_t *)a0) = *((int128_t *)&v0);
    }
    *((struct_0 **)&a0[16]) = v5;
    return v7;
}
