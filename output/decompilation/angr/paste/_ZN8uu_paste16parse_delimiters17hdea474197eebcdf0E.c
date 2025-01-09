long long uu_paste::parse_delimiters::hdea474197eebcdf0(unsigned long long a0[3], unsigned long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0xbc]
    int v1;  // [bp-0xb8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v2;  // [sp-0xb0], Other Possible Types: unsigned long long
    struct struct_0 **v3;  // [sp-0xa8], Other Possible Types: unsigned long, unsigned long long
    unsigned int v4;  // [bp-0xa0], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x98]
    unsigned long v6;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x78]
    void* v8;  // [sp-0x70]
    unsigned long v9;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x60]
    unsigned long v11;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x50]
    char *v13;  // [sp-0x48]
    unsigned long long v14;  // [sp-0x40]
    char v15;  // [bp-0x38]
    char v16;  // [bp-0x28]
    unsigned long long v18;  // r15
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rdx
    unsigned long v21;  // rdx
    unsigned long long v22;  // rax

    v18 = a1;
    v11 = a1;
    v12 = a2;
    v0 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hed2ab512317b9dca(&v1, a2, 0);
    if (v1)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v6, v3); /* do not return */
    v6 = v2;
    v7 = v3;
    v8 = 0;
    v9 = v18;
    v10 = a2 + v18;
    if ((int)core::str::validations::next_code_point::h67e93eb2e3817b3c(&v9))
    {
        do
        {
            if ((unsigned int)v19 != 92)
            {
LABEL_4ac310:
                uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h701ecf4682e0258c(&v0, &v6, v20);
            }
            else
            {
                if (!(int)core::str::validations::next_code_point::h67e93eb2e3817b3c(&v9))
                {
                    v13 = &v11;
                    v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c7e3763925384ef;
                    v1 = &g_513558;
                    v2 = 1;
                    v5 = 0;
                    v3 = &v13;
                    v4 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::he6dc542b829026a4();
                    v4 = 1;
                    *((int128_t *)&v1) = *((int128_t *)&v15);
                    v3 = *((long long *)&v16);
                    *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h5c05caca195ee6c7(&v1);
                    a0[2] = &g_5135a0;
                    a0[0] = 1;
                    v22 = ::0x4aad20::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..boxed..Box$LT$$u5b$u8$u5d$$GT$$GT$$GT$::h360947c94bee4ecb(&v6);
                    return v22;
                }
                if ((unsigned int)v21 <= 109)
                {
                    if ((unsigned int)v21 == 48)
                    {
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hacd10739b9a3e208(&v6, alloc::boxed::Box$LT$T$GT$::new::hfdd8bc0d64dc9dfb(), 0);
                        continue;
                    }
                    if ((unsigned int)v21 == 92)
                        goto LABEL_4ac374;
                    goto LABEL_4ac310;
                }
                if ((unsigned int)v21 == 110)
                {
LABEL_4ac374:
                    uu_paste::parse_delimiters::add_one_byte_single_char_delimiter::h0e699944cdb285e0(&v6, 92);
                }
                else if ((unsigned int)v21 == 116)
                {
                    goto LABEL_4ac374;
                }
            }
        } while ((int)core::str::validations::next_code_point::h67e93eb2e3817b3c(&v9));
    }
    v3 = v8;
    *((int128_t *)&v1) = *((int128_t *)&v6);
    v22 = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::h4387899d6ce3dba8(&v1);
    a0[1] = v22;
    a0[2] = v21;
    a0[0] = 0;
    return v22;
}
