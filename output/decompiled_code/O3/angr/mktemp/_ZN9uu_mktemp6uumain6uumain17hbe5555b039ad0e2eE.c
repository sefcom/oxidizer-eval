long long uu_mktemp::uumain::uumain::hbe5555b039ad0e2e(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
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
    int v11;  // [sp-0x418]
    char v12;  // [bp-0x408]
    char v13;  // [bp-0x3f8]
    char v14;  // [bp-0x3e8]
    char v15;  // [bp-0x3df]
    char v16;  // [bp-0x3de]
    int v17;  // [bp-0x3d8], Other Possible Types: char
    char v18;  // [bp-0x3d0]
    char v19;  // [bp-0x3c8], Other Possible Types: unsigned long long
    char v20;  // [bp-0x3b8]
    char v21;  // [bp-0x3a8]
    char v22;  // [bp-0x3a0]
    char v23;  // [bp-0x390]
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
    int v34;  // [bp-0x2e8], Other Possible Types: char
    int v35;  // [bp-0x2d8], Other Possible Types: char, unsigned long long
    unsigned int v36;  // [bp-0x2d0], Other Possible Types: unsigned long long
    int v37;  // [sp-0x2c8]
    int v38;  // [sp-0x2b8]
    int v39;  // [sp-0x2a8]
    unsigned long long v41;  // rsi
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rcx
    struct_0 *v44;  // r14
    int v45;  // xmm0
    unsigned long long v46;  // rax
    unsigned long long v48;  // rsi
    unsigned long long v49;  // rdx
    char v50;  // r15b
    char v51;  // bpl
    int v52;  // xmm0
    int v53;  // xmm0
    unsigned long long v54;  // rcx
    int v55;  // xmm0
    unsigned long long v56;  // r9
    unsigned long long v57;  // r8
    int v58;  // xmm0
    unsigned long long v59;  // rsi
    unsigned long long v60;  // rdx
    unsigned long long v61;  // rcx
    unsigned long long v62;  // rax
    int v63;  // xmm0
    int v64;  // ymm0
    int v65;  // ymm0

    core::iter::traits::iterator::Iterator::collect::he8be1adec482e7f0(&v2, a0, a1);
    uu_mktemp::uu_app::h678f679507a186e9(&v34, v41, v42);
    clap_builder::builder::command::Command::try_get_matches_from::h5fc7b7c71f2359a5(&v17, &v34, &v2, v43);
    if (*((long long *)&v17) != 0x8000000000000000)
    {
        v27 = *((long long *)&v21);
        v45 = v17;
        *((int128_t *)&v26) = *((int128_t *)&v20);
        *((int128_t *)&v25) = *((int128_t *)&v19);
        v24 = v45;
        uu_mktemp::Options::from::h443dd3893f930365(&v9, &v24);
        std::env::var::h511154690abe6389(&v34, "POSIXLY_CORRECT", 15);
        if ((long long)v34)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::he26e00ff24602776(&v34);
            goto LABEL_472b78;
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::he26e00ff24602776(&v34);
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&v24, _ZN9uu_mktemp12ARG_TEMPLATE17h5ec0554c879217e7E, g_536940))
        {
LABEL_472b78:
            v50 = v15;
            v51 = v16;
            v52 = *((int128_t *)&v14);
            v39 = v52;
            v53 = v9;
            *((int128_t *)&v38) = *((int128_t *)&v13);
            *((int128_t *)&v37) = *((int128_t *)&v12);
            v35 = v11;
            v34 = v53;
            uu_mktemp::Params::from::h08dfed7a01f28665(&v17, &v34, v49);
            v54 = *((long long *)&v17);
            if (v5 == 0x8000000000000000)
            {
                *((int128_t *)&v30) = *((int128_t *)&(&v20)[8]);
                *((int128_t *)&v29) = *((int128_t *)&(&v19)[8]);
                *((int128_t *)&v28) = *((int128_t *)&v18);
                v37 = v30;
                v35 = v29;
                v34 = v28;
                v46 = alloc::boxed::Box$LT$T$GT$::new::h81fafefccffeca47(&v34);
                goto LABEL_472c54;
            }
            else
            {
                v55 = *((int128_t *)&v18);
                *((int128_t *)&v31) = *((int128_t *)&v22);
                *((int128_t *)&v30) = *((int128_t *)&(&v20)[8]);
                *((int128_t *)&v29) = *((int128_t *)&(&v19)[8]);
                v28 = v55;
                v56 = *((long long *)&v23);
                v6 = v55;
                v57 = (long long)v30;
                v8 = (long long)v30;
                v7 = v29;
                v19 = (long long)(&v31)[8];
                v58 = (int128_t)(&v30)[8];
                v17 = v58;
                v5 = v54;
                v59 = (long long)v6;
                v60 = (long long)(&v6)[8];
                v61 = (long long)(&v7)[8];
                if (v50)
                {
                    v1 = v0;
                    uu_mktemp::dry_exec::h0a7898737835babc(&v34, v59, v60, v61, v57, v56, v1, v19);
                }
                else
                {
                    v0 = v1;
                    uu_mktemp::exec::h4964a5bb0e6c4200(&v34, v59, v60, v61, v57, v56, v1, v19, v1);
                }
                v62 = (long long)v34;
                v63 = (int128_t)(&v34)[8];
                v65 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
                if (!v51)
                {
                    if (!(v62 == 0x8000000000000000))
                        goto LABEL_472daf;
                    v46 = (unsigned long long)v65;
LABEL_472d7f:
                    ::0x4710c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::heaa044c2009f3939(&v17);
                    ::0x4710c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::heaa044c2009f3939(&v7);
                    ::0x471060::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ae21e0dc128195b(&v5);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h83a686a69d3d6469(&v24);
                }
                else if (v62 == 0x8000000000000000)
                {
                    v46 = uu_mktemp::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h6fe6f02797a60696((unsigned long long)v65, (unsigned long long)(v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)(v63 >> 96) CONCAT (unsigned int)(v63 >> 64) CONCAT (unsigned int)(v63 >> 96) CONCAT (unsigned int)(v63 >> 64))));
                    goto LABEL_472d7f;
                }
                else
                {
LABEL_472daf:
                    v32 = v62;
                    v33 = v63;
                    v46 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc85311bdbf48fb6a(uucore::mods::display::println_verbatim::h5bcfcd3708f9694a(&v32, v41, v42));
                    ::0x4710c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::heaa044c2009f3939(&v17);
                    ::0x4710c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::heaa044c2009f3939(&v7);
                    ::0x471060::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ae21e0dc128195b(&v5);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h83a686a69d3d6469(&v24);
                }
            }
        }
        else
        {
            if (!*((long long *)&v4))
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v48 = *((long long *)&v3);
            if (!(v62 == 0x8000000000000000))
                goto LABEL_472b78;
            v36 = 9223372036854775814;
            v46 = alloc::boxed::Box$LT$T$GT$::new::h81fafefccffeca47(&v34);
            core::ptr::drop_in_place$LT$uu_mktemp..Options$GT$::he84430dd8faf4926(&v9);
LABEL_472c54:
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h83a686a69d3d6469(&v24);
        }
        ::0x471360::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hb8a32b81c806225f(&v2);
        return v46;
    }
    else
    {
        v44 = *((long long *)&v18);
        if (v44->field_d5 == 5)
        {
            clap_builder::util::flat_map::FlatMap$LT$K$C$V$GT$::iter::h134ffb24717c5ed1(&v34, &v44->padding_0[32]);
            *((int128_t *)&v11) = *((int128_t *)&v35);
            v9 = v34;
            if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h01b87041e6942a90((unsigned int)core::iter::traits::iterator::Iterator::try_fold::h2d42ac3e53677c18(&v9, v41, v42)))
            {
                ::0x471720::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7ba27a2dd62ae859(&v9, "too many templates", 18);
                v35 = (long long)v11;
                v34 = v9;
                v36 = 1;
                v46 = alloc::boxed::Box$LT$T$GT$::new::h8d52bc748f976a23(&v34);
                core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h678970666a3c3523(v44);
                ::0x471360::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hb8a32b81c806225f(&v2);
                return v46;
            }
        }
        v46 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v44);
        ::0x471360::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hb8a32b81c806225f(&v2);
        return v46;
    }
}
