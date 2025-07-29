fn flealib::fileserver::FileServer::read_binary_file(a0: i64, a1: i64, a2: u32, a3: u64) -> long long {
    let v0: struct4;  // [bp-0x16c]
    let v1: u128;  // [bp-0x168]
    let v2: u64;  // [bp-0x160]
    let v3: u64;  // [bp-0x158]
    let v4: Result<struct4, struct8>;  // [bp-0x148], Other Possible Types: alloc::string::String, u64
    let v5: u32;  // [bp-0x148]
    let v6: u32;  // [bp-0x144]
    let v7: u64;  // [bp-0x140]
    let v8: i64;  // [bp-0x138], Other Possible Types: u64
    let v9: u64;  // [bp-0x130]
    let v10: void*;  // [bp-0x128]
    let v11: alloc::string::String;  // [bp-0x118]
    let v12: struct24;  // [bp-0x118]
    let v13: u64;  // [bp-0xf8]
    let v14: u64;  // [bp-0xf0]
    let v15: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0xe8], Other Possible Types: struct48, struct24
    let v16: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe8]
    let v17: u64;  // [bp-0xd8]
    let v18: alloc::string::String;  // [bp-0x30]
    let v19: alloc::string::String;  // [bp-0x30]
    let v22: u64;  // rdx
    let v23: u64;  // r8
    let v24: u64;  // rax
    let v26: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v27: &mut [u8];  // rax:rdx

    v13 = a2;
    v14 = a3;
    v5 = 0;
    v27 = core::char::methods::encode_utf8_raw(47, &v5, a2);
    v15 = <T as alloc::slice::hack::ConvertVec>::to_vec(v27.data_ptr, a2);
    v3 = v17;
    v1 = *(&v15.field_0 as &i128);
    if core::slice::<impl [T]>::ends_with(*((a1 + 8) as &i64), *((a1 + 16) as &i64), v2, v17) {
        v15 = <T as alloc::slice::hack::ConvertVec>::to_vec(0x1, 0);
        v8 = v17;
        v4 = *(&v15.field_0 as &i128);
        v3 = v8;
        v1 = *(&v5 as &i128);
    }
    v15 = struct48 {
        field_0: a1
        field_8: <alloc::string::String as core::fmt::Display>::fmt
        field_16: &v1 as u8
        field_24: <alloc::string::String as core::fmt::Display>::fmt
        field_32: &v13
        field_40: <&T as core::fmt::Display>::fmt
    };
    v4 = &g_46b258;
    v7 = 3;
    v10 = 0;
    v8 = &v15;
    v9 = 3;
    v18 = core::option::Option<T>::map_or_else(&v4, v22, &v1, v23);
    v11 = v19;
    v4 = <alloc::string::String as core::clone::Clone>::clone(&v11);
    v16 = std::fs::metadata(&v4, a2);
    if let Err(_) = v16 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v24
        };
    }
    if *((&v16 as &char + 80) as &i64) > 0x1f400000 {
        v24 = std::io::error::Error::new(40, "File too large");
    } else {
        v15 = v12;
        v4 = std::fs::File::open(&v15);
        match v4 {
            Err(_) => {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: 3
                };
            },
            Ok(v0) => {
                v15 = Vec::new();
                v26 = <std::fs::File as std::io::Read>::read_to_end(&v0, &v15);
                match v26 {
                    Ok(_) => {
                        return struct24 {
                            field_0: *(&v15.buf.inner.cap as &i128)
                            field_16: 0
                        };
                    },
                    Err(_) => {
                        return struct16 {
                            field_0: 0x8000000000000000
                            field_8: *((&v26 as &char + 8) as &i64)
                        };
                    },
                }
            },
        }
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v24
    };
}
