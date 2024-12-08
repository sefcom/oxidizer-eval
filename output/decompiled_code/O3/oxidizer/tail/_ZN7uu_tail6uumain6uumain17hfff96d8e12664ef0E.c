fn uu_tail::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct80;  // [sp-0xf8], Other Possible Types: i640, struct28
    let v3: struct80;  // [sp-0x98], Other Possible Types: i64
    let v4: i64;  // [sp-0x88]
    let v5: i64;  // [sp-0x48]
    let v6: i64;  // [sp-0x40]
    let v7: i64;  // [sp-0x38]
    let v8: i8;  // [sp-0x30]
    let v9: i192;  // [sp-0x28]
    let v11: i64;  // rax
    let v12: i64;  // rbx
    let v13: i64;  // rsi
    let v14: i64;  // rdx
    let v15: i64;  // rcx
    let v16: i64;  // r8
    let v17: i64;  // r9

    v0 = uu_tail::args::parse_args(a0, a1, a3);
    if v3 == 5 {
        return v12;
    }
    *(&v3.field_0 as &struct80) = struct80 {
        field_0: v0
        field_8: v1
        field_16: v2
        field_24: *((&v0 as &char + 24) as &i128)
        field_40: *((&v0 as &char + 40) as &i128)
        field_56: *((&v0 as &char + 56) as &i128)
        field_72: *((&v0 as &char + 72) as &i64)
    };
    uu_tail::args::Settings::check_warnings(&v3, *((&v0 as &char + 72) as &i64), v4);
    v11 = uu_tail::args::Settings::verify(&v3);
    if v11 == 2 {
        v12 = 0;
    } else {
        if v11 != 1 {
            return uu_tail::uu_tail(&v3, v13, v14, v15, v16, v17);
        }
        v5 = 0;
        v6 = &g_41fb97;
        v7 = 1;
        v8 = 1;
        v9 = format!("cannot follow {:?} by name", &v5);
        v0 = struct28 {
            field_0: v9
            field_16: *((&v9 as &char + 16) as &i64)
            field_24: 1
        };
        v12 = alloc::boxed::Box<T>::new(&v0);
    }
    return v12;
}
