fn uu_wc::WcError::files_disabled(a0: &struct32, a1: u64, a2: u64) -> int {
    let v0: struct24;  // [sp-0x40]
    let v1: struct24;  // [sp-0x28], Other Possible Types: int
    let v2: i64;  // [sp-0x18]

    v0 = std::sys::os_str::bytes::Slice::to_string_lossy(a1, a2);
    if v0.field_0 as i64 != 0x8000000000000000 {
        v2 = v0.field_16;
        v1 = v0.field_0;
    } else {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((&v0.field_0 as &char + 8) as &i64), v0.field_16);
    }
    return struct32 {
        field_0: 9223372036854775809
        field_8: v1
        field_24: v2
    };
}
