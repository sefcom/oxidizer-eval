long long fish::expand::Expander::stage_cmdsubst(struct_1 *a0, unsigned long long a1[3], unsigned long long a2[4])
{
    unsigned long long v0[3];  // [bp-0xd8]
    unsigned long long v1[3];  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    int v3;  // [bp-0xc8], Other Possible Types: void*, unsigned long long
    int v4;  // [bp-0xc0]
    char v5;  // [bp-0xb8]
    void* v6;  // [bp-0xa8]
    int v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    int v9;  // [bp-0x98], Other Possible Types: void*
    unsigned long v10;  // [bp-0x90]
    int v11;  // [bp-0x8f]
    unsigned long long v12;  // [bp-0x88]
    char v13;  // [bp-0x80]
    void* v14;  // [bp-0x70]
    unsigned long long v15;  // [bp-0x68]
    void* v16;  // [bp-0x60]
    void* v17;  // [bp-0x58]
    char v18;  // [bp-0x50], Other Possible Types: unsigned long
    unsigned long v19;  // [bp-0x48]
    char v20;  // [bp-0x40]
    char v21;  // [bp-0x30]
    unsigned long v23;  // rax
    struct_0 **v24;  // r14
    unsigned long long v25;  // rcx
    unsigned long long v27;  // rdx
    unsigned long long v28[3];  // r14
    int v29;  // xmm0
    unsigned int v31;  // eax

    v23 = a0->field_10;
    if ((unsigned short)v23 >= 0)
    {
        if (((char)v23 & 1))
        {
            v17 = 0;
            fish::parse_util::parse_util_locate_cmdsubst_range(&v18, a1[1], a1[2], &v17, 1, 0, 0);
            if (v18)
            {
                if ((unsigned int)v18 == 1)
                {
                    if (a2.add(a1))
                        return 0;
                    return fish::expand::append_overflow_error(a0->field_8->field_0);
                }
                else
                {
                    v24 = a0->field_8;
                    if (*(v24))
                    {
                        v25 = *((long long *)&v20);
                        v6 = 0;
                        v8 = 4;
                        *((uint128_t *)&v9) = 0;
                        *((uint128_t *)&v11) = 0;
                        v10 = v19;
                        if (!v25)
                            core::panicking::panic_const::panic_const_sub_overflow(&g_14d8910); /* do not return */
                        if (v25 - 1 >= v19)
                        {
                            v12 = v25 - v19;
                            v13 = 2;
                            v14 = 0;
                            v15 = 4;
                            v16 = 0;
                            v2 = "c";
                            v3 = 82;
                            *(v0) = 0x8000000000000000;
                            fish_printf::printf_impl::sprintf_locale(&v21, &v14, v0.localize(), v27, ".", 8, 0);
                            v21.unwrap(&g_14d8928);
                            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                            *((int128_t *)&v1) = *((int128_t *)&v14);
                            v3 = 0;
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
                            v9 = v3;
                            *((int128_t *)&v7) = *((int128_t *)&v1[0]);
                            v28 = *(v24);
                            *(v1) = v28[1];
                            v2 = v28[2] * 48 + v28[1];
                            if ((unsigned long long)v1.any(&v6))
                            {
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
                            }
                            else
                            {
                                v29 = (int128_t)v7;
                                memcpy(&v5, &v12, 16);
                                *((int128_t *)&v3) = *((int128_t *)&v9);
                                *((void*)v1) = v29;
                                v28.push(&(unsigned long long)v1, &g_14d8928);
                            }
                        }
                        else
                        {
                            core::panicking::panic_const::panic_const_sub_overflow(&g_14d8928); /* do not return */
                        }
                    }
                }
            }
            v31 = 121.make_error();
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
            return v31;
        }
        else if (a0->field_0->field_0 != 1)
        {
            return fish::expand::expand_cmdsubst(a1, a0->field_0, a2);
        }
        else
        {
            *(v0) = &g_14d8900;
            v2 = 1;
            v3 = 8;
            *((uint128_t *)&v4) = 0;
            core::panicking::panic_fmt(&v0, &g_14d8940); /* do not return */
        }
    }
    else
    {
        if (a2.add(a1))
            return 0;
        return fish::expand::append_overflow_error(a0->field_8->field_0);
    }
}
