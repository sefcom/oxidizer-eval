fn uu_sort::print_sorted(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: u128;  // [sp-0xc8]
    let v1: u128;  // [sp-0xb8]
    let v2: u128;  // [sp-0xa8]
    let v3: u128;  // [sp-0x98]
    let v4: u128;  // [sp-0x88]
    let v5: u128;  // [sp-0x78]
    let v6: u128;  // [sp-0x68]
    let v7: u64;  // [sp-0x58]
    let v8: u8;  // [bp-0x48]
    let v10: Option<struct16>;  // rax

    uu_sort::Output::into_write(&v8, a2);
    v7 = a0->field_70;
    v6 = a0->field_60;
    v5 = a0->field_50;
    v4 = a0->field_40;
    v3 = a0->field_30;
    v2 = a0->field_20;
    v1 = a0->field_10;
    v0 = a0->field_0;
    loop {
        v10 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next();
        if !v10 {
            break;
        }
        uu_sort::Line::print(v10, &v8, a1);
    }
    return;
}
