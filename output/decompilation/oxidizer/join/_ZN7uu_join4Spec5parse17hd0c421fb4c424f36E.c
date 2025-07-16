fn uu_join::Spec::parse(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0xb0]
    let v1: u64;  // [bp-0xa8]
    let v2: void*;  // [sp-0xa0]
    let v3: u64;  // [sp-0x98]
    let v4: u64;  // [bp-0x90]
    let v5: u8;  // [bp-0x88]
    let v6: u128;  // [bp-0x80]
    let v7: Result<struct16, struct16>;  // [bp-0x70], Other Possible Types: u320
    let v8: u64;  // [bp-0x68]
    let v9: struct24;  // [bp-0x40]
    let v13: core::result::Result<(), std::io::error::Error>;  // eax
    let v14: struct8;  // bpl
    let v18: u32;  // edx
    let v19: u64;  // rax
    let v21: struct8;  // rax
    let v22: struct8;  // rax
    let v23: core::option::Option<u32>;  // rax:rax
    let v25: &[u8];  // rax:rdx
    let v26: core::option::Option<u32>;  // rax:rax

    v6 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v23 = core::str::validations::next_code_point(&v6) as u128;
    if let Ok(_) = v13 {
        if !(v13 == 49 || v13 == 50) {
            goto LABEL_0x4c389e;
        }
        v26 = core::str::validations::next_code_point(&v6) as u128;
        if !(v26 as i32 && v18 == 46) {
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
        v25 = core::slice::iter::Iter<T>::make_slice(v6 as i64);
        v7 = uu_join::parse_field_number(v25.ptr, a2);
        v19 = v8;
        match v7 {
            Err(_) => {
                *((a0 + 8) as &i8) = 1;
                *((a0 + 9) as &struct8) = v14;
                *((a0 + 16) as &u64) = v8;
                v21 = 0;
            },
            Ok(_) => {
                *((a0 + 8) as &i64) = v7 as i64;
            },
        }
    }
    *((a0 + 16) as &u64) = v19;
    v22 = 1;
}
