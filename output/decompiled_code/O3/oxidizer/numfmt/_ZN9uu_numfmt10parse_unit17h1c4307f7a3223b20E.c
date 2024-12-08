fn uu_numfmt::parse_unit(a0: &u64, a1: u64, a2: u64) -> u64 {
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "auto") as i8 {
        *(&a0[1] as &i8) = 2;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "si") as i8 {
        *(&a0[1] as &i8) = 3;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "iec") as i8 {
        *(&a0[1] as &i8) = 0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "iec-i") as i8 {
        *(&a0[1] as &i8) = 1;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "none") as i8 {
        *(&a0[1] as &i8) = 5;
    } else {
        return <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "Unsupported unit is specified");
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
