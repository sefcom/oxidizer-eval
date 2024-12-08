fn uu_realpath::resolve_path(a0: u32, a1: u32, a2: u8, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x61]
    let v1: i64;  // [sp-0x60]
    let v2: i8;  // [bp-0x58]
    let v4: i64;  // [sp-0x48], Other Possible Types: struct24
    let v5: struct24;  // [sp-0x30], Other Possible Types: i192
    let v6: i64;  // [bp+0x8]
    let v7: i8;  // [bp+0x10]
    let v8: i8;  // [bp+0x18]
    let v9: i64;  // rax
    let v10: i64;  // rsi
    let v11: i64;  // rdx

    uucore::features::fs::canonicalize();
    v9 = v2;
    if v4 == 0x8000000000000000 {
        return v9;
    }
    v4 = struct24 {
        field_0: v1
        field_8: v9
        field_16: v3
    };
    v5 = uu_realpath::process_relative(&v4, v7, v8, a5, v6);
    v9 = uucore::mods::display::print_verbatim(&v5, v10, v11);
    if !v9 {
        v1 = std::io::stdio::stdout();
        v0 = a2;
        v9 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v1, &v0, 1);
        return v9;
    }
    return v9;
}
