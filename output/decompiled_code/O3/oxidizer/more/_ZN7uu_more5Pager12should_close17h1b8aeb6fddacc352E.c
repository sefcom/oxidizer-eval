fn uu_more::Pager::should_close(a0: void*) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v4: u64;  // rax

    v1 = a0->field_40;
    v2 = v1 + a0->field_18;
    return v2 | -0x100 | a0->field_30 <= v4;
}
