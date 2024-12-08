fn uu_touch::update_times(a0: u32, a1: u32, a2: u64, a3: u8, a4: u32, a5: u64) -> u64 {
    let v0: i32;  // [sp-0x8c]
    let v1: i256;  // [sp-0x88], Other Possible Types: Result<struct32, struct16>
    let v2: i8;  // [bp-0x68]
    let v3: i192;  // [sp-0x58], Other Possible Types: Result<struct24, struct8>
    let v4: i64;  // [bp+0x8]
    let v5: i8;  // [bp+0x10]
    let v6: i8;  // [bp+0x18]
    let v7: i32;  // r15d
    let v8: i32;  // r13d
    let v9: i64;  // rbp
    let v10: i64;  // rax
    let v11: i64;  // rax

    v7 = v4;
    if !a4 {
        v0 = a2;
        v3 = uu_touch::stat(a0, a1, -0x100 | !a3);
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, a0, a1);
        match v1 {
            Err(_) => {
                v10 = *((&v1 as &char + 8) as &i64);
                return v10;
            },
            Ok(_) => {
                v9 = *((&v1 as &char + 24) as &i64);
                v8 = v2;
            },
        }
    } else {
        v8 = v6;
        v9 = v5;
        if !(a4 == 1) {
            goto LABEL_5c295f;
        }
        v0 = a2;
        v3 = uu_touch::stat(a0, a1, -0x100 | !a3);
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, a0, a1);
        v7 = *((&v1 as &char + 16) as &i64);
        match v1 {
            Err(_) => {
                v10 = *((&v1 as &char + 8) as &i64);
                return v10;
            },
            Ok(_) => {
                a5 = *((&v1 as &char + 8) as &i64);
            },
        }
    }
LABEL_5c295f:
    if !a3 || v0 {
        v11 = filetime::set_file_times(a0, a1, a5, v7, v9, v8);
    } else {
        v11 = filetime::set_symlink_file_times(a0, a1, a5, v7, v9, v8);
    }
    v10 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v11, a0);
    return v10;
}
