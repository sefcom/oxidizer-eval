fn uu_unexpand::write_tabs(a0: &u64, a1: &&struct_0, a2: u64, a3: &&struct_0, a4: u64, a5: u8) -> u64 {
    let v0: u64;  // [sp-0x88], Other Possible Types: &&struct_0
    let v1: u64;  // [sp-0x80], Other Possible Types: Argument
    let v2: u64;  // [sp-0x78]
    let v3: Arguments;  // [bp-0x70]
    let v4: u64;  // [sp-0x60]
    let v5: u64;  // [sp-0x40], Other Possible Types: Argument
    let v6: i64;  // [bp+0x8]
    let v7: u8;  // [bp+0x10]
    let v8: u64;  // r8
    let v9: u64;  // rbx
    let v10: &&struct_0;  // rax
    let v11: u8;  // cl
    let v12: &&struct_0;  // r13
    let v15: &&struct_0;  // r15
    let v16: &&struct_0;  // r13
    let v17: &u8;  // rax
    let v18: u64;  // rcx
    let v19: u64;  // rax
    let v20: &u8;  // rax
    let v22: u64;  // rdx
    let v23: u64;  // rbx
    let v24: u64;  // rdx
    let v25: u64;  // rbx
    let v26: &u8;  // rax
    let v27: u64;  // rcx
    let v29: u64;  // rdx

    v8 = a4;
    v9 = a4;
    v10 = v6;
    if v10 as u8 {
        v11 = (a3 | -0x100 | 1) as u8;
    } else {
        v11 = v7;
        if !v11 {
            goto LABEL_4858a1;
        }
    }
    if !a5 && (a3 as &char + 1) as &&struct_0 < v9 {
LABEL_4858b5:
        if a2 != 1 {
            goto LABEL_4858ec;
        } else {
            v12 = *(a1);
            if !v12 {
                core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
            }
            v10 = (v12 as &u8 - (!(a3 | v12) >> 32 ? ((0 CONCAT a3) /m v12 >> 64) as u64 : (0 CONCAT a3 as u32) /m v12 as u32 >> 32 & 4294967295)) as &&struct_0 + a3;
            if v10 <= v9 {
                do {
                    v15 = v10;
                    v20 = a0[2];
                    if *(a0) - v20 <= 1 {
                        v19 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, &g_419746, 1, *(a0) - v20, v8, a5);
                        if v19 {
                            goto LABEL_485b07;
                        }
                    } else {
                        v20[a0[1]] = 9;
                        a0[2] = v20 + 1;
                    }
                } while ((v22 = (!(v15 | v12) >> 32 ? (0 CONCAT v15 as u32) /m v12 as u32 >> 32 & 4294967295 : ((0 CONCAT v15) /m v12 >> 64) as u64), v10 = v12 - v22 + v15, v10 <= v9));
            }
        }
    } else {
LABEL_4858a1:
        if v9 <= a3 {
            goto LABEL_48596e;
        }
        if !(!(v11 & a5)) || !(!v10 as u8) {
            goto LABEL_4858b5;
        }
        loop {
LABEL_4858ec:
            v15 = a3;
            v10 = 0;
            do {
                if a2 * 8 == v10 {
LABEL_48596e:
                    v23 = v9 - v15 as &u8;
                    if v9 <= v15 {
                        return v10;
                    }
                    loop {
                        v25 = v23;
                        v26 = a0[2];
                        v27 = *(a0) - v26;
                        if *(a0) - v26 > 1 {
                            v26[a0[1]] = 32;
                            v10 = v26 + 1;
                            a0[2] = v10;
                        } else {
                            v10 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, &g_41974a, 1, v27, v8, a5);
                            if v10 {
                                v0 = v10;
                                v1 = uucore::util_name();
                                v2 = v29;
                                v5 = Argument {
                                    value: &v1
                                    formatter: <&T as core::fmt::Display>::fmt
                                };
                                v3 = Arguments {
                                    pieces: [&g_4e6c88, ": "]
                                    args: [&v5]
                                    fmt: None
                                };
                                std::io::stdio::_eprint(&v3);
                                v1 = Argument {
                                    value: &v0
                                    formatter: <std::io::error::Error as core::fmt::Display>::fmt
                                };
                                v3 = Arguments {
                                    pieces: [&g_4e6ca8, "\n"]
                                    args: [&v1]
                                    fmt: None
                                };
                                std::io::stdio::_eprint(&v3);
                                std::process::exit(1); /* do not return */
                            }
                        }
                        if v25 == 1 {
                            return v10;
                        }
                    }
                }
            } while ((v22 = (!(v15 | v12) >> 32 ? (0 CONCAT v15 as u32) /m v12 as u32 >> 32 & 4294967295 : ((0 CONCAT v15) /m v12 >> 64) as u64), v10 = v12 - v22 + v15, v10 <= v9));
            if !(v16 <= v9) {
                goto LABEL_48596e;
            }
            v17 = a0[2];
            v18 = *(a0) - v17;
            if *(a0) - v17 > 1 {
                v17[a0[1]] = 9;
                a0[2] = v17 + 1;
                continue;
            }
            v19 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, &g_419746, 1, v18, v8, a5);
            if v19 {
LABEL_485b07:
                v0 = v19;
                v1 = uucore::util_name();
                v2 = v24;
                v5 = &v1;
                v3 = Arguments {
                    pieces: [&g_4e6c88, ": "]
                    args: [&v5]
                    fmt: None
                };
                v4 = &v5;
                std::io::stdio::_eprint(&v3);
                v1 = &v0;
                v3 = Arguments {
                    pieces: [&g_4e6ca8, "\n"]
                    args: [&v1]
                    fmt: None
                };
                v4 = &v1;
                std::io::stdio::_eprint(&v3);
                std::process::exit(1); /* do not return */
            }
        }
    }
}
