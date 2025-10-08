fn uu_head::read_but_last_n_bytes(a0: u32, a1: u64) -> long long {
    let v0: u64;  // [bp-0x20]
    let v1: std::io::stdio::Stdout;  // [bp-0x18]
    let v3: core::result::Result<(), std::io::error::Error>;  // rax
    let v4: u64;  // r14

    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1);
    if !(uu_head::take::copy_all_but_n_bytes(a0, &v0, a1) & 1) {
        v3 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v0);
        if let Ok(_) = v3 {
            return v4;
        }
    }
    uu_head::wrap_in_stdout_error(v3);
    return v4;
}
