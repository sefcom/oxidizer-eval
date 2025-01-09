long long uu_realpath::uumain::uumain::hf5f39104e26fc504(unsigned long long a0, unsigned long long a1)
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
    char *v15;  // [bp-0x3a0], Other Possible Types: unsigned long
    unsigned long v16;  // [sp-0x398], Other Possible Types: unsigned long long
    char *v17;  // [bp-0x390], Other Possible Types: char
    char v18;  // [bp-0x38c]
    unsigned long long v19;  // [sp-0x388]
    char v20;  // [bp-0x37c]
    int v21;  // [bp-0x370]
    char v22;  // [bp-0x36c]
    char v23;  // [bp-0x360]
    char v24;  // [bp-0x358]
    char v25;  // [bp-0x350]
    unsigned long v26;  // [sp-0x348], Other Possible Types: unsigned long long
    struct_2 *v27;  // [sp-0x340]
    int v28;  // [sp-0x338]
    int v29;  // [sp-0x328]
    int v30;  // [sp-0x318]
    int v31;  // [sp-0x308]
    char v32;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v33;  // [sp-0x2f0], Other Possible Types: unsigned long long
    struct struct_0 **v34;  // [sp-0x2e8], Other Possible Types: unsigned long
    char v35;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v36;  // [sp-0x2d8]
    char v37;  // [bp-0x2d0]
    void* v39;  // rax
    unsigned int v44;  // r15d
    unsigned long long v45[3];  // rax
    unsigned long long v46[3];  // rbx
    unsigned int v47;  // r14d
    unsigned int v48;  // r15d
    unsigned long long v50;  // r9
    unsigned long long v52;  // rax
    unsigned long long v54;  // r9
    unsigned long long v56;  // rax
    unsigned long long v57;  // rax
    struct_2 *v58;  // rdx

    uu_realpath::uu_app::hb0ffbeae13444ba5(&v32);
    clap_builder::builder::command::Command::try_get_matches_from::h7b8b03d6141a8787(&v15, &v32, a0, a1);
    if (v9 == 0x8000000000000000)
    {
        v39 = alloc::boxed::Box$LT$T$GT$::new::h5baf976cfb5a61c3(v10, 1);
        return v39;
    }
    *((int128_t *)&v12) = *((int128_t *)&v18);
    *((int128_t *)&v13) = *((int128_t *)&v20);
    v14 = *((int *)&v22);
    v9 = v15;
    v10 = v16;
    v11 = *((int *)&v17);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h416337ccbd5dbc14(&v32, &v9, _ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E, g_523e38);
    clap_builder::parser::error::MatchesError::unwrap::h7356003a6c200bff(&v15, _ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E, g_523e38, &v32);
    if (!v15)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_520e68); /* do not return */
    *((int128_t *)&v31) = (int128_t)v21;
    *((int128_t *)&v30) = *((int128_t *)&(&v18)[12]);
    *((int128_t *)&v29) = *((int128_t *)&v17);
    *((int128_t *)&v28) = *((int128_t *)&v15);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h23f5f70296f3017d(&v23, &v28);
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v9, "canonicalize-existing", 21))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v9, "canonicalize-missing", 20);
    v44 = (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v9, _ZN11uu_realpath9OPT_STRIP17ha2783a6f0cb5ee11E, g_523e08) ? (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v9, _ZN11uu_realpath11OPT_LOGICAL17hbce69eac99b6145fE, g_523e28) + 1 : 0);
    uu_realpath::prepare_relative_options::hce8b705a83476ef9(&v32, &v9, 1, v44);
    v39 = v33;
    if (v1 == 9223372036854775809)
    {
        ::0x46bbe0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h46da251bdeece735(&v23);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0936fb64c2ae8dd7(&v9);
        return v39;
    }
    v6 = *((long long *)&v37);
    *((int128_t *)&v5) = *((int128_t *)&v35);
    v1 = v32;
    v2 = v39;
    v3 = v34;
    v7 = *((long long *)&v24);
    v8 = v7 + *((long long *)&v25) * 24;
    v45 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h81084d37048fee0e(&v7);
    if (v45)
    {
        v46 = v45;
        v47 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v9, _ZN11uu_realpath8OPT_ZERO17h1b943b2f1083bf62E, g_523e18) ? 0 : 10);
        v48 = v44;
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v9, _ZN11uu_realpath9OPT_QUIET17h9225b410354dbc8bE, g_523df8))
        {
            do
            {
                v50 = 0;
                if (v1 != 0x8000000000000000)
                    v50 = v2;
                v52 = 0;
                if ((long long)v5 != 0x8000000000000000)
                    v52 = (long long)(&v5)[8];
                v0 = v52;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc7b44fbfad25f6f6(uu_realpath::resolve_path::h12f80bacada43346(v46[1], v46[2], v47, v48, 1, v50, v3, v0, v6));
                v46 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h81084d37048fee0e(&v7);
            } while (v46);
        }
        else
        {
            do
            {
                v54 = 0;
                if (v1 != 0x8000000000000000)
                    v54 = v2;
                v56 = 0;
                if ((long long)v5 != 0x8000000000000000)
                    v56 = (long long)(&v5)[8];
                v0 = v56;
                v57 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h051db6d61166b42e(uu_realpath::resolve_path::h12f80bacada43346(v46[1], v46[2], v47, v48, 1, v54, v3, v0, v6), v46);
                if (v57)
                {
                    v4 = v57;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v58->field_60(v57));
                    v26 = uucore::util_name::h60d842bf27b05e82();
                    v27 = v58;
                    v15 = &v26;
                    v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h87f610677bb13b0c;
                    v17 = &v4;
                    v19 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hbb1d36f9ebdb9b04;
                    v32 = &g_520e38;
                    v33 = 3;
                    v36 = 0;
                    v34 = &v15;
                    v35 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v32);
                    ::0x46b9b0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h234f35a2ffb064b3(v4, v58);
                }
                v46 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h81084d37048fee0e(&v7);
            } while (v46);
        }
    }
    ::0x46bc20::core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hb958e3bcaa0fe370(&v5);
    ::0x46bc20::core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hb958e3bcaa0fe370(&v1);
    ::0x46bbe0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h46da251bdeece735(&v23);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0936fb64c2ae8dd7(&v9);
    return 0;
}
