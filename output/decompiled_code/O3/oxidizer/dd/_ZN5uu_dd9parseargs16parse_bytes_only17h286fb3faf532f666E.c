fn uu_dd::parseargs::parse_bytes_only(a0: &u64, a1: &u8, a2: u64, a3: &u8) -> u64 {
    let v0: Result<struct8, struct1>;  // [sp-0x28]
    let v1: i8;  // [bp-0x20]
    let v3: u64;  // rax

    if a3 {
        if a3 >= a2 {
            if a3 != a2 {
                core::str::slice_error_fail(); /* do not return */
            }
        } else {
            if *((a1 + a3) as &i8) <= 191 {
                core::str::slice_error_fail(); /* do not return */
            }
        }
    }
    v0 = core::num::<impl core::str::traits::FromStr for u64>::from_str(a1, a3);
    match v0 {
        Ok(_) => {
            *(&a0[1] as &i8) = v1;
            v3 = 14;
        },
        Err(_) => {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, a1, a2);
            v3 = 7;
        },
    }
    return struct8 {
        field_0: v3
    };
}
