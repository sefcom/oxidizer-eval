fn uu_sort::print_sorted(a0: &struct_0, a1: &u64, a2: void*) -> u64 {
    let v0: u128;  // [sp-0xa8]
    let v1: u128;  // [sp-0x98]
    let v2: u128;  // [sp-0x88]
    let v3: u128;  // [sp-0x78]
    let v4: u128;  // [sp-0x68]
    let v5: u64;  // [sp-0x58]
    let v6: u8;  // [bp-0x48]
    let v8: u64;  // rsi
    let v9: u64;  // rdx
    let v10: struct16;  // rax

    uu_sort::Output::into_write(&v6, a2);
    v5 = a0->field_50;
    v4 = a0->field_40;
    v3 = a0->field_30;
    v2 = a0->field_20;
    v1 = a0->field_10;
    v0 = a0->field_0;
    loop {
        v10 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(v8, v9);
        if !v10 {
            break;
        }
        uu_sort::Line::print(v10, &v6, a1);
    }
}
