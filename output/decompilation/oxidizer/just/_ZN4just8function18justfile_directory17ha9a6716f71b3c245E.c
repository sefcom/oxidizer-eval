fn just::function::justfile_directory(a0: i64, a1: i64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x30], Other Possible Types: struct24
    let v1: struct24;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]
    let v4: u64;  // rax
    let v5: u64;  // rdx
    let v6: core::result::Result<&str, core::str::error::Utf8Error>;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rax

    v4 = std::path::Path::parent(*((*((*(a1 as &i64) + 24) as &i64) + 8) as &i64), *((*((*(a1 as &i64) + 24) as &i64) + 16) as &i64));
    if !v4 {
        v0 = just::function::justfile_directory::{{closure}}(*((*((*(a1 as &i64) + 24) as &i64) + 8) as &i64), *((*((*(a1 as &i64) + 24) as &i64) + 16) as &i64));
        v8 = v0.field_16;
        *((a0 + 8) as &i128) = *(&v0.field_0 as &i128);
        *((a0 + 24) as &u64) = v8;
    }
    v0 = core::str::converts::from_utf8(v4, v5);
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
            just::function::justfile_directory::{{closure}}(a0 + 8, v4, v5);
        },
    }
}
