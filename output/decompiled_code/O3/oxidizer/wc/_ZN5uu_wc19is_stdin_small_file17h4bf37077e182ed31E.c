fn uu_wc::is_stdin_small_file() -> u64 {
    let v0: struct4;  // [bp-0xbc]
    let v1: struct16;  // [sp-0xb8], Other Possible Types: u128
    let v2: i8;  // [bp-0x80]
    let v3: i8;  // [bp-0x68]
    let v5: u64;  // rbx

    std::io::stdio::stdin();
    v0 = struct4 {
        field_0: 0
    };
    v1 = std::fs::File::metadata(&v0);
    return (v1 as i64 == 2 ? 0 : v5 | -0x100 | v3 < 10485761 & (0xf000 & v2) == 0x8000);
}
