long long uu_realpath::uumain::uumain::hf5f39104e26fc504(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x430]
    unsigned long long v1;  // [sp-0x428]
    unsigned long long v2;  // [sp-0x420]
    unsigned long v3;  // [sp-0x418]
    int v4;  // [sp-0x408]
    unsigned long long v5;  // [sp-0x3f8]
    unsigned long long v6;  // [sp-0x3e8]
    unsigned long long v7;  // [sp-0x3e0]
    unsigned long v8;  // [sp-0x3d8]
    unsigned long long v9;  // [sp-0x3d0]
    unsigned int v10;  // [sp-0x3c8]
    int v11;  // [sp-0x3c4]
    int v12;  // [sp-0x3b4]
    unsigned int v13;  // [sp-0x3a4]
    char *v14;  // [sp-0x3a0], Other Possible Types: unsigned long
    unsigned long v15;  // [sp-0x398], Other Possible Types: unsigned long long
    char *v16;  // [bp-0x390], Other Possible Types: char
    char v17;  // [bp-0x38c]
    unsigned long long v18;  // [sp-0x388]
    char v19;  // [bp-0x37c]
    int v20;  // [bp-0x370]
    char v21;  // [bp-0x36c]
    char v22;  // [bp-0x360]
    char v23;  // [bp-0x358]
    char v24;  // [bp-0x350]
    unsigned long v25;  // [sp-0x348]
    struct_1 *v26;  // [sp-0x340]
    int v27;  // [sp-0x338]
    int v28;  // [sp-0x328]
    int v29;  // [sp-0x318]
    int v30;  // [sp-0x308]
    char v31;  // [bp-0x2f8], Other Possible Types: unsigned long
    unsigned long v32;  // [sp-0x2f0], Other Possible Types: unsigned long long
    struct struct_2 **v33;  // [sp-0x2e8], Other Possible Types: unsigned long
    char v34;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v35;  // [sp-0x2d8]
    char v36;  // [bp-0x2d0]
    void* v38;  // rbx
    unsigned int v43;  // r15d
    unsigned long long v44[3];  // rax
    unsigned long long v45[3];  // rbx
    unsigned int v46;  // r14d
    unsigned int v47;  // r15d
    void* v48;  // r9
    unsigned long long v49;  // rax
    void* v50;  // r9
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax
    struct_1 *v53;  // rdx

    uu_realpath::uu_app::hb0ffbeae13444ba5(&v31);
    clap_builder::builder::command::Command::try_get_matches_from::h7b8b03d6141a8787(&v14, &v31, a0, a1);
    if (v8 == 0x8000000000000000)
    {
        v38 = alloc::boxed::Box$LT$T$GT$::new::h5baf976cfb5a61c3(v9, 1);
        return v38;
    }
    *((int128_t *)&v11) = *((int128_t *)&v17);
    *((int128_t *)&v12) = *((int128_t *)&v19);
    v13 = *((int *)&v21);
    v8 = v14;
    v9 = v15;
    v10 = *((int *)&v16);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h416337ccbd5dbc14(&v31, &v8, _ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E, g_523e38);
    clap_builder::parser::error::MatchesError::unwrap::h7356003a6c200bff(&v14, _ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E, g_523e38, &v31);
    if (!v14)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_520e68); /* do not return */
    *((int128_t *)&v30) = (int128_t)v20;
    *((int128_t *)&v29) = *((int128_t *)&(&v17)[12]);
    *((int128_t *)&v28) = *((int128_t *)&v16);
    *((int128_t *)&v27) = *((int128_t *)&v14);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h23f5f70296f3017d(&v22, &v27);
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v8, "canonicalize-existing", 21))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v8, "canonicalize-missing", 20);
    v43 = (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v8, _ZN11uu_realpath9OPT_STRIP17ha2783a6f0cb5ee11E, g_523e08) ? (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v8, _ZN11uu_realpath11OPT_LOGICAL17hbce69eac99b6145fE, g_523e28) + 1 : 0);
    uu_realpath::prepare_relative_options::hce8b705a83476ef9(&v31, &v8, 1, v43);
    v38 = v32;
    if (v0 == 9223372036854775809)
    {
        ::0x46bbe0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h46da251bdeece735(&v22);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0936fb64c2ae8dd7(&v8);
        return v38;
    }
    v5 = *((long long *)&v36);
    *((int128_t *)&v4) = *((int128_t *)&v34);
    v0 = v31;
    v1 = v38;
    v2 = v33;
    v6 = *((long long *)&v23);
    v7 = v6 + *((long long *)&v24) * 24;
    v44 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h81084d37048fee0e(&v6);
    if (v44)
    {
        v45 = v44;
        v46 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v8, _ZN11uu_realpath8OPT_ZERO17h1b943b2f1083bf62E, g_523e18) ? 0 : 10);
        v47 = v43;
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v8, _ZN11uu_realpath9OPT_QUIET17h9225b410354dbc8bE, g_523df8))
        {
            do
            {
                v48 = 0;
                if (v0 != 0x8000000000000000)
                    v48 = v1;
                v49 = 0;
                if ((long long)v4 != 0x8000000000000000)
                    v49 = (long long)(&v4)[8];
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc7b44fbfad25f6f6(uu_realpath::resolve_path::h12f80bacada43346(v45[1], v45[2], v46, v47, 1, v48, v2, v49, v5));
                v45 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h81084d37048fee0e(&v6);
            } while (v45);
        }
        else
        {
            do
            {
                v50 = 0;
                if (v0 != 0x8000000000000000)
                    v50 = v1;
                v51 = 0;
                if ((long long)v4 != 0x8000000000000000)
                    v51 = (long long)(&v4)[8];
                v52 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h051db6d61166b42e(uu_realpath::resolve_path::h12f80bacada43346(v45[1], v45[2], v46, v47, 1, v50, v2, v51, v5), v45);
                if (v52)
                {
                    v3 = v52;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v53->field_60(v52));
                    v25 = uucore::util_name::h60d842bf27b05e82();
                    v26 = v53;
                    v14 = &v25;
                    v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h87f610677bb13b0c;
                    v16 = &v3;
                    v18 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hbb1d36f9ebdb9b04;
                    v31 = &g_520e38;
                    v32 = 3;
                    v35 = 0;
                    v33 = &v14;
                    v34 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v31);
                    ::0x46b9b0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h234f35a2ffb064b3(v3, v53);
                }
                v45 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h81084d37048fee0e(&v6);
            } while (v45);
        }
    }
    ::0x46bc20::core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hb958e3bcaa0fe370(&v4);
    ::0x46bc20::core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hb958e3bcaa0fe370(&v0);
    ::0x46bbe0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h46da251bdeece735(&v22);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0936fb64c2ae8dd7(&v8);
    return 0;
}
