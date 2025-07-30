fn flealib::commandprocessor::CommandProcessor::create_restart_file(a0: i64, a1: &u64) -> int {
    let v0: std::io::error::Error;  // [bp-0x98], Other Possible Types: struct_0 *
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x90]
    let v2: struct16;  // [bp-0x88], Other Possible Types: struct24
    let v3: std::sys::os_str::bytes::Buf;  // [bp-0x88]
    let v4: struct24;  // [bp-0x80]
    let v5: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x78], Other Possible Types: std::sys::os_str::bytes::Buf
    let v6: u64;  // [bp-0x70]
    let v7: struct16;  // [bp-0x68]
    let v8: struct40;  // [bp-0x50]
    let v9: u64;  // [bp-0x48]
    let v10: struct24;  // [bp-0x28]
    let v11: struct16;  // [bp-0x28]
    let v13: u64;  // rdx
    let v14: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x50]

    v10 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1);
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4 {
        v0 = &v10;
        v1 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        v3 = "Current directory: ";
        v4 = 1;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        v8 = struct40 {
            field_0: "flealib::commandprocessor"
            field_16: "flealib::commandprocessor"
            field_32: log::__private_api::loc("flealib/src/commandprocessor.rs")
        };
        log::__private_api::log(&v3, 4, &v8);
    }
    v11 = std::path::PathBuf::push("flea.rst");
    v5 = v10.field_16;
    v2 = v11;
    v14 = std::fs::File::create(&v2 as u64, v13);
    match v14 {
        Ok(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Err(v0) => {
            v2 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
            return struct24 {
                field_0: *(&v2.field_0 as &i128)
                field_16: v5
            };
        },
    }
}
