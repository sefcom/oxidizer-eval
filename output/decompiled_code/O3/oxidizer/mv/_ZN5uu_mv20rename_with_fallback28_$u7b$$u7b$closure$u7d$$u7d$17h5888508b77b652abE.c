fn uu_mv::rename_with_fallback::{{closure}}(a0: u64, a1: &struct_0, a2: u64) -> u64 {
    let v0: u128;  // [sp-0x28]
    let v1: u64;  // [sp-0x18]

    indicatif::progress_bar::ProgressBar::set_position(a0, a1->field_18, a2);
    v1 = a1->field_10;
    v0 = a1->field_0;
    return indicatif::progress_bar::ProgressBar::set_message(a0, &v0);
}
