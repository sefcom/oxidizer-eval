fn uu_sort::print_sorted(a0: i64, a1: i64, a2: i64) -> void {
    let v0: u128;  // [bp-0xa8]
    let v1: u128;  // [bp-0x98]
    let v2: u128;  // [bp-0x88]
    let v3: u128;  // [bp-0x78]
    let v4: u128;  // [bp-0x68]
    let v5: struct8;  // [bp-0x58]
    let v6: u8;  // [bp-0x48]
    let v8: void*;  // rax

    uu_sort::Output::into_write(&v6, a2);
    v5 = *((a0 + 80) as &i64);
    v4 = *((a0 + 64) as &i128);
    v3 = *((a0 + 48) as &i128);
    v2 = *((a0 + 32) as &i128);
    v1 = *((a0 + 16) as &i128);
    v0 = *(a0 as &i128);
    loop {
        v8 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v8 {
            break;
        }
        uu_sort::Line::print(v8, &v6, a1);
    }
    return;
}
