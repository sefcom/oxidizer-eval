long long uu_more::Pager::draw_lines::h890a8f2ebbed6d60(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [sp-0xe8]
    unsigned long long v1;  // [sp-0xe0]
    void* v2;  // [sp-0xd8]
    unsigned long v3;  // [sp-0xd0]
    unsigned long long v4;  // [sp-0xc8]
    unsigned long long v5;  // [sp-0xc0]
    void* v6;  // [sp-0xc0]
    unsigned long v7;  // [sp-0xb0]
    int v8;  // [sp-0xa8], Other Possible Types: unsigned long
    unsigned long long v9;  // [sp-0xa0]
    struct struct_1 **v10;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x90]
    void* v12;  // [sp-0x88]
    char *v13;  // [sp-0x78]
    unsigned long long v14;  // [sp-0x70]
    char v15;  // [bp-0x68]
    char v16;  // [bp-0x48]
    char v17;  // [bp-0x38]
    unsigned long long v19;  // rax
    unsigned long long v20;  // rbp
    unsigned long long v21;  // r13
    unsigned long long v22;  // r15
    void* v23;  // r12
    struct_2 *v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    int v27;  // ymm0
    int v28;  // xmm0

    v19 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(a1, 4);
    if (!v19)
        v19 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a1);
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(v19, &g_562a58);
    a0->field_38 = 0;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v20 = a0->field_18;
    v3 = a0->field_8;
    v4 = v3 + a0->field_10 * 24;
    v5 = v20;
    v21 = a0->field_40;
    if (v21)
    {
        if (!a0->field_43)
        {
            do
            {
                if (!v5)
                {
                    v25 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7d914e41eb33abbb(&v3);
                    v5 = v5;
                }
                else
                {
                    v6 = 0;
                    v25 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::heaaa124de6da709e(&v3, v5);
                    v5 = v6;
                    if (!(!v25))
                        continue;
                }
            } while ((alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&v0, v25), v2 < v21));
        }
        else
        {
            v22 = 0;
            v23 = 0;
            do
            {
                if (!v5)
                {
                    v24 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7d914e41eb33abbb(&v3);
                    if (!v24)
                        goto LABEL_0x4dd5c1;
                    else
                        goto LABEL_4dd533;
                }
                else
                {
                    v6 = 0;
                    v24 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::heaaa124de6da709e(&v3, v5);
                    v5 = v6;
                    if (!(!v24))
                        continue;
                }
LABEL_4dd533:
                if (v24->field_10)
                {
                    v22 = (((char)v22 & 1) ? v22 & 4294967295 & 4294967295 : 0);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&v0, v24);
                }
                else if (!((char)v22 & 1))
                {
                    v22 = v22 & 0xffffffffffffff00 | 1;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&v0, v24);
                }
                else
                {
                    v23 += 1;
                    a0->field_38 = v23;
                    v20 += 1;
                    a0->field_18 = v20;
                }
            } while (v2 < v21);
        }
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::ha758e961b2d597f5(&v15, &v0);
    v26 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd5c8297444801790(&v15);
    if (!v26)
        return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::h28fddf8dcd9d6d5f(&v15);
    do
    {
        v7 = v26;
        v13 = &v7;
        v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h11343ef90598214f;
        v8 = &g_562a38;
        v9 = 2;
        v12 = 0;
        v10 = &v13;
        v11 = 1;
        ::0x4db270::core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&v16, &v8);
        v28 = *((int128_t *)&v16);
        v27 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28;
        v8 = v28;
        v10 = *((long long *)&v17);
        core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a1, v9, *((long long *)&v17)), &g_562a70);
        ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v8);
        v26 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd5c8297444801790(&v15);
    } while (v26);
}
