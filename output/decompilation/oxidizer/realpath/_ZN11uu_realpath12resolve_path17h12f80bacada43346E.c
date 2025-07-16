fn uu_realpath::resolve_path(a0: i64, a1: i64, a2: i8, a3: i32, a4: i32, a5: i64, a6: i64, a7: i64, a8: i64) -> long long {
    let v0: u8;  // [bp-0x61]
    let v1: u192;  // [bp-0x60], Other Possible Types: std::io::stdio::Stdout
    let v2: u64;  // [bp-0x58]
    let v3: u192;  // [bp-0x48]
    let v4: struct24;  // [bp-0x30]
    let v5: u64;  // rax

    uucore::features::fs::canonicalize(&v1, a0, a1, a4, a3);
    if v1 == 0x8000000000000000 {
        return v2;
    }
    v3 = v1;
    v4 = uu_realpath::process_relative(&v3, a7, a8, a5, a6);
    v5 = uucore::mods::display::print_verbatim(&v4);
    if v5 {
        return v5;
    }
    v1 = std::io::stdio::stdout();
    v0 = a2;
    return <std::io::stdio::Stdout as std::io::Write>::write_all(&v1, &v0, 1);
}
