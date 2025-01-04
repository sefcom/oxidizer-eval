fn uu_join::Spec::parse(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0xb0]
    let v1: i64;  // [sp-0xa8]
    let v2: i64;  // [sp-0xa0]
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x90]
    let v5: i8;  // [sp-0x88]
    let v6: i64;  // [sp-0x80]
    let v7: i64;  // [sp-0x78]
    let v8: struct16;  // [bp-0x70], Other Possible Types: i64, struct40
    let v9: i64;  // [sp-0x68]
    let v10: i192;  // [sp-0x40], Other Possible Types: struct24
    let v11: i32;  // [sp-0x28]
    let v13: i64;  // r15
    let v14: i32;  // eax
    let v15: i8;  // bpl
    let v16: i64;  // rax
    let v18: i32;  // edx
    let v19: i64;  // rax
    let v20: i64;  // rdx
    let v21: i64;  // rcx

    v13 = a1;
    v6 = a1;
    v7 = a1 + a2;
    if !core::str::validations::next_code_point(&v6) as i32 {
        v14 = 0x110000;
    }
    if v14 == 48 {
        if core::str::validations::next_code_point(&v6) as i32 {
            v2 = 0;
            v3 = v13;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        } else {
            return struct9 {
                field_0: 0
                field_8: 0
            };
        }
    } else {
        if v14 == 49 {
            v15 = 0;
            goto LABEL_4c3736;
        } else if v14 != 50 {
            v2 = 0;
            v3 = v13;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        } else {
            v15 = vvar_56{reg 56} | -0x100 | 1;
LABEL_4c3736:
            if !(core::str::validations::next_code_point(&v6) as i32) || !(v18 == 46) {
                v2 = 0;
                v3 = v13;
                v4 = a2;
                v5 = 1;
                v10 = format!("invalid field specifier: {:?}", &v2);
                v11 = 1;
                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v10);
                *((a0 + 16) as &&i64) = &g_5352b8;
                *(a0 as &i64) = 1;
                return &g_5352b8;
            }
            v8 = uu_join::parse_field_number(core::slice::iter::Iter<T>::make_slice(v6, v7), v20);
            v21 = v8;
            v19 = v9;
            if !v21 {
                *((a0 + 8) as &i8) = 1;
                *((a0 + 9) as &i8) = v15;
                *((a0 + 16) as &i64) = v19;
                v16 = 0;
            } else {
                *((a0 + 8) as &i64) = v21;
LABEL_4c38f8:
                *((a0 + 16) as &i64) = v19;
                v16 = 1;
            }
            return struct8 {
                field_0: v16
            };
        }
    }
    v8 = struct40 {
        field_0: v17
        field_8: 1
        field_16: &v0
        field_24: 1
        field_32: 0
    };
    v10 = core::option::Option<T>::map_or_else(&v8);
    v11 = 1;
    *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v10);
    v19 = &g_5352b8;
    goto LABEL_4c38f8;
}
