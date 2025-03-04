long long uu_csplit::SplitWriter::do_to_match::h5baae8016ea78834(unsigned long long a0[4], struct_2 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned int a6, unsigned long long a7[7])
{
    unsigned long long v0;  // [bp-0x160], Other Possible Types: unsigned long
    int v1;  // [sp-0x158], Other Possible Types: unsigned long long, unsigned long
    int v2;  // [bp-0x150], Other Possible Types: char
    int v3;  // [sp-0x150]
    struct_2 *v4;  // [sp-0x140], Other Possible Types: unsigned long long
    int v5;  // [bp-0x138], Other Possible Types: unsigned long
    int v6;  // [sp-0x138]
    int v7;  // [bp-0x138]
    unsigned long v8;  // [sp-0x130], Other Possible Types: unsigned long long
    int v9;  // [sp-0x128], Other Possible Types: unsigned long, unsigned long long
    unsigned long v10;  // [sp-0x128], Other Possible Types: unsigned long long
    int v11;  // [bp-0x120]
    unsigned long long v12;  // [sp-0x118]
    char v13;  // [sp-0x108], Other Possible Types: unsigned long
    unsigned long v14;  // [sp-0x108]
    unsigned long long v15;  // [sp-0x100], Other Possible Types: unsigned long
    unsigned long v16;  // [sp-0xf8], Other Possible Types: unsigned long long
    char v17;  // [bp-0xf0]
    int v18;  // [bp-0xe8], Other Possible Types: char, unsigned long
    char v19;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0xd8]
    unsigned long v21;  // [sp-0xb0]
    unsigned long long v22;  // [sp-0xa8]
    unsigned long long v23;  // [sp-0xa0]
    int v24;  // [sp-0x98]
    char v25;  // [bp-0x80]
    char v26;  // [bp-0x70]
    char v27;  // [bp-0x60]
    char v28;  // [bp-0x58]
    char v29;  // [bp-0x48]
    char v30;  // [bp-0x38]
    int v31;  // xmm0
    int v32;  // ymm0
    int v33;  // ymm0
    struct_0 *v34;  // rax
    unsigned long long v35;  // rax
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
    struct_0 *v54;  // rax
    struct_0 *v55;  // rax
    unsigned long long v56;  // rax
    unsigned long long v57;  // rcx
    int v58;  // xmm0
    int v59;  // xmm0
    int v60;  // xmm0
    unsigned long long v61;  // rax
    unsigned long long v62;  // rax
    unsigned long long v63;  // rcx
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm0
    unsigned long long v67;  // rax
    unsigned long long v68[4];  // rcx
    unsigned long long v69[4];  // rax
    unsigned long long v70[4];  // rcx
    char v71;  // bpl
    unsigned long long v72;  // r13
    unsigned long long v73[4];  // rbx
    unsigned long long v74[4];  // rcx
    unsigned int v75;  // r13d
    char v76;  // bl
    unsigned long long v77;  // rax
    unsigned long long v78;  // rax
    unsigned long long v79[4];  // rax
    unsigned long long v80[4];  // rcx
    unsigned long long v81[4];  // rcx
    unsigned long long v82[4];  // rcx

    if (a6 < 0)
    {
        v4 = -(a6);
        a7[6] = v4;
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92638e6c16058415(&v13, a7);
        v35 = v15;
        if (v35 == 9223372036854775809)
        {
LABEL_55fce5:
            v47 = a1;
            core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$GT$::h55df8f1ce1418121(&v13);
            alloc::vec::Vec$LT$T$C$A$GT$::drain::hf59e40ec0b90ed17(&v6, a7);
            v55 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v6);
            if (v55)
            {
                while (true)
                {
                    v63 = v55->field_8;
                    if (!(v1 != 9223372036854775809) || !((v64 = v55->field_10, v2 = v64, v0 = (unsigned long)v55->field_0, v1 = (unsigned long)v63, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h4a2bc384fee84094(&v13, &v0), v65 = *((int128_t *)&v15), v18 = v65, v0 != 0x8000000000000000)))
                        break;
                    v0 = v13;
                    v66 = (int128_t)v18;
                    v39 = ((v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
                    v1 = v66;
                    v67 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v47, v1, (long long)(&v1)[8]);
                    if (v67)
                    {
                        v70 = a0;
                        v70[0] = 0;
                        v70[1] = v67;
                        ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                        v69 = core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&v6);
                        return v69;
                    }
                    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                    v55 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v6);
                    if (!v55)
                        break;
                }
            }
            core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&v6);
            uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v47);
            v73 = a0;
            v69 = ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v73[1], a2, a3);
            v73[0] = 3;
            return v69;
        }
        while (true)
        {
            v36 = v16;
            if (v35 == 0x8000000000000000)
                break;
            v37 = v13;
            v21 = v35;
            v22 = v36;
            v23 = *((long long *)&v17);
            if (!(char)regex::regex::string::Regex::is_match_at::ha92ef8a3ebc0bbf1(a4, a5, v22, v23))
            {
                v10 = v23;
                v38 = *((int128_t *)&v21);
                v39 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
                v6 = v38;
                uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::hf666c82950bc0262(&v0, a7, v37, &v6);
                if (v0 != 0x8000000000000000)
                {
                    v40 = *((int128_t *)&v0);
                    v39 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                    v6 = v40;
                    v10 = *((long long *)&v2);
                    v41 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(a1, v8, *((long long *)&v2));
                    if (v41)
                    {
                        v49 = a0;
                        v49[0] = 0;
                        v49[1] = v41;
                        ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(v50);
                        return v69;
                    }
                    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v6);
                }
                _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92638e6c16058415(&v13, a7);
                v35 = v15;
                if (v35 == 9223372036854775809)
                    goto LABEL_55fce5;
            }
            else
            {
                v48 = a1;
                uu_csplit::InputSplitter$LT$I$GT$::shrink_buffer_to_size::h0c5a68fe88e0f0c5(&v28, a7);
                v12 = *((long long *)&v30);
                v52 = *((int128_t *)&v28);
                v53 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
                *((int128_t *)&v9) = *((int128_t *)&v29);
                v7 = v52;
                v54 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v6);
                if (!v54)
                {
LABEL_560183:
                    core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&v6);
                    v71 = v48->field_20->field_63;
                    v72 = v4;
                    if (!v71)
                    {
                        a7[6] = v72 + 1;
                        v10 = v23;
                        *((int128_t *)&v7) = *((int128_t *)&v21);
                        uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::hf666c82950bc0262(&v0, a7, v37, &v6);
                        ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v0);
                        if (v0 != 0x8000000000000000)
                        {
                            v5 = &g_6deb90;
                            v8 = 1;
                            v9 = 8;
                            *((uint128_t *)&v11) = 0;
                            core::panicking::panic_fmt::he12d0d7468628bb4(&v6, &g_6deba0); /* do not return */
                        }
                    }
                    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v48);
                    v69 = 12;
                    if (a7[2] < v72)
                    {
                        ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v6, a2, a3);
                        v81 = a0;
                        v81[3] = v10;
                        *((int128_t *)&v81[1]) = (int128_t)v7;
                        v69 = 1;
                    }
                    a0[0] = v69;
                    if (!v71)
                        return v69;
                    goto LABEL_560388;
                }
                while (true)
                {
                    v57 = v54->field_8;
                    v0 = v0;
                    if (!(v1 != 9223372036854775809 && (v58 = v54->field_10, v2 = v58, v0 = (unsigned long)v54->field_0, v1 = (unsigned long)v57, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h255b9cb46bd12424(&v18, &v0), v59 = *((int128_t *)&v19), v24 = v59, v0 = v0, v0 != 0x8000000000000000)))
                        goto LABEL_560183;
                    v0 = v18;
                    v60 = v24;
                    v53 = ((v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
                    v1 = v60;
                    v61 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v48, v1, (long long)(&v1)[8]);
                    if (v61)
                    {
                        v68 = a0;
                        v68[0] = 0;
                        v68[1] = v61;
                        ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                        core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&v6);
LABEL_560388:
                        v50 = &v21;
                    }
                    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                    v54 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v6);
                    v0 = v0;
                    v0 = v0;
                    goto LABEL_560183;
                }
            }
        }
    }
    v4 = a1;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::hf59e40ec0b90ed17(&v25, a7);
    v12 = *((long long *)&v27);
    v31 = *((int128_t *)&v25);
    v33 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
    *((int128_t *)&v9) = *((int128_t *)&v26);
    v6 = v31;
    v34 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v6);
    if (v34)
    {
        while (true)
        {
            v42 = v34->field_8;
            v0 = v0;
            v1 = v1;
            if (!(v1 != 9223372036854775809) || !((v43 = v34->field_10, v3 = v43, v0 = (unsigned long)v34->field_0, v1 = v42, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h4a2bc384fee84094(&v13, &v0), v44 = *((int128_t *)&v15), v18 = v44, v0 = v0, v1 = (unsigned long)v1, v0 != 0x8000000000000000)))
                break;
            v0 = v13;
            v45 = (int128_t)v18;
            v33 = ((v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
            v3 = v45;
            v46 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v4, v1, (long long)(&v3)[8]);
            if (v46)
            {
                v51 = a0;
                v51[0] = 0;
                v51[1] = v46;
                ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
                core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&v6);
                return v69;
            }
            ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v0);
            v34 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&v6);
            v0 = v0;
            v1 = v1;
            v0 = v0;
            v1 = v1;
            if (!v34)
                break;
        }
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&v6);
    a7[6] = 1;
    _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92638e6c16058415(&v0, a7);
    v56 = v1;
    v47 = v4;
    if (v56 != 9223372036854775809)
    {
        do
        {
            v36 = (long long)v3;
            if (v56 == 0x8000000000000000)
            {
                v69 = a0;
                v69[0] = 0;
                v69[1] = v36;
                return v69;
            }
            v18 = v56;
            v19 = v36;
            v20 = (long long)(&v3)[8];
            if ((char)regex::regex::string::Regex::is_match_at::ha92ef8a3ebc0bbf1(a4, a5, v19, v20))
            {
                if (v47->field_20->field_63)
                {
LABEL_55ffe9:
                    if (a6 < 2)
                    {
                        v76 = 0;
                        goto LABEL_560342;
                    }
                    else
                    {
                        v75 = a6 + 1;
                        do
                        {
                            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92638e6c16058415(&v6, a7);
                            v77 = v8;
                            if (v77 == 9223372036854775809)
                            {
                                uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v4);
                                ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v13, a2, a3);
                                v82 = a0;
                                v82[3] = v16;
                                *((int128_t *)&v82[1]) = *((int128_t *)&v14);
                                v82[0] = 1;
                                goto LABEL_560406;
                            }
                            if (v77 == 0x8000000000000000)
                            {
                                v79 = a0;
                                v79[0] = 0;
                                v79[1] = v15;
                                goto LABEL_560406;
                            }
                            v14 = v77;
                            v15 = v9;
                            v16 = (long long)(&v9)[8];
                            v78 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v4, v15, v16);
                            if (v78)
                            {
                                v80 = a0;
                                v80[0] = 0;
                                v80[1] = v78;
                                ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v13);
                                goto LABEL_560406;
                            }
                        } while ((::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v13), v75 -= 1, v75 > 2));
                        v76 = 0;
                        goto LABEL_560342;
                    }
                }
                else if (!a6)
                {
                    v9 = v20;
                    *((int128_t *)&v5) = *((int128_t *)&v18);
                    uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::hf666c82950bc0262(&v13, a7, v0, &v6);
                    if (v13 != 0x8000000000000000)
                    {
                        ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v13);
                        v5 = &g_6deb50;
                        v8 = 1;
                        v9 = 8;
                        *((uint128_t *)&v11) = 0;
                        core::panicking::panic_fmt::he12d0d7468628bb4(&v6, &g_6debb8); /* do not return */
                    }
                    ::0x55d080::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&v13);
                    v76 = 1;
LABEL_560342:
                    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v4);
                    v69 = a0;
                    v69[0] = 12;
                    if (v76)
                        return v69;
LABEL_560406:
                    v50 = &v18;
                }
                else
                {
                    v62 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v4, v19, v20);
                    if (!(!v62))
                        goto LABEL_5602d9;
                    goto LABEL_55ffe9;
                }
                v69 = ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(v50);
                return v69;
            }
            v62 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(v47, v19, v20);
            if (v62)
            {
LABEL_5602d9:
                v74 = a0;
                v74[0] = 0;
                v74[1] = v62;
                goto LABEL_560406;
            }
            ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v18);
            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92638e6c16058415(&v0, a7);
            v56 = v1;
        } while (v56 != 9223372036854775809);
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$GT$::h55df8f1ce1418121(&v0);
    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(v47);
    ::0x55d7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&v73[1], a2, a3);
    a0[0] = 3;
    return v69;
}
