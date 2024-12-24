fn uu_yes::exec(a0: u64, a1: u64, a2: i64) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v1: struct4;  // [bp-0x2c]
    let v2: u64;  // [sp-0x28]
    let v4: u64;  // rsi
    let v5: u64;  // rdx
    let v6: u64;  // rax
    let v7: u64;  // rax

    v2 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v2, v4, v5);
    v6 = uucore::features::signals::enable_pipe_errors();
    if v6 != 134 {
        v7 = v6 * 0x100000000 | 2;
        return v7;
    }
    v1 = struct4 {
        field_0: 1
    };
    v7 = uu_yes::splice::splice_data(a0, a1, &v1);
    if v7 {
        return v7;
    }
    do {
        v7 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, a0, a1);
    } while (!v7);
    return v7;
}
