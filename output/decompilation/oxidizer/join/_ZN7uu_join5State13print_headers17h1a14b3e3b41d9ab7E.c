fn uu_join::State::print_headers(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: i64;  // 4096
    let v4: u64;  // rax
    let v5: u64;  // rax

    v0 = v2;
    if *((a0 + 16) as &i64) {
        v3 = a0;
        if *((a2 + 16) as &i64) {
            v4 = uu_join::State::combine(a0, a1, a2);
            if !v4 {
                return 0;
            }
            return v4;
        }
    } else if *((a2 + 16) as &i64) {
        v3 = a2;
    } else {
        return 0;
    }
    v5 = uu_join::State::print_first_line(v3, a1, a3);
    if !v5 {
        return 0;
    }
    return v5;
}
