fn uu_wc::files0_iter_file(a1: i64, a2: i64) -> Result<struct73, struct24> {
    let a0: u64;  // rsi
    let v0: Result<struct4, struct8>;  // [bp-0x68]
    let v1: u32;  // [bp-0x64]
    let v2: u64;  // [bp-0x60]
    let v3: struct24;  // [bp-0x58]
    let v4: std::sys::os_str::bytes::Buf;  // [bp-0x38]
    let v5: struct24;  // [bp-0x38]
    let v7: u64;  // rax
    let v8: i64;  // rdi
    let v9: u64;  // rdi

    v0 = std::fs::File::open(a0, a1);
    match v0 {
        Ok(_) => {
            v4 = std::sys::os_str::bytes::Slice::to_owned(a0, a1);
            v3 = v5;
            uu_wc::files0_iter(v9, v1, &v3);
            return;
        },
        Err(_) => {
            v7 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v2, a0, a1);
            *(v8 as &i64) = 9223372036854775809;
            *((v8 + 8) as &u64) = v7;
            *((v8 + 16) as &&u8) = &g_531158;
            return;
        },
    }
}
