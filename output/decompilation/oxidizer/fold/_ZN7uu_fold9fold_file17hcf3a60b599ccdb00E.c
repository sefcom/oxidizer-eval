fn uu_fold::fold_file(a0: u64, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x208]
    let v1: struct8;  // [sp-0xe0], Other Possible Types: void*, u64
    let v2: struct8;  // [sp-0xe0]
    let v3: &u8;  // [sp-0xd8]
    let v4: &u8;  // [sp-0xd0]
    let v5: &u8;  // [sp-0xc8]
    let v6: &u8;  // [sp-0xc0]
    let v7: struct16;  // [sp-0xa8], Other Possible Types: u64
    let v8: u64;  // [sp-0xa0]
    let v9: u64;  // [sp-0x78]
    let v10: u32;  // [sp-0x64]
    let v11: struct8;  // [sp-0x60], Other Possible Types: void*
    let v12: u64;  // [sp-0x58]
    let v13: void*;  // [sp-0x50]
    let v14: u64;  // [sp-0x48]
    let v15: u64;  // [sp-0x40]
    let v16: u64;  // [sp-0x38]
    let v18: u64;  // rbx
    let v19: &u8;  // r15
    let v20: &u8;  // r13
    let v21: u32;  // edx
    let v22: u32;  // ebp
    let v25: &u8;  // r12
    let v26: &u8;  // r12
    let v27: &u8;  // rsi
    let v28: &u8;  // r13

    v11 = 0;
    v12 = 1;
    v13 = 0;
    v1 = 0;
    v3 = 1;
    v4 = 0;
    v10 = a1;
    v14 = a1;
    v18 = 0;
    v9 = "src/uu/fold/src/fold.rs";
    v19 = 0;
    loop {
        v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::append_to_string(&v11, a0), a2);
        if v7 {
            return v7;
        }
        if !v8 {
            return v7;
        }
        v15 = v12;
        v16 = v13 + v15;
        loop {
            v22 = (!core::str::validations::next_code_point(&v15) as i32 ? 0x110000 : v21);
            if v22 == 10 {
                v5 = v3;
                v6 = v4;
                println!("{}", &v5);
                alloc::string::String::replace_range(&v1, v6, 1, 0);
                v18 = 0;
                v19 = v4;
                if !v19 {
                    break;
                }
            } else if v22 != 0x110000 {
                if v19 >= a2 {
                    if v18 {
                        v25 = v20 + 1;
                    }
                    v26 = v25;
                    v5 = v3;
                    v6 = v26;
                    println!("{}", &v5);
                    alloc::string::String::replace_range(&v1, v26, 1, 0);
                    v19 = v4;
                    v18 = 0;
                }
                if v22 == 8 {
                    v19 += 1;
                    if v19 < 1 {
                        v19 = 0;
                    }
                } else if v22 == 9 {
                    v19 = (v19 & -8) + 8;
                    v27 = v4;
                    if v19 > a2 {
                        if !v27 {
                            v27 = 0;
                        } else {
                            v28 = v20 + 1;
                            if !v18 {
                                v28 = v27;
                            }
                            if v28 {
                                if v28 >= v27 {
                                    if v28 != v27 {
                                        vvar_646{stack -120} = "src/uu/fold/src/fold.rs";
                                    }
                                } else {
                                    if *((v5 + v28) as &i8) <= 191 {
                                        v9 = "src/uu/fold/src/fold.rs";
                                    }
                                }
                            }
                            v5 = v3;
                            v6 = v28;
                            println!("{}", &v5);
                            alloc::string::String::replace_range(&v1, v28, 1, 0);
                            v27 = v4;
                        }
                    }
                    v20 = v27;
                    v18 = v14;
                } else if v22 == 13 {
                    v19 = 0;
                } else if !v10 as i8 || (v22 > 32 || (v0 = 0x100003800, !((*((&v0 as &u8 + ((v22 & 63) as u64 >> 3)) as &i8) as u8 as u64 >> (v22 & 63 & 7) as u8 as u64) as u8 & 1))) && (v22 < 128 || !core::unicode::unicode_data::white_space::lookup(v22) as i8) {
                    v19 += 1;
                } else {
                    v20 = v4;
                    v19 += 1;
                    v18 = 1;
                }
                v1 = alloc::string::String::push(v22);
            } else {
                if !v4 {
                    break;
                }
                print!("{}", &v1);
                v2 = alloc::string::String::truncate();
                break;
            }
        }
        v11 = alloc::string::String::truncate();
    }
}
