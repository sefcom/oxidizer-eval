fn uu_ptx::trim_idx(a0: &u32, a1: u64, a2: &u32, a3: &u32) -> u64 {
    let v1: &u32;  // 4096
    let v2: &u32;  // 4096
    let v3: &u32;  // r13
    let v4: u64;  // rdi
    let v5: &u32;  // r13
    let v6: &u32;  // 4096
    let v7: u64;  // rdi

    uu_ptx::assert_str_integrity(a1, a2, a3);
    if a2 < a3 {
        loop {
            v3 = v2;
            v4 = *((a0 + 0x4 * v3 as u64) as &i32);
            if !(v4 - 9 < 5) && !(v4 == 32) && (!(v4 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v4) as i8)) {
                break;
            }
            v5 = v3 as &char + 1;
            if a3 == v5 {
                return v6;
            }
        }
    }
    if v1 >= a3 {
        return v6;
    }
    loop {
        a3 = a3 as &char + 1;
        v7 = *((a0 + 0x4 * a3 as u64) as &i32);
        if !(v7 - 9 < 5) && !(v7 == 32) && (!(v7 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v7) as i8)) {
            break;
        }
        if v1 >= a3 {
            return v6;
        }
    }
    return v6;
}
