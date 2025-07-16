fn uu_sort::print_sorted(a0: i64, a1: i64, a2: i64) -> void {
    let v0: u128;  // [bp-0x78]
    let v1: u128;  // [bp-0x68]
    let v2: struct8;  // [bp-0x58]
    let v3: u8;  // [bp-0x48]
    let v5: void*;  // rax

    uu_sort::Output::into_write(&v3, a2);
    v2 = *((a0 + 32) as &i128);
    v1 = *((a0 + 16) as &i128);
    v0 = *(a0 as &i128);
    loop {
        v5 = <itertools::adaptors::coalesce::CoalesceBy<I,F,C> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v5 {
            break;
        }
        uu_sort::Line::print(v5, &v3, a1);
    }
    return;
}
