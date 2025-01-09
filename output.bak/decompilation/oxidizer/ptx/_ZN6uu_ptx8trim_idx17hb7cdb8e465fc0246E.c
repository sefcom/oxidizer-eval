fn uu_ptx::trim_idx(a0: &u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v1: u64;  // 4096
    let v2: u64;  // 4096
    let v3: u64;  // r13
    let v4: u64;  // rdi
    let v5: u64;  // r13
    let v6: u64;  // 4096
    let v7: u64;  // rdi

    uu_ptx::assert_str_integrity(a1, a2, a3);
    v1 = a2;
    if a2 < a3 {
        v2 = a2;
        loop {
            v3 = v2;
            v4 = a0[v3];
            if !(v4 - 9 < 5) && !(v4 == 32) && (!(v4 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v4) as i8)) {
                break;
            }
            v5 = v3 + 1;
            v2 = v5;
            if a3 == v5 {
                v6 = a3;
                return v6;
            }
        }
        v1 = v3;
    }
    v6 = v1;
    if v1 >= a3 {
        return v6;
    }
    loop {
        a3 -= 1;
        v7 = a0[a3];
        if !(v7 - 9 < 5) && !(v7 == 32) && (!(v7 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v7) as i8)) {
            break;
        }
        if v1 >= a3 {
            v6 = v1;
            return v6;
        }
    }
    v6 = v1;
    return v6;
}
