fn uu_tail::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: String;  // [sp-0xf8], Other Possible Types: struct80
    let v1: i64;  // [sp-0xf0]
    let v2: i32;  // [bp-0xe0]
    let v3: i64;  // [sp-0x98], Other Possible Types: struct80
    let v4: i64;  // [sp-0x48]
    let v5: i64;  // [sp-0x40]
    let v6: i64;  // [sp-0x38]
    let v7: i8;  // [sp-0x30]
    let v8: String;  // [sp-0x28]
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v12: i64;  // rbx

    v0 = uu_tail::args::parse_args(a0, a1);
    v10 = v1;
    if v3 == 5 {
        return v10;
    }
    v3 = v0;
    uu_tail::args::Settings::check_warnings(&v3);
    v11 = uu_tail::args::Settings::verify(&v3);
    if v11 as u8 != 2 {
        if v11 as u32 == 1 {
            v4 = 0;
            v5 = &g_41f813;
            v6 = 1;
            v7 = 1;
            v8 = format!("cannot follow {} by name", &v4);
            *(&v2 as &i32) = 1;
            v0 = v8;
            alloc::boxed::Box<T>::new(&v0);
        } else {
            return uu_tail::uu_tail(&v3);
        }
    }
    v10 = v12;
    return v10;
}
