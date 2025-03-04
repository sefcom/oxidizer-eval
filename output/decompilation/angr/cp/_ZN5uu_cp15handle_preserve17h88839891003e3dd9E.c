long long uu_cp::handle_preserve::h88839891003e3dd9(struct_0 *a0, char a1, char a2, unsigned long long a3)
{
    char v0;  // [bp-0x98]
    char v1;  // [bp-0x90]
    char v2;  // [bp-0x88]
    char v3;  // [bp-0x80]
    char v4;  // [bp-0x78]
    char v5;  // [bp-0x70]
    char v6;  // [bp-0x68]
    char v7;  // [bp-0x60]
    unsigned long long v8;  // [sp-0x58]
    int v9;  // [sp-0x48]
    int v10;  // [sp-0x38]
    int v11;  // [sp-0x28]
    unsigned long long v13;  // rax
    int v14;  // xmm0
    int v15;  // xmm1

    if (a1)
    {
        uu_cp::copy_attributes::_$u7b$$u7b$closure$u7d$$u7d$::hab4ff644d873b658(&v0, a3);
        v13 = *((long long *)&v0);
        if (!a2)
        {
            if (v13 != 13)
            {
                *((int128_t *)&v11) = *((int128_t *)&v6);
                *((int128_t *)&v10) = *((int128_t *)&v4);
                *((int128_t *)&v9) = *((int128_t *)&v2);
                *((int128_t *)&v8) = *((int128_t *)&v0);
                uu_cp::show_error_if_needed::h934143ac50374c6e(&v8);
                v13 = ::0x4fc330::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&v8);
            }
        }
        else
        {
            if (v13 != 13)
            {
                *((long long *)((char *)&a0->field_28 + 8)) = *((long long *)&v7);
                v14 = *((int128_t *)&v1);
                v15 = *((int128_t *)&v3);
                *((int128_t *)((char *)&a0->field_18 + 8)) = *((int128_t *)&v5);
                *((void*)((char *)&a0->field_8 + 8)) = v15;
                *((void*)&(&a0->field_0)[1]) = v14;
                a0->field_0 = v13;
                return v13;
            }
        }
    }
    a0->field_0 = 13;
    return v13;
}
