long long uu_csplit::SplitWriter::do_to_line::hdade7976aa86c8cf(struct_0 *a0, struct_2 *a1, unsigned long long a2, unsigned long long a3, unsigned long a4, struct_3 *a5)
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
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rcx
    unsigned long long v19;  // rsi
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rcx
    unsigned long long v22;  // rax
    struct_0 *v23;  // rax
    struct_0 *v24;  // rcx
    char v25;  // bpl
    unsigned long long v26;  // rax
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdx
    struct_0 *v29;  // rcx
    int v30;  // xmm0

    a5->field_58 = 1;
    a5->field_50 = 1;
    ::0x55d510::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hedf714c1bf3e36cf(&v5, a2, a3);
    v4 = 1;
    while (true)
    {
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h787bf6b9aed1d5bb(&v12, a5, v17);
        v18 = *((long long *)&v13);
        if (v18 == 9223372036854775809)
            break;
        v19 = *((long long *)&v14);
        if (v18 == 0x8000000000000000)
        {
            v23 = a0;
            v23->field_0 = 0;
            *((unsigned long long *)&v23->padding_8[0]) = v1;
            vvar_343{reg 16} = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h368c354fc901a228(&v4);
            return v26;
        }
        v20 = *((long long *)&v12);
        v0 = v18;
        v1 = v19;
        v2 = *((long long *)&v15);
        v21 = (!(v20 + 1 <= a4) ? 255 : (-0x100 | v20 + 1 != a4) & 4294967295 & 4294967295);
        if ((char)v21 == 1)
        {
            v22 = uu_csplit::SplitWriter::writeln::hc9bc120e419fd7b4(a1, v1, v2);
            if (v22)
            {
                v24 = a0;
                v24->field_0 = 0;
                *((unsigned long long *)&v24->padding_8[0]) = v22;
                ::0x55c6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3ec1eb3d3714f056(&v0);
                v26 = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h368c354fc901a228(&v4);
                return v26;
            }
            ::0x55c6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3ec1eb3d3714f056(&v0);
        }
        else if (!(unsigned int)v21)
        {
            v25 = a1->field_20->field_63;
            if (!v25)
            {
                v10 = v2;
                *((int128_t *)&v8) = *((int128_t *)&v0);
                uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::hdb00d7ce3735dd1f(&v3, a5, v20, &v8);
                if (*((long long *)&v3) != 0x8000000000000000)
                {
                    ::0x55cde0::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h566962e6b40146d5(&v3);
                    v8 = &g_6df790;
                    v9 = 1;
                    v10 = 8;
                    *((int128_t *)&v11) = 0;
                    core::panicking::panic_fmt::he12d0d7468628bb4(&v8); /* do not return */
                }
                ::0x55cde0::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h566962e6b40146d5(&v3);
            }
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h368c354fc901a228(&v4);
            v4 = 12;
            if (v25)
            {
                ::0x55c6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3ec1eb3d3714f056(&v0);
                break;
            }
        }
        else
        {
            v10 = v2;
            *((int128_t *)&v8) = *((int128_t *)&v0);
            uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::hdb00d7ce3735dd1f(&v3, a5, v20, &v8);
            if (*((long long *)&v3) != 0x8000000000000000)
            {
                ::0x55cde0::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h566962e6b40146d5(&v3);
                v8 = &g_6df790;
                vvar_339{stack -128} = 1;
                vvar_340{stack -120} = 8;
                vvar_341{stack -112} = 0;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v8); /* do not return */
            }
            ::0x55cde0::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h566962e6b40146d5(&v3);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h368c354fc901a228(&v4);
            v4 = 12;
            break;
        }
    }
    uu_csplit::SplitWriter::finish_split::h7ec38afc11d0dcf1(a1, v27, v28);
    v26 = *((long long *)&v7);
    v29 = a0;
    v29->field_20 = v26;
    v30 = *((int128_t *)&v4);
    v29->field_10 = *((int128_t *)&v6);
    *((void*)&v29->field_0) = v30;
    return v26;
}
