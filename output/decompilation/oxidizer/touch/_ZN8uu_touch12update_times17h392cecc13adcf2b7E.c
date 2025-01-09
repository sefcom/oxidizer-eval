fn uu_touch::update_times(a0: u32, a1: u32, a2: u64, a3: u8, a4: u32, a5: u64) -> u64 {
    let v0: i32;  // [sp-0x8c]
    let v1: Result<struct32, struct16>;  // [sp-0x88], Other Possible Types: i320
    let v2: i256;  // [sp-0x58], Other Possible Types: Result<struct24, struct8>
    let v3: i64;  // [bp+0x8]
    let v4: i8;  // [bp+0x10]
    let v5: i8;  // [bp+0x18]
    let v6: i32;  // r15d
    let v7: i32;  // r13d
    let v8: i64;  // rbp
    let v9: i64;  // rax
    let v10: i64;  // rax

    v6 = v3;
    if !a4 {
        v0 = a2;
        v2 = uu_touch::stat(a0, a1, !a3);
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v2, a0, a1);
        match v1 {
            Err(_) => {
                v9 = *((&v1 as &char + 8) as &i64);
                return v9;
            },
            Ok(_) => {
                v8 = *((&v1 as &char + 24) as &i64);
                v7 = *((&v1 as &char + 32) as &i32);
            },
        }
    } else {
        v7 = v5;
        v8 = v4;
        if !(a4 == 1) {
            goto LABEL_5c320f;
        }
        v0 = a2;
        v2 = uu_touch::stat(a0, a1, !a3);
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v2, a0, a1);
        v6 = *((&v1 as &char + 16) as &i64);
        match v1 {
            Err(_) => {
                v9 = *((&v1 as &char + 8) as &i64);
                return v9;
            },
            Ok(_) => {
                a5 = *((&v1 as &char + 8) as &i64);
            },
        }
    }
LABEL_5c320f:
    if !a3 || v0 {
        v10 = filetime::set_file_times(a0, a1, a5, v6, v8, v7);
    } else {
        v10 = filetime::set_symlink_file_times(a0, a1, a5, v6, v8, v7);
    }
    v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v10, a0, a1);
    return v9;
}
