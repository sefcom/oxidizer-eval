fn just::function::source_file(a0: i64, a1: i64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x48], Other Possible Types: struct24
    let v1: struct24;  // [bp-0x48]
    let v2: void*;  // [bp-0x40]
    let v3: u64;  // [bp-0x38]
    let v4: struct24;  // [bp-0x30]
    let v5: i64;  // [bp-0x28]
    let v7: u64;  // rax
    let v8: &u8;  // rdx

    v7 = std::path::Path::parent(*((*((*(a1 as &i64) + 24) as &i64) + 8) as &i64), *((*((*(a1 as &i64) + 24) as &i64) + 16) as &i64));
    core::option::unwrap(v7);
    v4 = std::path::Path::join(v7, v8, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    v0 = core::str::converts::from_utf8(v5, v4.field_16);
    match v0 {
        Ok(_) => {
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v2, v3);
            return struct32 {
                field_0: 0
                field_8: v1.field_0 as i64
                field_16: *((&v1.field_0 as &char + 8) as &i128)
            };
        },
        Err(_) => {
            v0 = just::function::source_file::{{closure}}(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
            return struct32 {
                field_0: 1
                field_8: v0.field_0
                field_24: v3
            };
        },
    }
}
