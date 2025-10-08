fn zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::get_stream(a1: i64, a2: i64, a3: i64) -> Result<struct120, struct16> {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x1c0]
    let v1: alloc::string::String;  // [bp-0x1a8], Other Possible Types: struct74
    let v2: struct24;  // [bp-0x1a8], Other Possible Types: u64
    let v3: &str;  // [bp-0x1a0]
    let v4: struct96;  // [bp-0x148]
    let v5: struct16;  // [bp-0x148]
    let v6: struct96;  // [bp-0xe8]
    let v7: u8;  // [bp-0x90]
    let v8: u8;  // [bp-0x8f]
    let v9: struct96;  // [bp-0x88]

    v1 = zoxide::db::stream::StreamOptions::new(a3);
    v4 = zoxide::db::stream::StreamOptions::with_keywords(&v1, *((a1 + 8) as &i64), *((a1 + 8) as &i64) + *((a1 + 16) as &i64) * 24);
    zoxide::config::exclude_dirs(&v1);
    if (((0 ^ v1.field_0) & (0 ^ -(v2))) >> 63) as char {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v3
        };
    }
    v0 = v2;
    v9 = zoxide::db::stream::StreamOptions::with_exclude(&v4, &v0);
    if *((a1 + 48) as &i64) != 0x8000000000000000 {
        v1 = <alloc::string::String as core::clone::Clone>::clone(a1 + 48);
    }
    v6 = zoxide::db::stream::StreamOptions::with_base_dir(&v9, &v5);
    if !*((a1 + 72) as &i8) {
        v7 = 1;
        v8 = zoxide::config::resolve_symlinks();
    }
    zoxide::db::stream::Stream::new(a0, a2, &v6);
    return;
}
