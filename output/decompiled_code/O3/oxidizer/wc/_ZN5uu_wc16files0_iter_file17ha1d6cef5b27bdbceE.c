fn uu_wc::files0_iter_file(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x68], Other Possible Types: Result<struct4, struct8>
    let v2: i192;  // [bp-0x58]
    let v3: struct24;  // [sp-0x38], Other Possible Types: i192
    let v5: i32;  // ebp

    v0 = std::fs::File::open(a1, a2);
    match v0 {
        Ok(_) => {
            v5 = *((&v0 as &char + 4) as &i32);
            v3 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
            v2 = v3;
            return uu_wc::files0_iter(a0, v5 as u32 as u64, &v2);
        },
        Err(_) => {
            return struct24 {
                field_0: 9223372036854775809
                field_8:                 <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v1, a1, a2)
                field_16: &g_532168
            };
        },
    }
}
