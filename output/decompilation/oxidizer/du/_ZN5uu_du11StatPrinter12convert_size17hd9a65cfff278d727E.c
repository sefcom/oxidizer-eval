fn uu_du::StatPrinter::convert_size(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x38]
    let v1: u8;  // [bp-0x1c]
    let v3: i64;  // rsi
    let v4: u64;  // 4096
    let v6: u64;  // rax
    let v7: u64;  // rdx
    let v10: core::result::Result<(), core::fmt::Error>;  // rax

    if !*((a1 + 32) as &i64) {
        uucore::features::format::human::human_readable(a0, a2, 2);
        return;
    } else if *((a1 + 32) as &i64) == 1 {
        uucore::features::format::human::human_readable(a0, a2, 1);
        return;
    } else {
        if *((a1 + 73) as &i8) {
            v3 = &v1;
            v4 = a2;
        } else {
            v3 = &v1;
            v4 = v6 + 1 - (v7 < 1);
        }
        v10 = core::fmt::num::imp::<impl usize>::_fmt(v4, v3) as u64;
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v10 as &i64), a2);
        *((a0 + 16) as &u64) = v0.field_16;
        *(a0 as &i128) = *(&v0.field_0 as &i128);
        return;
    }
}
