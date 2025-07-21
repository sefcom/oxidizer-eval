fn uu_yes::args_into_buffer(a1: i64) -> : struct8 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xc0]
    let v1: struct64;  // [bp-0x58]
    let v3: u64;  // rax
    let v5: u64;  // rdx
    let v7: u64;  // rdx
    let v8: &[u8];  // rax:rdx
    let v9: &[u8];  // rax:rdx

    if !*(a1 as &i64) {
        v9 = core::slice::iter::Iter<T>::make_slice(&g_41341f);
        return alloc::vec::Vec<T,A>::append_elements(a0, v9.ptr, v5);
    }
    v1 = core::iter::traits::iterator::Iterator::map(a1);
    v0 = itertools::free::intersperse(&v1, " ");
    v3 = <itertools::intersperse::IntersperseWith<I,ElemF> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !v3 {
        return alloc::vec::Vec<T,A>::push(a0);
    }
    do {
        v8 = core::slice::iter::Iter<T>::make_slice(v3);
        alloc::vec::Vec<T,A>::append_elements(a0, v8.ptr, v7);
        v3 = <itertools::intersperse::IntersperseWith<I,ElemF> as core::iter::traits::iterator::Iterator>::next(&v0);
    } while (v3);
    return alloc::vec::Vec<T,A>::push(a0);
}
