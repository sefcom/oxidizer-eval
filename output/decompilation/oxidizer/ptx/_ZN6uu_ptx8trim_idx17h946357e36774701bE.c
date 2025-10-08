fn uu_ptx::trim_idx(a0: i64, a1: u64, a2: u64, a3: u64) -> long long {
    let v1: core::fmt::rt::Argument;  // 4096
    let v2: core::fmt::rt::Argument;  // 4096
    let v3: core::fmt::rt::Argument;  // r13
    let v4: u32;  // edi
    let v6: u32;  // edi

    uu_ptx::assert_str_integrity(a1, a2, a3);
    v1 = a2;
    if v1 < a3 {
        v2 = a2;
        loop {
            v3 = v2;
            v4 = *((a0 + v3 * 4) as &i32);
            if v4 - 9 >= 5 && v4 != 32 && (v4 < 128 || !core::unicode::unicode_data::white_space::lookup(v4)) {
                break;
            }
            v2 = v3 + 1;
            if a3 == v2 {
                return a3;
            }
        }
        v1 = v3;
    }
    if v1 >= a3 {
        return v1;
    }
    loop {
        a3 -= 1;
        v6 = *((a0 + a3 * 4) as &i32);
        if v6 - 9 >= 5 && v6 != 32 && (v6 < 128 || !core::unicode::unicode_data::white_space::lookup(v6)) {
            break;
        }
        if v1 >= a3 {
            return v1;
        }
    }
    return v1;
}
