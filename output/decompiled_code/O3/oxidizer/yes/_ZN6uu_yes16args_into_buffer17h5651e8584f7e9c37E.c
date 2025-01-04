fn uu_yes::args_into_buffer(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i192;  // [sp-0xc0], Other Possible Types: struct24
    let v1: i512;  // [sp-0x58], Other Possible Types: struct64
    let v3: i64;  // rsi
    let v4: i64;  // rax
    let v5: i64;  // rdx
    let v6: i64;  // rdx
    let v7: i64;  // rdx

    if !*(a1 as &i64) {
        return alloc::vec::Vec<T,A>::append_elements(a0, core::slice::iter::Iter<T>::make_slice(&g_41341f, &g_413421), v5);
    }
    v1 = core::iter::traits::iterator::Iterator::map(a1);
    v0 = itertools::free::intersperse(&v1, " ");
    v4 = <itertools::intersperse::IntersperseWith<I,ElemF> as core::iter::traits::iterator::Iterator>::next(&v0, v3);
    if !v4 {
        return alloc::vec::Vec<T,A>::push(a0);
    }
    do {
        alloc::vec::Vec<T,A>::append_elements(a0, core::slice::iter::Iter<T>::make_slice(v4, v6 + v4), v7);
        v4 = <itertools::intersperse::IntersperseWith<I,ElemF> as core::iter::traits::iterator::Iterator>::next(&v0, v3);
    } while (v4);
}
