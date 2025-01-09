fn uu_wc::files0_iter_file(a0: &Result<struct73, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct4, struct8>;  // [sp-0x68], Other Possible Types: i64
    let v1: i8;  // [bp-0x60]
    let v2: struct24;  // [bp-0x58]
    let v3: struct24;  // [sp-0x38]
    let v5: i32;  // ebp

    v0 = std::fs::File::open(a1, a2) as u64;
    match v0 {
        Ok(v5) => {
            v3 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
            *(&v2.field_0 as &struct24) = struct24 {
                field_0: v3
                field_16: *((&v3 as &char + 16) as &i64)
            };
            return uu_wc::files0_iter(a0, v5 as u32 as u64, &v2);
        },
        Err(_) => {
            *(a0 as &i64) = 9223372036854775809;
            *((a0 + 8) as &long long) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v1, a1, a2);
            *((a0 + 16) as &&i64) = &g_531158;
            return &g_531158;
        },
    }
}
