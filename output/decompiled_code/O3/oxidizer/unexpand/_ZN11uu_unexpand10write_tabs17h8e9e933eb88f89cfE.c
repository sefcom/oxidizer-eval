fn uu_unexpand::write_tabs(a0: &struct_0, a1: u64, a2: u64, a3: u64, a4: u64, a5: u8) -> u64 {
    let v0: u64;  // [sp-0x88]
    let v1: u64;  // [sp-0x80]
    let v2: u64;  // [sp-0x78]
    let v3: i64;  // [bp+0x8]
    let v4: u8;  // [bp+0x10]
    let v5: u64;  // rax
    let v6: u8;  // cl
    let v7: u64;  // rbp
    let v8: u64;  // rdx
    let v9: u64;  // r13
    let v10: &u8;  // rax
    let v11: void*;  // rax
    let v12: u64;  // rbx
    let v13: u64;  // rbx
    let v14: &u8;  // rax

    v5 = v3;
    if v5 {
        v6 = a3 | -0x100 | 1;
    } else {
        v6 = v4;
    }
    if !a5 && a3 + 1 < a4 || a4 > a3 && ((v6 & a5) || v5) {
        loop {
            v7 = a3;
            v5 = uu_unexpand::next_tabstop(a1, a2, v7);
            if !(v5 == 1) || !((v9 = v8 + v7, v9 <= a4)) {
                break;
            }
            v10 = a0->field_10;
            if a0->field_0 - v10 > 1 {
                v10[a0->field_8] = 9;
                a0->field_10 = &v10[1];
                v11 = 0;
            } else {
                v11 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, &g_41d55c, 1);
            }
            a3 = v9;
            if v0 {
                v0 = v11;
                v1 = uucore::util_name();
                v2 = v8;
                eprint!("{:?}: ", &v1);
                eprintln!("{:?}", &v0);
                std::process::exit(1); /* do not return */
            }
        }
    }
    v12 = a4 - v7;
    if a4 <= v7 {
        return v5;
    }
    loop {
        v13 = v12;
        v14 = a0->field_10;
        if a0->field_0 - v14 >= 2 {
            v14[a0->field_8] = 32;
            v5 = v14 + 1;
            a0->field_10 = v5;
        } else {
            v5 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, " ");
            if v5 {
                v0 = v5;
                v1 = uucore::util_name();
                v2 = v8;
                eprint!("{:?}: ", &v1);
                eprintln!("{:?}", &v0);
                std::process::exit(1); /* do not return */
            }
        }
        v12 = v13 - 1;
        if v13 == 1 {
            return v5;
        }
    }
}
