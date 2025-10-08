fn uu_echo::is_echo_flag(a0: &struct24, a1: i64) -> u64 {
    let v1: u64;  // rbx
    let v2: u64;  // r14
    let v3: u64;  // rdx
    let v4: u8;  // cl
    let v5: u64;  // rdx
    let v6: u8;  // dil
    let v7: u32;  // r8d

    v1 = *((a0 + 16) as &i64);
    if !v1 {
        return 0;
    }
    v2 = *((a0 + 8) as &i64);
    if v2 != "-" {
        return 0;
    } else if <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(v2, v1, v3) {
        return 0;
    } else {
        v4 = *(a1 as &i8);
        if v1 != 1 {
            do {
                v7 = *((v2 + v5) as &i8);
                if v7 != 69 {
                    v6 = 1;
                    if v7 != 101 && v7 != 110 {
                        return 0;
                    }
                }
                v5 += 1;
            } while (v1 != v5);
        }
        *((a1 + 1) as &u8) = v6 & 1;
        *(a1 as &u8) = v4 & 1;
        return a1 & -0x100 | 1;
    }
}
