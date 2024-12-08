long long uu_realpath::uumain::uumain::h91f90628493cd4f9(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x450]
    unsigned long v1;  // [sp-0x430], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x428]
    unsigned long long v3;  // [sp-0x420]
    unsigned long v4;  // [sp-0x418], Other Possible Types: unsigned long long
    int v5;  // [sp-0x408]
    unsigned long long v6;  // [sp-0x3f8]
    unsigned long long v7;  // [sp-0x3e8]
    unsigned long long v8;  // [sp-0x3e0]
    unsigned long v9;  // [sp-0x3d8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x3d0]
    unsigned int v11;  // [sp-0x3c8]
    int v12;  // [sp-0x3c4]
    int v13;  // [sp-0x3b4]
    unsigned int v14;  // [sp-0x3a4]
    char v15;  // [bp-0x3a0], Other Possible Types: unsigned long long, unsigned long
    unsigned long v16;  // [sp-0x398], Other Possible Types: unsigned long long
    char v17;  // [bp-0x390], Other Possible Types: unsigned long long
    char v18;  // [bp-0x38c]
    unsigned long long v19;  // [sp-0x388]
    char v20;  // [bp-0x37c]
    int v21;  // [bp-0x370]
    char v22;  // [bp-0x36c]
    char v23;  // [bp-0x360]
    char v24;  // [bp-0x358]
    char v25;  // [bp-0x350]
    unsigned long v26;  // [sp-0x348], Other Possible Types: unsigned long long
    struct_1 *v27;  // [sp-0x340]
    int v28;  // [sp-0x338]
    int v29;  // [sp-0x328]
    int v30;  // [sp-0x318]
    int v31;  // [sp-0x308]
    char v32;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v33;  // [sp-0x2f0], Other Possible Types: unsigned long long
    unsigned long v34;  // [sp-0x2e8], Other Possible Types: unsigned long long
    char v35;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v36;  // [sp-0x2d8]
    char v37;  // [bp-0x2d0]
    struct_1 *v39;  // rdx
    void* v40;  // rax
    unsigned int v45;  // r15d
    unsigned long long v46[3];  // rax
    unsigned long long v47[3];  // rbx
    unsigned int v48;  // r14d
    unsigned int v49;  // r15d
    unsigned long long v51;  // r9
    unsigned long long v53;  // rax
    unsigned long long v55;  // r9
    unsigned long long v57;  // rax
    unsigned long long v58;  // rax
    unsigned long long v59;  // rsi

    uu_realpath::uu_app::h174441afbf91656c(&v32, a1, v39);
    clap_builder::builder::command::Command::try_get_matches_from::h35c319af26af55e0(&v15, &v32, a0, a1);
    if (v9 == 0x8000000000000000)
    {
        v40 = alloc::boxed::Box$LT$T$GT$::new::hc803c743078876d2(v10, 1);
        return v40;
    }
    *((int128_t *)&v12) = *((int128_t *)&v18);
    *((int128_t *)&v13) = *((int128_t *)&v20);
    v14 = *((int *)&v22);
    v9 = v15;
    v10 = v16;
    v11 = *((int *)&v17);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h80c5c7a1bcd8a002(&v32, &v9, _ZN11uu_realpath9ARG_FILES17h6f0acf70911afa83E, g_5249b8);
    clap_builder::parser::error::MatchesError::unwrap::h097a1d808eb9ac89(&v15, _ZN11uu_realpath9ARG_FILES17h6f0acf70911afa83E, g_5249b8, &v32);
    if (!v15)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    *((int128_t *)&v31) = (int128_t)v21;
    *((int128_t *)&v30) = *((int128_t *)&(&v18)[12]);
    *((int128_t *)&v29) = *((int128_t *)&v17);
    *((int128_t *)&v28) = *((int128_t *)&v15);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he591a37afa95dcfe(&v23, &v28, v39);
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v9, "canonicalize-existing", 21))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v9, "canonicalize-missing", 20);
    v45 = (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v9, _ZN11uu_realpath9OPT_STRIP17h21fa4873878fccccE, g_524988) ? (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v9, _ZN11uu_realpath11OPT_LOGICAL17h2edb0683af1494a7E, g_5249a8) + 1 : 0);
    uu_realpath::prepare_relative_options::h855527e864616289(&v32, &v9, 1, v45);
    v40 = v33;
    if (v1 == 9223372036854775809)
    {
        ::0x46c690::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h8690b290ad9f01de(&v23);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8c814e8bbe719d39(&v9);
        return v40;
    }
    v6 = *((long long *)&v37);
    *((int128_t *)&v5) = *((int128_t *)&v35);
    v1 = v32;
    v2 = v40;
    v3 = v34;
    v7 = *((long long *)&v24);
    v8 = v7 + *((long long *)&v25) * 24;
    v46 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd2f208132a151069(&v7);
    if (v46)
    {
        v47 = v46;
        v48 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v9, _ZN11uu_realpath8OPT_ZERO17h77ce6c50330cdc80E, g_524998) ? 0 : 10);
        v49 = v45;
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v9, _ZN11uu_realpath9OPT_QUIET17he012d263dd697ec7E, g_524978))
        {
            do
            {
                if (v1 != 0x8000000000000000)
                    v51 = v2;
                v53 = 0;
                if ((long long)v5 != 0x8000000000000000)
                    v53 = (long long)(&v5)[8];
                v0 = v53;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::ha933cc0cd1aa14af(uu_realpath::resolve_path::h8dbe094b7a26b1bd(v47[1], v47[2], v48, v49, 1, v51, v3, v0, v6));
                v47 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd2f208132a151069(&v7);
            } while (v47);
        }
        else
        {
            do
            {
                if (v1 != 0x8000000000000000)
                    v55 = v2;
                v57 = 0;
                if ((long long)v5 != 0x8000000000000000)
                    v57 = (long long)(&v5)[8];
                v0 = v57;
                v58 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8b605e03c82796fc(uu_realpath::resolve_path::h8dbe094b7a26b1bd(v47[1], v47[2], v48, v49, 1, v55, v3, v0, v6), v47);
                if (v58)
                {
                    v4 = v58;
                    v39->field_60(v58);
                    uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                    v26 = uucore::util_name::h412db5e565a079f3();
                    v27 = v39;
                    v15 = &v26;
                    v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h844059a936fac0b9;
                    v17 = &v4;
                    v19 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h1eb065e788e3b3df;
                    v32 = &g_521fd0;
                    v33 = 3;
                    v36 = 0;
                    v34 = &v15;
                    v35 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v32, v59, v39);
                    ::0x46c460::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h3687fd5d70352d67(v4, v39);
                }
                v47 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd2f208132a151069(&v7);
            } while (v47);
        }
    }
    ::0x46c6d0::core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hc367b1d4e351a1f4(&v5);
    ::0x46c6d0::core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hc367b1d4e351a1f4(&v1);
    ::0x46c690::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h8690b290ad9f01de(&v23);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8c814e8bbe719d39(&v9);
    return 0;
}
