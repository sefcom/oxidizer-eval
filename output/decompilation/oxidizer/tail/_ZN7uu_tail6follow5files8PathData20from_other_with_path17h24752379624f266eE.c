fn uu_tail::follow::files::PathData::from_other_with_path(a0: u64, a1: i64, a2: u64, a3: u64) -> void {
    let v0: core::result::Result<(), std::io::error::Error>;  // [bp-0x1a0]
    let v1: Result<struct4, struct8>;  // [bp-0x190]
    let v2: u64;  // [bp-0x190]
    let v3: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: struct44
    let v4: u64;  // [bp-0x28]
    let v6: u64;  // r12
    let v7: void*;  // r14
    let v8: core::result::Result<(), std::io::error::Error>;  // r12

    v4 = v6;
    v7 = *((a1 + 200) as &i64);
    v8 = *((a1 + 208) as &i64);
    v0 = *((a1 + 208) as &i64);
    if !*((a1 + 200) as &i64) {
        v2 = std::fs::File::open(a2, a3);
        if let Ok(_) = v2 as u128 {
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(*((&v1 as &char + 4) as &i32));
            v7 = alloc::boxed::Box<T>::new(&v3) as u64;
        }
    }
    v3 = std::fs::metadata(a2, a3);
    match v3 {
        Err(_) => {
            v2 = 2 as u64;
        },
        Ok(_) => {
            memcpy(&v2 as u128, &v3, 176);
        },
    }
    uu_tail::follow::files::PathData::new(a0, v7, v8, &v2, *((a1 + 184) as &i64), *((a1 + 192) as &i64));
    return;
}
