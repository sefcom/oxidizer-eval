fn uu_truncate::file_truncate(a0: u64, a1: u64, a2: u8, a3: u64) -> long long {
    let v0: Result<struct4, struct8>;  // [bp-0x158], Other Possible Types: struct28
    let v2: void*;  // [bp-0x150]
    let v3: void*;  // [bp-0x128], Other Possible Types: u64
    let v4: u64;  // [bp-0x120]
    let v5: u64;  // [bp-0x118]
    let v6: u8;  // [bp-0x110]
    let v7: alloc::string::String;  // [bp-0xf8]
    let v8: u64;  // [bp-0xe8]
    let v9: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: struct14
    let v13: u64;  // rdi
    let v15: void*;  // r15
    let v16: u8;  // al

    v9 = std::fs::metadata(a0, a1);
    v13 = 2;
    if let Ok(_) = v9 {
        if (0xf000 & *((&v9 as &char + 56) as &i32)) == 0x1000 {
            v3 = 0;
            v4 = a0;
            v5 = a1;
            v6 = 1;
            v7 = format!("cannot open {} for writing: No such device or address", &v3);
            v0 = struct28 {
                field_0: *(&v7.vec.buf.inner.cap as &i128)
                field_16: v8
                field_24: 1
            };
            return alloc::boxed::Box<T>::new(&v0) as u64;
        }
    }
    v9 = struct14 {
        field_0: 0x1b600000000
        field_8: 0
        field_12: 0
    };
    v0 = std::fs::OpenOptions::open(&v9, a0, a1);
    match v0 {
        Err(v15) => {
            v16 = std::io::error::Error::kind(v15) as u8;
        },
        Ok(_) => {
            v15 = std::fs::File::set_len(&v3 as u64, a3);
        },
    }
    return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v15, a0, a1);
}
