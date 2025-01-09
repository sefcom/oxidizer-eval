fn uu_head::read_n_lines(a0: u32, a1: u32, a2: u8) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v1: i64;  // [sp-0x48]
    let v2: i64;  // [sp-0x40]
    let v3: i8;  // [sp-0x38]
    let v4: i264;  // [sp-0x30], Other Possible Types: struct33
    let v6: i64;  // rbx

    v1 = a0;
    v2 = a1;
    v3 = a2;
    v0 = std::io::stdio::stdout();
    v4 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x4000, std::io::stdio::Stderr::lock(&v0));
    if !<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v1, &v4) {
        return 0;
    }
    return v6;
}
