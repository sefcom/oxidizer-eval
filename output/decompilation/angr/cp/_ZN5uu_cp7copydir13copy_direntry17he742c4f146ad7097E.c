long long uu_cp::copydir::copy_direntry::he742c4f146ad7097(struct_5 *a0, unsigned long long *a1, struct_4 *a2, struct_1 *a3, unsigned long long a4, char a5)
{
    struct_1 *v0;  // [sp-0x228]
    unsigned long long v1;  // [sp-0x220]
    unsigned long long v2;  // [sp-0x218]
    unsigned long long v3;  // [sp-0x210]
    void* v4;  // [sp-0x208]
    int v5;  // [sp-0x1f8]
    unsigned long long v6;  // [sp-0x1e8]
    int v7;  // [sp-0x1d8]
    unsigned long v8;  // [sp-0x1c8]
    unsigned long v9;  // [sp-0x1b8], Other Possible Types: unsigned long long
    int v10;  // [sp-0x1a8], Other Possible Types: struct struct_0 **, unsigned long long
    int v11;  // [sp-0x1a0], Other Possible Types: unsigned long long
    int v12;  // [bp-0x198], Other Possible Types: char *
    char v13;  // [bp-0x190], Other Possible Types: unsigned long
    int v14;  // [sp-0x188]
    unsigned long long v15;  // [sp-0x178]
    int v16;  // [sp-0x168]
    unsigned long v17;  // [sp-0x158]
    char v18;  // [bp-0x148], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v19;  // [sp-0x140]
    struct struct_0 **v20;  // [bp-0x138], Other Possible Types: char
    unsigned long long v21;  // [sp-0x130]
    void* v22;  // [bp-0x128], Other Possible Types: char
    char v23;  // [bp-0x118]
    struct struct_0 **v24;  // [sp-0x108]
    struct_3 *v25;  // [sp-0x100], Other Possible Types: unsigned long long
    int v26;  // [bp-0xf8], Other Possible Types: char, unsigned long long, unsigned long
    char v27;  // [sp-0xf0], Other Possible Types: unsigned long, unsigned long long
    int v28;  // [sp-0xe8], Other Possible Types: struct struct_0 **
    char v29;  // [bp-0xe0], Other Possible Types: unsigned long long
    int v30;  // [bp-0xd8], Other Possible Types: void*
    char v31;  // [bp-0xd0]
    int v32;  // [sp-0xc8]
    char v33;  // [bp-0xc0]
    char v34;  // [bp-0x48]
    char v36;  // r13b
    unsigned long long v37;  // rsi
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rsi
    unsigned long long v40;  // rax
    int v41;  // xmm0
    int v42;  // xmm1
    int v43;  // xmm2
    unsigned long long v44;  // rax
    int v45;  // xmm0
    int v46;  // xmm1
    unsigned int v48;  // eax
    int v49;  // xmm0
    int v50;  // xmm1
    int v51;  // xmm2
    struct_3 *v52;  // rdx
    unsigned long long v53;  // rax

    v6 = a2->field_10;
    *((uint128_t *)&v5) = a2->field_0;
    v17 = *((long long *)((char *)&a2->field_18 + 8));
    *((int128_t *)&v16) = *((int128_t *)&(&a2->field_10)[1]);
    v8 = a2->field_30;
    *((int128_t *)&v7) = *((int128_t *)&a2->field_28);
    v36 = *((char *)&a2->field_30 + 8);
    v37 = (long long)(&v5)[8];
    v38 = v6;
    if ((!a3->field_41 & (char)std::path::Path::is_symlink::h6ab8b58756c51c6b((long long)(&v5)[8], a2->field_10)))
    {
        uu_cp::copy_link::h3110b816ad64228e(a0, v37, v38, (long long)(&v7)[8], v8, a4);
        goto LABEL_50e0b5;
    }
    if (!((char)std::path::Path::is_dir::h9ac0db933706da51(v37, v38)) || !(!(char)uu_cp::copydir::ends_with_slash_dot::h7ca260d86f8cd653(&v5)))
    {
LABEL_50e151:
        if (!(char)std::path::Path::is_dir::h9ac0db933706da51((long long)(&v5)[8], v6))
        {
            if (!a5)
            {
                v4 = 0;
                v3 = v3;
                v2 = v2;
                v1 = a4;
                v0 = a3;
                uu_cp::copy_file::h3a721c0b700148ba(&v26, a1, (long long)(&v5)[8], v6, (long long)(&v7)[8], v8);
                v44 = v26;
                if (v44 == 3)
                {
                    if (!((unsigned int)v44 == 13))
                        goto LABEL_50e459;
                    v48 = ::0x50d080::std::io::error::Error::kind::hb2ff5fa058639b3d((long long)v30);
                    v10 = 1;
                    *((int128_t *)&v11) = (int128_t)(&v16)[8];
                    v13 = 1;
                    v24 = &v10;
                    v25 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v18 = &g_5b62e0;
                    v19 = 2;
                    v22 = 0;
                    v20 = &v24;
                    v21 = 1;
                    ::0x50d7f0::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2();
                    v9 = uucore::mods::error::UIoError::new::h583c767c36d4d604(v48, &v34);
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v52->field_60(v9));
                    v24 = uucore::util_name::h60d842bf27b05e82();
                    v25 = v52;
                    v10 = &v24;
                    v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    v12 = &v9;
                    v13 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hecbc8f9382c41ff5;
                    v18 = &g_5b6300;
                    v19 = 3;
                    v22 = 0;
                    v20 = &v10;
                    v21 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v18);
                    ::0x50d6e0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hd3f979be012334ba(v9, v52);
                    ::0x50d410::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h414e413090760199();
                    switch (v53)
                    {
                    case 3:
                        ::0x50d400::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v27);
                        break;
                    case 13:
                        break;
                    default:
                        ::0x50d2c0::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&v26);
                        break;
                    }
                }
                else if (!((unsigned int)v44 == 13))
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
                uu_cp::copy_file::h3a721c0b700148ba(&v18, a1, (long long)(&v5)[8], v6, (long long)(&v7)[8], v8);
                if (*((int *)&v18) == 13)
                    goto LABEL_50e165;
                v45 = *((int128_t *)&v18);
                v46 = *((int128_t *)&v20);
                *((int128_t *)&v32) = *((int128_t *)&v23);
                *((int128_t *)&v30) = *((int128_t *)&v22);
                v28 = v46;
                v26 = v45;
                if ((char)std::path::Path::is_symlink::h6ab8b58756c51c6b((long long)(&v5)[8], v6))
                {
                    ::0x50d2c0::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&v26);
                    goto LABEL_50e165;
                }
                else
                {
                    v40 = v26;
                    *((int128_t *)&v10) = (int128_t)(&v26)[8];
                    *((int128_t *)&v12) = (int128_t)(&v28)[8];
                    *((int128_t *)&v14) = (int128_t)(&v30)[8];
                    v15 = (long long)(&v32)[8];
                    if (v40 == 13)
                        goto LABEL_50e165;
                    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v15;
                }
LABEL_50e5f7:
                *((void*)((char *)&a0->field_10 + 8)) = v43;
                *((void*)((char *)&a0->field_8 + 8)) = v42;
                *((void*)&(&a0->field_0)[1]) = v41;
                a0->field_0 = v40;
                goto LABEL_50e0b5;
            }
        }
LABEL_50e165:
        a0->field_0 = 13;
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
    }
    else
    {
        std::fs::metadata::h003d8cdbffde7c56(&v26, (long long)(&v7)[8], v8);
        v39 = v27;
        if (v26 != 2)
        {
            ::0x50d720::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(v26, v39);
            goto LABEL_50e151;
        }
        ::0x50d720::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(2, v39);
        if (v36)
        {
            _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(&v26, "cannot overwrite non-directory with directorycannot open  for reading: -r not specified; omitting directory cannot copy a directory, , into itself, ", 45);
LABEL_50e459:
            v49 = *((int128_t *)&v26);
            v50 = (int128_t)v28;
            v51 = (int128_t)v30;
            *((void*)&a0->field_18) = v32;
            *((void*)&a0->field_10) = v51;
            *((void*)&a0->field_8) = v50;
            *((void*)&a0->field_0) = v49;
        }
        else
        {
            uu_cp::copydir::build_dir::h8f7105fdecd19cc9(&v26, a3->field_30, *((char *)&a3->field_30 + 2), &v7, 0);
            v40 = v26;
            if (v40 != 13)
            {
                *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v33);
                v41 = *((int128_t *)&v27);
                v42 = *((int128_t *)&v29);
                v43 = *((int128_t *)&v31);
                goto LABEL_50e5f7;
            }
            else
            {
                if (a3->field_48)
                {
                    uu_cp::context_for::h98549e35fded8509(&v18, (long long)(&v16)[8], v17, (long long)(&v7)[8], v8);
                    v10 = &v18;
                    v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v26 = &g_5b62c0;
                    v27 = 2;
                    v30 = 0;
                    v28 = &v10;
                    v29 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v26);
                    ::0x50d400::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v18);
                }
                a0->field_0 = 13;
            }
        }
LABEL_50e0b5:
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
    }
    return ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
}
