fn uu_head::read_n_bytes(a0: i64, a1: i64) -> long long {
    let v0: std::io::stdio::StderrLock;  // [bp-0x28]
    let v1: std::io::stdio::Stdout;  // [bp-0x20]
    let v2: std::io::stdio::StderrLock;  // [bp-0x18]
    let v3: u64;  // [bp-0x10]
    let v5: u64;  // rdx

    v2 = std::io::Read::take(a0, a1);
    v3 = v5;
    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1);
    return 0;
}
