fn uu_wc::is_stdin_small_file() -> u64 {
    let v0: struct4;  // [bp-0xbc]
    let v1: struct16;  // [sp-0xb8]
    let v3: u32;  // ebx

    std::io::stdio::stdin();
    v0 = struct4 {
        field_0: 0
    };
    v1 = std::fs::File::metadata(&v0);
    return v3;
}
