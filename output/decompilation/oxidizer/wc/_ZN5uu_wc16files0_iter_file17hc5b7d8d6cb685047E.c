fn uu_wc::files0_iter_file(a1: i64, a2: i64) -> Result<struct73, struct24> {
    let a0: u64;  // rdi
    let v0: Result<struct4, struct8>;  // [bp-0x68]
    let v1: i32;  // [bp-0x64]
    let v2: u64;  // [bp-0x60]
    let v3: struct24;  // [bp-0x58]
    let v4: struct24;  // [bp-0x38], Other Possible Types: u8

    v0 = std::fs::File::open(a1, a2);
    match v0 {
        Ok(_) => {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v4, a1, a2);
            v3 = v4;
            uu_wc::files0_iter(a0, v1 as u64, &v3);
            return;
        },
        Err(_) => {
            return struct24 {
                field_0: 9223372036854775809
                field_8: <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v2, a1, a2)
                field_16: &g_4f9240
            };
        },
    }
}
