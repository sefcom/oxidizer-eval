fn uu_fold::fold_file(a0: u64, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x208]
    let v1: struct8;  // [sp-0xe0], Other Possible Types: void*, u64
    let v2: &u8;  // [sp-0xd8]
    let v3: &u8;  // [sp-0xd0]
    let v4: &u8;  // [sp-0xc8]
    let v5: &u8;  // [sp-0xc0]
    let v6: u64;  // [sp-0xa8], Other Possible Types: struct16
    let v7: u64;  // [sp-0xa0]
    let v8: u64;  // [sp-0x78]
    let v9: u32;  // [sp-0x64]
    let v10: void*;  // [sp-0x60], Other Possible Types: struct8
    let v11: u64;  // [sp-0x58]
    let v12: void*;  // [sp-0x50]
    let v13: u64;  // [sp-0x48]
    let v14: u64;  // [sp-0x40]
    let v15: u64;  // [sp-0x38]
    let v17: void*;  // rbx
    let v18: &u8;  // r15
    let v19: &u8;  // r13
    let v20: u32;  // rdx
    let v21: u32;  // ebp
    let v22: &u8;  // r15
    let v25: &u8;  // rsi
    let v27: &u8;  // r15
    let v28: &u8;  // r13
    let v29: u64;  // rbx
    let v30: &u8;  // rsi
    let v31: &u8;  // rsi
    let v34: &u8;  // rsi

    v10 = 0;
    v11 = 1;
    v12 = 0;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v9 = a1;
    v13 = a1;
    v17 = 0;
    v8 = "src/uu/fold/src/fold.rs";
    v18 = 0;
    loop {
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::append_to_string(&v10, a0), v20);
        if v6 {
            return v6;
        }
        if !v7 {
            return v6;
        }
        v14 = v11;
        v15 = v12 + v14;
        loop {
            v21 = (!core::str::validations::next_code_point(&v14) as i32 ? 0x110000 : v20);
            if v21 == 10 {
                v4 = v2;
                v5 = v3;
                println!("{}", &v4);
                alloc::string::String::replace_range(&v1, v5, 1, 0);
                v17 = 0;
                v18 = v3;
                if !v18 {
                    break;
                }
            } else if v21 != 0x110000 {
                if v18 >= a2 {
                    if v17 {
                        v25 = v19 + 1;
                    }
                    v4 = v2;
                    v5 = v25;
                    println!("{}", &v4);
                    alloc::string::String::replace_range(&v1, v5, 1, 0);
                    v17 = 0;
                    v22 = v3;
                }
                v27 = v22;
                if v21 == 8 {
                    v18 = v27 + 1;
                    if v27 < 1 {
                        v18 = 0;
                    }
                } else if v21 == 9 {
                    v18 = (v27 & -8) + 8;
                    v30 = v3;
                    if v18 > a2 {
                        if !v30 {
                            v31 = 0;
                        } else {
                            if v17 {
                                v34 = v19 + 1;
                            }
                            if v5 {
                                if v5 >= v30 {
                                    if v5 != v30 {
                                        vvar_673{stack -120} = "src/uu/fold/src/fold.rs";
                                    }
                                } else {
                                    if *((v4 + v5) as &i8) <= 191 {
                                        v8 = "src/uu/fold/src/fold.rs";
                                    }
                                }
                            }
                            v4 = v2;
                            v5 = v34;
                            println!("{}", &v4);
                            alloc::string::String::replace_range(&v1, v5, 1, 0);
                            v31 = v3;
                        }
                    }
                    v29 = v13;
                } else if v21 == 13 {
                    v18 = 0;
                } else if !v9 as i8 || (v21 > 32 || (v0 = 0x100003800, !((*((&v0 as &u8 + ((v21 & 63) as u64 >> 3)) as &i8) as u8 as u64 >> (v21 & 63 & 7) as u8 as u64) as u8 & 1))) && (v21 < 128 || !core::unicode::unicode_data::white_space::lookup(v21) as i8) {
                    v18 = v27 + 1;
                } else {
                    v18 = v27 + 1;
                    v28 = v3;
                    v29 = 1;
                }
                v1 = alloc::string::String::push(v21);
            } else {
                if !v3 {
                    break;
                }
                print!("{}", &v1);
                v1 = alloc::string::String::truncate();
                break;
            }
        }
        v10 = alloc::string::String::truncate();
    }
}
