fn fd::ensure_search_pattern_is_not_a_path(a0: i64) -> u64 {
    let v0: alloc::string::String;  // [bp-0x88]
    let v1: core::fmt::rt::Argument;  // [bp-0x80]
    let v2: u128;  // [bp-0x80]
    let v3: core::fmt::rt::Argument;  // [bp-0x70]
    let v4: u128;  // [bp-0x70]
    let v5: core::fmt::Arguments;  // [bp-0x60]
    let v6: struct24;  // [bp-0x30]
    let v14: u64;  // rdx

    if *((a0 + 494) as &i8) {
        return 0;
    }
    if !<char as core::str::pattern::Pattern>::is_contained_in(*((a0 + 144) as &i64), *((a0 + 152) as &i64), v14) || !std::path::Path::is_dir(*((a0 + 144) as &i64), *((a0 + 152) as &i64)) {
        return 0;
    }
    v0 = a0 + 136;
    v1 = core::fmt::rt::Argument {
        ty: &v0
    };
    v3 = core::fmt::rt::Argument {
        ty: &g_4717cc
    };
    v5 = core::fmt::Arguments {
        pieces: ["The search pattern '", "' contains a path-separation character ('", "') and will not lead to any search results.\n\nIf you want to search for all files inside the '", "' directory, use a match-all pattern:\n\n  fd . '", "'\n\nInstead, if you want your pattern to match the full file path, use:\n\n  fd --full-path '", "'"]
        args: [v2, v4]
        fmt: &g_47b7e0
    };
    v6 = core::option::Option<T>::map_or_else(None, v14, &v5);
    return anyhow::error::<impl anyhow::Error>::msg(&v6);
    return 0;
}
