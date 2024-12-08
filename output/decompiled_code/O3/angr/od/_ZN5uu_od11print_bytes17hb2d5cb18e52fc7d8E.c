long long uu_od::print_bytes::hb2d5cb18e52fc7d8(unsigned long long a0, unsigned long a1, struct_2 *a2, unsigned long long a3[6])
{
    unsigned int v0;  // [sp-0x164]
    unsigned long v1;  // [sp-0x160], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x158]
    unsigned long long v3;  // [sp-0x150]
    unsigned long long v4;  // [sp-0x148]
    unsigned long long v5;  // [sp-0x140]
    void* v6;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x130]
    unsigned long long v8;  // [sp-0x128]
    unsigned long long v9;  // [sp-0x120]
    unsigned long long v10;  // [sp-0x118]
    void* v11;  // [sp-0x110]
    unsigned long long v12;  // [sp-0x108]
    char v13;  // [sp-0x100]
    unsigned long long v14;  // [sp-0xf8]
    unsigned long long v15;  // [sp-0xe8]
    unsigned long long v16;  // [sp-0xd8]
    unsigned long long v17;  // [sp-0xd0]
    char v18;  // [sp-0xc8]
    unsigned long long v19;  // [sp-0xc0]
    unsigned long v20;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0xb0]
    unsigned long long v22;  // [sp-0xa8]
    void* v23;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x98]
    unsigned long long v25;  // [sp-0x90]
    char v26;  // [bp-0x88]
    void* v27;  // [sp-0x78]
    unsigned long long v28;  // [sp-0x70]
    void* v29;  // [sp-0x68]
    unsigned long long v30;  // [sp-0x60]
    unsigned long v31;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x50]
    char v33;  // [bp-0x48]
    struct_1 *v35;  // rax
    unsigned long long v36;  // rbx
    unsigned long long v37;  // rdx
    void* v38;  // r15
    unsigned long long v39;  // rdx
    unsigned long long v40;  // rax
    struct struct_0 **v41;  // r12
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rax
    unsigned long long v44;  // r15
    void* v45;  // r15
    unsigned long long v46;  // rsi
    unsigned long long v47;  // rsi
    unsigned long long v48;  // rsi
    unsigned long long v49;  // rdx

    v31 = a3[1];
    v32 = a3[2] * 104 + v31;
    v35 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h43275d45d6733911(&v31);
    if (!v35)
        return v35;
    v19 = a2->field_8;
    v30 = a3[4];
    v36 = a3[5];
    v0 = v30 | -0x100 | 1;
    while (true)
    {
        v27 = 0;
        v28 = 1;
        v29 = 0;
        if (v19)
        {
            if (!v36)
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
            v38 = 0;
            do
            {
                if (!(v38 | v36) >> 32)
                {
                    v39 = (0 CONCAT (unsigned int)v38) /m (unsigned int)v36 >> 32 & 4294967295;
                    if (v39 >= 8)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                }
                else
                {
                    v39 = (0 CONCAT v38) /m v36 >> 64;
                    if (v39 >= 8)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                }
                v20 = &g_417e40;
                v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5410c232de497cd3;
                v22 = *((long long *)&v35->padding_18[8 + 8 * v39]);
                v23 = 0;
                v7 = 2;
                v9 = 1;
                v10 = 1;
                v11 = 0;
                v12 = 32;
                v13 = 1;
                v1 = &g_417e40;
                v2 = 1;
                v5 = &v7;
                v6 = 1;
                v3 = &v20;
                v4 = 2;
                core::result::Result$LT$T$C$E$GT$::unwrap::hc40dcb9dfb11890d((unsigned int)::0x4c59f0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h7986fa1a4b39bef7(&v27, &v1), &g_541120);
                v40 = v35->field_0;
                v41 = v35->field_8;
                if (v40 == 2)
                {
                    v41(&v7, uu_od::inputdecoder::MemoryDecoder::get_full_buffer::hb5e2a7756f530eb5(a2, v38));
                    ::0x4c5790::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hd23d2188d871bd94(&v27, ::0x4c5680::core::slice::iter::Iter$LT$T$GT$::make_slice::heba9270848099813(v8, v9 + v8), v42);
                    ::0x4c4a90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8afff49af932c970(&v7);
                }
                else if ((unsigned int)v40 == 1)
                {
                    uu_od::inputdecoder::MemoryDecoder::read_float::h7db4c05adeac6a38(a2, v38, v35->field_10);
                    v41(&v7);
                    ::0x4c5790::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hd23d2188d871bd94(&v27, ::0x4c5680::core::slice::iter::Iter$LT$T$GT$::make_slice::heba9270848099813(v8, v9 + v8), v42);
                    ::0x4c4a90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8afff49af932c970(&v7);
                }
                else
                {
                    v41(&v7, uu_od::inputdecoder::MemoryDecoder::read_uint::h816e4a76a34edae6(a2, v38, v35->field_10));
                    ::0x4c5790::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hd23d2188d871bd94(&v27, ::0x4c5680::core::slice::iter::Iter$LT$T$GT$::make_slice::heba9270848099813(v8, v9 + v8), v42);
                    ::0x4c4a90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8afff49af932c970(&v7);
                }
                v38 += v35->field_10;
            } while (v38 < v19);
        }
        if (v35->field_60)
        {
            v43 = ::0x4c5a00::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(v28, v29 + v28, v37);
            v44 = v30;
            v45 = v44 - v43;
            if (v44 < v43)
                v45 = 0;
            uu_od::prn_char::format_ascii_dump::ha1968db91b346522(&v33, uu_od::inputdecoder::MemoryDecoder::get_buffer::h3bf5d7dc5c3f64ba(a2, 0), v42);
            v1 = &g_417e40;
            v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5410c232de497cd3;
            v3 = &v33;
            v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v5 = v45;
            v6 = 0;
            v7 = 2;
            v9 = 1;
            v10 = 2;
            v11 = 0;
            v12 = 32;
            v13 = 1;
            v14 = 2;
            v15 = 2;
            v16 = 1;
            v17 = 32;
            v18 = 3;
            v20 = &g_541098;
            v21 = 2;
            v24 = &v7;
            v25 = 2;
            v22 = &v1;
            v23 = 3;
            core::result::Result$LT$T$C$E$GT$::unwrap::hc40dcb9dfb11890d((unsigned int)::0x4c59f0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h7986fa1a4b39bef7(&v27, &v20), &g_5410b8);
            ::0x4c4a90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8afff49af932c970(&v33);
        }
        if (((char)v0 & 1))
        {
            v1 = &v26;
            v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5410c232de497cd3;
            v7 = &g_417e40;
            v8 = 1;
            v11 = 0;
            v9 = &v1;
            v10 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v7, v46, v37);
            v0 = 0;
        }
        else
        {
            v20 = &g_417e40;
            v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5410c232de497cd3;
            v22 = ::0x4c5a00::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(a0, a1 + a0, v37);
            v23 = 0;
            v7 = 2;
            v9 = 1;
            v10 = 1;
            v11 = 0;
            v12 = 32;
            v13 = 1;
            v1 = &g_417e40;
            v2 = 1;
            v5 = &v7;
            v6 = 1;
            v3 = &v20;
            v4 = 2;
            std::io::stdio::_print::he918bceb0c89db46(&v1, v47, _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5410c232de497cd3);
        }
        v1 = &v27;
        v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v7 = &g_5410d0;
        v8 = 2;
        v11 = 0;
        v9 = &v1;
        v10 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v7, v48, v49);
        ::0x4c4a90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8afff49af932c970(&v27);
        v35 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h43275d45d6733911(&v31);
        if (!v35)
            return v35;
    }
}
