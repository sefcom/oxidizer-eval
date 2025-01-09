long long uu_more::Pager::draw_lines::h890a8f2ebbed6d60(struct_2 *a0, unsigned long long a1)
{
    void* v0;  // [sp-0xe8]
    unsigned long long v1;  // [sp-0xe0]
    void* v2;  // [sp-0xd8]
    unsigned long v3;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xc8]
    void* v5;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long v6;  // [sp-0xb0], Other Possible Types: unsigned long long
    int v7;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0xa0]
    struct struct_1 **v9;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x90]
    void* v11;  // [sp-0x88]
    char *v12;  // [sp-0x78]
    unsigned long long v13;  // [sp-0x70]
    char v14;  // [bp-0x68]
    char v15;  // [bp-0x48]
    char v16;  // [bp-0x38]
    unsigned long long v18;  // rax
    unsigned long long v19;  // rbp
    unsigned long long v20;  // r13
    unsigned long long v21;  // r15
    void* v22;  // r12
    struct_0 *v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    int v26;  // ymm0
    int v27;  // xmm0

    v18 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(a1, 4);
    if (!v18)
        v18 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a1);
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(v18, &g_562a58);
    a0->field_38 = 0;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v19 = a0->field_18;
    v3 = a0->field_8;
    v4 = v3 + a0->field_10 * 24;
    v5 = v19;
    v20 = a0->field_40;
    if (v20)
    {
        if (!a0->field_43)
        {
            do
            {
                if (!v5)
                {
                    v24 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7d914e41eb33abbb(&v3);
                    v5 = v5;
                }
                else
                {
                    v5 = 0;
                    v24 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::heaaa124de6da709e(&v3, v5);
                    v5 = v5;
                    if ((alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&v0, v24), v2 < v20))
                        continue;
                }
            } while ((alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&v0, v24), v2 < v20));
        }
        else
        {
            v21 = 0;
            v22 = 0;
            do
            {
                if (!v5)
                {
                    v23 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7d914e41eb33abbb(&v3);
                    v5 = v5;
                    if (!v23)
                        goto LABEL_0x4dd5c1;
                    else
                        goto LABEL_4dd533;
                }
                else
                {
                    v5 = 0;
                    v23 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::heaaa124de6da709e(&v3, v5);
                    v5 = v5;
                    if ((alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&v0, v24), v2 < v20))
                        continue;
                }
LABEL_4dd533:
                if (v23->field_10)
                {
                    v21 = (((char)v21 & 1) ? v21 & 4294967295 & 4294967295 : 0);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&v0, v23);
                }
                else if (((char)v21 & 1))
                {
                    v22 += 1;
                    a0->field_38 = v22;
                    v19 += 1;
                    a0->field_18 = v19;
                }
                else
                {
                    v21 = v21 & 0xffffffffffffff00 | 1;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&v0, v23);
                }
            } while (v2 < v20);
        }
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::ha758e961b2d597f5(&v14, &v0);
    v25 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd5c8297444801790(&v14);
    if (!v25)
        return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::h28fddf8dcd9d6d5f(&v14);
    do
    {
        v6 = v25;
        v12 = &v6;
        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h11343ef90598214f;
        v7 = &g_562a38;
        v8 = 2;
        v11 = 0;
        v9 = &v12;
        v10 = 1;
        ::0x4db270::core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4();
        v27 = *((int128_t *)&v15);
        v26 = v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
        v7 = v27;
        v9 = *((long long *)&v16);
        core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a1, v8, *((long long *)&v16)), &g_562a70);
        ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v7);
        v25 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd5c8297444801790(&v14);
    } while (v25);
}
