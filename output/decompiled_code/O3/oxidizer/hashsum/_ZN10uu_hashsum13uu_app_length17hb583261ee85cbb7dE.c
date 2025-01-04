fn uu_hashsum::uu_app_length(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i5696;  // [sp-0x2d8], Other Possible Types: struct712

    v0 = uu_hashsum::uu_app_common(a1, a2);
    uu_hashsum::uu_app_opt_length(a0, &v0);
    return a0;
}
