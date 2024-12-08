fn uu_cat::get_input_type(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0xe4]
    let v1: struct9;  // [sp-0xe0]
    let v2: i64;  // [sp-0xd0]
    let v3: i1408;  // [sp-0xc8], Other Possible Types: Result<struct176, struct16>
    let v4: i64;  // [sp-0xc0]

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        *((a0 + 8) as &i8) = 2;
    } else {
        v3 = std::fs::metadata(a1, a2);
        match v3 {
            Err(_) => {
                v2 = v4;
                v1 = std::io::error::repr_bitpacked::decode_repr(v2);
                goto (*((4274100 + (stack_base)[224] as i8 as u8 as u64 * 4) as &i32) + 4274100) as i64;
            },
            Ok(_) => {
                v0 = *((&v3 as &char + 56) as &i32);
                switch ((v0 & 0xf000) - 0x1000 >> 12) {
                case 0:
                    *((a0 + 8) as &i8) = 6;
                    break;
                case 1:
                    *((a0 + 8) as &i8) = 5;
                    break;
                case 3:
                    *((a0 + 8) as &i8) = 0;
                    break;
                case 5:
                    *((a0 + 8) as &i8) = 4;
                    break;
                case 7:
                    *((a0 + 8) as &i8) = 1;
                    break;
                case 9:
                    *((a0 + 8) as &i8) = 3;
                    break;
                case 11:
                    *((a0 + 8) as &i8) = 7;
                    break;
                default:
                    return format!("{:?}", &v0);
                }
            },
        }
    }
    return struct8 {
        field_0: 9223372036854775814
    };
}
