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
    let v24: &u8;  // rdi
    let v25: &u8;  // rsi
    let v26: &u8;  // rsi
    let v28: &u8;  // r15
    let v29: &u8;  // r13
    let v30: u64;  // rbx
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
LABEL_4b1e79:
        v21 = (!core::str::validations::next_code_point(&v14) as i32 ? 0x110000 : v20);
        switch (v21) {
        case 10:
            v4 = v2;
            v5 = v3;
            println!("{:?}", &v4);
            alloc::string::String::replace_range(&v1, v5, 1, 0);
            v17 = 0;
            v18 = v3;
            v6 = v6;
            v7 = v7;
            if !(!v18) {
                goto LABEL_4b2155;
            }
            break;
        case 1114112:
            v6 = v6;
            v7 = v7;
            if v3 {
LABEL_4b2155:
                print!("{:?}", &v1);
                v1 = alloc::string::String::truncate();
                v6 = v6;
                v7 = v7;
                break;
            }
            v7 = v7;
            v6 = v6;
            v10 = alloc::string::String::truncate();
            continue;
        default:
            v6 = v6;
            v7 = v7;
            if v18 >= a2 {
                v24 = v2;
                v25 = v3;
                if v17 {
                    v26 = v19 + 1;
                }
                if v5 {
                    if v5 >= v25 {
                        v5 = v5;
                        if v5 != v25 {
                            core::str::slice_error_fail(v24, v25, 0, v5, v8); /* do not return */
                        }
                    } else {
                        v5 = v5;
                        if *((v24 + v5) as &i8) <= 191 {
                            core::str::slice_error_fail(v24, v25, 0, v5, v8); /* do not return */
                        }
                    }
                }
                v4 = v24;
                v5 = v26;
                println!("{:?}", &v4);
                alloc::string::String::replace_range(&v1, v5, 1, 0);
                v17 = 0;
                v6 = v6;
                v7 = v7;
                v22 = v3;
            }
            v28 = v22;
            v7 = v7;
            v6 = v6;
            switch (v21) {
            case 8:
                v18 = v28 + 1;
                if v28 >= 1 {
                    break;
                } else {
                    v18 = 0;
                    break;
                }
            case 9:
                v18 = (v28 & -8) + 8;
                v25 = v3;
                v6 = v6;
                v7 = v7;
                if v18 <= a2 {
LABEL_4b2090:
                    v7 = v7;
                    v6 = v6;
                    v30 = v13;
                    v1 = alloc::string::String::push(v21);
                } else {
                    if !v25 {
                        v6 = v6;
                        v7 = v7;
                        v31 = 0;
                        goto LABEL_4b2090;
                    }
                    if v17 {
                        v34 = v19 + 1;
                    }
                    v24 = v2;
                    if !v5 {
LABEL_4b201b:
                        v4 = v24;
                        v5 = v34;
                        println!("{:?}", &v4);
                        alloc::string::String::replace_range(&v1, v5, 1, 0);
                        v6 = v6;
                        v7 = v7;
                        v31 = v3;
                        goto LABEL_4b2090;
                    } else {
                        if v5 >= v25 {
                            if v5 == v25 {
                                goto LABEL_4b201b;
                            }
                        } else {
                            if !(!v18) {
                                goto LABEL_4b201b;
                            }
                        }
                        v8 = "src/uu/fold/src/fold.rs";
                        v5 = v5;
                        core::str::slice_error_fail(v24, v25, 0, v5, v8); /* do not return */
                    }
                }
            case 13:
                v18 = 0;
                break;
            default:
                if !v9 as i8 || (v21 > 32 || (v0 = 0x100003800, !((*((&v0 as &u8 + ((v21 & 63) as u64 >> 3)) as &i8) as u8 as u64 >> (v21 & 63 & 7) as u8 as u64) as u8 & 1))) && (v21 < 128 || !core::unicode::unicode_data::white_space::lookup(v21) as i8) {
                    v18 = v28 + 1;
                    break;
                } else {
                    v18 = v28 + 1;
                    v29 = v3;
                    v30 = 1;
                    break;
                }
            }
            goto LABEL_4b1e79;
        }
    }
}
