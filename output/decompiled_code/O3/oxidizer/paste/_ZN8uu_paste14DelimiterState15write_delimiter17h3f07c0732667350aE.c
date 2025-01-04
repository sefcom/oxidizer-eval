fn uu_paste::DelimiterState::write_delimiter(a0: &struct16, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: &struct_0;  // rax
    let v6: u64;  // rdx
    let v7: u64;  // r14
    let v8: u64;  // r12
    let v9: u64;  // rdx

    v0 = v2;
    v3 = *(a0);
    if !v3 {
        return v3;
    } else if v3 == 1 {
        v4 = a0[1];
        return alloc::vec::Vec<T,A>::append_elements(a1, core::slice::iter::Iter<T>::make_slice(v4, a0[2] + v4), v6);
    } else {
        v5 = <core::iter::adapters::cycle::Cycle<I> as core::iter::traits::iterator::Iterator>::next(a0 + 5, a1, a2);
        v7 = core::option::unwrap(v5);
        v8 = v5->field_8;
        v3 = alloc::vec::Vec<T,A>::append_elements(a1, core::slice::iter::Iter<T>::make_slice(v7, v7 + v8), v9);
        a0[1] = v7;
        a0[2] = v8;
        return v3;
    }
}
