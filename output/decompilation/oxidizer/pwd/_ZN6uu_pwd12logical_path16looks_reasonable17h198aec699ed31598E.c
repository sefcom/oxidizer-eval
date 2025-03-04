fn uu_pwd::logical_path::looks_reasonable(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x2e0], Other Possible Types: struct20
    let v1: i64;  // [sp-0x2d8]
    let v2: struct40;  // [sp-0x2d0]
    let v3: i16;  // [sp-0x2a8]
    let v4: i8;  // [bp-0x2a6]
    let v5: i8;  // [bp-0x230]
    let v6: i8;  // [bp-0x210]
    let v7: i8;  // [bp-0x208]
    let v8: Result<struct176, struct8>;  // [sp-0x180], Other Possible Types: struct24
    let v9: Result<struct176, struct8>;  // [sp-0xd0]

    v0 = std::path::Path::components(a0, a1);
    if !(v4 || v0.field_16 - 5 >= 2) {
        return 0;
    }
    v8 = std::sys::os_str::bytes::Slice::to_string_lossy(a0, a1);
    v2 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(*((&v8.field_0 as &char + 8) as &i64), v1);
    v0 = 0;
    v1 = v8.field_16;
    v3 = 1;
    if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0)) {
        v9 = std::fs::metadata(a0, a1);
        v8 = std::fs::metadata(".");
        memcpy(&v0, &v9, 176);
        memcpy(&v5, &v8, 176);
        if v0 as i32 == 2 {
            return 0;
        } else if *(&v5 as &i64) == 2 {
            return 0;
        } else {
            return !(v2.field_24 ^ *(&v7 as &i64)) && !(v2.field_16 ^ *(&v6 as &i64));
        }
    }
}
