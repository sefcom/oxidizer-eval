fn uu_touch::prepend_century(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: i32;  // [bp-0x7c]
    let v1: struct16;  // [bp-0x78]
    let v5: core::result::Result<u32, core::num::error::ParseIntError>;  // rax:rax

    v1 = struct16 {
        field_0: a1
        field_8: a2
    };
    v5 = core::num::<impl u32>::from_ascii_radix(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(a1, a2, a2) as u64, a1, a2) as u128;
    if !(v5 as u8 & 1) {
        v0 = 19 + ((v5 >> 32) as u32 < 69);
        return format!("{}{}", &v0, &v1);
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: uu_touch::prepend_century::{{closure}}(a1, a2)
        field_16: &g_679e10
    };
}
