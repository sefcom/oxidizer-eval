fn uu_yes::exec(a0: u32, a1: u32) -> u64 {
    let v0: &struct_0;  // [sp-0x38]
    let v1: u32;  // [sp-0x2c]
    let v2: u64;  // [sp-0x28]
    let v4: u64;  // rax

    v2 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v2);
    if uucore::features::signals::enable_pipe_errors() as i32 != 134 {
        return v4;
    }
    v1 = 1;
    if uu_yes::splice::splice_data(a0, a1, &v1) {
        return v4;
    }
    do { } while (!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, a0, a1));
    return v4;
}
