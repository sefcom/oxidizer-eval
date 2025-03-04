long long uu_cp::copydir::copy_direntry::he742c4f146ad7097(struct_2 *a0, unsigned long long *a1, struct_1 *a2, struct_5 *a3, unsigned long long a4, char a5)
{
    unsigned long long v0;  // [sp-0x220]
    unsigned long long v1;  // [sp-0x218]
    unsigned long long v2;  // [sp-0x210]
    void* v3;  // [sp-0x208]
    int v4;  // [sp-0x1f8]
    unsigned long long v5;  // [sp-0x1e8]
    int v6;  // [sp-0x1d8]
    unsigned long v7;  // [sp-0x1c8]
    unsigned long v8;  // [sp-0x1b8]
    int v9;  // [sp-0x1a8], Other Possible Types: struct struct_0 **
    int v10;  // [sp-0x1a0], Other Possible Types: unsigned long long
    int v11;  // [bp-0x198], Other Possible Types: char *
    char v12;  // [bp-0x190], Other Possible Types: unsigned long
    int v13;  // [sp-0x188]
    unsigned long long v14;  // [sp-0x178]
    int v15;  // [sp-0x168]
    unsigned long v16;  // [sp-0x158]
    char v17;  // [bp-0x148], Other Possible Types: unsigned long
    unsigned long long v18;  // [sp-0x140]
    struct struct_0 **v19;  // [bp-0x138], Other Possible Types: char
    unsigned long long v20;  // [sp-0x130]
    void* v21;  // [bp-0x128], Other Possible Types: char
    char v22;  // [bp-0x118]
    struct struct_0 **v23;  // [sp-0x108]
    struct_4 *v24;  // [sp-0x100], Other Possible Types: unsigned long long
    int v25;  // [sp-0xf8], Other Possible Types: char, unsigned long long, unsigned long
    char v26;  // [bp-0xf0], Other Possible Types: unsigned long, unsigned long long
    int v27;  // [sp-0xe8], Other Possible Types: struct struct_0 **
    char v28;  // [bp-0xe0], Other Possible Types: unsigned long long
    int v29;  // [bp-0xd8], Other Possible Types: void*
    char v30;  // [bp-0xd0]
    int v31;  // [sp-0xc8]
    char v32;  // [bp-0xc0]
    char v33;  // [bp-0x48]
    char v35;  // r13b
    unsigned long long v36;  // rsi
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rsi
    unsigned long long v39;  // rax
    int v40;  // xmm0
    int v41;  // xmm1
    int v42;  // xmm2
    unsigned long long v43;  // rax
    int v44;  // xmm0
    int v45;  // xmm1
    unsigned long long v46;  // r14
    int v48;  // xmm0
    int v49;  // xmm1
    int v50;  // xmm2
    struct_4 *v51;  // rdx
    unsigned long long v52;  // rax

    v5 = a2->field_10;
    *((uint128_t *)&v4) = a2->field_0;
    v16 = *((long long *)((char *)&a2->field_18 + 8));
    *((int128_t *)&v15) = *((int128_t *)&(&a2->field_10)[1]);
    v7 = a2->field_30;
    *((int128_t *)&v6) = *((int128_t *)&a2->field_28);
    v35 = *((char *)&a2->field_30 + 8);
    v36 = (long long)(&v4)[8];
    v37 = v5;
    if ((!a3->field_41 & (char)std::path::Path::is_symlink::h6ab8b58756c51c6b((long long)(&v4)[8], a2->field_10)))
    {
        uu_cp::copy_link::h3110b816ad64228e(a0, v36, v37, (long long)(&v6)[8], v7, a4);
        goto LABEL_50e0b5;
    }
    if (!((char)std::path::Path::is_dir::h9ac0db933706da51(v36, v37)) || !(!(char)uu_cp::copydir::ends_with_slash_dot::h7ca260d86f8cd653(&v4)))
    {
LABEL_50e151:
        if (!(char)std::path::Path::is_dir::h9ac0db933706da51((long long)(&v4)[8], v5))
        {
            if (!a5)
            {
                v3 = 0;
                v2 = v2;
                v1 = v1;
                v0 = a4;
                uu_cp::copy_file::h3a721c0b700148ba(&v25, a1, (long long)(&v4)[8], v5, (long long)(&v6)[8], v7, a3);
                v43 = v25;
                if (v43 == 3)
                {
                    v46 = (long long)v29;
                    if (!((char)::0x50d080::std::io::error::Error::kind::hb2ff5fa058639b3d(v46) == 1))
                        goto LABEL_50e459;
                    v9 = 1;
                    *((int128_t *)&v10) = (int128_t)(&v15)[8];
                    v12 = 1;
                    v23 = &v9;
                    v24 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v17 = &g_5b62e0;
                    v18 = 2;
                    v21 = 0;
                    v19 = &v23;
                    v20 = 1;
                    ::0x50d7f0::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v33, &v17);
                    v8 = uucore::mods::error::UIoError::new::h583c767c36d4d604((unsigned int)::0x50d080::std::io::error::Error::kind::hb2ff5fa058639b3d(v46), &v33);
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v51->field_60(v8));
                    v23 = uucore::util_name::h60d842bf27b05e82();
                    v24 = v51;
                    v9 = &v23;
                    v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    v11 = &v8;
                    v12 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hecbc8f9382c41ff5;
                    v17 = &g_5b6300;
                    v18 = 3;
                    v21 = 0;
                    v19 = &v9;
                    v20 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v17);
                    ::0x50d6e0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hd3f979be012334ba(v8, v51);
                    ::0x50d410::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h414e413090760199(v46);
                    switch (v52)
                    {
                    case 3:
                        ::0x50d400::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v26);
                        break;
                    case 13:
                        break;
                    default:
                        ::0x50d2c0::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&v25);
                        break;
                    }
                }
                else if (!((unsigned int)v43 == 13))
                {
                    goto LABEL_50e459;
                }
            }
            else
            {
                v3 = 0;
                v2 = v2;
                v1 = v1;
                v0 = a4;
                uu_cp::copy_file::h3a721c0b700148ba(&v17, a1, (long long)(&v4)[8], v5, (long long)(&v6)[8], v7, a3);
                if (*((int *)&v17) == 13)
                    goto LABEL_50e165;
                v44 = *((int128_t *)&v17);
                v45 = *((int128_t *)&v19);
                *((int128_t *)&v31) = *((int128_t *)&v22);
                *((int128_t *)&v29) = *((int128_t *)&v21);
                v27 = v45;
                v25 = v44;
                if ((char)std::path::Path::is_symlink::h6ab8b58756c51c6b((long long)(&v4)[8], v5))
                {
                    ::0x50d2c0::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&v25);
                    goto LABEL_50e165;
                }
                else
                {
                    v39 = v25;
                    *((int128_t *)&v9) = (int128_t)(&v25)[8];
                    *((int128_t *)&v11) = (int128_t)(&v27)[8];
                    *((int128_t *)&v13) = (int128_t)(&v29)[8];
                    v14 = (long long)(&v31)[8];
                    if (v39 == 13)
                        goto LABEL_50e165;
                    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v14;
                }
LABEL_50e5f7:
                *((void*)((char *)&a0->field_10 + 8)) = v42;
                *((void*)((char *)&a0->field_8 + 8)) = v41;
                *((void*)&(&a0->field_0)[1]) = v40;
                a0->field_0 = v39;
                goto LABEL_50e0b5;
            }
        }
LABEL_50e165:
        a0->field_0 = 13;
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v6);
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v15);
    }
    else
    {
        std::fs::metadata::h003d8cdbffde7c56(&v25, (long long)(&v6)[8], v7);
        v38 = v26;
        if (v25 != 2)
        {
            ::0x50d720::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(v25, v38);
            goto LABEL_50e151;
        }
        ::0x50d720::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(2, v38);
        if (v35)
        {
            _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(&v25, "cannot overwrite non-directory with directorycannot open  for reading: -r not specified; omitting directory cannot copy a directory, , into itself, ", 45);
LABEL_50e459:
            v48 = *((int128_t *)&v25);
            v49 = (int128_t)v27;
            v50 = (int128_t)v29;
            *((void*)&a0->field_18) = v31;
            *((void*)&a0->field_10) = v50;
            *((void*)&a0->field_8) = v49;
            *((void*)&a0->field_0) = v48;
        }
        else
        {
            uu_cp::copydir::build_dir::h8f7105fdecd19cc9(&v25, a3->field_30, *((char *)&a3->field_30 + 2), &v6, 0);
            v39 = v25;
            if (v39 != 13)
            {
                *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v32);
                v40 = *((int128_t *)&v26);
                v41 = *((int128_t *)&v28);
                v42 = *((int128_t *)&v30);
                goto LABEL_50e5f7;
            }
            else
            {
                if (a3->field_48)
                {
                    uu_cp::context_for::h98549e35fded8509(&v17, (long long)(&v15)[8], v16, (long long)(&v6)[8], v7);
                    v9 = &v17;
                    v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v25 = &g_5b62c0;
                    v26 = 2;
                    v29 = 0;
                    v27 = &v9;
                    v28 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v25);
                    ::0x50d400::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v17);
                }
                a0->field_0 = 13;
            }
        }
LABEL_50e0b5:
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v6);
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v15);
    }
    return ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v4);
}
