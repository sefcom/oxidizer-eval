fn uu_yes::exec(a0: u32, a1: u32) -> u64 {
    let v0: &struct_0;  // [sp-0x38], Other Possible Types: u64
    let v1: u32;  // [sp-0x2c]
    let v2: u64;  // [sp-0x28]
    let v4: u64;  // rax
    let v5: u64;  // rax

    v2 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v2);
    v4 = uucore::features::signals::enable_pipe_errors();
    if v4 != 134 {
        v5 = v4 * 0x100000000 | 2;
        return v5;
    }
    v1 = 1;
    v5 = uu_yes::splice::splice_data(a0, a1, &v1);
    if v5 {
        return v5;
    }
    do {
        v5 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, a0, a1);
    } while (!v5);
    return v5;
}
