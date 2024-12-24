fn uu_sort::print_sorted(a0: u64, a1: u64, a2: &u64, a3: void*) -> u64 {
    let v0: u64;  // [sp-0x60]
    let v1: u64;  // [sp-0x58]
    let v2: u8;  // [bp-0x50]
    let v4: struct8;  // rax

    uu_sort::Output::into_write(&v2, a3);
    v0 = a0;
    v1 = a1;
    loop {
        v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v4 {
            break;
        }
        uu_sort::Line::print(v4, &v2, a2);
    }
    return;
}
