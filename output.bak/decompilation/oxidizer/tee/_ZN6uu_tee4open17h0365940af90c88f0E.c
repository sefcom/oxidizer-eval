fn uu_tee::open(a0: &Option<Result<struct40, struct8>>, a1: u32, a2: u32, a3: u32, a4: &u8) -> u64 {
    let v0: i64;  // [bp-0xe0]
    let v1: i64;  // [sp-0xd8]
    let v2: i32;  // [bp-0xd0]
    let v3: i8;  // [sp-0xcf]
    let v4: i8;  // [sp-0xce]
    let v5: i8;  // [sp-0xcd]
    let v6: i8;  // [bp-0xcc]
    let v7: struct24;  // [sp-0xc8], Other Possible Types: i192
    let v8: i64;  // [sp-0xb8]
    let v9: i192;  // [sp-0x98], Other Possible Types: struct24
    let v10: Result<struct4, struct8>;  // [sp-0x80], Other Possible Types: i64
    let v11: i8;  // [bp-0x78]
    let v12: i64;  // [sp-0x50]
    let v13: i64;  // [sp-0x48]
    let v14: i64;  // [sp-0x40]
    let v15: i8;  // [sp-0x38]
    let v17: i64;  // rdx

    v9 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
    v1 = 0x1b600000000;
    v2 = 0;
    v6 = 0;
    if a3 {
        v4 = 1;
    } else {
        v5 = 1;
    }
    v3 = 1;
    v6 = 1;
    v10 = std::fs::OpenOptions::open(&v1, *((&v9 as &char + 8) as &i64), *((&v9 as &char + 16) as &i64)) as u64;
    if !v10 {
        v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
        *((a0 + 16) as &i64) = v8;
        *(a0 as &i192) = v7;
        *((a0 + 24) as &long long) = alloc::boxed::Box<T>::new(*((&v10 as &char + 4) as &i32));
        *((a0 + 32) as &&i64) = &g_51f9f8;
    }
    v0 = v11;
    v12 = uucore::util_name();
    v13 = v17;
    eprint!("{:?}: ", &v12);
    v12 = 0;
    v13 = a1;
    v14 = a2;
    v15 = 0;
    eprintln!("{:?}: {:?}", &v12, &v0);
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v0
    };
}
