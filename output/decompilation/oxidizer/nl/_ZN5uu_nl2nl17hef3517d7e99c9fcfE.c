fn uu_nl::nl(a0: u32, a1: &u64, a2: void*) -> u64 {
    let v0: i8;  // [sp-0x161]
    let v1: i64;  // [sp-0x160]
    let v2: i192;  // [sp-0x158], Other Possible Types: struct24
    let v3: i64;  // [sp-0x128]
    let v4: i64;  // [sp-0x120]
    let v5: i64;  // [sp-0x118]
    let v6: struct8;  // [bp-0x110]
    let v7: i64;  // [sp-0xd8]
    let v8: i64;  // [sp-0xd0]
    let v9: i64;  // [sp-0xc8]
    let v10: i64;  // [sp-0xc0]
    let v11: i64;  // [sp-0xb8]
    let v12: i64;  // [sp-0xb0]
    let v13: i64;  // [sp-0xa8]
    let v14: i64;  // [sp-0xa0]
    let v15: i64;  // [sp-0x98]
    let v16: i64;  // [sp-0x90]
    let v17: i64;  // [sp-0x88]
    let v18: i64;  // [sp-0x80]
    let v19: Option<Result<struct24, struct8>>;  // [sp-0x78]
    let v20: i192;  // [sp-0x48]
    let v22: i64;  // r15
    let v26: i64;  // rbp

    v6 = struct8 {
        field_0: a0
    };
    v19 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v6);
    match v19 {
        None => {
            return 0;
        },
        Some(_) => {
            v17 = *((a2 + 56) as &i64);
            v16 = *((a2 + 64) as &i64);
            v13 = a2 + 32;
            v0 = *((a2 + 128) as &i8);
            v15 = *((a2 + 96) as &i64);
            v7 = *((a2 + 112) as &i64);
            v11 = *((a2 + 120) as &i64);
            v12 = v11 + 1;
            v10 = a2 + 129;
            v9 = a2 + 72;
            v8 = *((a2 + 104) as &i64);
            v1 = *((a1 + 8) as &i64);
            v18 = 0x8000000000000000;
            v14 = a2 + 16;
        },
    }
    v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v20);
    v22 = *((&v2 as &char + 8) as &i64);
    if v3 == v18 {
        return v22;
    }
    v3 = v2;
    v4 = v22;
    v5 = *((&v2 as &char + 16) as &i64);
    v26 = *((a1 + 16) as &i64) + 1;
    if v5 {
        v26 = 0;
    }
    *((a1 + 16) as &i64) = v26;
    goto *((0x461900 + uu_nl::SectionDelimiter::parse(vvar_175{stack -288}, vvar_176{stack -280}, vvar_157{stack -136}, vvar_158{stack -144}) as i32 * 4) as &i32) + 0x461900;
}
