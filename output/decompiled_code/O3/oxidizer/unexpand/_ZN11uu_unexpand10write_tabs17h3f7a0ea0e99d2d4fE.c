fn uu_unexpand::write_tabs(a0: &u64, a1: &u64, a2: u64, a3: u64, a4: u64, a5: u8) -> u64 {
    let v0: u64;  // [sp-0x88]
    let v1: u64;  // [sp-0x80]
    let v2: u64;  // [sp-0x78]
    let v3: i64;  // [bp+0x8]
    let v4: u8;  // [bp+0x10]
    let v5: u64;  // r15
    let v6: u64;  // rax
    let v7: u8;  // cl
    let v8: u64;  // rdx
    let v9: u64;  // r15
    let v10: u64;  // rcx
    let v11: &u8;  // rax
    let v12: u64;  // rax
    let v14: u64;  // rdx
    let v15: u64;  // rbx
    let v16: &u8;  // rax
    let v18: u64;  // rdx

    v5 = a3;
    v6 = v3;
    if v6 {
        v7 = a3 | -0x100 | 1;
    } else {
        v7 = v4;
    }
    if (a5 || a3 + 1 >= a4) && (a4 <= a3 || !(v7 & a5) && !v6) || (v6 = uu_unexpand::next_tabstop(a1, a2, a3), v6 != 1) {
    } else {
        loop {
            v10 = v9;
            v9 = v8 + v10;
            if v9 > a4 {
                break;
            }
            v11 = a0[2];
            if *(a0) - v11 > 1 {
                v11[a0[1]] = 9;
                a0[2] = v11 + 1;
            } else {
                v12 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, &g_41d851, 1);
                if v12 {
                    v0 = v12;
                    v1 = uucore::util_name();
                    v2 = v14;
                    eprint!("{:?}: ", &v1);
                    eprintln!("{:?}", &v0);
                    std::process::exit(1); /* do not return */
                }
            }
            v6 = uu_unexpand::next_tabstop(a1, a2, v9);
            if v6 != 1 {
                break;
            }
        }
    }
    if a4 <= v5 {
        return v6;
    }
    loop {
        v15 = a4 - v5;
        v16 = a0[2];
        if *(a0) - v16 > 1 {
            v16[a0[1]] = 32;
            v6 = v16 + 1;
            a0[2] = v6;
        } else {
            v6 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, " ");
            if v6 {
                v0 = v6;
                v1 = uucore::util_name();
                v2 = v18;
                eprint!("{:?}: ", &v1);
                eprintln!("{:?}", &v0);
                std::process::exit(1); /* do not return */
            }
        }
        if v15 == 1 {
            return v6;
        }
    }
}
