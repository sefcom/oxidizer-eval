fn uu_ptx::trim_idx(a0: &u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v1: u64;  // r14
    let v2: u64;  // rbx
    let v3: u64;  // r13
    let v4: u64;  // rdi
    let v5: u64;  // rdi

    v1 = a3;
    v2 = a2;
    uu_ptx::assert_str_integrity(a1, a2, a3);
    if a2 < a3 {
        v3 = a2;
        loop {
            v4 = a0[v3];
            if !(v4 - 9 < 5) && !(v4 == 32) && (!(v4 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v4) as i8)) {
                break;
            }
            v3 += 1;
            if a3 == v3 {
                v2 = a3;
                return v2;
            }
        }
        v2 = v3;
    }
    if v2 >= a3 {
        return v2;
    }
    loop {
        v1 -= 1;
        v5 = a0[v1];
        if !(v5 - 9 < 5) && !(v5 == 32) && (!(v5 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v5) as i8)) {
            break;
        }
        if v2 >= v1 {
            return v2;
        }
    }
    return v2;
}
