long long uu_csplit::SplitWriter::do_to_match::h378726aac675a0d1(unsigned long long a0[4], struct_2 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long v0;  // [bp-0x160], Other Possible Types: unsigned long long
    int v1;  // [sp-0x158], Other Possible Types: unsigned long long
    int v2;  // [bp-0x150], Other Possible Types: char
    struct_2 *v3;  // [sp-0x140], Other Possible Types: unsigned long long
    int v4;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long v5;  // [sp-0x130], Other Possible Types: unsigned long long
    int v6;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
    int v7;  // [bp-0x120]
    unsigned long long v8;  // [sp-0x118]
    char v9;  // [bp-0x108], Other Possible Types: unsigned long long, unsigned long
    char v10;  // [sp-0x100], Other Possible Types: unsigned long long, unsigned long
    unsigned long v11;  // [sp-0xf8], Other Possible Types: unsigned long long
    char v12;  // [bp-0xf0]
    int v13;  // [bp-0xe8], Other Possible Types: char, unsigned long long, unsigned long
    char v14;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0xd8]
    unsigned long v16;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0xa8]
    unsigned long long v18;  // [sp-0xa0]
    int v19;  // [sp-0x98]
    char v20;  // [bp-0x80]
    char v21;  // [bp-0x70]
    char v22;  // [bp-0x60]
    char v23;  // [bp-0x58]
    char v24;  // [bp-0x48]
    char v25;  // [bp-0x38]
    unsigned long v26;  // [bp+0x8]
    char v27;  // [bp+0x10]
    struct_0 *v28;  // rbp
    unsigned int v29;  // eax
    int v30;  // xmm0
    int v31;  // ymm0
    int v32;  // ymm0
    struct_3 *v33;  // rax
    unsigned long long v34;  // rax
    int v35;  // ymm0
    unsigned long long v36;  // rdx
    unsigned long long v37;  // r12
    int v38;  // xmm0
    int v39;  // ymm0
    int v40;  // xmm0
    unsigned long long v41;  // rax
    unsigned long long v42;  // rcx
    int v43;  // xmm0
    int v44;  // xmm0
    int v45;  // xmm0
    unsigned long long v46;  // rax
    struct_2 *v47;  // rbp
    struct_2 *v48;  // rbp
    unsigned long long v49[4];  // rcx
    char *v50;  // rdi
    unsigned long long v51[4];  // rcx
    int v52;  // xmm0
    int v53;  // ymm0
    struct_3 *v54;  // rax
    unsigned long long v55;  // rsi
    struct_3 *v56;  // rax
    unsigned long long v57;  // rax
    unsigned long long v58;  // rcx
    int v59;  // xmm0
    int v60;  // xmm0
    int v61;  // xmm0
    unsigned long long v62;  // rax
    unsigned long long v63;  // rax
    int v64;  // ymm0
    unsigned long long v65;  // rcx
    int v66;  // xmm0
    int v67;  // xmm0
    int v68;  // xmm0
    unsigned long long v69;  // rax
    unsigned long long v70[4];  // rcx
    unsigned long long v71[4];  // rax
    unsigned long long v72[4];  // rcx
    char v73;  // bpl
    unsigned long long v74;  // r13
    unsigned long long v75;  // rsi
    unsigned long long v76[4];  // rbx
    unsigned int v77;  // r13d
    unsigned long long v78[4];  // rcx
    unsigned int v79;  // r13d
    char v80;  // bl
    unsigned long long v81;  // rax
    unsigned long long v82;  // rax
    unsigned long long v83[4];  // rax
    unsigned long long v84[4];  // rcx
    unsigned long long v85[4];  // rcx
    unsigned long long v86[4];  // rcx

    v28 = *((long long *)&v27);
    v29 = v26;
    if (v29 < 0)
    {
        v3 = -(v29);
        v28->field_50 = v3;
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&v9, v28);
        v34 = v10;
        if (v34 == 9223372036854775809)
        {
LABEL_55f255:
            v47 = a1;
            core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$GT$::h55df8f1ce1418121(&v9);
            alloc::vec::Vec$LT$T$C$A$GT$::drain::hf59e40ec0b90ed17(&v4, v28);
            v56 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v4);
            if (v56)
            {
                while (true)
                {
                    v65 = v56->field_8;
                    if (!(v1 != 9223372036854775809) || !((v66 = v56->field_10, v2 = v66, v0 = v56->field_0, v1 = v65, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h4a2bc384fee84094(&v9, &v0), v67 = *((int128_t *)&v10), v13 = v67, v0 != 0x8000000000000000)))
                        break;
                    v0 = v9;
                    v68 = (int128_t)v13;
                    v64 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
                    v1 = v68;
                    v69 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v47, v1, (long long)(&v1)[8]);
                    if (v69)
                    {
                        v72 = a0;
                        v72[0] = 0;
                        v72[1] = v69;
                        ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                        v71 = core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e();
                        return v71;
                    }
                    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                    v56 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v4);
                    if (!v56)
                        break;
                }
            }
            core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e();
            uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v47);
            v76 = a0;
            v71 = ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v76[1], a2, a3);
            v76[0] = 3;
            return v71;
        }
        while (true)
        {
            v36 = v11;
            if (v16 == 0x8000000000000000)
                break;
            v37 = v9;
            v16 = v34;
            v17 = v36;
            v18 = *((long long *)&v12);
            if (!(char)regex::regex::string::Regex::is_match_at::ha92ef8a3ebc0bbf1(a4, a5, v17, v18))
            {
                v6 = v18;
                v38 = *((int128_t *)&v16);
                v39 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
                v4 = v38;
                uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h69a145175e6beff8(&v0, v28, v37, &v4);
                if (v0 != 0x8000000000000000)
                {
                    v40 = *((int128_t *)&v0);
                    v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                    v4 = v40;
                    v6 = *((long long *)&v2);
                    v41 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(a1, v5, *((long long *)&v2));
                    if (v41)
                    {
                        v49 = a0;
                        v49[0] = 0;
                        v49[1] = v41;
                        ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(v50);
                        return v71;
                    }
                    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v4);
                }
                _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&v9, v28);
                v34 = v10;
                if (v34 == 9223372036854775809)
                    goto LABEL_55f255;
            }
            else
            {
                v48 = a1;
                uu_csplit::InputSplitter$LT$I$GT$::shrink_buffer_to_size::h2f0373906384d08b(&v23, v28);
                v8 = *((long long *)&v25);
                v52 = *((int128_t *)&v23);
                v53 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
                *((int128_t *)&v6) = *((int128_t *)&v24);
                v4 = v52;
                v54 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v4);
                if (!v54)
                {
LABEL_55f6f3:
                    core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e();
                    v73 = v48->field_20->field_63;
                    v74 = v3;
                    if (!v73)
                    {
                        v75 = *((long long *)&v27);
                        *((unsigned long long *)(*((long long *)&v27) + 80)) = v74 + 1;
                        v6 = v18;
                        *((int128_t *)&v4) = *((int128_t *)&v16);
                        uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h69a145175e6beff8(&v0, v75, v37, &v4);
                        ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v0);
                        if (v0 != 0x8000000000000000)
                        {
                            v4 = &g_6deb90;
                            v5 = 1;
                            v6 = 8;
                            *((int128_t *)&v7) = 0;
                            core::panicking::panic_fmt::he12d0d7468628bb4(&v4, &g_6deba0); /* do not return */
                        }
                    }
                    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v48);
                    v71 = 12;
                    if (*((long long *)(*((long long *)&v27) + 16)) < v74)
                    {
                        ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v4, a2, a3);
                        v85 = a0;
                        v85[3] = v6;
                        *((int128_t *)&v85[1]) = (int128_t)v4;
                        v71 = 1;
                    }
                    a0[0] = v71;
                    if (!v73)
                        return v71;
                    goto LABEL_55f8f8;
                }
                while (true)
                {
                    v58 = v54->field_8;
                    v0 = v0;
                    if (!(v1 != 9223372036854775809) || !((v59 = v54->field_10, v2 = v59, v0 = v54->field_0, v1 = v58, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h255b9cb46bd12424(&v13, &v0), v60 = *((int128_t *)&v14), v19 = v60, v0 = v0, v0 != 0x8000000000000000)))
                        goto LABEL_55f6f3;
                    v0 = v13;
                    v61 = v19;
                    v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
                    v1 = v61;
                    v62 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v48, v1, (long long)(&v1)[8]);
                    if (v62)
                    {
                        v70 = a0;
                        v70[0] = 0;
                        v70[1] = v62;
                        ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                        core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e();
LABEL_55f8f8:
                        v50 = &v16;
                    }
                    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                    v54 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v4);
                    v0 = v0;
                    v0 = v0;
                    goto LABEL_55f6f3;
                }
            }
        }
    }
    v3 = a1;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::hf59e40ec0b90ed17(&v20, v28);
    v8 = *((long long *)&v22);
    v30 = *((int128_t *)&v20);
    v32 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
    *((int128_t *)&v6) = *((int128_t *)&v21);
    v4 = v30;
    v33 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v4);
    if (v33)
    {
        while (true)
        {
            v42 = v33->field_8;
            v0 = v0;
            v1 = v1;
            if (!(v1 != 9223372036854775809) || !((v43 = v33->field_10, v2 = v43, v0 = v33->field_0, v1 = v42, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h4a2bc384fee84094(&v9, &v0), v44 = *((int128_t *)&v10), v13 = v44, v0 = v0, v1 = v1, v0 != 0x8000000000000000)))
                break;
            v0 = v9;
            v45 = (int128_t)v13;
            v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
            v1 = v45;
            v46 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v3, v1, (long long)(&v1)[8]);
            if (v46)
            {
                v51 = a0;
                v51[0] = 0;
                v51[1] = v46;
                ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e();
                return v71;
            }
            ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
            v33 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v4);
            v0 = v0;
            v1 = v1;
            v0 = v0;
            v1 = v1;
            if (!v33)
                break;
        }
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e();
    v55 = *((long long *)&v27);
    *((long long *)(*((long long *)&v27) + 80)) = 1;
    _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&v0, v55);
    v57 = v1;
    v47 = v3;
    if (v57 != 9223372036854775809)
    {
        do
        {
            v36 = (long long)v2;
            if (v13 == 0x8000000000000000)
            {
                v71 = a0;
                v71[0] = 0;
                v71[1] = v36;
                return v71;
            }
            v13 = v57;
            v14 = v36;
            v15 = (long long)(&v2)[8];
            if ((char)regex::regex::string::Regex::is_match_at::ha92ef8a3ebc0bbf1(a4, a5, v14, v15))
            {
                if (v47->field_20->field_63)
                {
LABEL_55f559:
                    v77 = v26;
                    if (v77 < 2)
                    {
                        v80 = 0;
                        goto LABEL_55f8b2;
                    }
                    else
                    {
                        v79 = v77 + 1;
                        do
                        {
                            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&v4, *((long long *)&v27));
                            v81 = v5;
                            if (v81 == 9223372036854775809)
                            {
                                uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v3);
                                ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v9, a2, a3);
                                v86 = a0;
                                v86[3] = v11;
                                *((int128_t *)&v86[1]) = *((int128_t *)&v9);
                                v86[0] = 1;
                                goto LABEL_55f976;
                            }
                            if (v81 == 0x8000000000000000)
                            {
                                v83 = a0;
                                v83[0] = 0;
                                v83[1] = v10;
                                goto LABEL_55f976;
                            }
                            v9 = v81;
                            v10 = v6;
                            v11 = (long long)(&v6)[8];
                            v82 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v3, v10, v11);
                            if (v82)
                            {
                                v84 = a0;
                                v84[0] = 0;
                                v84[1] = v82;
                                ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v9);
                                goto LABEL_55f976;
                            }
                        } while (!(v1 != 9223372036854775809) || !((v59 = v54->field_10, v2 = v59, v0 = v54->field_0, v1 = v58, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h255b9cb46bd12424(&v13, &v0), v60 = *((int128_t *)&v14), v19 = v60, v0 = v0, v0 != 0x8000000000000000)));
                        v80 = 0;
                        goto LABEL_55f8b2;
                    }
                }
                else if (!(int)v26)
                {
                    v6 = v15;
                    *((int128_t *)&v4) = *((int128_t *)&v13);
                    uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h69a145175e6beff8(&v9, *((long long *)&v27), v0, &v4);
                    if (v9 != 0x8000000000000000)
                    {
                        ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v9);
                        v4 = &g_6deb50;
                        v5 = 1;
                        v6 = 8;
                        *((int128_t *)&v7) = 0;
                        core::panicking::panic_fmt::he12d0d7468628bb4(&v4, &g_6debb8); /* do not return */
                    }
                    ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v9);
                    v80 = 1;
LABEL_55f8b2:
                    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v3);
                    v71 = a0;
                    v71[0] = 12;
                    if (v80)
                        return v71;
LABEL_55f976:
                    v50 = &v13;
                }
                else
                {
                    v63 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v3, v14, v15);
                    if (!(v1 != 9223372036854775809) || !((v59 = v54->field_10, v2 = v59, v0 = v54->field_0, v1 = v58, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h255b9cb46bd12424(&v13, &v0), v60 = *((int128_t *)&v14), v19 = v60, v0 = v0, v0 != 0x8000000000000000)))
                        goto LABEL_55f849;
                    goto LABEL_55f559;
                }
                v71 = ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(v50);
                return v71;
            }
            v63 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v47, v14, v15);
            if (v63)
            {
LABEL_55f849:
                v78 = a0;
                v78[0] = 0;
                v78[1] = v63;
                goto LABEL_55f976;
            }
            ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v13);
            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&v0, *((long long *)&v27));
            v57 = v1;
        } while (v57 != 9223372036854775809);
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$GT$::h55df8f1ce1418121(&v0);
    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v47);
    ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v76[1], a2, a3);
    a0[0] = 3;
    return v71;
}
