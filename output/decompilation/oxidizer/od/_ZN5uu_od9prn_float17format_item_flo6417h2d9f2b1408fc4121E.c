fn uu_od::prn_float::format_item_flo64(a0: u64) -> long long {
    let v0: u8;  // [bp-0x28]

    uu_od::prn_float::format_flo64(&v0);
    format!(" {}", &v0);
    return a0;
}
