fn uu_hashsum::create_algorithm_from_flags::{{closure}}(a0: void*, a1: void*) -> u64 {
    let v1: u128;  // xmm0
    let v2: &u64;  // rbx
    let v3: &struct_1;  // r14
    let v4: &&struct_0;  // rax

    if !a0->field_0 {
        a0->field_20 = a1->field_20;
        v1 = a1->field_0;
        a0->field_10 = *(&a1->field_10 as &i128);
        a0->field_0 = v1;
        return 0;
    }
    v2 = __rust_alloc(24, 8);
    *(v2) = 9223372036854775821;
    v3 = a1->padding_18;
    if v3->field_0 {
        v4();
    }
    if v3->field_8 {
        return v2;
    }
    return v2;
}
