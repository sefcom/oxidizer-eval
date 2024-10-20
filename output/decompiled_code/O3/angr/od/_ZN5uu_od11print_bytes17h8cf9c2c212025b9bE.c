long long uu_od::print_bytes::h8cf9c2c212025b9b(unsigned long long a0, unsigned long long a1, struct_0 *a2, struct_4 *a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x170]
    unsigned long long v1;  // [sp-0x168]
    void* v2;  // [sp-0x160]
    unsigned int v3;  // [sp-0x154]
    unsigned long v4;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x148]
    unsigned long long v6;  // [sp-0x140]
    unsigned long long v7;  // [sp-0x138]
    unsigned long long v8;  // [sp-0x130]
    void* v9;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v10[3];  // [sp-0x120]
    char v11;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x108]
    unsigned long long v13;  // [sp-0x100]
    unsigned long long v14;  // [sp-0xf8]
    void* v15;  // [sp-0xf0]
    unsigned long long v16;  // [sp-0xe8]
    char v17;  // [sp-0xe0]
    unsigned long long v18;  // [sp-0xd8]
    unsigned long long v19;  // [sp-0xc8]
    unsigned long long v20;  // [sp-0xb8]
    unsigned long long v21;  // [sp-0xb0]
    char v22;  // [sp-0xa8]
    unsigned long long v23;  // [sp-0xa0]
    unsigned long v24;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x90]
    unsigned long long v26;  // [sp-0x88]
    void* v27;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v28;  // [sp-0x78]
    unsigned long long v29;  // [sp-0x70]
    char v30;  // [bp-0x68]
    unsigned long long v31;  // [sp-0x58]
    unsigned long long v32;  // [sp-0x50]
    char v33;  // [bp-0x48]
    char v34;  // [bp-0x40]
    unsigned long long v36;  // rax
    struct_3 *v37;  // r13
    unsigned long long v38;  // r15
    unsigned long long v39;  // rdx
    unsigned long long v40;  // r12
    unsigned long long v41;  // r14
    unsigned long long v43;  // rsi
    void* v44;  // rbp
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rax
    struct struct_2 **v47;  // rbx
    unsigned long long v48;  // rdx
    unsigned long long v49[3];  // rcx
    unsigned long long v50;  // rsi
    unsigned long long v51;  // rdx
    void* v52;  // rbx
    unsigned long v53;  // r14
    unsigned long long v54;  // rsi
    unsigned long long v55;  // rsi
    unsigned long long v56;  // rsi
    unsigned long long v57;  // rsi
    unsigned long long v58;  // rax
    unsigned long long v59[3];  // rcx
    unsigned long long v60;  // rbx
    void* v61;  // rbx
    unsigned long long v63;  // rsi
    unsigned long long v64;  // rdx
    unsigned long long v65;  // rsi

    v36 = a3->field_10;
    if (!v36)
        return v36;
    v37 = a3->field_8;
    v32 = 104 * v36 + (char *)v37;
    v10[0] = a2->field_0;
    v38 = a2->field_8;
    v39 = a3->field_20;
    v31 = v39;
    v40 = a3->field_28;
    v3 = a2 | -0x100 | 1;
    v41 = &v11;
    v23 = a2->field_10 + v38;
    while (true)
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        if (v38)
        {
            if (!v40)
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
            v44 = 0;
            do
            {
                if (!(v44 | v40) >> 32)
                {
                    v45 = (0 CONCAT (unsigned int)v44) /m (unsigned int)v40 >> 32 & 4294967295;
                    if (v45 >= 8)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                }
                else
                {
                    v45 = (0 CONCAT v44) /m v40 >> 64;
                    if (v45 >= 8)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                }
                v24 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
                v26 = *((long long *)&v37->padding_18[8 + 8 * v45]);
                v27 = 0;
                v11 = 2;
                v13 = 1;
                v14 = 1;
                v15 = 0;
                v16 = 32;
                v17 = 1;
                v4 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v5 = 1;
                v8 = v41;
                v9 = 1;
                v6 = &v24;
                v7 = 2;
                if ((char)core::fmt::write::h1b95545231c46caf(&v0, &g_5030d8, &v4))
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                v46 = v37->field_0;
                v47 = v37->field_8;
                if (v46 == 2)
                {
                    v48 = v23;
                    v49 = v10;
                    if (v48 < v44)
                        core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
                    if (v48 > v49[2])
                        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                    v47(v41, v49[1] + v44, v48 - v44);
                    v52 = v12;
                    v53 = v13;
                    v57 = v2;
                    if (!(v0 - v57 < v53))
                        continue;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h94e7c1edf1535031(&v0, v57, v53);
                }
                else if ((unsigned int)v46 != 1)
                {
                    v47(v41, uu_od::inputdecoder::MemoryDecoder::read_uint::hd2d11d3f91e9c674(a2, v44, v37->field_10), v51);
                    v52 = v12;
                    v53 = v13;
                    v56 = v2;
                    if (!(v0 - v56 < v53))
                        continue;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h94e7c1edf1535031(&v0, v56, v53);
                }
                else
                {
                    uu_od::inputdecoder::MemoryDecoder::read_float::h9301087561881b16(a2, v44, v37->field_10);
                    v47(v41, v50);
                    v52 = v12;
                    v53 = v13;
                    v54 = v2;
                    if (!(v0 - v54 < v53))
                        continue;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h94e7c1edf1535031(&v0, v54, v53);
                }
                v55 = v2;
                memcpy(v55 + v1, v52, v53);
                v2 += v53;
                v43 = v11;
                if (v43)
                    __rust_dealloc(v52);
                v41 = &v11;
                v44 += v37->field_10;
            } while (v44 < v38);
        }
        if (v37->field_60)
        {
            v58 = (v2 < 32 ? core::str::count::do_count_chars::h0101af2211204216(v1, v2) : core::str::count::char_count_general_case::h7993e6d554b46a47(v1, v2));
            v59 = v10;
            v60 = v31;
            v61 = v60 - v58;
            if (v60 < v58)
                v61 = 0;
            if (v38 > v59[2])
                core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
            uu_od::prn_char::format_ascii_dump::hdf65234161eb6b9a(&v33, v59[1], v38);
            v4 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
            v6 = &v33;
            v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v8 = v61;
            v9 = 0;
            v11 = 2;
            v13 = 1;
            v14 = 2;
            v15 = 0;
            v16 = 32;
            v17 = 1;
            v18 = 2;
            v19 = 2;
            v20 = 1;
            v21 = 32;
            v22 = 3;
            v24 = &g_503248;
            v25 = 2;
            v28 = v41;
            v29 = 2;
            v26 = &v4;
            v27 = 3;
            if ((char)core::fmt::write::h1b95545231c46caf(&v0, &g_5030d8, &v24))
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            v43 = *((long long *)&v33);
            if (v43)
                __rust_dealloc(*((long long *)&v34));
        }
        if (((char)v3 & 1))
        {
            v4 = &v30;
            v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
            v11 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v12 = 1;
            v15 = 0;
            v13 = &v4;
            v14 = 1;
            std::io::stdio::_print::he918bceb0c89db46(v41, v43, v39);
            v3 = 0;
        }
        else
        {
            v24 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
            *((int *)&v26) = (a1 < 32 ? core::str::count::do_count_chars::h0101af2211204216(a0, a1) : core::str::count::char_count_general_case::h7993e6d554b46a47(a0, a1));
            v27 = 0;
            v11 = 2;
            v13 = 1;
            v14 = 1;
            v15 = 0;
            v16 = 32;
            v17 = 1;
            v4 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v5 = 1;
            v8 = v41;
            v9 = 1;
            v6 = &v24;
            v7 = 2;
            std::io::stdio::_print::he918bceb0c89db46(&v4, v50, _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1);
        }
        v4 = &v0;
        v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v11 = &g_503280;
        v12 = 2;
        v15 = 0;
        v13 = &v4;
        v14 = 1;
        v36 = std::io::stdio::_print::he918bceb0c89db46(v41, v63, v64);
        v65 = v0;
        if (v65)
            v36 = __rust_dealloc(v1);
        v37 = (char *)&v37[1].field_0 + 7;
        if (v37 == v32)
            return v36;
    }
}
