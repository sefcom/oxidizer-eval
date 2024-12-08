long long uu_sum::uumain::uumain::hed70be4b13ba1987(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [sp-0x43a]
    char v1;  // [sp-0x439]
    char v2;  // [bp-0x438], Other Possible Types: unsigned long, unsigned long long
    unsigned long v3;  // [sp-0x430], Other Possible Types: unsigned long long
    char v4;  // [bp-0x428], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x420]
    struct struct_2 **v6;  // [bp-0x418], Other Possible Types: char, unsigned long long
    void* v7;  // [sp-0x410], Other Possible Types: unsigned long long
    unsigned long v8;  // [sp-0x408], Other Possible Types: unsigned long long
    void* v9;  // [sp-0x400]
    unsigned long long v10;  // [bp-0x3f8], Other Possible Types: unsigned short
    unsigned long long v11;  // [sp-0x3f0]
    int v12;  // [bp-0x3e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v13;  // [sp-0x3e0]
    unsigned long long v14;  // [sp-0x3d8]
    unsigned long long v15;  // [sp-0x3d0]
    unsigned long long v16;  // [sp-0x3c8]
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
    unsigned long v37;  // [sp-0x2e8], Other Possible Types: unsigned long long
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
    unsigned long long v55;  // rdx
    struct_1 *v56;  // rax
    struct_1 *v57;  // r15
    int v58;  // xmm0
    unsigned long long v59;  // rax
    unsigned long long v60[3];  // rax
    unsigned long long v61[3];  // rax
    unsigned long long v62;  // rbx
    unsigned long long v63;  // rdi
    unsigned long long v65;  // rsi

    uu_sum::uu_app::h93b3d0654cdaf3da(&v35, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h822c85c35da9e6ec(&v2, &v35, a0, a1);
    if (v26 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v27);
    v30 = v8;
    *((int128_t *)&v29) = *((int128_t *)&v6);
    *((int128_t *)&v28) = *((int128_t *)&v4);
    v26 = v2;
    v27 = v3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h788b62e6c78ec347(&v35, &v26, _ZN6uu_sum7options4FILE17h04f9ae842fe56d46E, g_513868);
    clap_builder::parser::error::MatchesError::unwrap::h73d295c1f30e5abc(&v2, _ZN6uu_sum7options4FILE17h04f9ae842fe56d46E, g_513868, &v35);
    if (v2)
    {
        *((int128_t *)&v34) = *((int128_t *)&v8);
        *((int128_t *)&v33) = *((int128_t *)&v6);
        *((int128_t *)&v32) = *((int128_t *)&v4);
        *((int128_t *)&v31) = *((int128_t *)&v2);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h63e4423ab59e28d2(&v18, &v31, v55);
    }
    else
    {
        v56 = ::0x464520::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (!v56)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v57 = v56;
        ::0x4644a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h660a89efe9e25917(&v35);
        v14 = v37;
        v58 = *((int128_t *)&v35);
        v12 = v58;
        v57->field_10 = v14;
        *((void*)&v57->field_0) = v58;
        alloc::slice::hack::into_vec::h0957554e1016ea91(&v18, v57, 1);
    }
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v26, _ZN6uu_sum7options19SYSTEM_V_COMPATIBLE17h8585b6cddee325faE, g_513878);
    v59 = *((long long *)&v20);
    v0 = 1;
    if (v59 <= 1)
    {
        if (v59 != 1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v60 = *((long long *)&v19);
        v0 = _ZN77_$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$2ne17hb4f2d17f007cd88aE.specialized.1(v60[1], v60[2]);
        v59 = *((long long *)&v20);
    }
    v21 = *((long long *)&v19);
    v22 = v21 + v59 * 24;
    v61 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc9d2aad1ef2991be(&v21);
    if (v61)
    {
        v62 = (v1 ^ 1) * 4 + 1;
        do
        {
            v23[0] = v61;
            uu_sum::open::h5e80565e6c0e85e2(&v12, v23[1], v23[2]);
            v63 = v13;
            if (v12)
            {
                v10 = v63;
                v11 = v14;
                *((long long *)(v11 + 96))(v63, v11);
                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                v24 = uucore::util_name::h412db5e565a079f3();
                v25 = v55;
                v2 = &v24;
                v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb712120f5e90f3f1;
                v4 = &v10;
                v5 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h13a0e46d36e44127;
                v35 = &g_510e78;
                v36 = 3;
                v39 = 0;
                v37 = &v2;
                v38 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v65, v55);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hd33594b3c23f73c6(v10, v11);
            }
            else
            {
                *((int *)&v24) = (!v1 ? uu_sum::bsd_sum::hc6379797c22feef4(v63, v11) : uu_sum::sysv_sum::h894457ef0b3b777f(v63, v11));
                v10 = v55;
                if (v0)
                {
                    v2 = &v10;
                    v3 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                    v4 = &v24;
                    v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v6 = &v23[0];
                    v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h69e21a13bba7956e;
                    v8 = v62;
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
                    v12 = &g_510e38;
                    v13 = 4;
                    v16 = &v35;
                    v17 = 3;
                    v14 = &v2;
                    v15 = 4;
                    std::io::stdio::_print::he918bceb0c89db46(&v12, v65, v55);
                }
                else
                {
                    v2 = &v10;
                    v3 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                    v4 = &v24;
                    v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v6 = v62;
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
                    v12 = &g_510e08;
                    v13 = 3;
                    v16 = &v35;
                    v17 = 2;
                    v14 = &v2;
                    v15 = 3;
                    std::io::stdio::_print::he918bceb0c89db46(&v12, v65, v55);
                }
            }
        } while ((v61 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc9d2aad1ef2991be(&v21), v61));
    }
    ::0x4642b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7d971d49bcf614d6(&v18);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8d393fda36cdf80e(&v26);
    return 0;
}
