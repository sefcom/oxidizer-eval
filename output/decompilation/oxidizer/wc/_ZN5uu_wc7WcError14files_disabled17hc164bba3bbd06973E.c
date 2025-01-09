fn uu_wc::WcError::files_disabled(a0: &struct32, a1: u64, a2: u64) -> int {
    let v0: i192;  // [sp-0x40], Other Possible Types: struct24
    let v1: i128;  // [sp-0x28], Other Possible Types: struct24
    let v2: i64;  // [sp-0x18]
    let v4: i128;  // xmm0
    let v5: i256;  // ymm0
    let v6: i256;  // ymm0

    v0 = std::sys::os_str::bytes::Slice::to_string_lossy(a1, a2);
    if v0 == 0x8000000000000000 {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
        return struct32 {
            field_0: 9223372036854775809
            field_8: v1
            field_24: v2
        };
    }
    v2 = *((&v0 as &char + 16) as &i64);
    v4 = v0;
    v6 = v5 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v4;
    v1 = v4;
}
