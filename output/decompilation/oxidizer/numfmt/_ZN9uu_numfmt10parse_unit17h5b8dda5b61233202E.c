fn uu_numfmt::parse_unit(a0: i64, a1: void*, a2: u32) -> long long {
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "auto") {
        *((a0 + 8) as &i8) = 2;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "si") {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: 3
        };
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "iec") {
        *((a0 + 8) as &i8) = 0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "iec-i") {
        *((a0 + 8) as &i8) = 1;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "none") {
        *((a0 + 8) as &i8) = 5;
    } else {
        return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "Unsupported unit is specified");
    }
}
