fn uu_yes::args_into_buffer(a0: &struct8, a1: &u64) -> u64 {
    let v0: struct24;  // [sp-0xc0]
    let v1: struct64;  // [sp-0x58]
    let v3: i64;  // rax
    let v4: i64;  // rdx
    let v5: i64;  // rdx
    let v6: i64;  // rdx

    if !*(a1 as &i64) {
        return alloc::vec::Vec<T,A>::append_elements(a0, core::slice::iter::Iter<T>::make_slice(&g_41341f, &g_413421), v4);
    }
    v1 = core::iter::traits::iterator::Iterator::map(a1);
    v0 = itertools::free::intersperse(&v1, " ");
    v3 = <itertools::intersperse::IntersperseWith<I,ElemF> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !v3 {
        return alloc::vec::Vec<T,A>::push(a0);
    }
    do {
        alloc::vec::Vec<T,A>::append_elements(a0, core::slice::iter::Iter<T>::make_slice(v3, v5 + v3), v6);
        v3 = <itertools::intersperse::IntersperseWith<I,ElemF> as core::iter::traits::iterator::Iterator>::next(&v0);
    } while (v3);
}
