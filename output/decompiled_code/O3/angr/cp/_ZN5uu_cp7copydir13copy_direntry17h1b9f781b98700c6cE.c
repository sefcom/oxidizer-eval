long long uu_cp::copydir::copy_direntry::h1b9f781b98700c6c(struct_4 *a0, unsigned long long *a1, struct_0 *a2, struct_1 *a3, unsigned long long a4, char a5)
{
    struct_1 *v0;  // [sp-0x228]
    unsigned long long v1;  // [sp-0x220]
    unsigned long long v2;  // [sp-0x218]
    unsigned long long v3;  // [sp-0x210]
    void* v4;  // [sp-0x208]
    char v5;  // [bp-0x1f8]
    char v6;  // [bp-0x1f0]
    unsigned long v7;  // [sp-0x1e8]
    int v8;  // [sp-0x1d8]
    unsigned long v9;  // [sp-0x1c8]
    unsigned long v10;  // [sp-0x1b8], Other Possible Types: unsigned long long
    int v11;  // [sp-0x1a8], Other Possible Types: unsigned long, unsigned long long
    int v12;  // [sp-0x1a0], Other Possible Types: unsigned long long
    int v13;  // [bp-0x198], Other Possible Types: unsigned long long
    char v14;  // [bp-0x190], Other Possible Types: unsigned long
    int v15;  // [sp-0x188]
    unsigned long long v16;  // [sp-0x178]
    int v17;  // [sp-0x168]
    unsigned long v18;  // [sp-0x158]
    char v19;  // [bp-0x148], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v20;  // [sp-0x140]
    char v21;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x130]
    void* v23;  // [bp-0x128], Other Possible Types: char
    char v24;  // [bp-0x118]
    unsigned long v25;  // [sp-0x108], Other Possible Types: unsigned long long
    struct_3 *v26;  // [sp-0x100], Other Possible Types: unsigned long long
    int v27;  // [bp-0xf8], Other Possible Types: char, unsigned long long, unsigned long
    char v28;  // [sp-0xf0], Other Possible Types: unsigned long, unsigned long long
    int v29;  // [sp-0xe8], Other Possible Types: unsigned long long
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
    struct_3 *v41;  // rdx
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
        uu_cp::copy_link::h5de0af9a5e6f78e7(a0, v38, v39, (long long)(&v8)[8], v9, a4);
        goto LABEL_50d6f5;
    }
    if (!((char)std::path::Path::is_dir::h9ac0db933706da51(v38, v39)) || !(!(char)uu_cp::copydir::ends_with_slash_dot::hda147727efed43dc(&v5, v40, v41)))
    {
LABEL_50d791:
        if (!(char)std::path::Path::is_dir::h9ac0db933706da51(*((long long *)&v6), v7))
        {
            if (!a5)
            {
                v4 = 0;
                v3 = v3;
                v2 = v2;
                v1 = a4;
                v0 = a3;
                uu_cp::copy_file::h137dae572520ab74(&v27, a1, *((long long *)&v6), v7, (long long)(&v8)[8], v9);
                v47 = v27;
                if (v47 == 3)
                {
                    v50 = (long long)v31;
                    if (!((unsigned int)v47 == 13))
                        goto LABEL_50da99;
                    v11 = 1;
                    *((int128_t *)&v12) = (int128_t)(&v17)[8];
                    v14 = 1;
                    v25 = &v11;
                    v26 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v19 = &g_5b5c10;
                    v20 = 2;
                    v23 = 0;
                    v21 = &v25;
                    v22 = 1;
                    ::0x50ce30::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v35, &v19);
                    v10 = uucore::mods::error::UIoError::new::hefa603f096dcf915((unsigned int)::0x50c6c0::std::io::error::Error::kind::hb2ff5fa058639b3d(v50), &v35);
                    v41->field_60(v10, v40);
                    uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                    v25 = uucore::util_name::h412db5e565a079f3();
                    v26 = v41;
                    v11 = &v25;
                    v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcead1029d5dc0e68;
                    v13 = &v10;
                    v14 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h345e45a07ffe1851;
                    v19 = &g_5b5c30;
                    v20 = 3;
                    v23 = 0;
                    v21 = &v11;
                    v22 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v40, v41);
                    ::0x50cd20::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::haf1db93381de15e7(v10, v41);
                    ::0x50ca50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h4f559f27cf60183f(v50);
                    switch (v58)
                    {
                    case 3:
                        ::0x50ca40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v28);
                        break;
                    case 13:
                        break;
                    default:
                        ::0x50c900::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h519777060ae72029(&v27, v40, v41, v59, v60, v61, *((long long *)&v5), *((long long *)&v6), a2->field_10);
                        break;
                    }
                }
                else if (!((unsigned int)v47 == 13))
                {
                    goto LABEL_50da99;
                }
            }
            else
            {
                v4 = 0;
                v3 = v3;
                v2 = v2;
                v1 = a4;
                v0 = a3;
                uu_cp::copy_file::h137dae572520ab74(&v19, a1, *((long long *)&v6), v7, (long long)(&v8)[8], v9);
                if (*((int *)&v19) == 13)
                    goto LABEL_50d7a5;
                v48 = *((int128_t *)&v19);
                v49 = *((int128_t *)&v21);
                *((int128_t *)&v33) = *((int128_t *)&v24);
                *((int128_t *)&v31) = *((int128_t *)&v23);
                v29 = v49;
                v27 = v48;
                if ((char)std::path::Path::is_symlink::h6ab8b58756c51c6b(*((long long *)&v6), v7))
                {
                    ::0x50c900::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h519777060ae72029(&v27, v40, v41, v51, v52, v53, *((long long *)&v5), *((long long *)&v6), a2->field_10);
                    goto LABEL_50d7a5;
                }
                else
                {
                    v43 = v27;
                    *((int128_t *)&v11) = (int128_t)(&v27)[8];
                    *((int128_t *)&v13) = (int128_t)(&v29)[8];
                    *((int128_t *)&v15) = (int128_t)(&v31)[8];
                    v16 = (long long)(&v33)[8];
                    if (v43 == 13)
                        goto LABEL_50d7a5;
                    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v16;
                }
LABEL_50dc37:
                *((void*)((char *)&a0->field_10 + 8)) = v46;
                *((void*)((char *)&a0->field_8 + 8)) = v45;
                *((void*)&(&a0->field_0)[1]) = v44;
                a0->field_0 = v43;
                goto LABEL_50d6f5;
            }
        }
LABEL_50d7a5:
        a0->field_0 = 13;
        ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v8);
        ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v17);
    }
    else
    {
        std::fs::metadata::hb89aa4d693159f5b(&v27, (long long)(&v8)[8], v9);
        v42 = v28;
        if (v27 != 2)
        {
            ::0x50cd60::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf5a3bed3556a31f4(v27, v42);
            goto LABEL_50d791;
        }
        ::0x50cd60::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf5a3bed3556a31f4(2, v42);
        if (v37)
        {
            _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::hcb169799d716d029(&v27, "cannot overwrite non-directory with directorycannot open  for reading: -r not specified; omitting directory cannot copy a directory, , into itself, ", 45);
LABEL_50da99:
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
            uu_cp::copydir::build_dir::h4e0004d689f7d2f4(&v27, a3->field_30, *((char *)&a3->field_30 + 2), &v8, 0);
            v43 = v27;
            if (v43 != 13)
            {
                *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v34);
                v44 = *((int128_t *)&v28);
                v45 = *((int128_t *)&v30);
                v46 = *((int128_t *)&v32);
                goto LABEL_50dc37;
            }
            else
            {
                if (a3->field_48)
                {
                    uu_cp::context_for::h3e296cd4ee9c0cb4(&v19, (long long)(&v17)[8], v18, (long long)(&v8)[8], v9);
                    v11 = &v19;
                    v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v27 = &g_5b5bf0;
                    v28 = 2;
                    v31 = 0;
                    v29 = &v11;
                    v30 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v27, v40, v41);
                    ::0x50ca40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v19);
                }
                a0->field_0 = 13;
            }
        }
LABEL_50d6f5:
        ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v8);
        ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v17);
    }
    return ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v5);
}
