fn uu_touch::update_times(a0: &std::path::Path, a1: i8, a2: i8, a3: i8, a4: i64, a5: i32, a6: i64, a7: i32) -> u64 {
    let v0: Result<struct32, struct16>;  // [bp-0x88]
    let v1: alloc::string::String;  // [bp-0x80], Other Possible Types: u64
    let v2: u64;  // [bp-0x78]
    let v3: u64;  // [bp-0x70]
    let v4: struct32;  // [bp-0x58]
    let v5: u8;  // r12b
    let v6: u64;  // 4096
    let v7: u64;  // 4096
    let v8: u64;  // rsi
    let v9: u64;  // rax

    if a3 {
        v5 = a2 ^ 1;
        v6 = a6;
        v7 = a4;
        if a3 == 1 {
            v4 = uu_touch::stat(a0, v8);
            v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v4, a0);
            a5 = v2;
            match v0 {
                Err(_) => {
                    return v1;
                },
                Ok(_) => {
                    v6 = a6;
                    v7 = v1;
                },
            }
        }
    } else {
        v5 = a2 ^ 1;
        v4 = uu_touch::stat(a0, v8);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v4, a0);
        match v0 {
            Err(_) => {
                return v1;
            },
            Ok(_) => {
                v6 = v3;
                v7 = a4;
            },
        }
    }
    v9 = (!((a1 | v5) & 1) ? filetime::set_symlink_file_times(a0, v8, v7, a5, v6) : filetime::set_file_times(a0, v8, v7, a5, v6));
    return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v9, a0);
}
