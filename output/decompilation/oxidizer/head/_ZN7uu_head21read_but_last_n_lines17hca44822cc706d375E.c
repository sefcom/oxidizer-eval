fn uu_head::read_but_last_n_lines(a0: u64, a1: u64, a2: u8) -> long long {
    let v0: u64;  // [bp-0x30]
    let v1: u64;  // [bp-0x28]
    let v2: std::io::stdio::Stdout;  // [bp-0x20]
    let v4: core::result::Result<(), std::io::error::Error>;  // rax
    let v5: u64;  // r14
    let v6: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v1 = a0;
    v2 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v2);
    if !a1 {
        v6 = <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v1, &v0);
        if !(v6 as i64 & 1) {
            return v5;
        }
    } else if !(uu_head::take::copy_all_but_n_lines(a0, &v0, a1, a2) & 1) {
        v4 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v0);
        if let Ok(_) = v4 {
            return v5;
        }
    }
    uu_head::wrap_in_stdout_error(v4);
    return v5;
}
