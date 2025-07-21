fn uu_head::read_n_bytes(a0: i64, a1: i64) -> long long {
    let v0: std::io::stdio::StderrLock;  // [bp-0x28]
    let v1: std::io::stdio::Stdout;  // [bp-0x20]
    let v2: struct16;  // [bp-0x18]
    let v4: u64;  // rdx

    v2 = struct16 {
        field_0: std::io::Read::take(a0, a1)
        field_8: v4
    };
    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1);
    return 0;
}
