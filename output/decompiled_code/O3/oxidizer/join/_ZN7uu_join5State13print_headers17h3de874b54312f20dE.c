fn uu_join::State::print_headers(a0: u32, a1: u32, a2: void*) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u64;  // rcx
    let v5: u64;  // rax
    let v6: u64;  // rcx

    v0 = v2;
    v3 = a2->field_10;
    if !a2->field_10 {
        if !v3 {
            return 0;
        }
    } else {
        if v3 {
            v5 = uu_join::State::combine(a2, a1, a2, v4);
            if v5 {
                return v5;
            }
            return 0;
        }
    }
    v5 = uu_join::State::print_first_line(a2, a1, v6);
    if v5 {
        return v5;
    }
    return 0;
}
