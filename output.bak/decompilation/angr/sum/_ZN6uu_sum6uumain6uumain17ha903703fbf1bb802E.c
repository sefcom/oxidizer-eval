long long uu_sum::uumain::uumain::ha903703fbf1bb802(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x43a]
    char v1;  // [sp-0x439]
    char *v2;  // [bp-0x438], Other Possible Types: unsigned long
    unsigned long v3;  // [sp-0x430], Other Possible Types: unsigned long long
    char *v4;  // [bp-0x428], Other Possible Types: char
    unsigned long long v5;  // [sp-0x420]
    struct struct_4 **v6;  // [bp-0x418], Other Possible Types: char, unsigned long long
    void* v7;  // [sp-0x410], Other Possible Types: unsigned long long
    unsigned long v8;  // [sp-0x408], Other Possible Types: unsigned long long
    void* v9;  // [sp-0x400]
    unsigned long long v10;  // [bp-0x3f8], Other Possible Types: unsigned short
    struct_2 *v11;  // [sp-0x3f0]
    int v12;  // [bp-0x3e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v13;  // [sp-0x3e0]
    struct_2 *v14;  // [sp-0x3d8]
    unsigned long long v15;  // [sp-0x3d0]
    char *v16;  // [sp-0x3c8]
    unsigned long long v17;  // [sp-0x3c0]
    char v18;  // [bp-0x3b0]
    char v19;  // [bp-0x3a8]
    char v20;  // [bp-0x3a0]
    unsigned long long v21;  // [sp-0x398]
    unsigned long long v22;  // [sp-0x390]
    unsigned long long v23[3];  // [sp-0x388]
    unsigned long v24;  // [sp-0x380], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x378]
    unsigned long v26;  // [sp-0x370], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0x368]
    int v28;  // [sp-0x360]
    int v29;  // [sp-0x350]
    unsigned long long v30;  // [sp-0x340]
    int v31;  // [sp-0x338]
    int v32;  // [sp-0x328]
    int v33;  // [sp-0x318]
    int v34;  // [sp-0x308]
    char v35;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v36;  // [sp-0x2f0]
    struct_2 *v37;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v38;  // [sp-0x2e0]
    void* v39;  // [sp-0x2d8]
    unsigned long long v40;  // [sp-0x2d0]
    char v41;  // [sp-0x2c8]
    unsigned long long v42;  // [sp-0x2c0]
    unsigned long long v43;  // [sp-0x2b0]
    unsigned long long v44;  // [sp-0x2a8]
    unsigned long long v45;  // [sp-0x2a0]
    unsigned long long v46;  // [sp-0x298]
    char v47;  // [sp-0x290]
    unsigned long long v48;  // [sp-0x288]
    unsigned long long v49;  // [sp-0x278]
    unsigned long long v50;  // [sp-0x268]
    unsigned long long v51;  // [sp-0x260]
    char v52;  // [sp-0x258]
    struct_0 *v55;  // rax
    struct_0 *v56;  // r15
    int v57;  // xmm0
    unsigned long long v58;  // rax
    unsigned long long v59[3];  // rax
    unsigned long long v60[3];  // rax
    unsigned long long v61;  // rbx
    unsigned long long v62;  // rdi
    unsigned long v64;  // dx

    uu_sum::uu_app::hbdfcd560e86e61fa(&v35);
    clap_builder::builder::command::Command::try_get_matches_from::h7bb4a4ed4c02a1a0(&v2, &v35, a0, a1);
    if (v26 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v27);
    v30 = v8;
    *((int128_t *)&v29) = *((int128_t *)&v6);
    *((int128_t *)&v28) = *((int128_t *)&v4);
    v26 = v2;
    v27 = v3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h8411335ddc2e2dac(&v35, &v26, _ZN6uu_sum7options4FILE17h2195fcf4470791a0E, g_5125a8);
    clap_builder::parser::error::MatchesError::unwrap::h87f32a93d09a0aa2(&v2, _ZN6uu_sum7options4FILE17h2195fcf4470791a0E, g_5125a8, &v35);
    if (v2)
    {
        *((int128_t *)&v34) = *((int128_t *)&v8);
        *((int128_t *)&v33) = *((int128_t *)&v6);
        *((int128_t *)&v32) = *((int128_t *)&v4);
        *((int128_t *)&v31) = *((int128_t *)&v2);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd417ab4e14c6efef(&v18, &v31);
    }
    else
    {
        v55 = ::0x463520::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (!v55)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
        v56 = v55;
        ::0x4634a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5cbecd347a16c703(&v35);
        v14 = v37;
        v57 = *((int128_t *)&v35);
        v12 = v57;
        v56->field_10 = v14;
        *((void*)&v56->field_0) = v57;
        alloc::slice::hack::into_vec::h11f95d209dbce12a(&v18, v56, 1);
    }
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v26, _ZN6uu_sum7options19SYSTEM_V_COMPATIBLE17hb669b9fdd31f7f9cE, g_5125b8);
    v58 = *((long long *)&v20);
    v0 = 1;
    if (v58 <= 1)
    {
        if (v58 != 1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_50faa0); /* do not return */
        v59 = *((long long *)&v19);
        v0 = _ZN77_$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$2ne17hb4f2d17f007cd88aE.specialized.1(v59[1], v59[2]);
        v58 = *((long long *)&v20);
    }
    v21 = *((long long *)&v19);
    v22 = v21 + v58 * 24;
    v60 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdd4670608fe27979(&v21);
    if (v60)
    {
        v61 = (v1 ^ 1) * 4 + 1;
        do
        {
            v23[0] = v60;
            uu_sum::open::hc6d78e625deb9f03(&v12, v23[1], v23[2]);
            v62 = v13;
            if (v12)
            {
                v10 = v62;
                v11 = v14;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v11->field_60(v62, v11));
                v24 = uucore::util_name::h60d842bf27b05e82();
                v25 = v64;
                v2 = &v24;
                v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haa62e7285047aad2;
                v4 = &v10;
                v5 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb10dae7654710d7f;
                v35 = &g_50fa70;
                v36 = 3;
                v39 = 0;
                v37 = &v2;
                v38 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v35);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h329148619ba10487(v10, v11);
            }
            else
            {
                *((int *)&v24) = (!v1 ? uu_sum::bsd_sum::h3ffaf9234bf825c3(v62, v11) : uu_sum::sysv_sum::h29b452e8d3fae5cd(v62, v11));
                v10 = v64;
                if (!v0)
                {
                    v2 = &v10;
                    v3 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                    v4 = &v24;
                    v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v6 = v61;
                    v7 = 0;
                    v35 = 2;
                    v37 = 1;
                    v38 = 2;
                    v39 = 0;
                    v40 = 34359738400;
                    v41 = 3;
                    v42 = 2;
                    v43 = 1;
                    v44 = 2;
                    v45 = 1;
                    v46 = 32;
                    v47 = 3;
                    v12 = &g_50fab8;
                    v13 = 3;
                    v16 = &v35;
                    v17 = 2;
                    v14 = &v2;
                    v15 = 3;
                    std::io::stdio::_print::he918bceb0c89db46(&v12);
                }
                else
                {
                    v2 = &v10;
                    v3 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                    v4 = &v24;
                    v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v6 = &v23[0];
                    v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb5b251f5996ecb26;
                    v8 = v61;
                    v9 = 0;
                    v35 = 2;
                    v37 = 1;
                    v38 = 3;
                    v39 = 0;
                    v40 = 34359738400;
                    v41 = 3;
                    v42 = 2;
                    v43 = 1;
                    v44 = 3;
                    v45 = 1;
                    v46 = 32;
                    v47 = 3;
                    v48 = 2;
                    v49 = 2;
                    v50 = 2;
                    v51 = 32;
                    v52 = 3;
                    v12 = &g_50fae8;
                    v13 = 4;
                    v16 = &v35;
                    v17 = 3;
                    v14 = &v2;
                    v15 = 4;
                    std::io::stdio::_print::he918bceb0c89db46(&v12);
                }
            }
        } while ((v60 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdd4670608fe27979(&v21), v60));
    }
    ::0x4632b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8670efed1fef2e3f(&v18);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6657a28c01b53c01(&v26);
    return 0;
}
