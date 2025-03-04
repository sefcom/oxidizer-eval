long long uu_csplit::SplitWriter::do_to_line::h079b38feb919ada0(struct_0 *a0, struct_3 *a1, unsigned long long a2, unsigned long long a3, unsigned long a4, struct_1 *a5)
{
    unsigned long v0;  // [sp-0xe0]
    unsigned long long v1;  // [sp-0xd8]
    unsigned long long v2;  // [sp-0xd0]
    char v3;  // [bp-0xc8]
    unsigned long long v4;  // [sp-0xb0]
    char v5;  // [bp-0xa8]
    char v6;  // [bp-0xa0]
    char v7;  // [bp-0x90]
    int v8;  // [bp-0x88]
    unsigned long long v9;  // [sp-0x88]
    unsigned long long v10;  // [sp-0x80]
    unsigned long long v11;  // [sp-0x78]
    int v12;  // [sp-0x70]
    char v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x40]
    char v16;  // [bp-0x38]
    unsigned long long v18;  // rcx
    unsigned long long v19;  // rsi
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rcx
    unsigned long long v22;  // rax
    struct_0 *v23;  // rax
    struct_0 *v24;  // rcx
    char v25;  // bpl
    unsigned long long v26;  // rax
    struct_0 *v28;  // rcx
    int v29;  // xmm0

    a5->field_58 = 1;
    a5->field_50 = 1;
    ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v5, a2, a3);
    v4 = 1;
    while (true)
    {
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&v13, a5);
        v18 = *((long long *)&v14);
        if (v18 == 9223372036854775809)
            break;
        v19 = *((long long *)&v15);
        if (v18 == 0x8000000000000000)
        {
            v23 = a0;
            v23->field_0 = 0;
            *((unsigned long long *)&v23->padding_8[0]) = v1;
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&v4);
            return v26;
        }
        v20 = *((long long *)&v13);
        v0 = v18;
        v1 = v19;
        v2 = *((long long *)&v16);
        v21 = (!(v20 + 1 <= a4) ? 255 : v20 + 1 != a4);
        if ((char)v21 == 1)
        {
            v22 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(a1, v1, v2);
            if (v22)
            {
                v24 = a0;
                v24->field_0 = 0;
                *((unsigned long long *)&v24->padding_8[0]) = v22;
                ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                v26 = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&v4);
                return v26;
            }
            ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
        }
        else if ((unsigned int)v21)
        {
            v11 = v2;
            *((int128_t *)&v8) = *((int128_t *)&v0);
            uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h69a145175e6beff8(&v3, a5, v20, &v8);
            if (*((long long *)&v3) != 0x8000000000000000)
            {
                ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v3);
                v9 = &g_6deb50;
                vvar_334{stack -128} = 1;
                vvar_335{stack -120} = 8;
                vvar_336{stack -112} = 0;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v8, &g_6deb60); /* do not return */
            }
            ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v3);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&v4);
            v4 = 12;
            break;
        }
        else
        {
            v25 = a1->field_20->field_63;
            if (!v25)
            {
                v11 = v2;
                *((int128_t *)&v8) = *((int128_t *)&v0);
                uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h69a145175e6beff8(&v3, a5, v20, &v8);
                if (*((long long *)&v3) != 0x8000000000000000)
                {
                    ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v3);
                    v9 = &g_6deb50;
                    v10 = 1;
                    v11 = 8;
                    *((uint128_t *)&v12) = 0;
                    core::panicking::panic_fmt::he12d0d7468628bb4(&v8, &g_6deb78); /* do not return */
                }
                ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v3);
            }
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&v4);
            v4 = 12;
            if (v25)
            {
                ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                break;
            }
        }
    }
    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(a1);
    v26 = *((long long *)&v7);
    v28 = a0;
    v28->field_20 = v26;
    v29 = *((int128_t *)&v4);
    v28->field_10 = *((int128_t *)&v6);
    *((void*)&v28->field_0) = v29;
    return v26;
}
