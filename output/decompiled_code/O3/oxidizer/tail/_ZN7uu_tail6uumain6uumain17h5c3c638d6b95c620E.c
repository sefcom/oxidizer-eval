fn uu_tail::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i640;  // [sp-0xf8], Other Possible Types: struct80
    let v1: i64;  // [sp-0x98]
    let v2: i64;  // [sp-0x88]
    let v3: i64;  // [sp-0x48]
    let v4: i64;  // [sp-0x40]
    let v5: i64;  // [sp-0x38]
    let v6: i8;  // [sp-0x30]
    let v7: i192;  // [sp-0x28]
    let v9: i64;  // rax
    let v10: i64;  // rbx
    let v11: i64;  // rsi
    let v12: i64;  // rdx
    let v13: i64;  // rcx
    let v14: i64;  // r8
    let v15: i64;  // r9

    v0 = uu_tail::args::parse_args(a0, a1, a3, a4, a5);
    if v1 == 5 {
        return v10;
    }
    v1 = v0;
    uu_tail::args::Settings::check_warnings(&v1, *((&v0 as &char + 72) as &i64), v2);
    v9 = uu_tail::args::Settings::verify(&v1);
    if v9 == 2 {
        v10 = 0;
    } else {
        if v9 != 1 {
            return uu_tail::uu_tail(&v1, v11, v12, v13, v14, v15);
        }
        v3 = 0;
        v4 = &g_41f813;
        v5 = 1;
        v6 = 1;
        v7 = format!("cannot follow {:?} by name", &v3);
        v0 = v7;
        v10 = alloc::boxed::Box<T>::new(&v0);
    }
    return v10;
}
