fn uu_cat::write_nonprint_to_end(a0: &u8, a1: &u8, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: u16;  // [sp-0x40]
    let v1: u8;  // [sp-0x3f]
    let v2: u8;  // [sp-0x3e]
    let v3: u8;  // [sp-0x3d]
    let v5: &u8;  // rbx
    let v6: &u8;  // rbx
    let v7: u64;  // rax
    let v8: u64;  // 4096
    let v9: u64;  // 4096
    let v10: u64;  // 4096
    let v14: u64;  // rdx
    let v20: u64;  // rax

    if !a1 {
        return 0;
    }
    v5 = 0;
    loop {
        v7 = *((a0 + v5) as &i8);
        if v7 == 9 {
            goto LABEL_486898;
        }
        if v7 == 127 {
            goto LABEL_486898;
        }
        if v7 == 10 {
            return v6;
        }
        if (v7 & 255) < 32 {
            v0 = 94;
            v1 = v7 | 64;
            v14 = 2;
            goto LABEL_486890;
        }
        if (v7 - 32 & 255) < 95 {
            v0 = v7;
            v14 = 1;
            goto LABEL_486890;
        }
        if v7 < 160 {
            v0 = 11597;
            v2 = 94;
            v3 = v7 - 64;
            v14 = 4;
            goto LABEL_486890;
        } else if (v7 + 96 & 255) >= 95 {
LABEL_486898:
            v20 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(v8, v9, v10);
            if v20 {
                v0 = v20;
                core::result::unwrap_failed(); /* do not return */
            }
            v5 += 1;
            if a1 == v5 {
                return v6;
            }
        } else {
            v0 = 11597;
            v2 = v7 & 127;
            v14 = 3;
LABEL_486890:
            goto LABEL_486898;
        }
    }
}
