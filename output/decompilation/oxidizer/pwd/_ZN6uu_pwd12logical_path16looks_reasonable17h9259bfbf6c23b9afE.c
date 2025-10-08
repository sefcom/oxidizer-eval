fn uu_pwd::logical_path::looks_reasonable(a0: &std::path::Path) -> u64 {
    let v0: void*;  // [bp-0x2f0], Other Possible Types: struct20
    let v1: u64;  // [bp-0x2e8]
    let v2: struct40;  // [bp-0x2e0]
    let v4: u16;  // [bp-0x2b8]
    let v5: u8;  // [bp-0x2b6]
    let v6: u8;  // [bp-0x240]
    let v9: Result<struct24, struct24>;  // [bp-0x190]
    let v10: u64;  // [bp-0x188]
    let v11: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v13: u64;  // rsi
    let v15: u64;  // rdx
    let v16: u32;  // ebx

    v0 = std::path::Path::components(a0);
    if v5 || v0.field_16 - 5 >= 2 {
        v9 = alloc::string::String::from_utf8_lossy(a0);
        v2 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v10, *((&v9 as &char + 16) as &i64));
        v0 = 0;
        v1 = *((&v9 as &char + 16) as &i64);
        v4 = 1;
        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), v13) {
            v11 = std::fs::metadata(a0);
            v9 = std::fs::metadata(v13, v15);
            memcpy(&v0, &v11, 176);
            memcpy(&v6, &v9, 176);
            return v16;
        }
    }
    return 0;
}
