long long uu_csplit::SplitWriter::do_to_match::h378726aac675a0d1(unsigned long long a0[4], struct_1 *a1, unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long v0;  // [bp-0x160], Other Possible Types: unsigned long long
    int v1;  // [sp-0x158], Other Possible Types: unsigned long long
    int v2;  // [bp-0x150], Other Possible Types: char
    struct_1 *v3;  // [sp-0x140], Other Possible Types: unsigned long long
    int v4;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long v5;  // [sp-0x130], Other Possible Types: unsigned long long
    int v6;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
    int v7;  // [bp-0x120]
    unsigned long long v8;  // [sp-0x118]
    char v9;  // [bp-0x108], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v10;  // [sp-0x100], Other Possible Types: unsigned long
    unsigned long v11;  // [sp-0xf8], Other Possible Types: unsigned long long
    char v12;  // [bp-0xf0]
    int v13;  // [bp-0xe8], Other Possible Types: char, unsigned long long, unsigned long
    char v14;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0xd8]
    unsigned long long v16;  // [sp-0xd0]
    unsigned long v17;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0xa8]
    unsigned long long v19;  // [sp-0xa0]
    int v20;  // [sp-0x98]
    char v21;  // [bp-0x80]
    char v22;  // [bp-0x70]
    char v23;  // [bp-0x60]
    char v24;  // [bp-0x58]
    char v25;  // [bp-0x48]
    char v26;  // [bp-0x38]
    unsigned long v27;  // [bp+0x8]
    char v28;  // [bp+0x10]
    unsigned long long v29;  // rdx
    struct_3 *v30;  // rbp
    unsigned int v31;  // eax
    int v32;  // xmm0
    int v33;  // ymm0
    int v34;  // ymm0
    struct_2 *v35;  // rax
    unsigned long long v36;  // rax
    int v37;  // ymm0
    unsigned long long v38;  // rdx
    unsigned long long v39;  // r12
    int v40;  // xmm0
    int v41;  // ymm0
    int v42;  // xmm0
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rcx
    int v46;  // xmm0
    int v47;  // xmm0
    int v48;  // xmm0
    unsigned long long v49;  // rax
    struct_1 *v50;  // rbp
    struct_1 *v51;  // rbp
    unsigned long long v52[4];  // rcx
    char *v53;  // rdi
    unsigned long long v54[4];  // rcx
    unsigned long long v55;  // rdx
    int v56;  // xmm0
    int v57;  // ymm0
    struct_2 *v58;  // rax
    unsigned long long v59;  // rsi
    unsigned long long v60;  // rdx
    struct_2 *v61;  // rax
    unsigned long long v62;  // rax
    unsigned long long v63;  // rcx
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm0
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    int v69;  // ymm0
    unsigned long long v70;  // rcx
    int v71;  // xmm0
    int v72;  // xmm0
    int v73;  // xmm0
    unsigned long long v74;  // rax
    unsigned long long v75[4];  // rcx
    unsigned long long v76[4];  // rax
    unsigned long long v77[4];  // rcx
    char v78;  // bpl
    unsigned long long v79;  // r13
    unsigned long long v80;  // rsi
    unsigned long long v81;  // rsi
    unsigned long long v82;  // rdx
    unsigned long long v83[4];  // rbx
    unsigned long long v84;  // rsi
    unsigned long long v85;  // rdx
    unsigned int v86;  // r13d
    unsigned long long v87[4];  // rcx
    unsigned long long v88;  // rsi
    unsigned long long v89;  // rdx
    unsigned int v90;  // r13d
    char v91;  // bl
    unsigned long long v92;  // rax
    unsigned long long v93;  // rax
    unsigned long long v94;  // rsi
    unsigned long long v95[4];  // rax
    unsigned long long v96[4];  // rcx
    unsigned long long v97[4];  // rcx
    unsigned long long v98[4];  // rcx

    v29 = a2;
    v16 = a2;
    v30 = *((long long *)&v28);
    v31 = v27;
    if (v31 < 0)
    {
        v3 = -(v31);
        v30->field_50 = v3;
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&v9, v30, v29);
        v36 = v10;
        if (v36 == 9223372036854775809)
        {
LABEL_55f255:
            v50 = a1;
            core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$GT$::h55df8f1ce1418121(&v9);
            alloc::vec::Vec$LT$T$C$A$GT$::drain::hf59e40ec0b90ed17(&v4, v30, v55);
            v61 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v4);
            if (v61)
            {
                while (true)
                {
                    v70 = v61->field_8;
                    if (!(v1 != 9223372036854775809) || !((v71 = v61->field_10, v2 = v71, v0 = v61->field_0, v1 = v70, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h4a2bc384fee84094(&v9, &v0), v72 = *((int128_t *)&v10), v13 = v72, v0 != 0x8000000000000000)))
                        break;
                    v0 = v9;
                    v73 = (int128_t)v13;
                    v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
                    v1 = v73;
                    v74 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v50, v1, (long long)(&v1)[8]);
                    if (v74)
                    {
                        v77 = a0;
                        v77[0] = 0;
                        v77[1] = v74;
                        ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                        v76 = core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&v4);
                        return v76;
                    }
                    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                    v61 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v4);
                    if (!v61)
                        break;
                }
            }
            core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&v4);
            uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v50, v81, v82);
            v83 = a0;
            v76 = ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v83[1], v16, a3);
            v83[0] = 3;
            return v76;
        }
        while (true)
        {
            v38 = v11;
            if (v17 == 0x8000000000000000)
                break;
            v39 = v9;
            v17 = v36;
            v18 = v38;
            v19 = *((long long *)&v12);
            if (!(char)regex::regex::string::Regex::is_match_at::ha92ef8a3ebc0bbf1(a4, a5, v18, v19))
            {
                v6 = v19;
                v40 = *((int128_t *)&v17);
                v41 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                v4 = v40;
                uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h69a145175e6beff8(&v0, v30, v39, &v4);
                if (v0 != 0x8000000000000000)
                {
                    v42 = *((int128_t *)&v0);
                    v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
                    v4 = v42;
                    v6 = *((long long *)&v2);
                    v43 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(a1, v5, *((long long *)&v2));
                    if (v43)
                    {
                        v52 = a0;
                        v52[0] = 0;
                        v52[1] = v43;
                        ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(v53);
                        return v76;
                    }
                    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v4);
                }
                _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&v9, v30, v44);
                v36 = v10;
                if (v36 == 9223372036854775809)
                    goto LABEL_55f255;
            }
            else
            {
                v51 = a1;
                uu_csplit::InputSplitter$LT$I$GT$::shrink_buffer_to_size::h2f0373906384d08b(&v24, v30);
                v8 = *((long long *)&v26);
                v56 = *((int128_t *)&v24);
                v57 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
                *((int128_t *)&v6) = *((int128_t *)&v25);
                v4 = v56;
                v58 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v4);
                if (!v58)
                {
LABEL_55f6f3:
                    core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&v4);
                    v78 = v51->field_20->field_63;
                    v79 = v3;
                    if (!v78)
                    {
                        v80 = *((long long *)&v28);
                        *((unsigned long long *)(*((long long *)&v28) + 80)) = v79 + 1;
                        v6 = v19;
                        *((int128_t *)&v4) = *((int128_t *)&v17);
                        uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h69a145175e6beff8(&v0, v80, v39, &v4);
                        ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v0);
                        if (v0 != 0x8000000000000000)
                        {
                            v4 = &g_6deb90;
                            v5 = 1;
                            v6 = 8;
                            *((int128_t *)&v7) = 0;
                            core::panicking::panic_fmt::he12d0d7468628bb4(&v4); /* do not return */
                        }
                    }
                    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v51, v88, v89);
                    v76 = 12;
                    if (*((long long *)(*((long long *)&v28) + 16)) < v79)
                    {
                        ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v4, v16, a3);
                        v97 = a0;
                        v97[3] = v6;
                        *((int128_t *)&v97[1]) = (int128_t)v4;
                        v76 = 1;
                    }
                    a0[0] = v76;
                    if (!v78)
                        return v76;
                    goto LABEL_55f8f8;
                }
                while (true)
                {
                    v63 = v58->field_8;
                    v0 = v0;
                    if (!(v1 != 9223372036854775809) || !((v64 = v58->field_10, v2 = v64, v0 = v58->field_0, v1 = v63, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h255b9cb46bd12424(&v13, &v0), v65 = *((int128_t *)&v14), v20 = v65, v0 = v0, v0 != 0x8000000000000000)))
                        goto LABEL_55f6f3;
                    v0 = v13;
                    v66 = v20;
                    v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
                    v1 = v66;
                    v67 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v51, v1, (long long)(&v1)[8]);
                    if (v67)
                    {
                        v75 = a0;
                        v75[0] = 0;
                        v75[1] = v67;
                        ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                        core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&v4);
LABEL_55f8f8:
                        v53 = &v17;
                    }
                    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                    v58 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v4);
                    v0 = v0;
                    v0 = v0;
                    goto LABEL_55f6f3;
                }
            }
        }
    }
    v3 = a1;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::hf59e40ec0b90ed17(&v21, v30, v29);
    v8 = *((long long *)&v23);
    v32 = *((int128_t *)&v21);
    v34 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32;
    *((int128_t *)&v6) = *((int128_t *)&v22);
    v4 = v32;
    v35 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v4);
    if (v35)
    {
        while (true)
        {
            v45 = v35->field_8;
            v0 = v0;
            v1 = v1;
            if (!(v1 != 9223372036854775809) || !((v46 = v35->field_10, v2 = v46, v0 = v35->field_0, v1 = v45, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h4a2bc384fee84094(&v9, &v0), v47 = *((int128_t *)&v10), v13 = v47, v0 = v0, v1 = v1, v0 != 0x8000000000000000)))
                break;
            v0 = v9;
            v48 = (int128_t)v13;
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
            v1 = v48;
            v49 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v3, v1, (long long)(&v1)[8]);
            if (v49)
            {
                v54 = a0;
                v54[0] = 0;
                v54[1] = v49;
                ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&v4);
                return v76;
            }
            ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
            v35 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v4);
            v0 = v0;
            v1 = v1;
            v0 = v0;
            v1 = v1;
            if (!v35)
                break;
        }
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&v4);
    v59 = *((long long *)&v28);
    *((long long *)(*((long long *)&v28) + 80)) = 1;
    _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&v0, v59, v60);
    v62 = v1;
    v50 = v3;
    if (v62 != 9223372036854775809)
    {
        do
        {
            v38 = (long long)v2;
            if (v13 == 0x8000000000000000)
            {
                v76 = a0;
                v76[0] = 0;
                v76[1] = v38;
                return v76;
            }
            v13 = v62;
            v14 = v38;
            v15 = (long long)(&v2)[8];
            if ((char)regex::regex::string::Regex::is_match_at::ha92ef8a3ebc0bbf1(a4, a5, v14, v15))
            {
                if (v50->field_20->field_63)
                {
LABEL_55f559:
                    v86 = v27;
                    if (v86 < 2)
                    {
                        v91 = 0;
                        goto LABEL_55f8b2;
                    }
                    else
                    {
                        v90 = v86 + 1;
                        do
                        {
                            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&v4, *((long long *)&v28), v85);
                            v92 = v5;
                            if (v92 == 9223372036854775809)
                            {
                                uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v3, v94, v60);
                                ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v9, v16, a3);
                                v98 = a0;
                                v98[3] = v11;
                                *((int128_t *)&v98[1]) = *((int128_t *)&v9);
                                v98[0] = 1;
                                goto LABEL_55f976;
                            }
                            if (v92 == 0x8000000000000000)
                            {
                                v95 = a0;
                                v95[0] = 0;
                                v95[1] = v10;
                                goto LABEL_55f976;
                            }
                            v9 = v92;
                            v10 = v6;
                            v11 = (long long)(&v6)[8];
                            v93 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v3, v10, v11);
                            if (v93)
                            {
                                v96 = a0;
                                v96[0] = 0;
                                v96[1] = v93;
                                ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v9);
                                goto LABEL_55f976;
                            }
                        } while (!(v1 != 9223372036854775809) || !((v64 = v58->field_10, v2 = v64, v0 = v58->field_0, v1 = v63, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h255b9cb46bd12424(&v13, &v0), v65 = *((int128_t *)&v14), v20 = v65, v0 = v0, v0 != 0x8000000000000000)));
                        v91 = 0;
                        goto LABEL_55f8b2;
                    }
                }
                else if (!(int)v27)
                {
                    v6 = v15;
                    *((int128_t *)&v4) = *((int128_t *)&v13);
                    uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h69a145175e6beff8(&v9, *((long long *)&v28), v0, &v4);
                    if (v9 != 0x8000000000000000)
                    {
                        ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v9);
                        v4 = &g_6deb50;
                        v5 = 1;
                        v6 = 8;
                        *((int128_t *)&v7) = 0;
                        core::panicking::panic_fmt::he12d0d7468628bb4(&v4); /* do not return */
                    }
                    ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v9);
                    v91 = 1;
LABEL_55f8b2:
                    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v3, v84, v85);
                    v76 = a0;
                    v76[0] = 12;
                    if (v91)
                        return v76;
LABEL_55f976:
                    v53 = &v13;
                }
                else
                {
                    v68 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v3, v14, v15);
                    if (!(v1 != 9223372036854775809) || !((v64 = v58->field_10, v2 = v64, v0 = v58->field_0, v1 = v63, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h255b9cb46bd12424(&v13, &v0), v65 = *((int128_t *)&v14), v20 = v65, v0 = v0, v0 != 0x8000000000000000)))
                        goto LABEL_55f849;
                    goto LABEL_55f559;
                }
                v76 = ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(v53);
                return v76;
            }
            v68 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v50, v14, v15);
            if (v68)
            {
LABEL_55f849:
                v87 = a0;
                v87[0] = 0;
                v87[1] = v68;
                goto LABEL_55f976;
            }
            ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v13);
            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&v0, *((long long *)&v28), v60);
            v62 = v1;
        } while (v62 != 9223372036854775809);
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$GT$::h55df8f1ce1418121(&v0);
    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v50, v81, v82);
    ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v83[1], v16, a3);
    a0[0] = 3;
    return v76;
}
