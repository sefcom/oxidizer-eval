fn just::recipe::Recipe<D>::print_exit_message(a0: u64, a1: u8) -> long long {
    let v0: core::option::Option<&str>;  // [bp-0x18]
    let v2: i64;  // rax
    let v3: u64;  // rbx
    let v4: u64;  // rax
    let v5: u64;  // rax

    v0 = v2;
    v3 = a0 + 216;
    v4 = just::attribute_set::AttributeSet::contains(v3, 3);
    if v4 {
        return v4 & -0x100 | 1;
    } else if (a1 & 1) {
        return 0;
    } else {
        v5 = just::attribute_set::AttributeSet::contains(v3, 10);
        return v5 & -0x100 | v5 ^ 1;
    }
}
