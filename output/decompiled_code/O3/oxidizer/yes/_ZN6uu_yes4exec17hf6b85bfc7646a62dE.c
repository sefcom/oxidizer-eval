fn uu_yes::exec(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x208]
    let v1: u32;  // [sp-0xe8]
    let v2: u32;  // [sp-0xe4]
    let v3: &struct_0;  // [sp-0xd8]
    let v4: u32;  // [sp-0xcc]
    let v5: u64;  // [sp-0xc8]
    let v6: u8;  // [bp-0xc0]
    let v7: u64;  // [sp-0xb8]
    let v8: i8;  // [bp-0xa8]
    let v10: u64;  // rsi
    let v11: u64;  // rdx
    let v12: &struct_0;  // rbx
    let v13: u64;  // rax
    let v14: u64;  // rax
    let v15: u64;  // 4096
    let v16: u64;  // 4096
    let v17: u64;  // rax
    let v20: u64;  // rax
    let v21: u64;  // 4096
    let v22: u64;  // 4096
    let v23: u64;  // rax
    let v24: u64;  // r12
    let v25: u64;  // rax
    let v28: u32;  // ecx
    let v29: u64;  // rcx
    let v30: void*;  // r15

    v5 = std::io::stdio::stdout();
    v12 = std::io::stdio::Stderr::lock(&v5, v10, v11);
    v3 = v12;
    if signal(13) as i64 == -1 {
        v13 = nix::errno::consts::from_i32(*(__errno_location() as &i32));
        goto LABEL_47b8c4;
    }
    v4 = 1;
    if fstat(1, &v6) as i64 == -1 {
LABEL_47b886:
        v14 = nix::errno::consts::from_i32(*(__errno_location() as &i32));
        goto LABEL_47b894;
    }
    if !(v8 & 0x1000) {
        if pipe(&v6) == -1 {
            goto LABEL_47b886;
        }
        v14 = v1 >> 32;
        if v1 == -1 {
LABEL_47b894:
            v20 = v14 * 0x100000000 | 2;
            if !v20 {
                goto LABEL_47b93f;
            } else {
                goto LABEL_47b8a5;
            }
        } else {
            v1 = v6;
            v2 = v14;
            if a1 {
                goto LABEL_47b7f7;
            } else {
                loop ;
            }
        }
    } else if !a1 {
        loop ;
    }
    loop {
LABEL_47b8c4:
        do {
            v6 = v15;
            v7 = v16;
            v17 = vmsplice(1, &v6, 1, 0) as i64;
            if v17 == -1 {
                v13 = nix::errno::consts::from_i32(*(__errno_location() as &i32));
                if (v13 & 255) > 38 {
                    v20 = v13 * 0x100000000 | 2;
                    v3->field_c = v3->field_c - 1;
                    if vvar_525 != 1 {
                        return v20;
                    }
                    goto LABEL_47b96d;
                } else {
                    v0 = 0x4000400200;
                    loop {
LABEL_47b7f7:
                        do {
                            v6 = v22;
                            v7 = v21;
                            v23 = vmsplice(<std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd(&v2) as i32, &v6, 1, 0) as i64;
                            if v23 == -1 {
                                v25 = nix::errno::consts::from_i32(*(__errno_location() as &i32));
                                if !((v25 & 255 & 255) <= 38) {
                                    goto LABEL_47b9db;
                                }
                                v29 = v25 & 4294967295;
LABEL_47b9c6:
                                v0 = 0x4000400200;
                                if (*((&v0 + ((v29 & 63) >> 3)) as &i8) >> (v29 & 63 & 7) & 1) {
                                    v30 = 0;
                                    goto LABEL_47b9e6;
                                }
LABEL_47b9db:
                                v30 = v25 * 0x100000000 | 2;
LABEL_47b9e6:
                                v20 = v30;
                                if v20 {
LABEL_47b8a5:
                                    v3->field_c = v3->field_c - 1;
                                    if vvar_529 != 1 {
                                        return v20;
                                    }
                                    goto LABEL_47b96d;
                                } else {
LABEL_47b93f:
                                    do {
                                        v20 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, a0, a1);
                                    } while (!v20);
                                    v12 = v3;
                                    v12->field_c = vvar_531 - 1;
                                    if vvar_531 != 1 {
                                        return v20;
                                    }
                                    goto LABEL_47b96d;
                                }
                            }
                            v24 = v23;
                            v25 = uucore::features::pipes::splice_exact(&v1, &v4, v23);
                            if v25 != 134 {
                                v28 = v25;
                                if !(v28 <= 38) {
                                    goto LABEL_47b9db;
                                }
                                v29 = v28;
                                goto LABEL_47b9c6;
                            }
                            if v7 < v24 {
                                core::slice::index::slice_start_index_len_fail(); /* do not return */
                            }
                        } while (v7 != v24);
                    }
                }
            }
            if v7 < v17 {
                core::slice::index::slice_start_index_len_fail(); /* do not return */
            }
        } while (v7 != v17);
    }
LABEL_47b96d:
    v12->field_0 = 0;
    v12->field_8 = 0;
    if BinaryOp CasCmpNE {
        goto LABEL_0x47b976;
    }
    if v12->field_8 == 2 {
        goto LABEL_0x47b99c;
    }
    goto LABEL_0x47b97e;
}
