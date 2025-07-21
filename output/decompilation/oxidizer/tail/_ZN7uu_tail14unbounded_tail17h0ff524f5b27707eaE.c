fn uu_tail::unbounded_tail(a0: i64, a1: i64) -> void {
    let v0: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x2090]
    let v1: std::io::stdio::Stderr;  // [bp-0x2050]
    let v2: void*;  // [bp-0x2030]
    let v3: void*;  // [bp-0x1030]
    let v4: u64;  // [bp-0x30]
    let v5: u64;  // [bp-0x28]
    let v6: u64;  // [bp-0x20]
    let v7: u64;  // [bp-0x18]
    let v8: u64;  // [bp-0x10]
    let v10: u64;  // r15
    let v11: u64;  // r14
    let v12: u64;  // r13
    let v13: u64;  // r12
    let v14: u64;  // rbx

    v8 = v10;
    v7 = v11;
    v6 = v12;
    v5 = v13;
    v4 = v14;
    v3 = 0;
    v2 = 0;
    v1 = std::io::stdio::Stderr {
        inner: std::io::stdio::stdout()
    };
    std::io::stdio::Stderr::lock(&v1);
    v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
}
