fn uu_truncate::file_truncate(a0: u32, a1: u32, a2: u8, a3: u32) -> u64 {
    let v0: Result<struct4, struct8>;  // [sp-0x148], Other Possible Types: int
    let v1: i64;  // [sp-0x140]
    let v2: i64;  // [bp-0x118]
    let v3: i64;  // [sp-0x110]
    let v4: i64;  // [sp-0x108]
    let v5: i8;  // [sp-0x100]
    let v6: String;  // [sp-0xe8]
    let v7: i64;  // [sp-0xd0], Other Possible Types: struct13, Result<struct176, struct8>
    let v8: i8;  // [sp-0xc7]
    let v9: i16;  // [bp-0xc4]
    let v11: i64;  // rax
    let v12: i64;  // r15

    v7 = std::fs::metadata(a0, a1);
    if v7 != 2 && (0xf000 & *((&v7 as &char + 56) as &i32)) == 0x1000 {
        *(&v2 as &i64) = 0;
        v3 = a0;
        v4 = a1;
        v5 = 1;
        v6 = format!("cannot open {} for writing: No such device or address", &v2);
        v0 = *(&v6 as &i224);
        v11 = alloc::boxed::Box<T>::new(&v0);
        return v11;
    }
    v7 = struct13 {
        field_0: 0x1b600000000
        field_8: 0
        field_12: a2
    };
    *(&v9 as &i16) = 0;
    v8 = 1;
    v0 = std::fs::OpenOptions::open(&v7, a0, a1);
    match v0 {
        Ok(v0) => {
        },
        Err(v12) => {
            if !std::io::error::Error::kind(v12) as i8 && !a2 {
                v12 = 0;
            }
        },
    }
    v11 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v12, a0, a1);
    return v11;
}
