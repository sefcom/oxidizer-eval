fn uu_od::prn_float::format_item_flo64(a0: &struct24) -> int {
    let v0: String;  // [sp-0x70]
    let v1: u8;  // [bp-0x28]
    let v3: u128;  // xmm0

    uu_od::prn_float::format_flo64(&v1);
    v0 = format!(" {}", &v1);
    v3 = *(&v0.ptr as &i128);
    return struct24 {
        field_0: v3
        field_16: v0.len
    };
}
