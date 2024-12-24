fn uu_pwd::logical_path::looks_reasonable(a0: u32, a1: u32) -> u64 {
    let v0: i160;  // [sp-0x2e0], Other Possible Types: struct20
    let v1: i8;  // [bp-0x2c0]
    let v2: i8;  // [bp-0x2b8]
    let v3: i16;  // [sp-0x2a8]
    let v4: i8;  // [bp-0x2a6]
    let v5: i8;  // [bp-0x230]
    let v6: i8;  // [bp-0x210]
    let v7: i8;  // [bp-0x208]
    let v8: i192;  // [sp-0x180], Other Possible Types: Result<struct176, struct16>, struct24
    let v9: Result<struct176, struct16>;  // [sp-0xd0], Other Possible Types: i1408
    let v11: i64;  // r15
    let v12: i64;  // rsi
    let v13: i64;  // rdx
    let v14: i32;  // ebx

    v0 = std::path::Path::components(a0, a1);
    if !(v4 || *((&v0 as &char + 16) as &i8) - 5 >= 2) {
        return 0;
    }
    v8 = std::sys::os_str::bytes::Slice::to_string_lossy(a0, a1);
    v11 = *((&v8 as &char + 16) as &i64);
    v0.field_16 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher((stack_base)[376] as i64, v0.field_8);
    v0 = 0;
    v0.field_8 = vvar_72{reg 136};
    v3 = 1;
    if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, v12, v13) as i32) {
        v9 = std::fs::metadata(a0, a1);
        v8 = std::fs::metadata(".");
        memcpy(&v0, &v9, 176);
        memcpy(&v5, &v8, 176);
        v14 = 0;
        if v0 != 2 && v5 != 2 {
            v14 = -0x100 | (!(v2 ^ v7) && !(v1 ^ v6));
        }
        return v14;
    }
}
