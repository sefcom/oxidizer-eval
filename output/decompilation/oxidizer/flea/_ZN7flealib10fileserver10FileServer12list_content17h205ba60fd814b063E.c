fn flealib::fileserver::FileServer::list_content(a0: i64, a1: u64) -> long long {
    let v0: struct40;  // [bp-0x1a8], Other Possible Types: struct_0 *, struct24
    let v1: &str;  // [bp-0x1a8]
    let v2: u128;  // [bp-0x1a8]
    let v3: u64;  // [bp-0x1a0]
    let v4: i64;  // [bp-0x198], Other Possible Types: u64
    let v5: u64;  // [bp-0x190]
    let v6: void*;  // [bp-0x188], Other Possible Types: struct_0 *
    let v7: u64;  // [bp-0x180]
    let v8: core::result::Result<alloc::string::String, std::sys::os_str::bytes::Buf>;  // [bp-0x178], Other Possible Types: struct_0 *, struct24, u32
    let v9: Option<struct120>;  // [bp-0x178]
    let v10: struct24;  // [bp-0x178], Other Possible Types: u256
    let v11: std::sys::pal::unix::fs::dirent64_min;  // [bp-0x178]
    let v12: &str;  // [bp-0x178]
    let v13: u64;  // [bp-0x170]
    let v14: i64;  // [bp-0x168]
    let v15: u64;  // [bp-0x160]
    let v16: void*;  // [bp-0x158]
    let v17: struct24;  // [bp-0x148]
    let v18: struct16;  // [bp-0x148]
    let v19: struct16;  // [bp-0x148]
    let v20: struct24;  // [bp-0x140]
    let v21: struct24;  // [bp-0x138]
    let v22: struct24;  // [bp-0x130]
    let v23: struct24;  // [bp-0x128]
    let v24: u64;  // [bp-0x110]
    let v25: struct32;  // [bp-0x108]
    let v26: u128;  // [bp-0x108]
    let v27: u64;  // [bp-0xf8]
    let v28: u64;  // [bp-0xe8]
    let v29: u64;  // [bp-0xd8]
    let v30: u64;  // [bp-0xc0]
    let v31: u64;  // [bp-0xb8]
    let v32: struct24;  // [bp-0xb0]
    let v33: u64;  // [bp-0x68]
    let v34: alloc::string::String;  // [bp-0x60]
    let v35: std::ffi::os_str::OsString;  // [bp-0x48]
    let v37: struct24;  // bl
    let v38: u64;  // rdx
    let v40: i64;  // rbx
    let v41: u64;  // r8
    let v42: &str;  // rax:rdx
    let v43: struct24;  // [bp-0x120]
    let v44: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0xa8], Other Possible Types: u64
    let v45: u320;  // [bp-0xa0]
    let v46: alloc::string::String;  // [bp-0x78]

    v17 = 0;
    v20 = 8;
    v21 = 0;
    v11 = std::fs::read_dir(a1);
    v37 = v11.d_type;
    if v37 == 2 {
        v44 = v11.d_ino;
        v0 = <T as alloc::string::SpecToString>::spec_to_string(&v44);
        return struct32 {
            field_0: 1
            field_8: *(&v0.field_0 as &i128)
            field_24: v4
        };
    }
    v31 = v11.d_ino;
    v32 = v37;
    v8 = 0;
    v42 = core::char::methods::encode_utf8_raw(47, &v8, v38);
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v42.ptr, v38);
    v29 = v4;
    v28 = *(&v0.field_0 as &i128);
    v22 = v31;
    v23 = v37;
    loop {
        v44 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v22);
        if let None = v44 {
            break;
        }
        v0 = core::result::Result<T,E>::unwrap(&v45);
        v35 = std::fs::DirEntry::file_name(&v0);
        v8 = std::sys::os_str::bytes::Buf::into_string(&v35);
        v25 = v10;
        v43 = core::result::Result<T,E>::unwrap(&v25);
        v40 = a0;
        v30 = a1;
        v0 = &v30;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v28;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &v43;
        v7 = <alloc::string::String as core::fmt::Display>::fmt;
        v12 = "\x01\x00\x00";
        v16 = 0;
        v14 = &v0;
        v15 = 3;
        v46 = core::option::Option<T>::map_or_else(&v12 as u64, v38, <alloc::string::String as core::fmt::Display>::fmt, v41);
        v26 = *(&v46.vec.buf.inner.cap as &i128);
        v27 = v33;
        if std::path::Path::is_dir(*((&v26 as &char + 8) as &i64), v33) {
            v8 = &v28;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v14 = &v43;
            v15 = <alloc::string::String as core::fmt::Display>::fmt;
            v1 = "\x01\x00";
            v6 = 0;
            v4 = &v8;
            v5 = 2;
            v34 = core::option::Option<T>::map_or_else(&v1 as u64, v38, <alloc::string::String as core::fmt::Display>::fmt, v41);
            v18 = alloc::vec::Vec<T,A>::push(&v34, "flealib/src/fileserver.rs");
            v8 = v8;
        } else {
            v8 = v10;
            if std::path::Path::is_file(*((&v26 as &char + 8) as &i64), v33) {
                v4 = v24;
                v2 = *(&v43.field_0 as &i128);
                v19 = alloc::vec::Vec<T,A>::push(&v0, "flealib/src/fileserver.rs");
                a0 = v40;
                v9 = v10;
                continue;
            }
        }
        v8 = v8;
        a0 = v40;
        v9 = v8;
    }
    *((a0 + 24) as &i64) = 0;
    *((a0 + 8) as &i128) = *(&v19.field_0 as &i128);
    *(a0 as &i64) = 0;
    return a0;
}
