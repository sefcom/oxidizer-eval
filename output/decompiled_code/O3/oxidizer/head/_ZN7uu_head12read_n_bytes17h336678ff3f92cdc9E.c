fn uu_head::read_n_bytes(a0: u64, a1: i64, a2: i64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: &struct_0;  // [sp-0x20], Other Possible Types: u64
    let v2: u64;  // [sp-0x18]
    let v3: u64;  // [sp-0x10]
    let v5: u32;  // rsi
    let v6: u32;  // rdx
    let v7: void*;  // rbx

    v2 = a0;
    v3 = -1;
    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1, v5, v6);
    if !<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v2, &v0) {
        return 0;
    }
    return v7;
}
