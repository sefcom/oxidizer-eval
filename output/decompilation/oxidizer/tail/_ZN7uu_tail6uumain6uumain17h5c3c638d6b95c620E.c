fn uu_tail::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i224;  // [sp-0xf8], Other Possible Types: struct80, struct28
    let v1: i64;  // [bp-0xe0]
    let v2: i64;  // [sp-0xd8]
    let v3: i64;  // [sp-0xa8]
    let v4: i64;  // [sp-0xa0]
    let v5: i640;  // [sp-0x98], Other Possible Types: struct80
    let v6: i64;  // [sp-0x90]
    let v7: i64;  // [sp-0x48]
    let v8: i64;  // [sp-0x40]
    let v9: i64;  // [sp-0x38]
    let v10: i8;  // [sp-0x30]
    let v11: i8;  // [bp-0x28]
    let v13: i64;  // rax
    let v14: i64;  // rbx

    v0 = uu_tail::args::parse_args(a0, a1);
    v6 = v6;
    if v5 == 5 {
        return v6;
    }
    v5 = v0;
    uu_tail::args::Settings::check_warnings(&v5);
    v13 = uu_tail::args::Settings::verify(&v5);
    if v13 != 2 {
        if v13 == 1 {
            v7 = 0;
            v8 = &g_41f813;
            v9 = 1;
            v10 = 1;
            v3 = &v7;
            v4 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = struct28 {
                field_0: "cannot follow "
                field_16: &v3
                field_24: <UNKNOWN>
            };
            v2 = 0;
            v1 = 1;
            core::option::Option<T>::map_or_else();
            v0 = v11;
            alloc::boxed::Box<T>::new(&v0);
        } else {
            return uu_tail::uu_tail(&v5);
        }
    }
    v6 = v14;
    return v6;
}
