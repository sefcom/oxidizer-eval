fn uu_wc::Inputs::try_iter(a0: &Result<struct40, struct16>, a1: void*) -> u64 {
    let v0: i592;  // [bp-0xe0], Other Possible Types: Result<struct73, struct16>, struct81, struct9
    let v1: i128;  // [sp-0x88]
    let v2: i640;  // [sp-0x78]
    let v6: i64;  // rax
    let v7: i64;  // rax
    let v13: i64;  // r12
    let v14: i64;  // rdx

    v6 = *(a1 as &i64);
    if !v6 {
        v0 = struct9 {
            field_0: 9223372036854775809
            field_8: 1
        };
        v7 = alloc::boxed::Box<T>::new(&v0);
    } else if v6 == 1 {
        v7 = alloc::boxed::Box<T>::new(*((a1 + 16) as &i64), *((a1 + 16) as &i64) + *((a1 + 24) as &i64) * 24);
    } else if *((a1 + 8) as &i64) == 9223372036854775809 {
        v0 = uu_wc::files0_iter_stdin();
        v7 = alloc::boxed::Box<T>::new(&v0);
    } else {
        v0 = uu_wc::files0_iter_file(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
        if v2 == 9223372036854775809 {
            return Err(struct16 {
                field_0: v3
                field_8: v4
            });
        }
        v2 = v0;
        v7 = alloc::boxed::Box<T>::new(&v2);
    }
    if *(v14 as &i64) != 9223372036854775810 {
        core::ops::function::FnOnce::call_once(v14);
        v1 = *((&v0 as &char + 8) as &i128);
        v13 = v0;
    }
    return struct48 {
        field_0: v13
        field_8: v1
        field_24: v11
        field_32: v8
        field_40: 0
    };
}
