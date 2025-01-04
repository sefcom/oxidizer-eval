fn uu_wc::Inputs::try_iter(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i584;  // [bp-0xe0], Other Possible Types: struct9, Result<struct73, struct24>, struct81
    let v1: i128;  // [sp-0x88]
    let v2: i640;  // [sp-0x78]
    let v6: i64;  // rax
    let v7: Result<struct16, struct1>;  // rax
    let v8: i64;  // r13
    let v9: i64;  // rax
    let v12: i64;  // r12

    v6 = *(a1 as &i64);
    if !v6 {
        v0 = struct9 {
            field_0: 9223372036854775809
            field_8: 1
        };
        v7 = alloc::boxed::Box<T>::new(&v0);
        v8 = &g_531000;
        v9 = v7;
    } else if v6 == 1 {
        v7 = alloc::boxed::Box<T>::new(*((a1 + 16) as &i64), *((a1 + 16) as &i64) + *((a1 + 24) as &i64) * 24);
        v8 = &g_531038;
        v9 = v7;
    } else if *((a1 + 8) as &i64) == 9223372036854775809 {
        v0 = uu_wc::files0_iter_stdin(a1, a2);
        v7 = alloc::boxed::Box<T>::new(&v0);
        v8 = &g_5310a8;
        v9 = v7;
    } else {
        v0 = uu_wc::files0_iter_file(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
        v7 = *((&v0 as &char + 8) as &i64);
        if v2 == 9223372036854775809 {
            return struct24 {
                field_0: 9223372036854775811
                field_8: v3
                field_16: v4
            };
        }
        v2 = v0;
        v7 = alloc::boxed::Box<T>::new(&v2);
        v8 = &g_531070;
        v9 = v7;
    }
    v12 = 9223372036854775810;
    if *(a2 as &i64) != 9223372036854775810 {
        v7 = core::ops::function::FnOnce::call_once(a2);
        v1 = *((&v0 as &char + 8) as &i128);
        v12 = v0;
    }
    return struct48 {
        field_0: v12
        field_8: v1
        field_24: v9
        field_32: v8
        field_40: 0
    };
}
