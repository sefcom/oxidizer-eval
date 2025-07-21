fn uu_pwd::logical_path::looks_reasonable(a0: i64, a1: i64) -> long long {
    let v0: void*;  // [bp-0x2e0], Other Possible Types: std::path::Components
    let v1: alloc::string::String;  // [bp-0x2d8]
    let v2: struct40;  // [bp-0x2d0]
    let v4: u16;  // [bp-0x2a8]
    let v5: u8;  // [bp-0x230]
    let v8: alloc::borrow::Cow<str>;  // [bp-0x180], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>
    let v9: u32;  // [bp-0x178]
    let v10: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0]
    let v13: u32;  // ebx

    v0 = std::path::Path::components(a0, a1);
    if *((&v0.prefix as &char + 18) as &i8) || (&v0.path)[1].data_ptr as i8 - 5 >= 2 {
        v8 = std::sys::os_str::bytes::Slice::to_string_lossy(a0, a1);
        v2 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v9, *((&v8 as &char + 16) as &i64));
        v0 = 0;
        v1 = *((&v8 as &char + 16) as &i64);
        v4 = 1;
        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), a1) {
            v10 = std::fs::metadata(a0, a1);
            v8 = std::fs::metadata(".");
            memcpy(&v0, &v10, 176);
            memcpy(&v5, &v8, 176);
            return v13;
        }
    }
    return 0;
}
