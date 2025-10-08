fn just::function::sha256_file(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: struct4;  // [bp-0x174]
    let v1: struct24;  // [bp-0x170]
    let v2: u64;  // [bp-0x168]
    let v3: u64;  // [bp-0x160]
    let v4: struct112;  // [bp-0x158], Other Possible Types: struct24
    let v5: struct24;  // [bp-0x158]
    let v6: u32;  // [bp-0x144]
    let v7: Result<struct4, struct8>;  // [bp-0xd0], Other Possible Types: struct32
    let v8: struct4;  // [bp-0xcc]
    let v9: alloc::string::String;  // [bp-0xb0]
    let v10: struct56;  // [bp-0xa0]
    let v11: struct112;  // [bp-0x98]
    let v12: struct40;  // [bp-0x98]
    let v14: u32;  // ecx
    let v17: u64;  // rax
    let v18: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v4 = just::execution_context::ExecutionContext::working_directory(*((*(a1 as &i64) + 16) as &i64), *((*(a1 as &i64) + 24) as &i64));
    v1 = std::path::Path::join(v4.field_8, v4.field_16, a2, a3);
    v12 = <digest::core_api::wrapper::CoreWrapper<T> as core::default::Default>::default();
    v7 = std::fs::File::open(&v1);
    match v7 {
        Err(_) => {
            v5 = just::function::sha256_file::{{closure}}(v2, v3, *((&v7 as &char + 8) as &i64));
            v14 = v5.field_8 as i32;
            return struct40 {
                field_0: 1
                field_8: v5.field_0
                field_16: v14
                field_20: <UNKNOWN>
                field_28: <UNKNOWN>
            };
        },
        Ok(v0) => {
            v18 = std::io::copy::generic_copy(&v0, &v12);
            match v18 {
                Ok(_) => {
                    v4 = v11;
                    v7 = digest::FixedOutput::finalize_fixed(&v4);
                    v9 = format!("{}", &v7);
                    return struct32 {
                        field_0: 0
                        field_8: *(&v9.vec.buf.inner.cap as &i128)
                        field_24: v10
                    };
                },
                Err(_) => {
                    v5 = just::function::sha256_file::{{closure}}(v2, v3, *((&v18 as &char + 8) as &i64));
                    v17 = v5.field_16;
                    return struct32 {
                        field_0: 1
                        field_8: *(&v5.field_0 as &i128)
                        field_24: v17
                    };
                },
            }
        },
    }
}
