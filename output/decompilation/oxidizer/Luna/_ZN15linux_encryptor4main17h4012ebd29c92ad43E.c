fn linux_encryptor::main() -> u64 {
    let v0: i64;  // [sp-0xc8], Other Possible Types: struct32
    let v1: i64;  // [sp-0xc0]
    let v2: i64;  // [sp-0xb8]
    let v3: Arguments;  // [sp-0x90]
    let v4: i64;  // [sp-0x60]
    let v5: i64;  // [sp-0x58]
    let v6: i64;  // [sp-0x50]
    let v7: struct24;  // [sp-0x48]
    let v12: iNone;  // xmm0
    let v13: i64;  // r12
    let v14: i64;  // rbp
    let v15: i64;  // r14
    let v16: i64;  // r13
    let v17: i64;  // r15
    let v18: i64;  // r13
    let v19: i64;  // rax
    let v20: i64;  // rax
    let v21: i64;  // rbp
    let v22: i64;  // r12
    let v23: i64;  // rsi
    let v24: i64;  // rbp
    let v25: i64;  // r12
    let v26: i64;  // rbp
    let v27: i64;  // r12
    let v28: i64;  // r12
    let v29: i64;  // rbx
    let v30: i64;  // rbp
    let v32: i64;  // rax

    v3 = std::env::args();
    v12 = *(&v3.pieces.ptr as &i128);
    v0 = struct32 {
        field_0: v12
        field_16: v3.fmt
    };
    v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v13 = v7.field_0;
    v14 = *((&v7.field_8 as &char + 8) as &i64);
    if v14 {
        v15 = v13 + 24;
        v4 = v14 * 8;
        v16 = v4 * 3;
        v17 = 0;
        v6 = v13;
        v5 = v14;
        do {
            v18 = v16;
            v17 += 1;
            v19 = *((v15 - 8) as &i64);
            if v19 == 5 {
                v20 = *((v15 - 24) as &i64);
                if !(!(*((v20 + 4) as &i8) ^ 112)) || !(!(*(v20 as &i32) ^ 1818585133)) {
                    v21 = v14;
                    v22 = v13;
                    if !(*((v20 + 4) as &i8) ^ 101) && !(*(v20 as &i32) ^ 1818846765) {
                        if !std::path::Path::is_file() as i8 {
                            println!("Error {} isn't file!", v15);
                            v21 = v14;
                            v22 = v13;
                        } else {
                            println!("{} {} {} encrypting", v13, v15 - 24, v15);
                            v23 = *(v15 as &i64);
                            v24 = *((v15 + 16) as &i64);
                            if !v24 {
                                v25 = 1;
                            } else {
                                v25 = __rust_alloc(v24, 1);
                            }
                            memcpy(v25, v23, v24);
                            v0 = v25;
                            v1 = v24;
                            v2 = v24;
                            linux_encryptor::files::add_file();
                            v21 = v5;
                            v22 = v6;
                            if v1 {
                                v5 = v5;
                                v6 = v6;
                            }
                        }
                    }
                    v13 = v22;
                    v14 = v21;
                    v19 = *((v15 - 8) as &i64);
                } else {
                    println!("How to use:");
                    println!("{} -file /home/user/Desktop/file.txt (Encrypts file.txt in /home/user/Desktop directory)", v13);
                    println!("{} -dir /home/user/Desktop/ (Encrypts /home/user/Desktop/ directory)", v13);
                    goto LABEL_40e211;
                }
            }
            v26 = v14;
            v27 = v13;
            if v19 == 4 {
                v26 = v14;
                v27 = v13;
                if *(*((v15 - 24) as &i64) as &i32) == 1919509549 {
                    if !std::path::Path::is_dir() as i8 {
                        println!("Error {} isn't directory!", v15);
                        v26 = v14;
                        v27 = v13;
                    } else {
                        println!("{} {} {} encrypting", v13, v15 - 24, v15);
                        v28 = *(v15 as &i64);
                        v29 = *((v15 + 16) as &i64);
                        if !v29 {
                            v30 = 1;
                        } else {
                            v30 = __rust_alloc(v29, 1);
                        }
                        memcpy(v30, v28, v29);
                        v0 = v30;
                        v1 = v29;
                        v2 = v29;
                        linux_encryptor::files::walk_dir(&v0);
                        v26 = v5;
                        v27 = v6;
                        if v1 {
                            v5 = v5;
                            v6 = v6;
                        }
                    }
                }
            }
            v13 = v27;
            v14 = v26;
            v15 += 24;
            v16 = v18 - 24;
        } while (v18 != 24);
        if v14 == 1 {
            println!("How to use:");
            println!("{} -file /home/user/Desktop/file.txt (Encrypts file.txt in /home/user/Desktop directory)", v13);
            println!("{} -dir /home/user/Desktop/ (Encrypts /home/user/Desktop/ directory)", v13);
        } else {
            goto LABEL_40e291;
        }
LABEL_40e211:
    }
LABEL_40e291:
    v32 = v7.field_8 as i64;
    if v32 {
        v32 = (v32 * 24) as u64;
    }
    return v32;
}
