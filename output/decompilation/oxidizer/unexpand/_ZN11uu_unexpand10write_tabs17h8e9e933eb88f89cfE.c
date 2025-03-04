fn uu_unexpand::write_tabs(a0: &struct8, a1: u32, a2: u32, a3: u32, a4: u32, a5: u8, a6: u8, a7: u8) -> u64 {
    let v0: u64;  // [sp-0x88]
    let v1: u64;  // [sp-0x78]
    let v2: u64;  // rbp
    let v3: u64;  // rax
    let v4: u8;  // cl
    let v5: u64;  // rdx
    let v6: u64;  // r13
    let v7: &u8;  // rax
    let v8: void*;  // rax
    let v9: u64;  // rbx
    let v10: u64;  // rbx
    let v11: &u8;  // rax

    v2 = a3;
    v3 = a6;
    if v3 {
        v4 = a3 & -0x100 | 1;
    } else {
        v4 = a7;
        if a7 && !a5 && a3 + 1 < a4 || a4 > a3 && ((v4 & a5) || v3) {
            loop {
                v3 = uu_unexpand::next_tabstop(a1, a2, v2);
                if !(v3 == 1) || !((v6 = v5 + v2, v6 <= a4)) {
                    break;
                }
                v7 = a0->field_10;
                if a0->field_0 - v7 > 1 {
                    v7[a0->field_8] = 9;
                    a0->field_10 = &v7[1];
                    v8 = 0;
                } else {
                    v8 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, "	");
                }
                v2 = v6;
                if v8 {
                    v0 = v8;
                    v1 = v5;
                    show_error!("{}", &v0);
                    std::process::exit(1); /* do not return */
                }
            }
        }
    }
    v9 = a4 - v2;
    if a4 <= v2 {
        return v3;
    }
    loop {
        v10 = v9;
        v11 = a0->field_10;
        if a0->field_0 - v11 >= 2 {
            v11[a0->field_8] = 32;
            v3 = v11 + 1;
            a0->field_10 = v3;
        } else {
            v3 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, " ");
            if v3 {
                v0 = v3;
                v1 = v5;
                show_error!("{}", &v0);
                std::process::exit(1); /* do not return */
            }
        }
        v9 = v10 - 1;
        if v10 == 1 {
            return v3;
        }
    }
}
