fn uu_head::read_n_lines(a0: i64, a1: i64, a2: i8) -> long long {
    let v0: std::io::stdio::Stderr;  // [bp-0x50]
    let v1: struct24;  // [bp-0x48]
    let v2: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x30]
    let v4: u64;  // rdx

    v1 = struct24 {
        field_0: a0
        field_8: a1
        field_16: a2
    };
    v0 = std::io::stdio::Stderr {
        inner: std::io::stdio::stdout()
    };
    std::io::stdio::Stderr::lock(&v0);
    v2 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x4000);
    return v4;
}
