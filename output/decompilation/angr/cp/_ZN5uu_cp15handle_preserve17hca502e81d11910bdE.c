long long uu_cp::handle_preserve(struct_0 *a0, char a1, char a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x90], Other Possible Types: unsigned long long
    char v1;  // [bp-0x88]
    char v2;  // [bp-0x80]
    char v3;  // [bp-0x78]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    char v7;  // [bp-0x58]
    char v8;  // [bp-0x48]
    char v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x28]
    int v12;  // xmm0
    int v13;  // xmm1

    if ((a1 & 1))
    {
        uu_cp::copy_attributes::{{closure}}(&v0, a3, a4);
        if ((a2 & 1))
        {
            if (v0 != 9223372036854775820)
            {
                v12 = *((int128_t *)&v1);
                v13 = *((int128_t *)&v3);
                *((int128_t *)((char *)&a0->field_18 + 8)) = *((int128_t *)&v5);
                *((void*)((char *)&a0->field_8 + 8)) = v13;
                *((void*)&(&a0->field_0)[1]) = v12;
                a0->field_0 = v0;
                return v0;
            }
        }
        else
        {
            if (v0 != 9223372036854775820)
            {
                v10 = v6;
                memcpy(&v9, &v4, 16);
                memcpy(&v8, &v2, 16);
                memcpy(&v7, &v0, 16);
                uu_cp::show_error_if_needed(&v7);
                v0 = ::0x4d37f0::core::ptr::drop_in_place<uu_cp::CpError>(&v7);
            }
        }
    }
    a0->field_0 = 9223372036854775820;
    return v0;
}
