fn uu_wc::Inputs::try_iter(a0: &Result<struct40, struct16>, a1: void*) -> u64 {
    let v1: struct9;  // [bp-0xe0], Other Possible Types: int, struct81, Result<struct73, struct16>
    let v2: iNone;  // [sp-0x88]
    let v3: iNone;  // [sp-0x78], Other Possible Types: unsigned long
    let v7: i64;  // rax
    let v13: i64;  // rdx

    v7 = *(a1 as &i64);
    if !v7 {
        v1 = struct9 {
            field_0: 9223372036854775809
            field_8: 1
        };
        alloc::boxed::Box<T>::new(&v1);
    } else if v7 as u32 == 1 {
        alloc::boxed::Box<T>::new(*((a1 + 16) as &i64), *((a1 + 16) as &i64) + *((a1 + 24) as &i64) * 24);
    } else if *((a1 + 8) as &i64) == 9223372036854775809 {
        v1 = uu_wc::files0_iter_stdin();
        alloc::boxed::Box<T>::new(&v1);
    } else {
        v1 = uu_wc::files0_iter_file(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
        if v3 == 9223372036854775809 {
            return Err(struct16 {
                field_0: v4
                field_8: v5
            });
        }
        v3 = *(&v1.field_0 as &i640);
        alloc::boxed::Box<T>::new(&v3);
    }
    if *(v13 as &i64) != 9223372036854775810 {
        core::ops::function::FnOnce::call_once(v13);
        v2 = (&v1)[8] as i128;
    }
    return struct48 {
        field_0: v12
        field_8: v2
        field_24: v9
        field_32: v10
        field_40: 0
    };
}
