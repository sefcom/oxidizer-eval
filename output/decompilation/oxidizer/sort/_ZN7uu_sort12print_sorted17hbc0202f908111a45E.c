fn uu_sort::print_sorted(a0: i64, a1: i64, a2: i64) -> void {
    let v0: struct120;  // [bp-0xc8]
    let v1: u8;  // [bp-0x48]
    let v3: void*;  // rax

    uu_sort::Output::into_write(&v1, a2);
    v0 = struct120 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i128)
        field_32: *((a0 + 32) as &i128)
        field_48: *((a0 + 48) as &i128)
        field_64: *((a0 + 64) as &i128)
        field_80: *((a0 + 80) as &i128)
        field_96: *((a0 + 96) as &i128)
        field_112: *((a0 + 112) as &i64)
    };
    loop {
        v3 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v3 {
            break;
        }
        uu_sort::Line::print(v3, &v1, a1);
    }
    return;
}
