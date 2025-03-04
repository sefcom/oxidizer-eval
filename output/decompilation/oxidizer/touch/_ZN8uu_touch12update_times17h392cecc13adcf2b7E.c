fn uu_touch::update_times(a0: u32, a1: u32, a2: u64, a3: u8, a4: u32, a5: u64, a6: u32, a7: u32, a8: u32) -> u64 {
    let v0: i32;  // [sp-0x8c]
    let v1: Result<struct32, struct16>;  // [sp-0x88]
    let v2: Result<struct24, struct8>;  // [sp-0x58]
    let v3: i32;  // r15d
    let v4: i32;  // r13d
    let v5: i64;  // rbp
    let v6: i64;  // rax
    let v7: i64;  // rax

    v3 = a6;
    if !a4 as u8 {
        v0 = a2 as u32;
        v2 = uu_touch::stat(a0, a1, !a3);
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v2, a0, a1);
        match v1 {
            Err(_) => {
                v6 = *((&v1 as &char + 8) as &i64);
                return v6;
            },
            Ok(_) => {
                v5 = *((&v1 as &char + 24) as &i64);
                v4 = *((&v1 as &char + 32) as &i32);
            },
        }
    } else {
        v4 = a8;
        v5 = a7;
        if !(a4 as u32 == 1) {
            goto LABEL_5c320f;
        }
        v0 = a2 as u32;
        v2 = uu_touch::stat(a0, a1, !a3);
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v2, a0, a1);
        v3 = *((&v1 as &char + 16) as &i64);
        match v1 {
            Err(_) => {
                v6 = *((&v1 as &char + 8) as &i64);
                return v6;
            },
            Ok(_) => {
                a5 = *((&v1 as &char + 8) as &i64);
            },
        }
    }
LABEL_5c320f:
    if !a3 || v0 as u64 {
        v7 = filetime::set_file_times(a0, a1, a5, v3 as u64, v5, v4 as u64);
    } else {
        v7 = filetime::set_symlink_file_times(a0, a1, a5, v3 as u64, v5, v4 as u64);
    }
    v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v7, a0, a1);
    return v6;
}
