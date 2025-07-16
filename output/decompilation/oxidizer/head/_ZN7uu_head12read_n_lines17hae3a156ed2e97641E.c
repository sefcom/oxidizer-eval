fn uu_head::read_n_lines(a0: i64, a1: i64, a2: i8) -> long long {
    let v0: u64;  // [bp-0x50]
    let v1: std::io::stdio::Stdout;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: std::io::stdio::StderrLock;  // [bp-0x38]
    let v4: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x30]
    let v6: u64;  // rdx

    v1 = a0;
    v2 = a1;
    v3 = a2;
    v0 = std::io::stdio::Stderr {
        inner: std::io::stdio::stdout()
    };
    std::io::stdio::Stderr::lock(&v0);
    v4 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x4000);
    return v6;
}
