fn uu_join::Spec::parse(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: &u8;  // [sp-0xb0], Other Possible Types: u64
    let v1: u64;  // [sp-0xa8]
    let v2: void*;  // [sp-0xa0]
    let v3: u64;  // [sp-0x98]
    let v4: u64;  // [sp-0x90]
    let v5: u8;  // [sp-0x88]
    let v6: u64;  // [sp-0x80]
    let v7: u64;  // [sp-0x78]
    let v8: u64;  // [sp-0x70], Other Possible Types: struct16
    let v9: u64;  // [sp-0x68]
    let v10: &u8;  // [sp-0x60], Other Possible Types: &&struct_0
    let v11: u64;  // [sp-0x58]
    let v12: void*;  // [sp-0x50]
    let v13: u8;  // [bp-0x40]
    let v14: u32;  // [sp-0x28]
    let v16: u64;  // r15
    let v17: u32;  // eax
    let v18: u8;  // bpl
    let v19: u64;  // rax
    let v21: u32;  // edx
    let v22: u64;  // rax
    let v23: u32;  // rdx
    let v24: u64;  // rcx

    v16 = a1;
    v6 = a1;
    v7 = a1 + a2;
    if !core::str::validations::next_code_point(&v6) as i32 {
        v17 = 0x110000;
    }
    if v17 != 48 {
        if v17 == 49 {
            v18 = 0;
            goto LABEL_4c3736;
        }
        if v17 != 50 {
            v2 = 0;
            v3 = v16;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
            v19 = "invalid file number in field spec: ";
LABEL_4c389e:
            v8 = v19;
            v9 = 1;
            v12 = 0;
            v10 = &v0;
            v11 = 1;
            core::option::Option<T>::map_or_else();
            v14 = 1;
            *(&a0->field_8 as &double) = alloc::boxed::Box<T>::new(&v13);
            v22 = &g_5352b8;
LABEL_4c38f8:
            a0->field_10 = v22;
        } else {
            v18 = vvar_56{reg 56} & -0x100 | 1;
LABEL_4c3736:
            if !(core::str::validations::next_code_point(&v6) as i32) || !(v21 == 46) {
                v2 = 0;
                v3 = v16;
                v4 = a2;
                v5 = 1;
                v0 = &v2;
                v1 = <os_display::Quoted as core::fmt::Display>::fmt;
                v8 = "invalid field specifier: ";
                v9 = 1;
                v12 = 0;
                v10 = &v0;
                v11 = 1;
                core::option::Option<T>::map_or_else();
                v14 = 1;
                *(&a0->field_8 as &double) = alloc::boxed::Box<T>::new(&v13);
                a0->field_10 = &g_5352b8;
                a0->field_0 = 1;
            }
            v8 = uu_join::parse_field_number(core::slice::iter::Iter<T>::make_slice(v6, v7), v23);
            v24 = v8;
            v22 = v9;
            if v24 {
                a0->field_8 = v24;
                goto LABEL_4c38f8;
            } else {
                a0->field_8 = 1;
                a0->padding_9[0] = v18;
                a0->field_10 = v22;
            }
        }
    } else if core::str::validations::next_code_point(&v6) as i32 {
        v2 = 0;
        v3 = v16;
        v4 = a2;
        v5 = 1;
        v0 = &v2;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v19 = "invalid field specifier: ";
        goto LABEL_4c389e;
    } else {
        a0->field_8 = 0;
    }
    return struct8 {
        field_0: v20
    };
}
