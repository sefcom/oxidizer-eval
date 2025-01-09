fn uu_head::is_seekable(a0: &u32) -> u64 {
    let v0: u64;  // [sp-0x30]
    let v1: u64;  // [sp-0x28]
    let v2: u64;  // [sp-0x20]
    let v3: u64;  // [sp-0x18]
    let v5: u64;  // rdx
    let v6: u32;  // ebx

    v2 = <std::fs::File as std::io::Seek>::seek(a0, 2, 0);
    v3 = v5;
    if !v2 {
        v0 = <std::fs::File as std::io::Seek>::seek(a0, 1, 0);
        v1 = v5;
        if !v0 {
            return v6;
        }
    }
    return 0;
}
