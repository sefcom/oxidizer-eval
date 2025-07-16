fn uu_wc::Inputs::try_iter(a1: i64, a2: i64) -> Result<struct48, struct24> {
    let a0: i64;  // rdi
    let v0: u72;  // [bp-0xe0], Other Possible Types: Result<struct73, struct24>
    let v1: u64;  // [bp-0xe0]
    let v2: u8;  // [bp-0xd8]
    let v3: u64;  // [bp-0xd0]
    let v4: u8;  // [bp-0x88], Other Possible Types: struct24
    let v5: u640;  // [bp-0x78]
    let v6: u64;  // [bp-0x70]
    let v8: u64;  // rax
    let v9: u64;  // r13
    let v10: u64;  // rax
    let v11: u64;  // r15
    let v13: u64;  // r12

    if !*(a1 as &i64) {
        v0 = struct9 {
            field_0: 9223372036854775809
            field_8: 1
        };
        v8 = alloc::boxed::Box<T>::new(&v0);
        v9 = &g_531000;
        v10 = v8;
    } else if *(a1 as &i64) == 1 {
        v8 = alloc::boxed::Box<T>::new(*((a1 + 16) as &i64), *((a1 + 16) as &i64) + *((a1 + 24) as &i64) * 24);
        v9 = &g_531038;
        v10 = v8;
    } else if *((a1 + 8) as &i64) == 9223372036854775809 {
        uu_wc::files0_iter_stdin(&v0);
        v8 = alloc::boxed::Box<T>::new(&v0);
        v9 = &g_5310a8;
        v10 = v8;
    } else {
        v0 = uu_wc::files0_iter_file(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
        match v0 {
            Err(_) => {
                return struct24 {
                    field_0: 9223372036854775811
                    field_8: v6
                    field_16: v3
                };
            },
            Ok(_) => {
                v5 = v1;
                v8 = alloc::boxed::Box<T>::new(&v5);
                v9 = &g_531070;
                v10 = v8;
            },
        }
    }
    v11 = v10;
    v13 = 9223372036854775810;
    if *(a2 as &i64) != 9223372036854775810 {
        v8 = core::ops::function::FnOnce::call_once(&v1, a2);
        memcpy(&v4, &v2, 16);
        v13 = v1;
    }
    return struct56 {
        field_0: v13
        field_8: <UNKNOWN>
        field_24: v9
        field_32: 0
        field_40: <UNKNOWN>
    };
}
