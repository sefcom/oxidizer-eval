fn uu_wc::Inputs::try_iter(a1: i64, a2: i64) -> Result<struct48, struct24> {
    let a0: i64;  // rdi
    let v0: Result<struct73, struct24>;  // [bp-0xe0], Other Possible Types: struct9
    let v1: struct73;  // [bp-0xe0], Other Possible Types: u64
    let v2: core::fmt::rt::Argument;  // [bp-0xd0]
    let v3: alloc::string::String;  // [bp-0x88], Other Possible Types: struct24
    let v4: struct73;  // [bp-0x78]
    let v5: u64;  // [bp-0x70]
    let v7: u64;  // rax
    let v8: u64;  // r13

    if !*(a1 as &i64) {
        v0 = struct9 {
            field_0: 9223372036854775809
            field_8: 1
        };
        v7 = alloc::boxed::Box<T>::new(&v0);
    } else if *(a1 as &i64) == 1 {
        v7 = alloc::boxed::Box<T>::new(*((a1 + 16) as &i64), *((a1 + 16) as &i64) + *((a1 + 24) as &i64) * 24);
    } else if *((a1 + 8) as &i64) == 9223372036854775809 {
        uu_wc::files0_iter_stdin(&v0 as u8);
        v7 = alloc::boxed::Box<T>::new(&v0 as u8);
    } else {
        v0 = uu_wc::files0_iter_file(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
        match v0 {
            Err(_) => {
                return struct24 {
                    field_0: 9223372036854775811
                    field_8: v5
                    field_16: v2
                };
            },
            Ok(v4) => {
                v7 = alloc::boxed::Box<T>::new(&v4);
            },
        }
    }
    if *(a2 as &i64) == 9223372036854775810 {
        return Ok(struct48 {
            field_0: 9223372036854775810
            field_8: v3
            field_24: v7
            field_32: v8
            field_40: 0
        });
    }
    core::ops::function::FnOnce::call_once(&v1, a2);
    v3 = *((&v0 as &char + 8) as &i128);
    return Ok(struct48 {
        field_0: v1
        field_8: v3
        field_24: v7
        field_32: v8
        field_40: 0
    });
}
