fn uu_head::is_seekable(a0: &u32) -> u64 {
    let v0: u64;  // [sp-0x30]
    let v1: u64;  // [sp-0x28]
    let v2: u64;  // [sp-0x20]
    let v3: u64;  // [sp-0x18]
    let v5: u64;  // rdx

    v2 = <std::fs::File as std::io::Seek>::seek(a0, 2, 0);
    v3 = v5;
    if !v2 {
        v0 = <std::fs::File as std::io::Seek>::seek(a0, 1, 0);
        v1 = v5;
        if !v0 {
            v0 = <std::fs::File as std::io::Seek>::seek(a0, 0, core::result::Result<T,E>::unwrap(v5));
            v1 = v5;
            return a0 | -0x100 | !v0;
        }
    }
    return 0;
}
