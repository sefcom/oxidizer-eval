fn uu_join::State::print_headers(a0: void*, a1: u32, a2: void*) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: &struct_0;  // 4096
    let v5: void*;  // rcx
    let v6: u64;  // rax
    let v7: u32;  // rcx

    v0 = v2;
    v3 = a2->field_10;
    if a0->field_10 {
        v4 = a0;
        if v3 {
            v6 = uu_join::State::combine(a0, a1, a2, v5);
            if v6 {
                return v6;
            }
            return 0;
        }
    } else if v3 {
        v4 = a2;
    } else {
        return 0;
    }
    v6 = uu_join::State::print_first_line(v4, a1, v7);
    if v6 {
        return v6;
    }
    return 0;
}
