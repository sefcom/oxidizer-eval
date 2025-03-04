fn uu_head::read_n_bytes(a0: u32) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: &struct_0;  // [sp-0x20]
    let v2: u64;  // [sp-0x18]
    let v3: u64;  // [sp-0x10]
    let v5: void*;  // rbx

    v2 = a0;
    v3 = -1;
    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1);
    if <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v2, &v0) {
        return v5;
    }
    return 0;
}
