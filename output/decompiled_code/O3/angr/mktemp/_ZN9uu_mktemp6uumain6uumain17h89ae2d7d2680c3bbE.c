long long uu_mktemp::uumain::uumain::h89ae2d7d2680c3bb(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    unsigned long long v0;  // [sp-0x498]
    unsigned long long v1;  // [sp-0x488]
    char v2;  // [bp-0x478]
    char v3;  // [bp-0x470]
    char v4;  // [bp-0x468]
    unsigned long v5;  // [sp-0x460], Other Possible Types: unsigned long long
    int v6;  // [sp-0x458]
    int v7;  // [sp-0x448]
    unsigned long long v8;  // [sp-0x438]
    int v9;  // [bp-0x428], Other Possible Types: char
    char v10;  // [bp-0x420]
    char v11;  // [bp-0x418], Other Possible Types: unsigned long long
    char v12;  // [bp-0x408]
    char v13;  // [bp-0x3f8]
    char v14;  // [bp-0x3f0]
    char v15;  // [bp-0x3e0]
    char v16;  // [bp-0x3d8]
    char v18;  // [bp-0x3c8]
    char v19;  // [bp-0x3b8]
    char v20;  // [bp-0x3a8]
    char v21;  // [bp-0x398]
    char v22;  // [bp-0x38f]
    char v23;  // [bp-0x38e]
    int v24;  // [sp-0x388]
    int v25;  // [sp-0x378]
    int v26;  // [sp-0x368]
    unsigned long long v27;  // [sp-0x358]
    int v28;  // [sp-0x348]
    int v29;  // [sp-0x338]
    int v30;  // [sp-0x328]
    int v31;  // [sp-0x318]
    unsigned long v32;  // [sp-0x300], Other Possible Types: unsigned long long
    int v33;  // [sp-0x2f8]
    int v34;  // [bp-0x2e8], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long long v35;  // [sp-0x2e0]
    int v36;  // [sp-0x2d8], Other Possible Types: unsigned long long
    unsigned int v37;  // [bp-0x2d0], Other Possible Types: unsigned long, unsigned long long
    int v38;  // [sp-0x2c8]
    int v39;  // [sp-0x2b8]
    int v40;  // [sp-0x2a8]
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rcx
    struct_0 *v45;  // r14
    int v46;  // xmm0
    unsigned long long v47;  // rax
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rsi
    unsigned long long v51;  // rax
    unsigned long long v53;  // rsi
    unsigned long long v54;  // rdx
    char v55;  // r15b
    char v56;  // bpl
    int v57;  // xmm0
    int v58;  // xmm0
    unsigned long long v59;  // rcx
    int v60;  // xmm0
    unsigned long long v61;  // r9
    unsigned long long v62;  // r8
    int v63;  // xmm0
    unsigned long long v64;  // rsi
    unsigned long long v65;  // rdx
    unsigned long long v66;  // rcx
    unsigned long long v67;  // rax
    int v68;  // xmm0
    int v69;  // ymm0
    int v70;  // ymm0

    core::iter::traits::iterator::Iterator::collect::h887cb1caaba25979(&v2, a0, a1);
    uu_mktemp::uu_app::ha16b3c5461fbee0e(&v34, v42, v43);
    clap_builder::builder::command::Command::try_get_matches_from::h5ea2ff445085dc30(&v9, &v34, &v2, v44);
    if (*((long long *)&v9) != 0x8000000000000000)
    {
        v27 = *((long long *)&v13);
        v46 = v9;
        *((int128_t *)&v26) = *((int128_t *)&v12);
        *((int128_t *)&v25) = *((int128_t *)&v11);
        v24 = v46;
        uu_mktemp::Options::from::hb6474ecf1c24caa5(&v16, &v24);
        std::env::var::hb28b3c43a799f34c(&v34, "POSIXLY_CORRECT", 15);
        if (v34)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h0b213b0d6faaca96(&v34);
            goto LABEL_473ce8;
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h0b213b0d6faaca96(&v34);
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(&v24, _ZN9uu_mktemp12ARG_TEMPLATE17h69e568618f46e97eE, g_536180))
        {
LABEL_473ce8:
            v55 = v22;
            v56 = v23;
            v57 = *((int128_t *)&v21);
            v40 = v57;
            v58 = *((int128_t *)&v16);
            *((int128_t *)&v39) = *((int128_t *)&v20);
            *((int128_t *)&v38) = *((int128_t *)&v19);
            *((int128_t *)&v36) = *((int128_t *)&v18);
            v34 = v58;
            uu_mktemp::Params::from::hd945e8f2439d91f7(&v9, &v34, v54);
            v59 = *((long long *)&v9);
            if (v5 == 0x8000000000000000)
            {
                *((int128_t *)&v30) = *((int128_t *)&(&v12)[8]);
                *((int128_t *)&v29) = *((int128_t *)&(&v11)[8]);
                *((int128_t *)&v28) = *((int128_t *)&v10);
                v38 = v30;
                v36 = v29;
                v34 = v28;
                v51 = alloc::boxed::Box$LT$T$GT$::new::hf92f098301143178(&v34);
                goto LABEL_473dc4;
            }
            else
            {
                v60 = *((int128_t *)&v10);
                *((int128_t *)&v31) = *((int128_t *)&v14);
                *((int128_t *)&v30) = *((int128_t *)&(&v12)[8]);
                *((int128_t *)&v29) = *((int128_t *)&(&v11)[8]);
                v28 = v60;
                v61 = *((long long *)&v15);
                v6 = v60;
                v62 = (long long)v30;
                v8 = (long long)v30;
                v7 = v29;
                v11 = (long long)(&v31)[8];
                v63 = (int128_t)(&v30)[8];
                v9 = v63;
                v5 = v59;
                v64 = (long long)v6;
                v65 = (long long)(&v6)[8];
                v66 = (long long)(&v7)[8];
                if (v55)
                {
                    v1 = v0;
                    uu_mktemp::dry_exec::h50aceb53659ccb78(&v34, v64, v65, v66, v62, v61, v1, v11);
                }
                else
                {
                    v0 = v1;
                    uu_mktemp::exec::h91260b7a147a018c(&v34, v64, v65, v66, v62, v61, v1, v11, v1);
                }
                v67 = v34;
                v68 = (int128_t)(&v34)[8];
                v70 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
                if (!v56)
                {
                    if (!(v67 == 0x8000000000000000))
                        goto LABEL_473f13;
                    v51 = (unsigned long long)v70;
LABEL_473ee6:
                    ::0x472220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h81ae20a1645b6b67(&v9);
                    ::0x472220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h81ae20a1645b6b67(&v7);
                    ::0x4721c0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h17e8ba142b437916(&v5);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd3643a2cfa040807(&v24);
                }
                else if (v67 == 0x8000000000000000)
                {
                    v51 = uu_mktemp::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::ha812b271c34dc69b((unsigned long long)v70, (unsigned long long)(v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)(v68 >> 96) CONCAT (unsigned int)(v68 >> 64) CONCAT (unsigned int)(v68 >> 96) CONCAT (unsigned int)(v68 >> 64))));
                    goto LABEL_473ee6;
                }
                else
                {
LABEL_473f13:
                    v32 = v67;
                    v33 = v68;
                    v51 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h76afd977eb58b5fd(uucore::mods::display::println_verbatim::hded2e4752e04faa2(&v32, v42, v43));
                    ::0x472220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h81ae20a1645b6b67(&v9);
                    ::0x472220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h81ae20a1645b6b67(&v7);
                    ::0x4721c0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h17e8ba142b437916(&v5);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd3643a2cfa040807(&v24);
                }
            }
        }
        else
        {
            if (!*((long long *)&v4))
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v53 = *((long long *)&v3);
            if (!(v67 == 0x8000000000000000))
                goto LABEL_473ce8;
            v37 = 9223372036854775814;
            v51 = alloc::boxed::Box$LT$T$GT$::new::hf92f098301143178(&v34);
            core::ptr::drop_in_place$LT$uu_mktemp..Options$GT$::h492ac86d7a2e8198(&v16);
LABEL_473dc4:
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd3643a2cfa040807(&v24);
        }
        ::0x4724c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h5e7faa0a5092ccd8(&v2);
        return v51;
    }
    else
    {
        v45 = *((long long *)&v10);
        if (v45->field_d5 == 5)
        {
            v47 = v45->field_28;
            v48 = v45->field_40;
            v49 = v45->field_30 + v47;
            v50 = v45->field_48 * 32 + v48;
            v34 = v47;
            v35 = v45->field_30 + v47;
            v36 = v48;
            v37 = v45->field_48 * 32 + v36;
            if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1df00fb8c6a47dfb((unsigned int)core::iter::traits::iterator::Iterator::try_fold::h8c298559b8303898(&v34, v50, v49)))
            {
                ::0x472880::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h2e6c8bbad6217841(&v16, "too many templates", 18);
                v36 = *((long long *)&v18);
                *((int128_t *)&v34) = *((int128_t *)&v16);
                v37 = 1;
                v51 = alloc::boxed::Box$LT$T$GT$::new::h9a0919e03a7a351d(&v34);
                core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hec0aff6dc72fc03c(v45);
                ::0x4724c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h5e7faa0a5092ccd8(&v2);
                return v51;
            }
        }
        v51 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v45);
        ::0x4724c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h5e7faa0a5092ccd8(&v2);
        return v51;
    }
}
