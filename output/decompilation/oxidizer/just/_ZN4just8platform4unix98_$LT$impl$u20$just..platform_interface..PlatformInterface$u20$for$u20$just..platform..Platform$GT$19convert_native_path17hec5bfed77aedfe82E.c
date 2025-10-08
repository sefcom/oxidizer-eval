fn just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::convert_native_path(a1: i64, a2: i64, a3: i64, a4: &[u8]) -> : struct32 {
    let a0: u64;  // rdi
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x20]
    let v1: struct24;  // [bp-0x20]
    let v2: u64;  // [bp-0x18]
    let v5: void*;  // rax
    let v6: u64;  // rax

    v0 = core::str::converts::from_utf8(a4);
    match v0 {
        Ok(_) => {
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v2, *((&v0 as &char + 16) as &i64));
            v5 = 0;
            return struct32 {
                field_0: v6
                field_8: v1.field_0
                field_16: *(&v1.field_8 as &i128)
            };
        },
        Err(_) => {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, "Error getting current directory: unicode decode error");
        },
    }
}
