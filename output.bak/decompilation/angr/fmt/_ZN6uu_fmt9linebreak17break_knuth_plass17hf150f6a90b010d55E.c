long long uu_fmt::linebreak::break_knuth_plass::hf150f6a90b010d55(unsigned long long a0, unsigned long long a1, struct_2 *a2)
{
    char v0;  // [bp-0xc8]
    char v1;  // [bp-0xc0]
    char v2;  // [bp-0xb8]
    int v3;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xa0]
    int v5;  // [sp-0x90]
    char *v6;  // [sp-0x80]
    struct_0 *v7;  // [sp-0x78]
    char *v8;  // [sp-0x70]
    char v9;  // [bp-0x68]
    char v10;  // [bp-0x66]
    char v11;  // [bp-0x60]
    unsigned long v12;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x40]
    char v16;  // [bp-0x38]
    unsigned long long v18;  // rdx
    unsigned long long v19;  // r12
    unsigned long long v20;  // r15
    unsigned long long v21[5];  // rax
    unsigned long long v22[5];  // rax
    struct_0 *v23;  // rdi
    char *v24;  // rax

    v12 = a0;
    v13 = a1;
    uu_fmt::linebreak::find_kp_breakpoints::h79846ee711f881cb(&v14, _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0c34312a4b925c00(a0, a1), v18, a2);
    v3 = *((long long *)&v15);
    v4 = *((long long *)&v16) * 16 + v3;
    *((int128_t *)&v5) = *((int128_t *)&a2->field_8);
    v6 = &a2[1].padding_10[0];
    v7 = a2->field_18;
    v8 = &v12;
    core::iter::traits::double_ended::DoubleEndedIterator::try_rfold::haf3d46e0f2661060(&v9, &v3, &v5);
    if (v9)
    {
        v19 = *((long long *)&v11);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$uu_fmt..parasplit..WordInfo$C$bool$RP$$GT$$GT$::hf54e8bc578902a10(&v14);
        return v19;
    }
    v20 = v10;
    *((int128_t *)&v3) = *((int128_t *)&v12);
    v21 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7b82053f9b8098c(&v3);
    if (v21)
    {
        if ((char)v20)
        {
            v19 = uu_fmt::linebreak::write_newline::hc3973027aaf0dbf6(a2->field_8, a2->padding_10, a2->field_18);
            if (v19)
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$uu_fmt..parasplit..WordInfo$C$bool$RP$$GT$$GT$::hf54e8bc578902a10(&v14);
                return v19;
            }
        }
        uu_fmt::linebreak::slice_if_fresh::h6f9344101bcdf0b0(&v5, v20 & 4294967295, v21[2], v21[3], v21[4], *(v6), v0, v1, v2);
        v19 = uu_fmt::linebreak::write_with_spaces::hd5de12a13c23bcdd((long long)(&v5)[8], v6, (long long)v5, a2->field_18);
        if (v19)
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$uu_fmt..parasplit..WordInfo$C$bool$RP$$GT$$GT$::hf54e8bc578902a10(&v14);
            return v19;
        }
        while (true)
        {
            v22 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7b82053f9b8098c(&v3);
            if (!v22)
                break;
            uu_fmt::linebreak::slice_if_fresh::h6f9344101bcdf0b0(&v5, 0, v22[2], v22[3], v22[4], -0x100 | *(v6), v0, v1, v2);
            v19 = uu_fmt::linebreak::write_with_spaces::hd5de12a13c23bcdd((long long)(&v5)[8], v6, (long long)v5, a2->field_18);
            if (v19)
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$uu_fmt..parasplit..WordInfo$C$bool$RP$$GT$$GT$::hf54e8bc578902a10(&v14);
                return v19;
            }
        }
    }
    v23 = a2->field_18;
    v24 = v23->field_10;
    if (v23->field_0 - v24 > 1)
    {
        v24[v23->field_8] = 10;
        v23->field_10 = &v24[1];
        v19 = 0;
    }
    else
    {
        v19 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(v23, "\n", 1);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$uu_fmt..parasplit..WordInfo$C$bool$RP$$GT$$GT$::hf54e8bc578902a10(&v14);
    return v19;
}
