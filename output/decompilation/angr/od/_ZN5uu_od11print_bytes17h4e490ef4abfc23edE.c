long long uu_od::print_bytes::h4e490ef4abfc23ed(unsigned long long a0, unsigned long a1, struct_2 *a2, unsigned long long a3[6])
{
    unsigned int v0;  // [sp-0x164]
    char *v1;  // [sp-0x160]
    unsigned long long v2;  // [sp-0x158]
    char *v3;  // [sp-0x150], Other Possible Types: struct struct_0 **
    unsigned long long v4;  // [sp-0x148]
    struct struct_0 **v5;  // [sp-0x140], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x138], Other Possible Types: unsigned long long
    char *v7;  // [sp-0x130], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x128]
    struct struct_0 **v9;  // [sp-0x120], Other Possible Types: unsigned long long
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
    char *v20;  // [sp-0xb8]
    unsigned long long v21;  // [sp-0xb0]
    struct struct_0 **v22;  // [sp-0xa8], Other Possible Types: unsigned long long
    void* v23;  // [sp-0xa0], Other Possible Types: unsigned long long
    struct struct_0 **v24;  // [sp-0x98]
    unsigned long long v25;  // [sp-0x90]
    char v26;  // [bp-0x88]
    void* v27;  // [sp-0x78]
    unsigned long long v28;  // [sp-0x70]
    void* v29;  // [sp-0x68]
    unsigned long long v30;  // [sp-0x60]
    unsigned long v31;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x50]
    char v33;  // [bp-0x48]
    struct_3 *v35;  // rax
    unsigned long long v36;  // rbx
    void* v37;  // r15
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rax
    struct struct_1 **v40;  // r12
    unsigned long long v41;  // rdx
    unsigned long long v42;  // rax
    unsigned long long v43;  // r15
    void* v44;  // r15

    v31 = a3[1];
    v32 = a3[2] * 104 + v31;
    v35 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4e96e50d1a7b5ef(&v31);
    if (!v35)
        return v35;
    v19 = a2->field_8;
    v30 = a3[4];
    v36 = a3[5];
    v0 = v30 & 0xffffffffffffff00 | 1;
    while (true)
    {
        v27 = 0;
        v28 = 1;
        v29 = 0;
        if (v19)
        {
            if (!v36)
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(&g_5417f0); /* do not return */
            v37 = 0;
            do
            {
                if (!(v37 | v36) >> 32)
                {
                    v38 = ((unsigned int)((0 CONCAT (unsigned int)v37) % (v36 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v37) / (v36 & 4294967295))) >> 32 & 4294967295;
                    if (v38 >= 8)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(v38, 8, &g_541808); /* do not return */
                }
                else
                {
                    v38 = ((unsigned long long)((0 CONCAT v37) % v36) CONCAT (unsigned long long)((0 CONCAT v37) / v36)) >> 64;
                    if (v38 >= 8)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(v38, 8, &g_541808); /* do not return */
                }
                v20 = &g_40dad0;
                v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                v22 = *((long long *)&v35->padding_18[8 + 8 * v38]);
                v23 = 0;
                v7 = 2;
                v9 = 1;
                v10 = 1;
                v11 = 0;
                v12 = 32;
                v13 = 1;
                v1 = &g_40dad0;
                v2 = 1;
                v5 = &v7;
                v6 = 1;
                v3 = &v20;
                v4 = 2;
                core::result::Result$LT$T$C$E$GT$::unwrap::h6060708d4774fdb0((unsigned int)::0x4c5f70::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h2395a5f306767c17(&v27, &v1), &g_541820);
                v39 = v35->field_0;
                v40 = v35->field_8;
                if (v39 == 2)
                {
                    v40(&v7, uu_od::inputdecoder::MemoryDecoder::get_full_buffer::hbd44b98530cf6814(a2, v37));
                    ::0x4c5d10::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h35da95ead3d0349f(&v27, ::0x4c5c00::core::slice::iter::Iter$LT$T$GT$::make_slice::h2f8c5b40bc40bd5d(v8, v9 + v8), v41);
                    ::0x4c5010::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v7);
                }
                else if ((unsigned int)v39 == 1)
                {
                    uu_od::inputdecoder::MemoryDecoder::read_float::hb631d528abcb6236(a2, v37, v35->field_10);
                    v40(&v7);
                    ::0x4c5d10::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h35da95ead3d0349f(&v27, ::0x4c5c00::core::slice::iter::Iter$LT$T$GT$::make_slice::h2f8c5b40bc40bd5d(v8, v9 + v8), v41);
                    ::0x4c5010::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v7);
                }
                else
                {
                    v40(&v7, uu_od::inputdecoder::MemoryDecoder::read_uint::h33796a139b376ce0(a2, v37, v35->field_10));
                    ::0x4c5d10::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h35da95ead3d0349f(&v27, ::0x4c5c00::core::slice::iter::Iter$LT$T$GT$::make_slice::h2f8c5b40bc40bd5d(v8, v9 + v8), v41);
                    ::0x4c5010::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v7);
                }
                v37 += v35->field_10;
            } while (v37 < v19);
        }
        if (v35->field_60)
        {
            v42 = ::0x4c5f80::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(v28, v29 + v28);
            v43 = v30;
            v44 = v43 - v42;
            if (v43 < v42)
                v44 = 0;
            uu_od::prn_char::format_ascii_dump::h253c6e9b0061c235(&v33, uu_od::inputdecoder::MemoryDecoder::get_buffer::he5dd43e20733f426(a2, 0), v41);
            v1 = &g_40dad0;
            v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
            v3 = &v33;
            v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v5 = v44;
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
            v20 = &g_5417b8;
            v21 = 2;
            v24 = &v7;
            v25 = 2;
            v22 = &v1;
            v23 = 3;
            core::result::Result$LT$T$C$E$GT$::unwrap::h6060708d4774fdb0((unsigned int)::0x4c5f70::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h2395a5f306767c17(&v27, &v20), &g_5417d8);
            ::0x4c5010::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v33);
        }
        if (((char)v0 & 1))
        {
            v1 = &v26;
            v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
            v7 = &g_40dad0;
            v8 = 1;
            v11 = 0;
            v9 = &v1;
            v10 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v7);
            v0 = 0;
        }
        else
        {
            v20 = &g_40dad0;
            v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
            v22 = ::0x4c5f80::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(a0, a1 + a0);
            v23 = 0;
            v7 = 2;
            v9 = 1;
            v10 = 1;
            v11 = 0;
            v12 = 32;
            v13 = 1;
            v1 = &g_40dad0;
            v2 = 1;
            v5 = &v7;
            v6 = 1;
            v3 = &v20;
            v4 = 2;
            std::io::stdio::_print::he918bceb0c89db46(&v1);
        }
        v1 = &v27;
        v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v7 = &g_541798;
        v8 = 2;
        v11 = 0;
        v9 = &v1;
        v10 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v7);
        ::0x4c5010::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v27);
        v35 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4e96e50d1a7b5ef(&v31);
        if (!v35)
            return v35;
    }
}
