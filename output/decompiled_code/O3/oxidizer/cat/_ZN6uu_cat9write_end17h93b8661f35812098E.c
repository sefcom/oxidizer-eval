fn uu_cat::write_end(a0: u64, a1: &u64, a2: &u64, a3: u8, a4: u8) -> u64 {
    let v1: u64;  // [sp-0x38]
    let v3: &u64;  // rsi
    let v4: u64;  // rax
    let v5: &u64;  // rbx
    let v6: u64;  // rcx
    let v7: u64;  // r8
    let v10: &u64;  // r15
    let v18: u32;  // eax
    let v19: u64;  // rax
    let v20: u64;  // rax

    v3 = a1;
    v1 = v4;
    v5 = a2;
    if a4 {
        if a3 {
            v6 = &g_419276;
            v7 = 2;
        } else {
            v6 = &g_419271;
            v7 = 1;
        }
        return uu_cat::write_nonprint_to_end(a1, a2, a0, v6, v7);
    }
    if !a3 {
        if a2 {
            v10 = 0;
            do {
                v18 = *((a1 + v10) as &i8);
                if !(v18 != 10) || !(v18 != 13) {
                    v20 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, a1, v10);
                    if !v20 {
                        return v5;
                    }
                    v1 = v20;
                    core::result::unwrap_failed(); /* do not return */
                }
            } while ((v10 += 1, a2 != v10));
        }
        v19 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, a1, a2);
        if !v19 {
            return v5;
        }
        v1 = v19;
        core::result::unwrap_failed(); /* do not return */
    }
    if !a2 {
        goto LABEL_0x4865b8;
    } else {
        goto LABEL_0x486511;
    }
}
