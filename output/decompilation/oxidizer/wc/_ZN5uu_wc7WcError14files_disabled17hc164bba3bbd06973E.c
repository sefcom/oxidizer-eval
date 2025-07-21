fn uu_wc::WcError::files_disabled(a1: i64, a2: i64) -> : struct32 {
    let a0: u64;  // rsi
    let v0: alloc::borrow::Cow<str>;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v2: void*;  // [bp-0x30], Other Possible Types: u64
    let v3: u128;  // [bp-0x28]
    let v4: u64;  // [bp-0x18]
    let v6: i64;  // rdi

    v0 = std::sys::os_str::bytes::Slice::to_string_lossy(a0, a1);
    if v0 as i64 == 0x8000000000000000 {
        <T as alloc::slice::hack::ConvertVec>::to_vec(v1, v2, a2);
    } else {
        v4 = v2;
        v3 = v0 as i128;
    }
    *((v6 + 24) as &u64) = v4;
    *((v6 + 8) as &u128) = v3;
    *(v6 as &i64) = 9223372036854775809;
    return;
}
