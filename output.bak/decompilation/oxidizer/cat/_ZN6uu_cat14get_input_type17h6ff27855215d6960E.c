fn uu_cat::get_input_type(a0: &struct9, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0xe4]
    let v1: i64;  // [sp-0xe0], Other Possible Types: struct9
    let v2: i64;  // [sp-0xd8]
    let v3: i64;  // [sp-0xd0]
    let v4: i64;  // [sp-0xc8], Other Possible Types: struct16
    let v5: i64;  // [sp-0xc0]
    let v6: i64;  // [sp-0xb8]
    let v7: i64;  // [sp-0xb0]
    let v8: i64;  // [sp-0xa8]
    let v9: i8;  // [bp-0x90]
    let v11: i64;  // rax

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        return struct9 {
            field_0: 9223372036854775814
            field_8: 2
        };
    }
    v4 = std::fs::metadata(a1, a2);
    if v4 == 2 {
        v3 = v5;
        v1 = std::io::error::repr_bitpacked::decode_repr(v3);
        goto *((4312028 + (stack_base)[224] as i8 * 4) as &i32) + 4312028;
    } else {
        v0 = v9;
        switch ((v0 & 0xf000) - 0x1000 >> 12) {
        case 0:
            return struct9 {
                field_0: 9223372036854775814
                field_8: 6
            };
        case 1:
            return struct9 {
                field_0: 9223372036854775814
                field_8: 5
            };
        case 3:
            return struct9 {
                field_0: 9223372036854775814
                field_8: 0
            };
        case 5:
            return struct9 {
                field_0: 9223372036854775814
                field_8: 4
            };
        case 7:
            return struct9 {
                field_0: 9223372036854775814
                field_8: 1
            };
        case 9:
            return struct9 {
                field_0: 9223372036854775814
                field_8: 3
            };
        case 11:
            return struct9 {
                field_0: 9223372036854775814
                field_8: 7
            };
        default:
            v1 = &v0;
            v2 = <std::fs::FileType as core::fmt::Debug>::fmt;
            v4 = &g_414590;
            v5 = 1;
            v8 = 0;
            v6 = &v1;
            v7 = 1;
            v11 = core::option::Option<T>::map_or_else();
        }
    }
}
