fn just::function::module_file(a0: u64, a1: i64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x28]
    let v1: struct24;  // [bp-0x28]
    let v2: u64;  // [bp-0x20]
    let v4: i64;  // r14
    let v6: void*;  // rax
    let v7: u64;  // rax

    v4 = *((*(a1 as &i64) + 16) as &i64);
    v0 = core::str::converts::from_utf8(*((v4 + 80) as &i64), *((v4 + 88) as &i64));
    match v0 {
        Ok(_) => {
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v2, *((&v0 as &char + 16) as &i64));
            v6 = 0;
            return struct32 {
                field_0: v7
                field_8: v1.field_0
                field_16: *(&v1.field_8 as &i128)
            };
        },
        Err(_) => {
            just::function::module_file::{{closure}}(a0 + 8, *((v4 + 80) as &i64), *((v4 + 88) as &i64));
        },
    }
}
