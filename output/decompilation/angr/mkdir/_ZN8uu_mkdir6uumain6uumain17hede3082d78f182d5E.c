long long uu_mkdir::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x6a0]
    unsigned long long v1;  // [bp-0x698]
    unsigned long long v2;  // [bp-0x690]
    unsigned long long v3;  // [bp-0x688]
    unsigned long long v4;  // [bp-0x680]
    int v5;  // [bp-0x678]
    char v6;  // [bp-0x668]
    unsigned long long v7;  // [bp-0x658]
    char v8;  // [bp-0x650], Other Possible Types: unsigned long long
    char v9;  // [bp-0x648], Other Possible Types: unsigned int
    char v10;  // [bp-0x644]
    char v11;  // [bp-0x643]
    char v12;  // [bp-0x642]
    int v13;  // [bp-0x640]
    char v14;  // [bp-0x630]
    unsigned long long v15;  // [bp-0x620]
    unsigned long long v16;  // [bp-0x618]
    char v17;  // [bp-0x608], Other Possible Types: uint128_t
    char v18;  // [bp-0x5f8]
    unsigned long long v19;  // [bp-0x5e8]
    char v20;  // [bp-0x5e0]
    int v21;  // [bp-0x5c8], Other Possible Types: char, unsigned long long
    unsigned long long v22;  // [bp-0x5c0]
    unsigned long long v23;  // [bp-0x5b8]
    unsigned int v24;  // [bp-0x5b0]
    int v25;  // [bp-0x5a8]
    unsigned long long v26;  // [bp-0x598]
    unsigned long long v27;  // [bp-0x590]
    unsigned long long v28;  // [bp-0x2f8]
    unsigned long long v29;  // [bp-0x2f8]
    unsigned long long v30;  // [bp-0x2f0]
    unsigned long long v31;  // [bp-0x2e8]
    char v32;  // [bp-0x2d8]
    unsigned long long v33;  // [bp-0x2c8]
    char v34;  // [bp-0x2c0]
    unsigned int v36;  // eax
    unsigned long long v38;  // r13
    char v39;  // al
    char v40;  // al
    char v41;  // al
    unsigned long long v42;  // r12
    unsigned long long v43;  // rbx

    v18.collect_lossy(a0, a1);
    v36 = uu_mkdir::strip_minus_from_mode(&v18);
    uu_mkdir::uu_app(&v21);
    uucore::mods::locale::get_message(&v20, "mkdir-after-helpClapErrorWrapperPermissionDeniedStripPrefixError", 16);
    (char)v29.after_help(&v21, &v20);
    v23 = v19;
    memcpy(&v21, &v18, 16);
    v8.try_get_matches_from(&(char)v29, &v21);
    if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
        return *((long long *)&v9).from();
    v7 = v15;
    memcpy(&v6, &v14, 16);
    v5 = v13;
    v3 = v8;
    v4 = *((long long *)&v9);
    v21.try_get_many(&v3, "dirs", 4);
    (char)v29.unwrap("dirs", 4, &v21);
    if (v28)
    {
        v1 = v30;
        v16 = v31;
        memcpy(&v17, &v32, 16);
        v2 = v33;
        v0 = *((long long *)&v34);
        v29 = v28;
    }
    else
    {
        v17 = 0;
        v16 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h3798e7f94482d0e3E;
        v1 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
        v0 = 0;
        v29 = core::ops::function::FnOnce::call_once;
    }
    v38 = v29;
    v39 = v3.get_flag("verboseparentszcontextError flushing stdout: Localization parse error at Could not init the localization system: ", 7);
    v40 = v3.get_flag("parentszcontextError flushing stdout: Localization parse error at Could not init the localization system: ", 7);
    v41 = v3.get_flag("zcontextError flushing stdout: Localization parse error at Could not init the localization system: ", 1);
    v21.try_get_one(&v3, "contextError flushing stdout: Localization parse error at Could not init the localization system: ", 7);
    v42 = "contextError flushing stdout: Localization parse error at Could not init the localization system: ".unwrap(7, &v21);
    uu_mkdir::get_mode(&(char)v29, &v3, v36);
    if (v28 == 0x8000000000000000)
    {
        v10 = v40;
        v9 = v30;
        v11 = v39;
        v12 = v41 | v42;
        v8 = v42;
        v21 = v38;
        v22 = v1;
        v23 = v16;
        *((uint128_t *)&v25) = v17;
        v26 = v2;
        v27 = v0;
        v43 = uu_mkdir::exec(&v21, &v8);
    }
    else
    {
        v23 = v31;
        *((int128_t *)&v21) = *((int128_t *)&v29);
        v24 = 1;
        v43 = v21.new();
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
    return v43;
}
