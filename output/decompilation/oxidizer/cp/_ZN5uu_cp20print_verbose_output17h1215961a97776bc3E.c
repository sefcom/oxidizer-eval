fn uu_cp::print_verbose_output(a0: i8, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> long long {
    let v0: u8;  // [bp-0x29]
    let v1: u320;  // [bp-0x28]

    v0 = a0;
    if !*(a1 as &i64) {
        return uu_cp::print_paths(a0, a2, a3, a4, a5);
    }
    v1 = struct40 {
        field_0: &v0
        field_8: a2
        field_16: a3
        field_24: a4
        field_32: a5
    };
    return indicatif::progress_bar::ProgressBar::suspend(a1, &v1);
}
