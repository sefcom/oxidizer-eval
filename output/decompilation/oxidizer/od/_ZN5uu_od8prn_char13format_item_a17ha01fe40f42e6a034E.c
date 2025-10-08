fn uu_od::prn_char::format_item_a(a0: u64, a1: u32) -> long long {
    let v0: i64;  // [bp-0x50]

    v0 = "nul" + (a1 & 127) * 16;
    format!("{}", &v0);
    return a0;
}
