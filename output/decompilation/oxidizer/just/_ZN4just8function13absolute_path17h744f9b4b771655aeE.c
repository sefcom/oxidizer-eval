fn just::function::absolute_path(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xb0], Other Possible Types: struct24
    let v1: void*;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: u128;  // [bp-0x80]
    let v5: u64;  // [bp-0x78]
    let v6: struct8;  // [bp-0x70]
    let v7: struct24;  // [bp-0x58]
    let v8: u64;  // [bp-0x50]
    let v9: u64;  // [bp-0x48]
    let v10: alloc::string::String;  // [bp-0x40]
    let v12: i64;  // r13
    let v13: u64;  // rax
    let v14: u64;  // rax
    let v15: void*;  // rax

    v12 = *(a1 as &i64);
    v0 = just::execution_context::ExecutionContext::working_directory(*((v12 + 16) as &i64), *((v12 + 24) as &i64));
    v3 = std::path::Path::join(v1, v2, a2, a3);
    v7 = <&std::path::Path as lexiclean::Lexiclean>::lexiclean(v5, v6);
    v0 = core::str::converts::from_utf8(v8, v9);
    match v0 {
        Ok(_) => {
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v1, v2);
            *((a0 + 24) as &u64) = v2;
            *((a0 + 8) as &i128) = *(&v0.field_0 as &i128);
            v15 = 0;
        },
        Err(_) => {
            v3 = *((*((v12 + 24) as &i64) + 32) as &i128) as u128;
            v10 = format!("Working directory is not valid unicode: {}", &v3 as u192);
            v13 = 1;
            return struct32 {
                field_0: v14
                field_8: *(&v10.vec.buf.inner.cap as &i128)
                field_24: v10.vec.len
            };
        },
    }
}
