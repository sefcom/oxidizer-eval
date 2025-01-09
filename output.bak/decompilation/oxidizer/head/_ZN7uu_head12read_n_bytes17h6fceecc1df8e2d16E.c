fn uu_head::read_n_bytes(a0: u64, a1: u64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20], Other Possible Types: &struct_0
    let v2: u64;  // [sp-0x18]
    let v3: u64;  // [sp-0x10]
    let v5: u64;  // rdx
    let v6: void*;  // rbx

    v2 = std::io::Read::take(a0, a1);
    v3 = v5;
    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1);
    if !<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v2, &v0) {
        return 0;
    }
    return v6;
}
