long long uu_numfmt::format::parse_suffix::h407c60c3b46102ef(struct_0 *a0, char *a1, unsigned long long a2)
{
    char *v0;  // [sp-0xa0]
    unsigned long long v1;  // [sp-0x98]
    unsigned int v2;  // [bp-0x90], Other Possible Types: unsigned long
    unsigned long v3;  // [sp-0x88], Other Possible Types: unsigned long long
    struct struct_1 **v4;  // [sp-0x80], Other Possible Types: unsigned long
    unsigned long long v5;  // [sp-0x78]
    void* v6;  // [sp-0x70]
    void* v7;  // [sp-0x60], Other Possible Types: char
    char *v8;  // [sp-0x58], Other Possible Types: unsigned long
    unsigned long long v9;  // [sp-0x50]
    char v10;  // [sp-0x48]
    char *v11;  // [sp-0x40]
    unsigned long long v12;  // [sp-0x38]
    unsigned long long v14;  // rbp
    unsigned long v15;  // rdx
    unsigned long v16;  // r12
    unsigned long long v17;  // r12
    unsigned long long v18;  // rax
    char *v19;  // rcx
    unsigned long long v20;  // rcx

    if (!a2)
        return ::0x4c2ae0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h523a2f825c855b37(a0, "invalid number: ''invalid suffix in input: src/uu/numfmt/src/format.rs", 18);
    v2 = 0;
    v14 = (unsigned int)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::ha109e61deb96259b(a1, a2, ::0x4c28f0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(105, &v2), 1);
    v0 = a1;
    v1 = &a1[a2];
    if ((char)v14)
        ::0x4c20a0::core::str::validations::next_code_point_reverse::he73eefe5b7d03fc3(&v0);
    if (!(int)::0x4c20a0::core::str::validations::next_code_point_reverse::he73eefe5b7d03fc3(&v0))
    {
        v7 = 0;
        v8 = a1;
        v9 = a2;
        v10 = 1;
        v11 = &v7;
        v12 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v2 = &g_535ac0;
        v3 = 1;
        v6 = 0;
        v4 = &v11;
        v5 = 1;
        v18 = ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82();
        return v18;
    }
    switch ((unsigned int)v15)
    {
    case 69:
        v16 = v16 | -0x100 | 5;
        break;
    case 71:
        v17 = v17 | -0x100 | 2;
        break;
    case 75:
        v17 = 0;
        v20 = ~(v14 & 4294967295);
        v19 = v20 + a2;
        if (!v20 + a2)
        {
LABEL_4c3550:
            v18 = core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::hfde7dd7a3aaead31(&v7, a1, v19);
            if (v7)
            {
                uu_numfmt::format::parse_suffix::_$u7b$$u7b$closure$u7d$$u7d$::hc249515d7f336463(&v2, a1, a2);
                v18 = v2;
                if (v18 != 0x8000000000000000)
                {
                    a0->field_0 = v18;
                    a0->field_8 = v3;
                    *((unsigned long *)&a0->field_10) = v4;
                    return v18;
                }
            }
            a0->field_8 = v8;
            a0->field_10 = v17;
            *((char *)&a0[1].field_0) = 2;
            a0->field_0 = 0x8000000000000000;
            return v18;
        }
    case 77:
        v17 = v17 | -0x100 | 1;
        break;
    case 80:
        v17 = v17 | -0x100 | 4;
        break;
    case 84:
        v17 = v17 | -0x100 | 3;
        break;
    case 89:
        v17 = v17 | -0x100 | 7;
        break;
    case 90:
        v17 = v17 | -0x100 | 6;
        break;
    default:
        if (!(!(char)v14) || !(!(unsigned int)v15 - 58 < -10))
        {
            vvar_305{stack -96} = 0;
            vvar_306{stack -88} = a1;
            vvar_307{stack -80} = a2;
            vvar_308{stack -72} = 1;
            vvar_309{stack -64} = &v7;
            vvar_310{stack -56} = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v2 = &g_535ac0;
            vvar_311{stack -136} = 1;
            vvar_312{stack -112} = 0;
            vvar_313{stack -128} = &v11;
            vvar_314{stack -120} = 1;
            vvar_315{reg 16} = ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82();
            return v18;
        }
        v19 = 0 + a2;
        if (!0 + a2)
            goto LABEL_4c3550;
        goto LABEL_4c3537;
    }
LABEL_4c3537:
    if (v19 >= a2)
    {
        if (false)
            core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, 0, v19, &g_535ad0); /* do not return */
    }
    else
    {
        if (*((char *)(a1 + v19)) <= 191)
            core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, 0, v19, &g_535ad0); /* do not return */
    }
    goto LABEL_4c3550;
}
