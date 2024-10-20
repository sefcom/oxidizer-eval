long long uu_ln::link_files_in_dir::h0087ae664995706a(struct_2 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[55], unsigned long a5)
{
    char v0;  // [sp-0x151]
    struct_1 *v1;  // [bp-0x150], Other Possible Types: char, unsigned long long
    void* v2;  // [sp-0x148], Other Possible Types: unsigned long long
    struct_1 *v3;  // [bp-0x140], Other Possible Types: char, unsigned long long
    unsigned long long v4;  // [sp-0x138]
    void* v5;  // [sp-0x130], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v6;  // [sp-0x128]
    unsigned int v7;  // [sp-0x11c]
    int v8;  // [sp-0x118], Other Possible Types: unsigned long, unsigned long long
    int v9;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x100]
    unsigned long long v11;  // [sp-0xf8]
    unsigned long v12;  // [bp-0xf0], Other Possible Types: char
    int v13;  // [sp-0xe8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14;  // [sp-0xe0]
    unsigned long long v15;  // [sp-0xd8]
    unsigned long long v16;  // [sp-0xd0]
    char v17;  // [bp-0xc8]
    char v18;  // [bp-0xc0]
    unsigned long long v21;  // [sp-0x90]
    int v22;  // [sp-0x88]
    int v23;  // [sp-0x78]
    unsigned long v24;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x60]
    int v26;  // [sp-0x58]
    int v27;  // [sp-0x48]
    struct struct_3 **v29;  // fs
    unsigned long long v30[3];  // rax
    unsigned long long v31;  // r13
    unsigned long long v32;  // rbp
    uint128_t v33[3];  // rax
    unsigned long long v34[3];  // rax
    int v35;  // xmm0
    int v36;  // xmm1
    int v37;  // xmm0
    int v38;  // ymm0
    int v39;  // ymm0
    int v40;  // xmm1
    int v41;  // ymm1
    int v42;  // ymm1
    unsigned long long v43;  // 4096
    unsigned long long v44;  // 4096
    unsigned long long v45;  // r14
    unsigned long long v46;  // r15
    unsigned long long v47;  // r13
    unsigned long long v48;  // rbp
    unsigned long long v49;  // rax
    unsigned long long v50;  // r13
    struct_1 *v51;  // rbx
    struct_1 *v52;  // rdx
    unsigned long long v53;  // rcx
    unsigned long long v55;  // rsi
    int v56;  // xmm0
    unsigned long long v57;  // rax
    unsigned long long v58;  // rsi
    unsigned long long v60;  // rsi
    int v61;  // xmm0
    struct_1 *v64;  // rbx
    unsigned long long v65;  // rax
    unsigned long long v66;  // rsi
    int v67;  // xmm0
    unsigned long long v69;  // rax
    uint128_t *v70;  // rbx
    uint128_t *v71;  // r14
    uint128_t *v72;  // r13
    int v73;  // xmm0
    int v74;  // xmm0
    int v75;  // xmm0
    int v76;  // xmm1
    unsigned long long v78;  // r15
    int v79;  // xmm0
    int v81;  // ymm0
    unsigned long long v82;  // r12
    unsigned long long v83;  // r12
    unsigned long long v85;  // r8
    unsigned long long v86;  // r9
    int v89;  // xmm0
    unsigned long long v92;  // rax
    unsigned long long v93;  // rsi
    int v94;  // xmm0
    int v95;  // xmm0
    int v96;  // xmm0
    unsigned long long v97;  // rsi
    int v98;  // xmm0
    unsigned long long v99;  // r13
    struct struct_0 **v100;  // rax
    struct_1 *v102;  // r13
    unsigned long long v103;  // rbx
    int v106;  // xmm0
    int v107;  // xmm1

    if ((char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3))
    {
        if (*((long long *)&*(v29)->padding_-28[40]))
        {
            v30 = &*(v29)->padding_-28[40];
            v31 = *((long long *)(v30 + &g_0));
            v32 = *((long long *)(v30 + &g_10));
        }
        else
        {
            v31 = std::sys::pal::unix::rand::hashmap_random_keys::h37536acea0ea3646();
            v34 = &*(v29)->padding_-28[40];
            v34[0] = &g_0;
            *((unsigned long long *)(v34 + &g_0)) = v31;
            *((unsigned long long *)(v34 + &g_10)) = v32;
        }
        *((uint128_t **)&*(v29)->padding_-28[32]) = v5 + (char *)&g_0;
        hashbrown::raw::RawTable$LT$T$C$A$GT$::with_capacity_in::h39693ea934056ee7(&v1, a1);
        v5 = v31;
        v6 = v32;
        v37 = *((int128_t *)&v1);
        v39 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37;
        v40 = *((int128_t *)&v3);
        v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
        v22 = v37;
        v23 = v40;
        v24 = v5;
        v25 = v6;
        if (a1)
        {
            v21 = &a0->padding_0[a1 * &g_10];
            v0 = a4[54] == &g_0 & a4[52] != &g_0;
            v7 = v21 | -0x100 | &g_0;
            do
            {
                v45 = v44;
                v46 = v43;
                if (v0 && (char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v46, v45))
                {
                    if ((char)std::path::Path::is_file::h82f08f46fb8d8099(v46, v45))
                    {
                        v49 = std::sys::pal::unix::fs::unlink::h9e34f634412c6081(v46, v45);
                        if (v49)
                        {
                            v8 = v49;
                            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                            v61 = g_4f4ae0;
                            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
                            v9 = v61;
                            v13 = &v9;
                            v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2e51e9afc0b2ed4d;
                            v1 = &g_4ef9e8;
                            v2 = &g_0;
                            v5 = &g_0;
                            v3 = &v13;
                            v4 = &g_0;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v60, v52);
                            v9 = &g_0;
                            v10 = v46;
                            v11 = v45;
                            *((uint128_t **)&v12) = &g_0;
                            v13 = &v9;
                            v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v15 = &v8;
                            v16 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                            v1 = &g_4efa08;
                            v2 = &g_0;
                            v5 = &g_0;
                            v3 = &v13;
                            v4 = &g_0;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v58, v52);
                            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h75f7b1879fd717cc(v8);
                        }
                    }
                    if ((char)std::path::Path::is_dir::h9ac0db933706da51(v46, v45))
                    {
                        v65 = std::sys::pal::unix::fs::rmdir::h028ffaebae6b55a1(v46, v45);
                        if (v65)
                        {
                            v8 = v65;
                            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                            v67 = g_4f4ae0;
                            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
                            v9 = v67;
                            v13 = &v9;
                            v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2e51e9afc0b2ed4d;
                            v1 = &g_4ef9e8;
                            v2 = &g_0;
                            v5 = &g_0;
                            v3 = &v13;
                            v4 = &g_0;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v66, v52);
                            v9 = &g_0;
                            v10 = v46;
                            v11 = v45;
                            *((uint128_t **)&v12) = &g_0;
                            v13 = &v9;
                            v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v15 = &v8;
                            v16 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                            v1 = &g_4efa08;
                            v2 = &g_0;
                            v5 = &g_0;
                            v3 = &v13;
                            v4 = &g_0;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v58, v52);
                            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h75f7b1879fd717cc(v8);
                        }
                    }
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v17, v46, v45);
                }
                else
                {
                    v47 = *((long long *)(a0 + &g_0));
                    v48 = *((long long *)(a0 + &g_10));
                    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v1, v47, v48);
                    if (!v1)
                    {
                        v50 = v2;
                        v51 = v3;
                        std::path::Path::_join::h609728e54bd034cb(&v17, v46, v45, v57, v64);
                    }
                    else
                    {
                        if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                            once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                        v56 = g_4f4ae0;
                        v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
                        v9 = v56;
                        v13 = &v9;
                        v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2e51e9afc0b2ed4d;
                        v1 = &g_4ef9e8;
                        v2 = &g_0;
                        v5 = &g_0;
                        v3 = &v13;
                        v4 = &g_0;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v55, v52);
                        v9 = &g_0;
                        v10 = v47;
                        v11 = v48;
                        *((uint128_t **)&v12) = &g_0;
                        v13 = &v9;
                        v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                        v1 = &g_4efa38.field_0;
                        v2 = &g_0;
                        v5 = &g_0;
                        v3 = &v13;
                        v4 = &g_0;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v58, v52);
                        *((uint128_t **)&v7) = &g_0;
                        v2 = v2;
                        continue;
                    }
                }
                if ((long long)(&v23)[8])
                {
                    v69 = core::hash::BuildHasher::hash_one::hd1ff9f0e3c78cd5c(&v24, &v17);
                    a0 = a0;
                    v70 = (long long)v22;
                    v71 = (long long)(&v22)[8];
                    v72 = v71 & v69;
                    v73 = v69 >> 57;
                    v74 = InterleaveLOV(v73, v73);
                    v75 = (unsigned long long)(v74 >> 64) CONCAT (unsigned short)v74 CONCAT (unsigned short)v74 CONCAT (unsigned short)v74 CONCAT (unsigned short)v74;
                    v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
                    v76 = (unsigned int)v75 CONCAT (unsigned int)v75 CONCAT (unsigned int)v75 CONCAT (unsigned int)v75;
                    v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                    v26 = v76;
                    while (true)
                    {
                        v78 = &g_0;
                        v79 = *((int128_t *)(v70 + v72));
                        v27 = v79;
                        v81 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v79, v76);
                        v82 = UnaryOp GetMSBs;
                        if ((unsigned int)v82)
                        {
                            do
                            {
                                v83 = v82;
                                if ((char)_$LT$Q$u20$as$u20$hashbrown..Equivalent$LT$K$GT$$GT$::equivalent::hff6de77348c1aaa6(&v17, (-(((v83 & 4294967295) == &g_0 ? &g_20 : UnaryOp Ctz & 4294967295) + (char *)v72 & v71) + (-(((v83 & 4294967295) == &g_0 ? &g_20 : UnaryOp Ctz & 4294967295) + (char *)v72 & v71) << &g_0) << &g_0) + v70 - &g_10, v52, v53, v85, v86))
                                {
                                    a0 = a0;
                                    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                                        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                                    v94 = g_4f4ae0;
                                    v9 = v94;
                                    v13 = &v9;
                                    v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2e51e9afc0b2ed4d;
                                    v1 = &g_4ef9e8;
                                    v2 = &g_0;
                                    v5 = &g_0;
                                    v3 = &v13;
                                    v4 = &g_0;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v93, v52);
                                    v95 = *((int128_t *)&v18);
                                    v8 = v95;
                                    v96 = *((int128_t *)(a0 + &g_0));
                                    v39 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
                                    v13 = v96;
                                    v9 = &v8;
                                    v10 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                                    v11 = &v13;
                                    v12 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                                    v1 = &g_4efa58;
                                    v2 = &g_0;
                                    v5 = &g_0;
                                    v3 = &v9;
                                    v4 = &g_0;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v58, v52);
                                    goto LABEL_488fb0;
                                }
                            } while ((v2 = v2, a0 += &g_10, a0 != v21));
                        }
                        v89 = v27;
                        v39 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v89, 340282366920938463463374607431768211455);
                        if (UnaryOp GetMSBs)
                            break;
                        v72 = (char *)v72 + v78 + &g_10 & v71;
                        v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26;
                    }
                    goto LABEL_488fb0;
                }
                v92 = uu_ln::link::heef60a33248c590f(*((long long *)(a0 + &g_0)), *((long long *)(a0 + &g_10)), *((long long *)&v18), *((long long *)&(&v18)[8]), a4);
                if (v92 == &g_0)
                    goto LABEL_488fb8;
                v8 = v92;
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                v98 = g_4f4ae0;
                v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98;
                v9 = v98;
                v13 = &v9;
                v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2e51e9afc0b2ed4d;
                v1 = &g_4ef9e8;
                v2 = &g_0;
                v5 = &g_0;
                v3 = &v13;
                v4 = &g_0;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v97, v52);
                v9 = &v8;
                v10 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h2409172dbc52c148;
                v1 = &g_4efa88;
                v2 = &g_0;
                v5 = &g_0;
                v3 = &v9;
                v4 = &g_0;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v58, v52);
                v99 = v8;
                if (v52->field_0)
                    v100(v99);
                if (*((long long *)(v52 + &g_0)))
                    __rust_dealloc(v99);
LABEL_488fb0:
                *((uint128_t **)&v7) = &g_0;
LABEL_488fb8:
                v102 = *((long long *)&(&v18)[8]);
                if (!v102)
                {
                    v103 = &g_0;
                }
                else if (v102 < 0)
                {
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                }
                else
                {
                    v103 = __rust_alloc(v102, 1);
                    if (!v103)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                }
                memcpy(v2, *((long long *)&v18), v102);
                v1 = v102;
                v2 = v103;
                v3 = v102;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h960686e7d96dd845(&v22, &v1, v52, v53, v85, v86);
                if (*((long long *)&v17))
                    __rust_dealloc(*((long long *)&v18));
                v2 = v2;
            } while ((v2 = v2, a0 += &g_10, a0 != v21));
            if (!((char)v7 & 1))
            {
                v4 = 9223372036854775809;
                v33 = __rust_alloc(48, 8);
                if (v33)
                {
                    v106 = *((int128_t *)&v1);
                    v107 = *((int128_t *)&v3);
                    *((int128_t *)(v33 + &g_20)) = *((int128_t *)&v5);
                    *((void*)(v33 + &g_10)) = v107;
                    *((void*)&v33[0]) = v106;
                    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2a7294f3dc03a270(&v22);
                    return v33;
                }
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
        }
        v33 = &g_0;
        _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2a7294f3dc03a270(&v22);
        return v33;
    }
    else
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v1, a2, a3);
        v4 = 0x8000000000000000;
        v33 = __rust_alloc(48, 8);
        if (v33)
        {
            v35 = *((int128_t *)&v1);
            v36 = *((int128_t *)&v3);
            *((int128_t *)(v33 + &g_20)) = *((int128_t *)&v5);
            *((void*)(v33 + &g_10)) = v36;
            *((void*)&v33[0]) = v35;
            return v33;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
}
