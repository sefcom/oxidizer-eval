fn uu_join::Spec::parse(a0: &struct24, a1: u64, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xb0]
    let v1: i64;  // [sp-0xa8]
    let v2: i64;  // [sp-0xa0]
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x90]
    let v5: i8;  // [sp-0x88]
    let v6: i8;  // [bp-0x80]
    let v7: i64;  // [sp-0x78]
    let v8: i64;  // [bp-0x70], Other Possible Types: struct16, struct40
    let v9: i64;  // [sp-0x68]
    let v10: String;  // [sp-0x40], Other Possible Types: struct24
    let v11: i32;  // [sp-0x28]
    let v13: i32;  // edx
    let v14: i32;  // eax
    let v15: i8;  // bpl
    let v18: i64;  // rax
    let v19: i64;  // rcx

    v7 = a1 + a2;
    v14 = (core::str::validations::next_code_point(&v6) as i32 ? v13 : 0x110000);
    if v14 != 48 {
        if v14 == 49 {
            v15 = 0;
            goto LABEL_4c3736;
        }
        if v14 != 50 {
            v2 = 0;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
LABEL_4c389e:
            v8 = struct40 {
                field_0: v16
                field_8: 1
                field_16: &v0
                field_24: 1
                field_32: 0
            };
            v10 = core::option::Option<T>::map_or_else(&v8);
            v11 = 1;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v10);
            v18 = &g_5352b8;
LABEL_4c38f8:
            *((a0 + 16) as &unsigned long) = v18;
        } else {
            v15 = vvar_53{reg 56} & -0x100 | 1;
LABEL_4c3736:
            if !(core::str::validations::next_code_point(&v6) as i32) || !(v13 == 46) {
                v2 = 0;
                v3 = a1;
                v4 = a2;
                v5 = 1;
                v10 = format!("invalid field specifier: {}", &v2);
                v11 = 1;
                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v10);
                *((a0 + 16) as &&i64) = &g_5352b8;
                *(a0 as &i64) = 1;
            }
            v8 = uu_join::parse_field_number(core::slice::iter::Iter<T>::make_slice(a1, v7), a2);
            v19 = v8;
            v18 = v9;
            if v19 {
                *((a0 + 8) as &unsigned long) = v19;
                goto LABEL_4c38f8;
            } else {
                *((a0 + 8) as &i8) = 1;
                *((a0 + 9) as &char) = v15;
                *((a0 + 16) as &unsigned long) = v18;
            }
        }
    } else if core::str::validations::next_code_point(&v6) as i32 {
        v2 = 0;
        v3 = a1;
        v4 = a2;
        v5 = 1;
        v0 = &v2;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        goto LABEL_4c389e;
    } else {
        *((a0 + 8) as &i8) = 0;
    }
    return struct8 {
        field_0: v17
    };
}
