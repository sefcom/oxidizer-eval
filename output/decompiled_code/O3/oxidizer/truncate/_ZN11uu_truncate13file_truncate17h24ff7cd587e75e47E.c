fn uu_truncate::file_truncate(a0: i64, a1: i64, a2: i8, a3: i64) -> u64 {
    let v0: struct28;  // [bp-0x148], Other Possible Types: Result<struct4, struct8>
    let v1: i64;  // [sp-0x140]
    let v2: i64;  // [bp-0x118], Other Possible Types: struct4
    let v3: i64;  // [sp-0x110]
    let v4: i64;  // [sp-0x108]
    let v5: i8;  // [sp-0x100]
    let v6: i192;  // [sp-0xe8]
    let v7: i64;  // [sp-0xd0], Other Possible Types: Result<struct176, struct16>
    let v8: i32;  // [bp-0xc8]
    let v9: i8;  // [sp-0xc7]
    let v10: i16;  // [bp-0xc4]
    let v12: i64;  // rax
    let v13: i64;  // r15

    v7 = std::fs::metadata(a0, a1);
    if v7 != 2 && (0xf000 & *((&v7 as &char + 56) as &i32)) == 0x1000 {
        v2 = 0;
        v3 = a0;
        v4 = a1;
        v5 = 1;
        v6 = format!("cannot open {:?} for writing: No such device or address", &v2);
        v0 = struct28 {
            field_0: v6
            field_16: *((&v6 as &char + 16) as &i64)
            field_24: 1
        };
        v12 = alloc::boxed::Box<T>::new(&v0);
        return v12;
    }
    v7 = 0x1b600000000;
    v8 = 0;
    v10 = 0;
    v9 = 1;
    v10 = a2;
    v0 = std::fs::OpenOptions::open(&v7, a0, a1);
    match v0 {
        Ok(_) => {
            v2 = struct4 {
                field_0: vvar_106{reg 56}
            };
            v13 = std::fs::File::set_len(&v2, a3);
        },
        Err(_) => {
            v13 = v1;
            if !std::io::error::Error::kind(v13) as i8 && !a2 {
                v13 = 0;
            }
        },
    }
    v12 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v13, a0);
    return v12;
}
