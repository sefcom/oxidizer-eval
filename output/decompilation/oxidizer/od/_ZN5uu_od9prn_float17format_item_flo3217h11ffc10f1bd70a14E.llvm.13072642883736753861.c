fn uu_od::prn_float::format_item_flo32(a0: &struct24) -> int {
    let v0: String;  // [sp-0x70]
    let v1: struct24;  // [sp-0x28]
    let v3: iNone;  // xmm0

    v1 = uu_od::prn_float::format_flo32();
    v0 = format!(" {}", &v1);
    v3 = *(&v0.ptr as &i128);
    return struct24 {
        field_0: v3
        field_16: v0.len
    };
}
