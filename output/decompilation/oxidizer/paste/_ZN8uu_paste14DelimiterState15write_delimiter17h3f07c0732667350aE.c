fn uu_paste::DelimiterState::write_delimiter(a1: i64) -> : struct16 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: i64;  // rdi
    let v4: i64;  // rax
    let v5: u64;  // r12
    let v6: &[u8];  // rax:rdx
    let v7: &[u8];  // rax:rdx

    v0 = v2;
    if !*(v3 as &i64) {
        return;
    } else if *(v3 as &i64) == 1 {
        v7 = core::slice::iter::Iter<T>::make_slice(*((v3 + 8) as &i64));
        alloc::vec::Vec<T,A>::append_elements(a0, v7.ptr, a1);
        return;
    } else {
        v4 = <core::iter::adapters::cycle::Cycle<I> as core::iter::traits::iterator::Iterator>::next(v3 + 40);
        if !v4 {
            core::option::unwrap_failed(); /* do not return */
        }
        v5 = *((v4 + 8) as &i64);
        v6 = core::slice::iter::Iter<T>::make_slice(*(v4 as &i64));
        alloc::vec::Vec<T,A>::append_elements(a0, v6.ptr, a1);
        *((v3 + 8) as &i64) = *(v4 as &i64);
        *((v3 + 16) as &u64) = v5;
        return;
    }
}
