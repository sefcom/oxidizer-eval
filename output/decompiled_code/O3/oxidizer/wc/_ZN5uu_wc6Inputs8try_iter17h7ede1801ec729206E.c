fn uu_wc::Inputs::try_iter(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i584;  // [bp-0xe0], Other Possible Types: struct9, Result<struct73, struct24>, struct81
    let v2: i128;  // [sp-0x88]
    let v3: struct80;  // [sp-0x78], Other Possible Types: i64
    let v7: i64;  // rax
    let v8: Result<struct16, struct1>;  // rax
    let v9: i64;  // r13
    let v14: i64;  // r12

    v7 = *(a1 as &i64);
    if !v7 {
        v0 = struct9 {
            field_0: 9223372036854775809
            field_8: 1
        };
        v8 = alloc::boxed::Box<T>::new(&v0);
        v9 = &g_532010;
    } else if v7 == 1 {
        v8 = alloc::boxed::Box<T>::new(*((a1 + 16) as &i64), *((a1 + 16) as &i64) + *((a1 + 24) as &i64) * 24);
        v9 = &g_532048;
    } else if *((a1 + 8) as &i64) == 9223372036854775809 {
        v0 = uu_wc::files0_iter_stdin(a1, a2);
        v8 = alloc::boxed::Box<T>::new(&v0);
        v9 = &g_5320b8;
    } else {
        v0 = uu_wc::files0_iter_file(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
        v8 = *((&v0 as &char + 8) as &i64);
        if v3 == 9223372036854775809 {
            return struct24 {
                field_0: 9223372036854775811
                field_8: v4
                field_16: v5
            };
        }
        v3 = struct80 {
            field_0: v0
            field_8: v8
            field_16: v11
            field_24: *((&v0 as &char + 24) as &i128)
            field_40: *((&v0 as &char + 40) as &i128)
            field_56: *((&v0 as &char + 56) as &i128)
            field_72: v1
        };
        v8 = alloc::boxed::Box<T>::new(&v3);
        v9 = &g_532080;
    }
    if *(a2 as &i64) != 9223372036854775810 {
        v8 = core::ops::function::FnOnce::call_once(a2);
        v2 = *((&v0 as &char + 8) as &i128);
        v14 = v0;
    }
    return struct48 {
        field_0: v14
        field_8: v2
        field_24: v10
        field_32: v9
        field_40: 0
    };
}
