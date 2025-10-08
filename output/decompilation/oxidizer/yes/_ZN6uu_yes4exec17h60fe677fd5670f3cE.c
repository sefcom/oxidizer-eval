fn uu_yes::exec(a0: &[u8]) -> u64 {
    let v0: u64;  // [bp-0x30]
    let v1: std::io::stdio::Stdout;  // [bp-0x28]
    let v3: u32;  // rdi
    let v4: u32;  // rsi
    let v5: u32;  // rdx
    let v6: u64;  // rcx
    let v8: core::result::Result<(), std::io::error::Error>;  // rax

    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1);
    if uucore::features::signals::enable_pipe_errors(v3, v4, v5, v6) == 134 {
        do {
            v8 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, a0);
        } while (!v8);
    }
    return v8;
}
