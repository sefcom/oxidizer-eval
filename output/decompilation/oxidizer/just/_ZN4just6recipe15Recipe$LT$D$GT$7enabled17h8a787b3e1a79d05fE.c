fn just::recipe::Recipe<D>::enabled(a0: u64) -> char {
    let v1: u64;  // r14
    let v2: &mut [u8];  // al
    let v3: u8;  // al
    let v4: core::option::Option<&str>;  // al
    let v5: u8;  // al

    v1 = a0 + 216;
    v2 = just::attribute_set::AttributeSet::contains(v1, 6);
    v3 = just::attribute_set::AttributeSet::contains(v1, 7);
    v4 = just::attribute_set::AttributeSet::contains(v1, 12);
    v5 = just::attribute_set::AttributeSet::contains(v1, 17);
    return (just::attribute_set::AttributeSet::contains(v1, 18) | v4 | v3) ^ 1 | v5 | v2;
}
