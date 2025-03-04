fn uu_numfmt::parse_unit(a0: &Result<struct24, struct1>, a1: u32, a2: u32) -> u64 {
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "auto") as i8 {
        a0->field_8 = 2;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "si") as i8 {
        a0->field_8 = 3;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "iec") as i8 {
        a0->field_8 = 0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "iec-i") as i8 {
        a0->field_8 = 1;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "none") as i8 {
        return Err(struct1 {
            field_0: 5
        });
    } else {
        return <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "Unsupported unit is specified");
    }
}
