fn uu_dd::parseargs::parse_bytes_only(a0: &Option<struct8>, a1: &u8, a2: u32, a3: &u8) -> u64 {
    let v0: Result<struct8, struct1>;  // [sp-0x28]
    let v1: i8;  // [bp-0x20]

    if a3 {
        if a3 >= a2 {
            if a3 != a2 {
                core::str::slice_error_fail(a1, a2, 0, a3, "src/uu/dd/src/parseargs.rs"); /* do not return */
            }
        } else {
            if *((a1 + a3) as &i8) <= 191 {
                core::str::slice_error_fail(a1, a2, 0, a3, "src/uu/dd/src/parseargs.rs"); /* do not return */
            }
        }
    }
    v0 = core::num::<impl core::str::traits::FromStr for u64>::from_str(a1, a3) as u64;
    match v0 {
        Ok(_) => {
            *(&a0->field_8 as &i8) = v1;
        },
        Err(_) => {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, a1, a2);
        },
    }
    return struct8 {
        field_0: v3
    };
}
