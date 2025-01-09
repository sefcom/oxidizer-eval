fn uu_wc::files0_iter_file(a0: &Result<struct73, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: i96;  // [sp-0x68], Other Possible Types: Result<struct4, struct8>
    let v1: struct24;  // [sp-0x58], Other Possible Types: i192
    let v2: struct24;  // [sp-0x38]
    let v4: i32;  // ebp
    let v5: i64;  // rax

    v0 = std::fs::File::open(a1, a2);
    match v0 {
        Ok(v4) => {
            v2 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
            v1 = v2;
            v5 = uu_wc::files0_iter(a0, *((&v0 as &char + 4) as &i32) as u32 as u64, &v1);
            return v5;
        },
        Err(_) => {
            *(a0 as &i64) = 9223372036854775809;
            *((a0 + 8) as &long long) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v0, a1, a2);
            *((a0 + 16) as &&i64) = &g_531158;
            return &g_531158;
        },
    }
}
