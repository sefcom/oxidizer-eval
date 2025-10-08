fn uu_cp::print_verbose_output(a0: u8, a1: i64, a2: u64, a3: u64, a4: u64, a5: u64) -> long long {
    let v0: u8;  // [bp-0x29]
    let v1: struct40;  // [bp-0x28]

    v0 = a0;
    if !a1 {
        return uu_cp::print_paths(a0, a2, a3, a4, a5) as u64;
    }
    v1 = struct40 {
        field_0: &v0
        field_8: a2
        field_16: a3
        field_24: a4
        field_32: a5
    };
    return indicatif::progress_bar::ProgressBar::suspend(*(a1 as &i64), &v1);
}
