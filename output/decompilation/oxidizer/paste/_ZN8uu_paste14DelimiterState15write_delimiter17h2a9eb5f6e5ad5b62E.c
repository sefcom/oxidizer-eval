fn uu_paste::DelimiterState::write_delimiter(a1: i64) -> : struct16 {
    let a0: void*;  // rdi
    let v1: void*;  // rax

    if !*(a0 as &i64) {
        return;
    } else if *(a0 as &i64) == 1 {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a1, a0[8] as i64, a0[16] as i64 + a0[8] as i64);
        return;
    } else {
        v1 = <core::iter::adapters::cycle::Cycle<I> as core::iter::traits::iterator::Iterator>::next(a0 + 40);
        core::option::unwrap(v1);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a1, *(v1 as &i64), v1[8] as i64 + *(v1 as &i64));
        *(&a0[8] as &i128) = *(v1 as &i128);
        return;
    }
}
