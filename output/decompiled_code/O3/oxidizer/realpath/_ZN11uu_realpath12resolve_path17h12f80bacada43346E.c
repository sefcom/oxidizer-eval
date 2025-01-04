fn uu_realpath::resolve_path(a0: u32, a1: u32, a2: u8, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct1;  // [bp-0x61]
    let v1: i64;  // [bp-0x60]
    let v2: i8;  // [bp-0x58]
    let v3: i64;  // [sp-0x48]
    let v4: i192;  // [sp-0x30], Other Possible Types: struct24
    let v5: i64;  // [bp+0x8]
    let v6: i8;  // [bp+0x10]
    let v7: i8;  // [bp+0x18]
    let v8: i64;  // rax
    let v9: i64;  // rsi
    let v10: i64;  // rdx

    uucore::features::fs::canonicalize();
    v8 = v2;
    if v3 == 0x8000000000000000 {
        return v8;
    }
    v3 = v1;
    v4 = uu_realpath::process_relative(&v3, v6, v7, a5, v5);
    v8 = uucore::mods::display::print_verbatim(&v4, v9, v10);
    if !v8 {
        v1 = std::io::stdio::stdout();
        v0 = struct1 {
            field_0: a2
        };
        v8 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v1, &v0, 1);
        return v8;
    }
    return v8;
}
