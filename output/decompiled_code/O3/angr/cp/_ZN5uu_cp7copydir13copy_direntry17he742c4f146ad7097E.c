long long uu_cp::copydir::copy_direntry::he742c4f146ad7097(struct_2 *a0, unsigned long long *a1, struct_5 *a2, struct_1 *a3, unsigned long long a4, char a5)
{
    struct_1 *v0;  // [sp-0x228]
    unsigned long long v1;  // [sp-0x220]
    unsigned long long v2;  // [sp-0x218]
    unsigned long long v3;  // [sp-0x210]
    void* v4;  // [sp-0x208]
    char v5;  // [bp-0x1f8]
    char v6;  // [bp-0x1f0]
    unsigned long long v7;  // [sp-0x1e8]
    int v8;  // [sp-0x1d8]
    unsigned long v9;  // [sp-0x1c8]
    unsigned long v10;  // [sp-0x1b8], Other Possible Types: unsigned long long
    int v11;  // [sp-0x1a8], Other Possible Types: struct struct_0 **, unsigned long long
    int v12;  // [sp-0x1a0], Other Possible Types: unsigned long long
    int v13;  // [bp-0x198], Other Possible Types: char *
    char v14;  // [bp-0x190], Other Possible Types: unsigned long
    int v15;  // [sp-0x188]
    unsigned long long v16;  // [sp-0x178]
    int v17;  // [sp-0x168]
    unsigned long v18;  // [sp-0x158]
    char v19;  // [bp-0x148], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v20;  // [sp-0x140]
    struct struct_0 **v21;  // [bp-0x138], Other Possible Types: char
    unsigned long long v22;  // [sp-0x130]
    void* v23;  // [bp-0x128], Other Possible Types: char
    char v24;  // [bp-0x118]
    struct struct_0 **v25;  // [sp-0x108]
    struct_4 *v26;  // [sp-0x100], Other Possible Types: unsigned long long
    int v27;  // [bp-0xf8], Other Possible Types: char, unsigned long long, unsigned long
    char v28;  // [sp-0xf0], Other Possible Types: unsigned long, unsigned long long
    int v29;  // [sp-0xe8], Other Possible Types: struct struct_0 **
    char v30;  // [bp-0xe0], Other Possible Types: unsigned long long
    int v31;  // [bp-0xd8], Other Possible Types: void*
    char v32;  // [bp-0xd0]
    int v33;  // [sp-0xc8]
    char v34;  // [bp-0xc0]
    char v35;  // [bp-0x48]
    char v37;  // r13b
    unsigned long long v38;  // rsi
    unsigned long long v39;  // rdx
    unsigned long v40;  // rsi
    struct_4 *v41;  // rdx
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rax
    int v44;  // xmm0
    int v45;  // xmm1
    int v46;  // xmm2
    unsigned long long v47;  // rax
    int v48;  // xmm0
    int v49;  // xmm1
    unsigned long long v50;  // r14
    unsigned long long v51;  // rcx
    unsigned long long v52;  // r8
    unsigned long long v53;  // r9
    int v55;  // xmm0
    int v56;  // xmm1
    int v57;  // xmm2
    unsigned long long v58;  // rax
    unsigned long long v59;  // rcx
    unsigned long long v60;  // r8
    unsigned long long v61;  // r9

    v7 = a2->field_10;
    v18 = *((long long *)((char *)&a2->field_18 + 8));
    *((int128_t *)&v17) = *((int128_t *)&(&a2->field_10)[1]);
    v9 = a2->field_30;
    *((int128_t *)&v8) = *((int128_t *)&a2->field_28);
    v37 = *((char *)&a2->field_30 + 8);
    v38 = *((long long *)&v6);
    v39 = v7;
    if ((!a3->field_41 & (char)std::path::Path::is_symlink::h6ab8b58756c51c6b(*((long long *)&v6), a2->field_10)))
    {
        uu_cp::copy_link::h3110b816ad64228e(a0, v38, v39, (long long)(&v8)[8], v9, a4);
        goto LABEL_50e0b5;
    }
    if (!((char)std::path::Path::is_dir::h9ac0db933706da51(v38, v39)) || !(!(char)uu_cp::copydir::ends_with_slash_dot::h7ca260d86f8cd653(&v5, v40, v41)))
    {
LABEL_50e151:
        if (!(char)std::path::Path::is_dir::h9ac0db933706da51(*((long long *)&v6), v7))
        {
            if (!a5)
            {
                v4 = 0;
                v3 = v3;
                v2 = v2;
                v1 = a4;
                v0 = a3;
                uu_cp::copy_file::h3a721c0b700148ba(&v27, a1, *((long long *)&v6), v7, (long long)(&v8)[8], v9);
                v47 = v27;
                if (v47 == 3)
                {
                    v50 = (long long)v31;
                    if (!((unsigned int)v47 == 13))
                        goto LABEL_50e459;
                    v11 = 1;
                    *((int128_t *)&v12) = (int128_t)(&v17)[8];
                    v14 = 1;
                    v25 = &v11;
                    v26 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v19 = &g_5b62e0;
                    v20 = 2;
                    v23 = 0;
                    v21 = &v25;
                    v22 = 1;
                    ::0x50d7f0::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v35, &v19);
                    v10 = uucore::mods::error::UIoError::new::h583c767c36d4d604((unsigned int)::0x50d080::std::io::error::Error::kind::hb2ff5fa058639b3d(v50), &v35);
                    v41->field_60(v10, v40);
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
                    v25 = uucore::util_name::h60d842bf27b05e82();
                    v26 = v41;
                    v11 = &v25;
                    v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    v13 = &v10;
                    v14 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hecbc8f9382c41ff5;
                    v19 = &g_5b6300;
                    v20 = 3;
                    v23 = 0;
                    v21 = &v11;
                    v22 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v40, v41);
                    ::0x50d6e0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hd3f979be012334ba(v10, v41);
                    ::0x50d410::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h414e413090760199(v50);
                    switch (v58)
                    {
                    case 3:
                        ::0x50d400::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v28);
                        break;
                    case 13:
                        break;
                    default:
                        ::0x50d2c0::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&v27, v40, v41, v59, v60, v61, *((long long *)&v5), *((long long *)&v6), a2->field_10);
                        break;
                    }
                }
                else if (!((unsigned int)v47 == 13))
                {
                    goto LABEL_50e459;
                }
            }
            else
            {
                v4 = 0;
                v3 = v3;
                v2 = v2;
                v1 = a4;
                v0 = a3;
                uu_cp::copy_file::h3a721c0b700148ba(&v19, a1, *((long long *)&v6), v7, (long long)(&v8)[8], v9);
                if (*((int *)&v19) == 13)
                    goto LABEL_50e165;
                v48 = *((int128_t *)&v19);
                v49 = *((int128_t *)&v21);
                *((int128_t *)&v33) = *((int128_t *)&v24);
                *((int128_t *)&v31) = *((int128_t *)&v23);
                v29 = v49;
                v27 = v48;
                if ((char)std::path::Path::is_symlink::h6ab8b58756c51c6b(*((long long *)&v6), v7))
                {
                    ::0x50d2c0::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&v27, v40, v41, v51, v52, v53, *((long long *)&v5), *((long long *)&v6), a2->field_10);
                    goto LABEL_50e165;
                }
                else
                {
                    v43 = v27;
                    *((int128_t *)&v11) = (int128_t)(&v27)[8];
                    *((int128_t *)&v13) = (int128_t)(&v29)[8];
                    *((int128_t *)&v15) = (int128_t)(&v31)[8];
                    v16 = (long long)(&v33)[8];
                    if (v43 == 13)
                        goto LABEL_50e165;
                    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v16;
                }
LABEL_50e5f7:
                *((void*)((char *)&a0->field_10 + 8)) = v46;
                *((void*)((char *)&a0->field_8 + 8)) = v45;
                *((void*)&(&a0->field_0)[1]) = v44;
                a0->field_0 = v43;
                goto LABEL_50e0b5;
            }
        }
LABEL_50e165:
        a0->field_0 = 13;
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v8);
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v17);
    }
    else
    {
        std::fs::metadata::h003d8cdbffde7c56(&v27, (long long)(&v8)[8], v9);
        v42 = v28;
        if (v27 != 2)
        {
            ::0x50d720::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(v27, v42);
            goto LABEL_50e151;
        }
        ::0x50d720::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(2, v42);
        if (v37)
        {
            _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(&v27, "cannot overwrite non-directory with directorycannot open  for reading: -r not specified; omitting directory cannot copy a directory, , into itself, ", 45);
LABEL_50e459:
            v55 = *((int128_t *)&v27);
            v56 = (int128_t)v29;
            v57 = (int128_t)v31;
            *((void*)&a0->field_18) = v33;
            *((void*)&a0->field_10) = v57;
            *((void*)&a0->field_8) = v56;
            *((void*)&a0->field_0) = v55;
        }
        else
        {
            uu_cp::copydir::build_dir::h8f7105fdecd19cc9(&v27, a3->field_30, *((char *)&a3->field_30 + 2), &v8, 0);
            v43 = v27;
            if (v43 != 13)
            {
                *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v34);
                v44 = *((int128_t *)&v28);
                v45 = *((int128_t *)&v30);
                v46 = *((int128_t *)&v32);
                goto LABEL_50e5f7;
            }
            else
            {
                if (a3->field_48)
                {
                    uu_cp::context_for::h98549e35fded8509(&v19, (long long)(&v17)[8], v18, (long long)(&v8)[8], v9);
                    v11 = &v19;
                    v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v27 = &g_5b62c0;
                    v28 = 2;
                    v31 = 0;
                    v29 = &v11;
                    v30 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v27, v40, v41);
                    ::0x50d400::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v19);
                }
                a0->field_0 = 13;
            }
        }
LABEL_50e0b5:
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v8);
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v17);
    }
    return ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v5);
}
