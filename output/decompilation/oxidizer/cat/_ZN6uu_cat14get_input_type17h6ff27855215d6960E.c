fn uu_cat::get_input_type(a0: &Result<struct24, struct1>, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0xe4]
    let v1: struct9;  // [sp-0xe0]
    let v2: i64;  // [sp-0xd0]
    let v3: Result<struct176, struct8>;  // [sp-0xc8]
    let v5: String;  // rax

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        *((a0 + 8) as &i8) = 2;
    }
    v3 = std::fs::metadata(a1, a2);
    match v3 {
        Err(v2) => {
            v1 = std::io::error::repr_bitpacked::decode_repr(v2);
            goto (*((4312028 + (stack_base)[224] as i8 as u8 as u64 * 4) as &i32) + 4312028) as i64;
        },
        Ok(_) => {
            v0 = *((&v3 as &char + 56) as &i32);
            match ((v0 & 0xf000) - 0x1000 >> 12) {
                0 => {
                    *((a0 + 8) as &i8) = 6;
                }
                1 => {
                    *((a0 + 8) as &i8) = 5;
                }
                3 => {
                    return Err(struct1 {
                        field_0: 0
                    });
                }
                5 => {
                    *((a0 + 8) as &i8) = 4;
                }
                7 => {
                    *((a0 + 8) as &i8) = 1;
                }
                9 => {
                    *((a0 + 8) as &i8) = 3;
                }
                11 => {
                    *((a0 + 8) as &i8) = 7;
                }
                _ => {
                    v5 = format!("{:?}", &v0);
                }
            }
        },
    }
}
