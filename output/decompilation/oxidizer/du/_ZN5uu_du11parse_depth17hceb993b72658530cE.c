fn uu_du::parse_depth(a1: i64, a2: i64, a3: i8) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x40], Other Possible Types: u8
    let v1: struct24;  // [bp-0x38]
    let v4: u64;  // rax
    let v5: u64;  // rcx
    let v7: u64;  // rax
    let v8: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    if !a1 {
        return struct24 {
            field_0: v7
            field_8: v5
            field_16: v4
        };
    }
    v8 = core::num::<impl usize>::from_ascii_radix(&v0, a1, a2);
    if v0 {
        if a3 {
            goto LABEL_498a44;
        }
        v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
    } else {
        if !a3 {
            return struct24 {
                field_0: v7
                field_8: v5
                field_16: v4
            };
        }
LABEL_498a44:
        v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
    }
    *((a0 + 8) as &u64) = alloc::boxed::Box<T>::new(&v0) as u64;
    *((a0 + 16) as &&u8) = &g_545d90;
}
