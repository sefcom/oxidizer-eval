fn uu_join::Spec::parse(a0: void*, a1: u64, a2: u64) -> long long {
    let v0: i64;  // [bp-0xb0]
    let v6: core::slice::iter::Iter<u8>;  // [bp-0x80]
    let v7: u64;  // [bp-0x78]
    let v8: Result<struct16, struct16>;  // [bp-0x70], Other Possible Types: struct40
    let v9: u64;  // [bp-0x68]
    let v10: struct24;  // [bp-0x40]
    let v14: u32;  // edx
    let v15: u32;  // eax
    let v16: u8;  // bpl
    let v17: u64;  // rax
    let v18: u64;  // rax
    let v19: u64;  // rax
    let v21: core::option::Option<u32>;  // rax:rax
    let v22: core::option::Option<u32>;  // rax:rax
    let v23: core::option::Option<u32>;  // rax:rax
    let v24: core::option::Option<u32>;  // rax:rax

    v6 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v24 = core::str::validations::next_code_point(&v6) as u128;
    v15 = ((v24 as i8 & 1) ? v14 : 0x110000);
    if v15 == 48 {
        v21 = core::str::validations::next_code_point(&v6) as u128;
        if let None = v21 {
            *(&a0[8] as &i8) = 0;
        }
    } else if v15 == 49 {
        v23 = core::str::validations::next_code_point(&v6) as u128;
        if let Some(_) = v23 {
LABEL_46d16e:
            if v14 == 46 {
                v8 = uu_join::parse_field_number(v6.ptr.pointer, v7 - v6.ptr.pointer);
                v18 = v9;
                match v8 {
                    Err(_) => {
                        return struct24 {
                            field_0: v19
                            field_8: 1
                            field_9: v16
                            field_16: v9
                        };
                    },
                    Ok(_) => {
                        *(&a0[8] as &i64) = v8 as i64;
                        *(&a0[16] as &u64) = v18;
                    },
                }
            }
        }
    } else if v15 == 50 {
        v22 = core::str::validations::next_code_point(&v6) as u128;
        if let Some(_) = v22 {
            goto LABEL_46d16e;
        }
    }
    v8 = struct40 {
        field_0: v17
        field_8: 1
        field_16: &v0
        field_24: ""
    };
    v10 = core::option::Option<T>::map_or_else(&v8);
    *(&a0[8] as &u64) = alloc::boxed::Box<T>::new(&v10) as u64;
    *(&a0[16] as &u64) = v18;
}
