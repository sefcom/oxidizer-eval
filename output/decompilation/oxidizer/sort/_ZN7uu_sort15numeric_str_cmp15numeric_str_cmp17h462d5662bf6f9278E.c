fn uu_sort::numeric_str_cmp::numeric_str_cmp(a0: i64, a1: i64) -> long long {
    let v0: core::result::Result<usize, std::io::error::Error>;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v2: u64;  // [bp-0x30]
    let v3: u64;  // [bp-0x28]
    let v5: i64;  // rax
    let v6: u64;  // r15
    let v7: u64;  // rcx
    let v8: u64;  // rax
    let v10: u32;  // ebp
    let v11: u32;  // eax
    let v12: u8;  // al

    v5 = *((a0 + 16) as &i64);
    v6 = *((v5 + 8) as &i8);
    v7 = *((*((a1 + 16) as &i64) + 8) as &i8);
    if v6 != v7 {
        v8 = -((v6 & 255) < (v7 & 255));
        return v8 & 0xffffff00 | v8 | 1;
    }
    if !*((a1 + 8) as &i64) || !*((a0 + 8) as &i64) || *(v5 as &i64) == *(*((a1 + 16) as &i64) as &i64) {
        v0 = *(a0 as &i64);
        v1 = *((a0 + 8) as &i64) + *(a0 as &i64);
        v2 = *(a1 as &i64);
        v3 = *((a1 + 8) as &i64) + *(a1 as &i64);
        loop {
            v10 = core::iter::traits::iterator::Iterator::try_fold(&v0) as i32;
            v11 = core::iter::traits::iterator::Iterator::try_fold(&v2) as i32;
            if v10 == 0x110000 {
                break;
            }
            if v11 == 0x110000 {
                v12 = 1;
                if v10 == 48 {
                    v12 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), a1) ^ 1;
                    break;
                }
            } else if v10 != v11 {
                break;
            }
        }
    }
    return ((v6 & 255) ? v12 : -(v12));
}
