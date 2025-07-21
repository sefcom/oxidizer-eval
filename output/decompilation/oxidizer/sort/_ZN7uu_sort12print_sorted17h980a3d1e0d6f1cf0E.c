fn uu_sort::print_sorted(a0: i64, a1: i64, a2: i64) -> void {
    let v0: struct48;  // [bp-0x78]
    let v1: u8;  // [bp-0x48]
    let v3: void*;  // rax

    uu_sort::Output::into_write(&v1, a2);
    v0 = struct48 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i128)
        field_32: *((a0 + 32) as &i128)
    };
    loop {
        v3 = <itertools::adaptors::coalesce::CoalesceBy<I,F,C> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v3 {
            break;
        }
        uu_sort::Line::print(v3, &v1, a1);
    }
    return;
}
