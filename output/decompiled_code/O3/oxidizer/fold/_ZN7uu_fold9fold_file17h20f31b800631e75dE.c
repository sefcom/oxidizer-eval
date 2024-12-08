fn uu_fold::fold_file(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x208]
    let v1: void*;  // [sp-0xe0], Other Possible Types: struct8, u64
    let v2: &u8;  // [sp-0xd8]
    let v3: &u8;  // [sp-0xd0]
    let v4: &u8;  // [sp-0xc8]
    let v5: &u8;  // [sp-0xc0]
    let v6: u64;  // [sp-0xa8], Other Possible Types: struct16
    let v7: u64;  // [sp-0x78]
    let v8: u32;  // [sp-0x64]
    let v9: void*;  // [sp-0x60], Other Possible Types: struct8
    let v10: u64;  // [sp-0x58]
    let v11: void*;  // [sp-0x50]
    let v12: u64;  // [sp-0x48]
    let v13: u64;  // [sp-0x40]
    let v14: u64;  // [sp-0x38]
    let v16: void*;  // rbx
    let v17: &u8;  // r15
    let v19: u64;  // rdx
    let v20: u32;  // ebp
    let v21: u64;  // rdx
    let v22: &u8;  // r15
    let v24: &u8;  // rdi
    let v25: &u8;  // rsi
    let v26: &u8;  // rsi
    let v28: &u8;  // r15
    let v30: &u8;  // r13
    let v31: u64;  // rbx
    let v32: &u8;  // rsi
    let v33: &u8;  // rsi
    let v35: &u8;  // rsi

    v9 = 0;
    v10 = 1;
    v11 = 0;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v8 = a1;
    v12 = a1;
    v16 = 0;
    v7 = "src/uu/fold/src/fold.rs";
    v17 = 0;
    loop {
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::append_to_string(&v9, a0), v19);
        if v6 {
            return v6;
        } else if v6.field_8 {
            v13 = v10;
            v14 = v11 + v13;
LABEL_4b2309:
            v20 = (!core::str::validations::next_code_point(&v13) as i32 ? v19 : 0x110000);
            switch (v20) {
            case 10:
                v4 = v2;
                v5 = v3;
                println!("{:?}", &v4);
                alloc::string::String::replace_range(&v1, v5, 1, 0);
                v16 = 0;
                v17 = v3;
                v6 = v6;
                if v17 {
LABEL_4b2605:
                    print!("{:?}", &v1);
                    v1 = alloc::string::String::truncate();
                    v6 = v6;
                    break;
                }
                v6 = v6;
                v9 = alloc::string::String::truncate();
                continue;
            case 1114112:
                v6 = v6;
                if !(!v3) {
                    goto LABEL_4b2605;
                }
                break;
            default:
                v6 = v6;
                if v17 >= a2 {
                    v24 = v2;
                    v25 = v3;
                    if v5 {
                        if v5 >= v25 {
                            if v5 != v25 {
                                core::str::slice_error_fail(); /* do not return */
                            }
                        } else {
                            if *((v24 + v5) as &i8) <= 191 {
                                core::str::slice_error_fail(); /* do not return */
                            }
                        }
                    }
                    v4 = v24;
                    v5 = v26;
                    println!("{:?}", &v4);
                    alloc::string::String::replace_range(&v1, v5, 1, 0);
                    v16 = 0;
                    v6 = v6;
                    v22 = v3;
                }
                v28 = v22;
                v6 = v6;
                switch (v20) {
                case 8:
                    v17 = v28 + 1;
                    if v28 >= 1 {
                        break;
                    } else {
                        v17 = 0;
                        break;
                    }
                case 9:
                    v17 = (v28 & -8) + 8;
                    v32 = v3;
                    v6 = v6;
                    if !(v17 > a2) || !((v6 = v6, v32)) {
LABEL_4b251a:
                        v6 = v6;
                        v31 = v12;
                        v1 = alloc::string::String::push(v20, v21);
                    } else {
                        if !v5 {
LABEL_4b24a5:
                            v4 = v2;
                            v5 = v35;
                            println!("{:?}", &v4);
                            alloc::string::String::replace_range(&v1, v5, 1, 0);
                            v6 = v6;
                            v33 = v3;
                            goto LABEL_4b251a;
                        } else {
                            if v5 >= v32 {
                                if v5 == v32 {
                                    goto LABEL_4b24a5;
                                }
                            } else {
                                if !(!v3) {
                                    goto LABEL_4b24a5;
                                }
                            }
                            v7 = "src/uu/fold/src/fold.rs";
                            core::str::slice_error_fail(); /* do not return */
                        }
                    }
                case 13:
                    v17 = 0;
                    break;
                default:
                    if !v8 as i8 || (v20 > 32 || (v0 = 0x100003800, !((*((&v0 as &u8 + ((v20 & 63) as u64 >> 3)) as &i8) as u8 as u64 >> (v20 & 63 & 7) as u8 as u64) as u8 & 1))) && (v20 < 128 || !core::unicode::unicode_data::white_space::lookup(v20) as i8) {
                        v17 = v28 + 1;
                        break;
                    } else {
                        v17 = v28 + 1;
                        v30 = v3;
                        break;
                    }
                }
                goto LABEL_4b2309;
            }
        } else {
            return v6;
        }
    }
}
