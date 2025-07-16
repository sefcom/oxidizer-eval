fn uu_head::read_n_bytes(a0: i64) -> long long {
    let v0: std::io::stdio::StderrLock;  // [bp-0x28]
    let v1: std::io::stdio::Stdout;  // [bp-0x20]
    let v2: u64;  // [bp-0x18]
    let v3: u64;  // [bp-0x10]
    let v5: u64;  // rdx

    v2 = a0;
    v3 = -1;
    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1);
    return v5;
}
