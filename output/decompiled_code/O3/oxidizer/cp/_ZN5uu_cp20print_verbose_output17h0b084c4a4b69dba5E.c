fn uu_cp::print_verbose_output(a0: u64, a1: &u64, a2: u64, a3: u64, a4: u64, a5: u64) -> u64 {
    let v0: u8;  // [sp-0x29]
    let v1: u64;  // [sp-0x28]
    let v2: u64;  // [sp-0x20]
    let v3: u64;  // [sp-0x18]
    let v4: u64;  // [sp-0x10]
    let v5: u64;  // [sp-0x8]

    v0 = a0;
    if *(a1) {
        v1 = &v0;
        v2 = a2;
        v3 = a3;
        v4 = a4;
        v5 = a5;
        return indicatif::progress_bar::ProgressBar::suspend(a1, &v1, a2);
    }
    return uu_cp::print_paths(a0 & 4294967295, a2, a3, a4, a5);
}
