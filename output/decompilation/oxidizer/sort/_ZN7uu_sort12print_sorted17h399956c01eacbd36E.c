fn uu_sort::print_sorted(a0: i64, a1: i64, a2: i64, a3: i64) -> void {
    let v0: struct16;  // [bp-0x60]
    let v1: u8;  // [bp-0x50]
    let v3: void*;  // rax

    uu_sort::Output::into_write(&v1, a3);
    v0 = struct16 {
        field_0: a0
        field_8: a1
    };
    loop {
        v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v3 {
            break;
        }
        uu_sort::Line::print(v3, &v1, a2);
    }
    return;
}
