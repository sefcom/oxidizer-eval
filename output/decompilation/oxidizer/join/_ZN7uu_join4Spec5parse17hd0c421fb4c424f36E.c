fn uu_join::Spec::parse(a1: i64, a2: i64) -> : struct18 {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0xb0]
    let v1: u64;  // [bp-0xa8]
    let v2: void*;  // [sp-0xa0]
    let v3: u64;  // [bp-0x98]
    let v4: u64;  // [bp-0x90]
    let v5: u8;  // [bp-0x88]
    let v6: core::slice::iter::Iter<u8>;  // [bp-0x80], Other Possible Types: struct16
    let v7: Result<struct16, struct16>;  // [bp-0x70], Other Possible Types: struct40
    let v8: u64;  // [bp-0x68]
    let v9: struct24;  // [bp-0x40]
    let v13: u32;  // eax
    let v14: struct8;  // bpl
    let v15: struct16;  // rax
    let v16: void*;  // rax
    let v17: u32;  // edx
    let v18: u64;  // rax
    let v19: u32;  // rax
    let v20: u64;  // rax
    let v21: struct8;  // rax
    let v22: core::option::Option<u32>;  // rax:rax
    let v23: core::option::Option<u32>;  // rax:rax
    let v24: core::option::Option<u32>;  // rax:rax
    let v25: &[u8];  // rax:rdx

    v6 = struct16 {
        field_0: a1
        field_8: a1 + a2
    };
    v6 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v24 = core::str::validations::next_code_point(&v6) as u128;
    if v13 == 48 {
        v23 = core::str::validations::next_code_point(&v6) as u128;
        if let None = v23 {
            *((a0 + 8) as &i8) = 0;
            v16 = 0;
        }
    } else if v13 == 49 || v13 == 50 {
        v22 = core::str::validations::next_code_point(&v6) as u128;
        if let Some(_) = v22 {
            if v17 == 46 {
                v25 = core::slice::iter::Iter<T>::make_slice(v6.ptr.pointer);
                v7 = uu_join::parse_field_number(v25.ptr, a2);
                v20 = v8;
                match v7 {
                    Err(_) => {
                        *((a0 + 8) as &i8) = 1;
                        *((a0 + 9) as &struct8) = v14;
                        *((a0 + 16) as &u64) = v8;
                        v21 = 0;
                    },
                    Ok(_) => {
                        return struct24 {
                            field_0: v19
                            field_8: v7 as i64
                            field_16: v19
                        };
                    },
                }
            }
        }
        v2 = 0;
        v3 = a1;
        v4 = a2;
        v5 = 1;
        v0 = &v2;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v7 = struct40 {
            field_0: "invalid field specifier: "
            field_8: 1
            field_16: &v0
            field_24: 1
            field_32: 0
        };
        v9 = core::option::Option<T>::map_or_else(&v7);
        return struct24 {
            field_0: 1
            field_8: alloc::boxed::Box<T>::new(&v9)
            field_16: &g_5352b8
        };
    }
    v7 = struct40 {
        field_0: v15
        field_8: 1
        field_16: &v0
        field_24: 1
        field_32: 0
    };
    v9 = core::option::Option<T>::map_or_else(&v7);
    *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v9);
    v18 = &g_5352b8;
}
