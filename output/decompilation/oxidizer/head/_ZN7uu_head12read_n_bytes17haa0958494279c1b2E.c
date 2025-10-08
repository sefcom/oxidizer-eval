fn uu_head::read_n_bytes(a0: u32, a1: u32) -> long long {
    let v0: u64;  // [bp-0x38]
    let v1: std::io::stdio::Stdout;  // [bp-0x30]
    let v2: struct24;  // [bp-0x28]
    let v5: core::result::Result<(), std::io::error::Error>;  // rax
    let v6: u64;  // r14
    let v7: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v2 = std::io::Read::take(a0, a1);
    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1);
    v7 = <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v2, &v0);
    if let Ok(_) = v7 {
        v5 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v0);
        if let Ok(_) = v5 {
            return v6;
        }
    }
    uu_head::wrap_in_stdout_error(v5);
    return v6;
}
