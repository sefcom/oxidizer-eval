fn uu_more::Pager::page_down(a0: void*) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rcx
    let v3: u64;  // rdx
    let v5: u64;  // rcx
    let v6: u64;  // rdx
    let v7: u64;  // r8
    let v8: u64;  // rdx

    v1 = a0->field_40;
    v2 = v1 * 2;
    v3 = a0->field_18;
    v5 = v2 + v3;
    if __CFADD__(v2, v3) as char {
        v5 = -1;
    }
    v6 = v3 + v1;
    if __CFADD__(v3, v1) as char {
        v6 = -1;
    }
    v7 = a0->field_30 - v1;
    a0->field_18 = v8;
    return v1;
}
