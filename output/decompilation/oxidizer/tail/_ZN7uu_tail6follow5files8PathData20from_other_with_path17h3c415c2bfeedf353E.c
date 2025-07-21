fn uu_tail::follow::files::PathData::from_other_with_path(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u8;  // [bp-0x1a8]
    let v1: struct16;  // [bp-0x1a0]
    let v2: u8;  // [bp-0x190]
    let v3: u8;  // [bp-0x18c]
    let v4: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: u8
    let v5: struct16;  // [bp-0x10]
    let v7: struct16;  // r15
    let v8: struct80;  // r15
    let v9: void*;  // r14

    v5 = v7;
    v8 = *((a1 + 208) as &i64);
    v1 = struct16 {
        field_0: *((a1 + 200) as &i64)
        field_8: *((a1 + 208) as &i64)
    };
    if !v1.field_0 {
        std::fs::File::open(a2, a3, a3);
        if !*(&v2 as &i32) {
            std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *(&v3 as &i32), a3);
            v9 = alloc::boxed::Box<T>::new(&v4);
        }
    }
    v4 = std::fs::metadata(a2, a3);
    match v4 {
        Err(_) => {
            v2 = 2 as u64;
        },
        Ok(_) => {
            memcpy(&v2, &v4, 176);
        },
    }
    uu_tail::follow::files::PathData::new(v9, v8, &v2, *((a1 + 184) as &i64), *((a1 + 192) as &i64), *(&v0 as &i64));
    return a0;
}
