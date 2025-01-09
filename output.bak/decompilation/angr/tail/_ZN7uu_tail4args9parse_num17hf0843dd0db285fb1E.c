long long uu_tail::args::parse_num::hf0843dd0db285fb1(unsigned long long a0[4], unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x50]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    unsigned long long v5;  // r15
    unsigned long long v6;  // rdx
    char v7;  // bpl
    unsigned long long v8;  // r14
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax

    v5 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h4e90a49aa4a98ea5(a1, a2);
    v0 = v5;
    v1 = v6 + v5;
    if (!(int)::0x4f7e60::core::str::validations::next_code_point::habe44cbb115926fa(&v0))
    {
LABEL_4fa07b:
        v7 = 0;
        goto LABEL_4fa09c;
    }
    else
    {
        if ((unsigned int)v6 == 43)
        {
            v5 = ::0x4f7f10::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v5, v6);
            if (!v5)
                core::str::slice_error_fail::h5dbb61534404fe7e(v5, v6, 1, v6, &g_5bb690); /* do not return */
            v7 = vvar_49{reg 56} | -0x100 | 1;
        }
        else
        {
            if (!((unsigned int)v6 == 45))
                goto LABEL_4fa07b;
            v5 = ::0x4f7f10::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v5, v6);
            if (!v5)
                core::str::slice_error_fail::h5dbb61534404fe7e(v5, v6, 1, v6, &g_5bb690); /* do not return */
            v7 = 0;
        }
LABEL_4fa09c:
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v0, v5, v8);
        if ((int)v0 != 3)
        {
            ::0x4f82a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&v2, v5, v8);
            a0[3] = *((long long *)&v3);
            *((int128_t *)&a0[1]) = *((int128_t *)&v2);
            v10 = 1;
        }
        else
        {
            v9 = v1;
            if (v9)
            {
                if (!v7)
                {
                    a0[1] = 0;
                    a0[2] = v9;
                }
                else
                {
                    a0[1] = 1;
                    a0[2] = v9;
                }
            }
            else
            {
                if (v7)
                    a0[1] = 2;
                else
                    a0[1] = 3;
            }
            v10 = 3;
        }
        a0[0] = v10;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h1cd421d162b21d56(&v0);
    }
}
