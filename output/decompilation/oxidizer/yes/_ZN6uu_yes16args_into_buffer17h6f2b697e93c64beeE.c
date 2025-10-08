fn uu_yes::args_into_buffer(a0: u64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0xc0]
    let v1: struct64;  // [bp-0x58]
    let v3: u64;  // rax
    let v4: u64;  // rdx

    if !*(a1 as &i64) {
        return <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a0, &g_41723c, &g_41723e);
    }
    v1 = core::iter::traits::iterator::Iterator::map(a1);
    v0 = itertools::free::intersperse(&v1);
    v3 = <itertools::intersperse::IntersperseWith<I,ElemF> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !v3 {
        return alloc::vec::Vec<T,A>::push(a0);
    }
    do {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a0, v3, v4 + v3);
        v3 = <itertools::intersperse::IntersperseWith<I,ElemF> as core::iter::traits::iterator::Iterator>::next(&v0);
    } while (v3);
    return alloc::vec::Vec<T,A>::push(a0);
}
