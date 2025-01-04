fn uu_pwd::logical_path::looks_reasonable(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x2e0], Other Possible Types: struct20
    let v1: i64;  // [sp-0x2d8]
    let v2: i320;  // [sp-0x2d0], Other Possible Types: struct40
    let v3: i16;  // [sp-0x2a8]
    let v4: i8;  // [bp-0x2a6]
    let v5: i8;  // [bp-0x230]
    let v6: i8;  // [bp-0x210]
    let v7: i8;  // [bp-0x208]
    let v8: i1408;  // [sp-0x180], Other Possible Types: struct24, Result<struct176, struct16>
    let v9: i1408;  // [sp-0xd0], Other Possible Types: Result<struct176, struct16>
    let v12: i64;  // rsi
    let v13: i64;  // rdx
    let v14: i32;  // ebx

    v0 = std::path::Path::components(a0, a1);
    if !(v4 || *((&v0 as &char + 16) as &i8) - 5 >= 2) {
        return 0;
    }
    v8 = std::sys::os_str::bytes::Slice::to_string_lossy(a0, a1);
    v2 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(*((&v8 as &char + 8) as &i64), v1);
    v0 = 0;
    v1 = *((&v8 as &char + 16) as &i64);
    v3 = 1;
    if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, v12, v13)) {
        v9 = std::fs::metadata(a0, a1);
        v8 = std::fs::metadata(".");
        memcpy(&v0, &v9, 176);
        memcpy(&v5, &v8, 176);
        v14 = 0;
        if v0 != 2 && v5 != 2 {
            v14 = -0x100 | (!(*((&v2 as &char + 24) as &i64) ^ v7) && !(*((&v2 as &char + 16) as &i64) ^ v6));
        }
        return v14;
    }
}
