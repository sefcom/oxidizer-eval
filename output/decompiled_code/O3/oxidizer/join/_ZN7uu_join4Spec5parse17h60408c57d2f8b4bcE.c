fn uu_join::Spec::parse(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0xb0]
    let v1: i64;  // [sp-0xa8]
    let v2: i64;  // [sp-0xa0]
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x90]
    let v5: i8;  // [sp-0x88]
    let v6: i64;  // [sp-0x80]
    let v7: i64;  // [sp-0x78]
    let v8: i64;  // [bp-0x70], Other Possible Types: struct16, struct40
    let v9: i192;  // [sp-0x40], Other Possible Types: struct24
    let v10: i32;  // [sp-0x28]
    let v12: i64;  // r15
    let v13: i32;  // edx
    let v14: i8;  // bpl
    let v17: i64;  // rax
    let v18: i64;  // rdx
    let v19: i64;  // rcx

    v12 = a1;
    v6 = a1;
    v7 = a1 + a2;
    if core::str::validations::next_code_point(&v6) as i32 {
        if v13 == 48 {
            if !core::str::validations::next_code_point(&v6) as i32 {
                return struct9 {
                    field_0: 0
                    field_8: 0
                };
            }
            v2 = 0;
            v3 = v12;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
            v8 = struct40 {
                field_0: v16
                field_8: 1
                field_16: &v0
                field_24: 1
                field_32: 0
            };
            v9 = core::option::Option<T>::map_or_else(&v8);
            v10 = 1;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v9);
            return struct16 {
                field_0: 1
                field_16: <UNKNOWN>
            };
        }
        if v13 == 49 {
            v14 = 0;
            goto LABEL_4c3823;
        } else if v13 == 50 {
            v14 = vvar_59{reg 56} | -0x100 | 1;
LABEL_4c3823:
            if core::str::validations::next_code_point(&v6) as i32 && v13 == 46 {
                v8 = uu_join::parse_field_number(core::slice::iter::Iter<T>::make_slice(v6, v7), v18);
                v19 = v8;
                v17 = v8.field_8;
                if v19 {
                    return struct24 {
                        field_0: 1
                        field_8: v19
                        field_16: v17
                    };
                }
                return struct18 {
                    field_0: 0
                    field_8: 1
                    field_9: v14
                    field_16: <UNKNOWN>
                };
            }
            v2 = 0;
            v3 = v12;
            v4 = a2;
            v5 = 1;
            v9 = format!("invalid field specifier: {:?}", &v2);
            v10 = 1;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v9);
            *((a0 + 16) as &&i64) = &g_535e48;
            *(a0 as &i64) = 1;
            return &g_535e48;
        }
    }
    v2 = 0;
    v3 = v12;
    v4 = a2;
    v5 = 1;
    v0 = &v2;
    v1 = <os_display::Quoted as core::fmt::Display>::fmt;
    v8 = struct40 {
        field_0: v16
        field_8: 1
        field_16: &v0
        field_24: 1
        field_32: 0
    };
    vvar_291{stack -64} = core::option::Option<T>::map_or_else(&v8);
    vvar_293{stack -40} = 1;
    return struct24 {
        field_0: 1
        field_8:         alloc::boxed::Box<T>::new(&v9)
        field_16: &g_535e48
    };
}
