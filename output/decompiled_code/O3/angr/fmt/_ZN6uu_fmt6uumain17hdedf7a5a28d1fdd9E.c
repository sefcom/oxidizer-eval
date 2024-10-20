long long uu_fmt::uumain::hdedf7a5a28d1fdd9(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3e8], Other Possible Types: unsigned long, unsigned long long
    struct_2 *v1;  // [sp-0x3e0]
    struct_1 *v2;  // [sp-0x3d8]
    struct_2 *v3;  // [bp-0x3d0], Other Possible Types: char
    struct_1 *v4;  // [sp-0x3c8]
    char v5;  // [bp-0x3c0]
    char v6;  // [bp-0x3b8], Other Possible Types: unsigned long, unsigned long long
    char *v7;  // [sp-0x3b0], Other Possible Types: struct_1 *, unsigned long long
    int v8;  // [bp-0x3a8], Other Possible Types: char
    int v9;  // [sp-0x398]
    unsigned long long v10;  // [sp-0x388]
    char v11;  // [bp-0x380]
    char v12;  // [bp-0x378]
    char v13;  // [bp-0x370]
    int v14;  // [sp-0x368], Other Possible Types: void*, struct struct_2 **, unsigned long, unsigned long long
    unsigned long v15;  // [sp-0x360], Other Possible Types: unsigned long long
    struct_1 *v16;  // [sp-0x358], Other Possible Types: unsigned long, unsigned long long
    int v17;  // [bp-0x350], Other Possible Types: char
    char v18;  // [bp-0x348]
    int v19;  // [sp-0x340]
    char v20;  // [bp-0x338]
    int v21;  // [sp-0x330]
    unsigned long long v22;  // [sp-0x320]
    char v23;  // [bp-0x310]
    char v24;  // [bp-0x300]
    int v25;  // [bp-0x2f8], Other Possible Types: unsigned int, unsigned long
    struct_2 *v26;  // [sp-0x2f0], Other Possible Types: unsigned long long
    struct struct_3 **v27;  // [sp-0x2e8], Other Possible Types: struct_1 *, unsigned long long
    unsigned int v28;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v29;  // [sp-0x2d8]
    char v30;  // [bp-0x2d0]
    char v31;  // [bp-0x2c0]
    char v32;  // [bp-0x2b0]
    unsigned long long v34[6];  // rax
    unsigned long long v35;  // rsi
    unsigned long long v36;  // rbx
    char *v37;  // r14
    unsigned long long v38;  // rax
    char v39[4];  // rax
    unsigned long long v40;  // rcx
    unsigned int v41;  // esi
    unsigned int v42;  // edx
    char v43[4];  // rax
    unsigned int v44;  // edi
    unsigned int v45;  // r8d
    unsigned long long v46;  // rdx
    unsigned int v47;  // esi
    unsigned int v48;  // r8d
    unsigned int v49;  // edi
    struct_2 *v50;  // rax
    unsigned long long v51;  // rcx
    int v52;  // xmm0
    struct_1 *v54;  // r14
    unsigned long long v55;  // rax
    struct_1 *v56;  // rbp
    unsigned long long v57[3];  // r13
    unsigned long long v58;  // rsi
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rcx
    unsigned long long v61;  // r8
    unsigned long long v62;  // r9
    unsigned long long v64;  // rsi
    struct_1 *v65;  // rdx
    unsigned int v66;  // eax
    struct_2 *v67;  // r14
    struct_1 *v68;  // r15
    struct struct_0 **v69;  // rax

    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h63e1357c08897abc(&v11, a0, a1);
    if (*((long long *)&v13) >= 2)
    {
        v34 = *((long long *)&v12);
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v6, v34[4], v34[5]);
        v35 = *((long long *)&v8);
        v25 = 45;
        if (!((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h49a60b504ab1f04e(v7, v35, &v25, 1)) || !(v36) || !((v37 = v7, v38 = (unsigned long long)(char)*((char *)(unsigned long long)(*(v37) + &g_410fff)), v36 != v38)))
        {
LABEL_43882e:
            if (v6 != 0x8000000000000000)
            {
                _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h87f1ebff5631ea8d();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2037233d5e7a2dfa(&v6);
            }
            goto LABEL_438849;
        }
        else
        {
            v39 = &v37[v38];
            v40 = v39[0];
            if ((char)v40 >= 0)
            {
                if (!((unsigned int)v40 - 48 <= 9))
                    goto LABEL_43882e;
                v43 = &v39[1];
                goto LABEL_43879d;
            }
            v41 = (unsigned int)v40 & 31;
            v42 = v39[1] & 63;
            if ((v40 & 255) < 224)
            {
                if (!((v41 << 6) + v42 - 48 <= 9))
                    goto LABEL_43882e;
                v43 = &v39[2];
                goto LABEL_43879d;
            }
            v44 = v39[2] & 63;
            v45 = v42 * 64 | v44;
            if ((v40 & 255) < 240)
            {
                if (!(v45 + (v41 << 12) - 48 <= 9))
                    goto LABEL_43882e;
                v43 = &v39[3];
            }
            else
            {
                if (!(((v41 & 7) << 18) + (v39[3] & 62 | v45 << 6) - 48 < 10) || !((v39[3] & 63 | v44 << 6 | v42 << 12 | ((unsigned int)v40 & 7) << 18) != 0x110000))
                    goto LABEL_43882e;
                v43 = v39 + 1;
            }
LABEL_43879d:
        }
        do
        {
            if (v43 == &v37[v36])
                goto LABEL_43882e;
            v46 = v43[0];
            if ((char)v46 >= 0)
            {
                v43 = &v43[1];
                goto LABEL_4387b3;
            }
            v47 = (unsigned int)v46 & 31;
            v48 = v43[1] & 63;
            if ((v46 & 255) <= 223)
            {
                v43 = &v43[2];
                v46 = v47 * 64 | v48;
                goto LABEL_4387b3;
            }
            v49 = v43[2] & 63 | v48 * 64;
            if ((v46 & 255) >= 240)
            {
                v46 = v43[3] & 63 | v49 * 64 | (v47 & 7) * 0x40000;
                if ((unsigned int)v46 == 0x110000)
                    goto LABEL_43882e;
                v43 += 1;
                goto LABEL_4387b3;
            }
            v43 = &v43[3];
            v46 = v49 | v47 * 0x1000;
LABEL_4387b3:
        } while ((unsigned int)v46 - 48 < 10);
        v25 = 45;
        if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h49a60b504ab1f04e(v37, v36, &v25, 1))
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v14 = 0;
        v15 = v37 + 1;
        v16 = v36 - 1;
        v17 = 1;
        v25 = &g_4e98e0;
        v26 = 1;
        v29 = 0;
        v27 = &v0;
        v28 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v3, &v25);
        v28 = 1;
        *((int128_t *)&v25) = *((int128_t *)&v3);
        v27 = *((long long *)&v5);
        v50 = __rust_alloc(32, 8);
        if (!v50)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v52 = (int128_t)v25;
        *((int128_t *)&v50->field_10) = *((int128_t *)&v27);
        *((void*)&v50->field_0) = v52;
        if (v6 != 0x8000000000000000)
        {
            _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h87f1ebff5631ea8d();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2037233d5e7a2dfa(&v6);
        }
        v54 = &g_4e9928.field_0;
LABEL_438a60:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf4531d1872b19877(&v11);
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h768a47ff2448c605(&v11);
        if (v50)
        {
            v3 = v50;
            v4 = v54;
            v14 = &v3;
            v15 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcfaea4bc47172fa3;
            v25 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v26 = 1;
            v29 = 0;
            v27 = &v14;
            v28 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v23, &v25);
            *((int128_t *)&v14) = *((int128_t *)&v23);
            v16 = *((long long *)&v24);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h160624bbdc226439(v15, *((long long *)&v24), 1, 0))
            {
                v6 = uucore::util_name::h359eff083fe53467();
                v7 = v65;
                v25 = &g_4e9868;
                v26 = 2;
                v29 = 0;
                v27 = &v0;
                v28 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v25, v64, v65);
                v6 = &v14;
                v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v25 = &g_4e9888;
                v26 = 2;
                v29 = 0;
                v27 = &v6;
                v28 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v25, v64, v65);
            }
            if ((char)v4->field_68(v3))
            {
                v6 = uucore::execution_phrase::hded5ccd87df1fcab();
                v7 = v65;
                v25 = &g_4e98a8;
                v26 = 2;
                v29 = 0;
                v27 = &v0;
                v28 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v25, v64, v65);
            }
            v66 = v4->field_60(v3);
            _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h87f1ebff5631ea8d();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2037233d5e7a2dfa(&v14);
            v67 = v3;
            v68 = v4;
            if (v68->field_0)
                v69(v67);
            if (v68->field_8)
            {
                __rust_dealloc(v67);
                return v66;
            }
            return v66;
        }
        goto LABEL_438d3f;
    }
LABEL_438849:
    uu_fmt::uu_app::h54ace0c66e06b1a6(&v25);
    clap_builder::builder::command::Command::try_get_matches_from::h6a35a15b8cff29de(&v14, &v25, &v11, v51);
    if (v6 == 0x8000000000000000)
    {
        v50 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v7);
        goto LABEL_438a60;
    }
    v10 = *((long long *)&v20);
    *((int128_t *)&v9) = *((int128_t *)&v18);
    *((int128_t *)&v8) = *((int128_t *)&v16);
    v6 = v14;
    v7 = v15;
    uu_fmt::extract_files::h099396d4b030c721(&v25, &v6);
    v50 = v26;
    v54 = v27;
    if (v0 != 0x8000000000000000)
    {
        v0 = (long long)v25;
        v1 = v50;
        v2 = v54;
        uu_fmt::FmtOptions::from_matches::h20b5fd4b4f758238(&v25, &v6);
        v55 = (long long)v25;
        v16 = v16;
        if (v14 != 9223372036854775809)
        {
            v22 = *((long long *)&v32);
            *((int128_t *)&v21) = *((int128_t *)&v31);
            *((int128_t *)&v19) = *((int128_t *)&v30);
            *((int128_t *)&v17) = *((int128_t *)&v28);
            v14 = v55;
            v50 = v26;
            v16 = v27;
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h1d91aada9be0b687(&v25, 0x2000, std::io::stdio::stdout::h077da66234850927());
            v56 = v2 * 24;
            v1 = v1;
            do
            {
                v57 = v1;
                if (!v56)
                {
                    _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h78e89bc327dc6fd7(&v25, v58, v59, v60, v61, v62, v0, v1);
                    _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h87f1ebff5631ea8d();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2037233d5e7a2dfa(&v25);
                    core::ptr::drop_in_place$LT$uu_fmt..FmtOptions$GT$::hf0726b4e27dfd1e3(&v14);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6a42fba4d7dccb05(&v0);
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h768a47ff2448c605(&v0);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8d91bd04590e17f7(&v6);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf4531d1872b19877(&v11);
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h768a47ff2448c605(&v11);
LABEL_438d3f:
                    v66 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                    return v66;
                }
            } while ((v50 = uu_fmt::process_file::ha3de746fae5e84ae(v57[1], v57[2], &v14, &v25, v61, v62), v56 -= 24, !v50));
            _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h78e89bc327dc6fd7(&v25, v64, v65, v51, v61, v62, v0, v1);
            _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h87f1ebff5631ea8d();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2037233d5e7a2dfa(&v25);
            core::ptr::drop_in_place$LT$uu_fmt..FmtOptions$GT$::hf0726b4e27dfd1e3(&v14);
        }
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6a42fba4d7dccb05(&v0);
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h768a47ff2448c605(&v0);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8d91bd04590e17f7(&v6);
    goto LABEL_438a60;
}
