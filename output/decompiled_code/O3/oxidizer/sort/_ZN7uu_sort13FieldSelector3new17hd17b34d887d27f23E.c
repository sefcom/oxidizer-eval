fn uu_sort::FieldSelector::new(a0: void*, a1: &u64, a2: void*, a3: u32) -> u64 {
    let v0: u128;  // [sp-0x38]
    let v1: u64;  // [sp-0x28]
    let v2: u128;  // [sp-0x20]
    let v3: u64;  // [sp-0x10]
    let v6: u64;  // rax
    let v7: &u64;  // rax

    if !a1[1] {
        v7 = __rust_alloc(59, 1);
        *((&v7[5] as &char + 3) as &i128) = 133485624513146996785960933456865752169;
        *(&v7[4] as &i128) = 146793563363748825717793806262549553253;
        *(&v7[2] as &i128) = 138842676100815432793774417478815391858;
        *(&v7 as &i128) = 134856349688948118446018713040161500777;
        a0->field_0 = 59;
        *(&a0->padding_8[0] as &&u64) = v7;
        a0->field_10 = 59;
        a0->field_37 = 2;
        return a0;
    }
    v6 = a3 >> 40;
    v3 = a1[2];
    v2 = *(&a1 as &i128);
    v1 = a2->field_10;
    v0 = a2->field_0;
    a0->field_20 = *((&v2 as &char + 8) as &i64);
    a0->field_28 = v3;
    a0->field_0 = v0;
    a0->field_10 = v1;
    a0->field_18 = v2;
    a0->field_34 = a3 >> 32;
    a0->field_30 = a3;
    a0->field_35 = v6;
    a0->field_36 = 1;
    a0->field_37 = v6 != 2;
    return a0;
}
