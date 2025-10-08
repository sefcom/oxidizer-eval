fn uu_head::read_n_lines(a0: u64, a1: u64, a2: u8) -> long long {
    let v0: std::io::stdio::Stdout;  // [bp-0x58]
    let v1: struct24;  // [bp-0x50]
    let v2: struct33;  // [bp-0x38]
    let v6: core::result::Result<(), std::io::error::Error>;  // rax
    let v7: u64;  // r14
    let v8: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v1 = struct24 {
        field_0: a0
        field_8: a1
        field_16: a2
    };
    v0 = std::io::stdio::stdout();
    v2 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::Stderr::lock(&v0));
    v8 = <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v1, &v2);
    if let Ok(_) = v8 {
        v6 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v2);
        if let Ok(_) = v6 {
            return v7;
        }
    }
    uu_head::wrap_in_stdout_error(v6);
    return v7;
}
