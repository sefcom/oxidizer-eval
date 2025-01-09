long long uu_csplit::SplitWriter::do_to_line::h321143eb79b39c5d(struct_0 *a0, struct_2 *a1, unsigned long long a2, unsigned long long a3, unsigned long a4, struct_3 *a5)
{
    unsigned long v0;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xd8]
    unsigned long long v2;  // [sp-0xd0]
    char v3;  // [bp-0xc8]
    unsigned long long v4;  // [sp-0xb0]
    char v5;  // [bp-0xa8]
    char v6;  // [bp-0xa0]
    char v7;  // [bp-0x90]
    int v8;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x80]
    unsigned long long v10;  // [sp-0x78]
    int v11;  // [sp-0x70]
    char v12;  // [bp-0x50]
    char v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x38]
    unsigned long long v17;  // rcx
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rcx
    unsigned long long v21;  // rax
    struct_0 *v22;  // rax
    struct_0 *v23;  // rcx
    char v24;  // bpl
    unsigned long long v25;  // rax
    struct_0 *v27;  // rcx
    int v28;  // xmm0

    a5->field_38 = 1;
    a5->field_30 = 1;
    ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v5, a2, a3);
    v4 = 1;
    while (true)
    {
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92638e6c16058415(&v12, a5);
        v17 = *((long long *)&v13);
        if (v17 == 9223372036854775809)
            break;
        v18 = *((long long *)&v14);
        if (v17 == 0x8000000000000000)
        {
            v22 = a0;
            v22->field_0 = 0;
            *((unsigned long long *)&v22->padding_8[0]) = v1;
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&v4);
            return v25;
        }
        v19 = *((long long *)&v12);
        v0 = v17;
        v1 = v18;
        v2 = *((long long *)&v15);
        v20 = (!(v19 + 1 <= a4) ? 255 : (-0x100 | v19 + 1 != a4) & 4294967295 & 4294967295);
        if ((char)v20 == 1)
        {
            v21 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(a1, v1, v2);
            if (v21)
            {
                v23 = a0;
                v23->field_0 = 0;
                *((unsigned long long *)&v23->padding_8[0]) = v21;
                ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                v25 = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&v4);
                return v25;
            }
            ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
        }
        else if ((unsigned int)v20)
        {
            v10 = v2;
            *((int128_t *)&v8) = *((int128_t *)&v0);
            uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::hf666c82950bc0262(&v3, a5, v19, &v8);
            if (*((long long *)&v3) != 0x8000000000000000)
            {
                ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v3);
                v8 = &g_6deb50;
                vvar_340{stack -128} = 1;
                vvar_341{stack -120} = 8;
                vvar_342{stack -112} = 0;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v8, &g_6deb60); /* do not return */
            }
            ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v3);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&v4);
            v4 = 12;
            break;
        }
        else
        {
            v24 = a1->field_20->field_63;
            if (!v24)
            {
                v10 = v2;
                *((int128_t *)&v8) = *((int128_t *)&v0);
                uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::hf666c82950bc0262(&v3, a5, v19, &v8);
                if (*((long long *)&v3) != 0x8000000000000000)
                {
                    ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v3);
                    v8 = &g_6deb50;
                    v9 = 1;
                    v10 = 8;
                    *((int128_t *)&v11) = 0;
                    core::panicking::panic_fmt::he12d0d7468628bb4(&v8, &g_6deb78); /* do not return */
                }
                ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v3);
            }
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&v4);
            v4 = 12;
            if (v24)
            {
                ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                break;
            }
        }
    }
    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(a1);
    v25 = *((long long *)&v7);
    v27 = a0;
    v27->field_20 = v25;
    v28 = *((int128_t *)&v4);
    v27->field_10 = *((int128_t *)&v6);
    *((void*)&v27->field_0) = v28;
    return v25;
}
