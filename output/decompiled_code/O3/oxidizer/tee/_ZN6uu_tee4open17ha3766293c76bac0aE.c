fn uu_tee::open(a0: i64, a1: i64, a2: i64, a3: i32, a4: i64) -> u64 {
    let v0: i64;  // [bp-0xe0]
    let v1: i64;  // [sp-0xd8]
    let v2: i32;  // [bp-0xd0]
    let v3: i8;  // [sp-0xcf]
    let v4: i8;  // [sp-0xce]
    let v5: i8;  // [sp-0xcd]
    let v6: i16;  // [bp-0xcc]
    let v7: struct24;  // [sp-0xc8], Other Possible Types: i192
    let v8: struct24;  // [sp-0x98], Other Possible Types: i192
    let v9: Result<struct4, struct8>;  // [sp-0x80], Other Possible Types: i64
    let v10: i8;  // [bp-0x78]
    let v11: i64;  // [sp-0x50]
    let v12: i64;  // [sp-0x48]
    let v13: i64;  // [sp-0x40]
    let v14: i8;  // [sp-0x38]
    let v16: i64;  // rdx

    v8 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
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
    v9 = std::fs::OpenOptions::open(&v1, *((&v8 as &char + 8) as &i64), *((&v8 as &char + 16) as &i64));
    match v9 {
        Ok(_) => {
            v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
            *((a0 + 16) as &struct24) = v7.field_16;
            *(a0 as &i192) = v7;
            *((a0 + 24) as &long long) = alloc::boxed::Box<T>::new(*((&v9 as &char + 4) as &i32) as u32 as u64);
            *((a0 + 32) as &&i64) = &g_5202e8;
            return a0;
        },
        Err(v0) => {
            v11 = uucore::util_name();
            v12 = v16;
            eprint!("{:?}: ", &v11);
            v11 = 0;
            v12 = a1;
            v13 = a2;
            v14 = 0;
            eprintln!("{:?}: {:?}", &v11, &v0);
            if a4 && *(a4 as &i8) > 1 {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v0
                };
            }
            return struct8 {
                field_0: 9223372036854775809
            };
        },
    }
}
