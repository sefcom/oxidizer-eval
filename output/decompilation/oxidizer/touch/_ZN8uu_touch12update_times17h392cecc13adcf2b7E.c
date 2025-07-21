fn uu_touch::update_times(a1: i64, a2: i8, a3: i8, a4: i32, a5: i64, a6: i32, a7: i64, a8: i32) -> Result<struct24, struct8> {
    let a0: u64;  // rsi
    let v0: u32;  // [bp-0x8c]
    let v1: Result<struct32, struct16>;  // [bp-0x88]
    let v2: u64;  // [bp-0x78]
    let v3: u8;  // [bp-0x58]
    let v4: u32;  // r15d
    let v5: u32;  // r13d
    let v6: u64;  // rbp
    let v7: u64;  // rdi
    let v8: u64;  // r9
    let v9: u64;  // rax

    v4 = vvar_5;
    if a3 {
        v5 = vvar_7;
        v6 = vvar_6;
        if a3 == 1 {
            v0 = a1;
            uu_touch::stat(v7, a0, !a2, a3);
            v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, v7, a0);
            v4 = v2;
            if let Err(_) = v1 {
                return;
            }
        }
    } else {
        v0 = a1;
        v8 = a4;
        uu_touch::stat(v7, a0, !a2, a3);
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, v7, a0);
        if let Err(_) = v1 {
            return;
        }
    }
    if a2 && !a1 {
        v9 = filetime::set_symlink_file_times(v7, a0, v8, v4, v6, v5);
    } else {
        v9 = filetime::set_file_times(v7, a0, v8, v4, v6, v5);
    }
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v9, v7, a0);
    return;
}
