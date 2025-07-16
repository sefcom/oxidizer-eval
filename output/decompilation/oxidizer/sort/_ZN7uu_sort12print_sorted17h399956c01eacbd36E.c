fn uu_sort::print_sorted(a0: i64, a1: i64, a2: i64, a3: i64) -> void {
    let v0: u64;  // [bp-0x60]
    let v1: u64;  // [bp-0x58]
    let v2: u8;  // [bp-0x50]
    let v4: void*;  // rax

    uu_sort::Output::into_write(&v2, a3);
    v0 = a0;
    v1 = a1;
    loop {
        v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v4 {
            break;
        }
        uu_sort::Line::print(v4, &v2, a2);
    }
    return;
}
