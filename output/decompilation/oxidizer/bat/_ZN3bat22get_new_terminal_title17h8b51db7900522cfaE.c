fn bat::get_new_terminal_title(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: i64;  // [bp-0x68]
    let v1: struct24;  // [bp-0x60]
    let v2: u64;  // [bp-0x50]
    let v3: struct24;  // [bp-0x48]
    let v5: core::fmt::rt::Argument;  // rax
    let v6: i64;  // rdx
    let v7: Result<struct40, struct16>;  // rdx
    let v9: core::str::pattern::CharSearcher;  // rax

    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("bat: ");
    v3 = struct24 {
        field_0: a1
        field_8: a2 * 160 + a1
        field_16: 0
    };
    v5 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v3);
    if v6 {
        do {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1, *((v9 + 8) as &i64), *((v9 + 16) as &i64) + *((v9 + 8) as &i64));
            if v5 < a2 - 1 {
                <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1, &g_488e48, &g_488e4a);
            }
            v5 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v3);
            v7 = v6;
        } while (v7);
    }
    *((v0 + 16) as &u64) = v2;
    *(v0 as &i128) = *(&v1.field_0 as &i128);
    return v2;
}
