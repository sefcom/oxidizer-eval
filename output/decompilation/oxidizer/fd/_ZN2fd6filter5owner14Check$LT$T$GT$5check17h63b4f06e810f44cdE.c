fn fd::filter::owner::Check<T>::check(a0: i32, a1: i64, a2: i32) -> u8 {
    if !a0 {
        return core::cmp::impls::<impl core::cmp::PartialEq for i32>::eq(a2, a1);
    } else if a0 != 1 {
        return 1;
    } else {
        return core::cmp::impls::<impl core::cmp::PartialEq for u32>::ne(a2, a1);
    }
}
