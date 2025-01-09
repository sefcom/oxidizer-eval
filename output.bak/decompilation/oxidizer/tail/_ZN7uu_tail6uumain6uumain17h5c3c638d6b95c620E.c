fn uu_tail::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0xf8], Other Possible Types: struct80, struct28
    let v1: i64;  // [sp-0xf0]
    let v2: i64;  // [sp-0xe8]
    let v3: i64;  // [bp-0xe0]
    let v4: i64;  // [sp-0xd8]
    let v5: i64;  // [sp-0xa8]
    let v6: i64;  // [sp-0xa0]
    let v7: struct80;  // [sp-0x98], Other Possible Types: i64
    let v8: i64;  // [sp-0x48]
    let v9: i64;  // [sp-0x40]
    let v10: i64;  // [sp-0x38]
    let v11: i8;  // [sp-0x30]
    let v15: i64;  // rax
    let v16: i64;  // rbx

    v0 = uu_tail::args::parse_args(a0, a1);
    if v7 == 5 {
        return v16;
    }
    *(&v7.field_0 as &struct80) = struct80 {
        field_0: v0
        field_8: v1
        field_16: v2
        field_24: *((&v0 as &char + 24) as &i128)
        field_40: *((&v0 as &char + 40) as &i128)
        field_56: *((&v0 as &char + 56) as &i128)
        field_72: *((&v0 as &char + 72) as &i64)
    };
    uu_tail::args::Settings::check_warnings(&v7);
    v15 = uu_tail::args::Settings::verify(&v7);
    if v15 == 2 {
        v16 = 0;
    } else {
        if v15 != 1 {
            return uu_tail::uu_tail(&v7);
        }
        v8 = 0;
        v9 = &g_41f813;
        v10 = 1;
        v11 = 1;
        v5 = &v8;
        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = "cannot follow ";
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        core::option::Option<T>::map_or_else();
        v0 = struct28 {
            field_0: v12
            field_16: v13
            field_24: 1
        };
        v16 = alloc::boxed::Box<T>::new(&v0);
    }
    return v16;
}
