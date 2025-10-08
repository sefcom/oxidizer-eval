fn just::function::path_exists(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0xf8]
    let v1: u64;  // [bp-0xf0]
    let v2: u64;  // [bp-0xe8]
    let v3: struct24;  // [bp-0xe0]
    let v4: i64;  // [bp-0xd8]
    let v5: u64;  // [bp-0xd0]
    let v6: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc8]
    let v7: struct24;  // [bp-0xc8]

    v3 = just::execution_context::ExecutionContext::working_directory(*((*(a1 as &i64) + 16) as &i64), *((*(a1 as &i64) + 24) as &i64));
    v0 = std::path::Path::join(v4, v5, a2, a3);
    v6 = std::fs::metadata(v1, v2);
    v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec((v6 as i64 == 2 ? &g_46b313 : &g_467738), v6 as i64 == 2 | 4);
    return struct32 {
        field_0: 0
        field_8: *(&v7.field_0 as &i128)
        field_24: v7.field_16
    };
}
