fn uu_fold::fold_file(a0: i64, a1: i32, a2: i64) -> long long {
    let v0: u64;  // [bp-0x208]
    let v1: void*;  // [bp-0xe0]
    let v2: u64;  // [bp-0xd8]
    let v3: i64;  // [bp-0xd0]
    let v4: u64;  // [bp-0xc8]
    let v5: i64;  // [bp-0xc8]
    let v6: i64;  // [bp-0xc0]
    let v7: u64;  // [bp-0xa8]
    let v8: u64;  // [bp-0xa8], Other Possible Types: struct16
    let v9: u64;  // [bp-0xa8]
    let v10: u64;  // [bp-0xa0]
    let v11: u64;  // [bp-0xa0]
    let v12: u64;  // [bp-0xa0]
    let v13: u64;  // [bp-0x78]
    let v14: u32;  // [bp-0x64]
    let v15: void*;  // [bp-0x60]
    let v16: u64;  // [bp-0x58]
    let v17: void*;  // [bp-0x50]
    let v18: u64;  // [bp-0x48]
    let v19: u64;  // [bp-0x40]
    let v20: i64;  // [bp-0x38]
    let v22: void*;  // rbx, Other Possible Types: u64
    let v23: i64;  // r15
    let v24: i64;  // r13
    let v27: u32;  // edx
    let v28: u32;  // ebp
    let v29: i64;  // r15
    let v30: i64;  // r12
    let v31: u64;  // rdi
    let v32: i64;  // rsi
    let v33: i64;  // rsi
    let v34: i64;  // r12
    let v36: i64;  // r15
    let v37: i64;  // r13
    let v38: u64;  // rbx
    let v39: i64;  // rsi
    let v40: i64;  // rsi
    let v41: i64;  // r13
    let v43: i64;  // rsi
    let v44: i64;  // r13
    let v48: i64;  // rsi
    let v64: u64;  // rsi
    let v70: core::option::Option<u32>;  // rax:rax

    v15 = 0;
    v16 = 1;
    v17 = 0;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v14 = a1;
    v18 = a1;
    v22 = 0;
    v13 = "src/uu/fold/src/fold.rs";
    v23 = 0;
    loop {
        v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::append_to_string(&v15, a0), a2);
        if v8.field_0 || !v10 {
            break;
        }
        v19 = v16;
        v20 = 0 + v16;
        v70 = core::str::validations::next_code_point(&v19) as u128;
        v28 = (!v70 as i32 ? 0x110000 : v27);
        match (v28) {
            10 => {
                v4 = v2;
                v6 = v3;
                println!("{}", &v4);
                alloc::string::String::replace_range(&v1, v3, 1, 0);
                v22 = 0;
                v23 = v3;
                v7 = v9;
                v10 = v11;
                if !v3 {
                    goto LABEL_4b1df0;
                }
            }
            1114112 => {
                v7 = v7;
                v10 = v10;
                if !v3 {
                    goto LABEL_4b1df0;
                }
                break;
            }
            _ => {
                v29 = v23;
                if v29 >= a2 {
                    v30 = v24 + 1;
                    v31 = v2;
                    v32 = v3;
                    if !v22 {
                        v33 = v32;
                    } else {
                        v33 = v30;
                    }
                    v34 = v33;
                    v4 = v31;
                    v6 = v34;
                    println!("{}", &v4);
                    alloc::string::String::replace_range(&v1, v34, 1, 0);
                    v22 = 0;
                    v7 = v9;
                    v10 = v11;
                    v29 = v3;
                }
                v36 = v29;
                match (v28) {
                    8 => {
                        v23 = v36 - 1;
                        if v36 < 1 {
                            v23 = 0;
                            v37 = v24;
                            v38 = v22;
                            break;
                        } else {
                            v37 = v24;
                            v38 = v22;
                            break;
                        }
                    }
                    9 => {
                        v23 = (v36 & -8) + 8;
                        v39 = v3;
                        v8 = v7;
                        v12 = v10;
                        v40 = v39;
                        if v23 > a2 {
                            if v39 {
                                v41 = v24 + 1;
                                if !v22 {
                                    v43 = v39;
                                } else {
                                    v43 = v41;
                                }
                                v44 = v43;
                                v5 = v2;
                                v6 = v44;
                                println!("{}", &v5);
                                alloc::string::String::replace_range(&v1, v44, 1, 0);
                                v8 = v9;
                                v12 = v11;
                                v40 = v3;
                            } else {
                                v8 = v7;
                                v12 = v10;
                                v40 = 0;
                            }
                        }
                        v48 = v40;
                        v10 = v12;
                        v7 = v8;
                        v37 = v48;
                        v38 = v18;
                        break;
                    }
                    13 => {
                        v23 = 0;
                        v37 = v24;
                        v38 = v22;
                        break;
                    }
                    _ => {
                        if v14 as i8 && (v28 <= 32 && !((v0 = 0x100003800, !((*((&v0 as &u8 + ((v28 & 63) as u64 >> 3)) as &i8) as u8 as u64 >> (v28 as u8 & 63 & 7) as u64) as u8 & 1))) || v28 >= 128 && core::unicode::unicode_data::white_space::lookup(v28)) {
                            v23 = v36 + 1;
                            v37 = v3;
                            v38 = 1;
                            break;
                        } else {
                            v23 = v36 + 1;
                            v37 = v24;
                            v38 = v22;
                            break;
                        }
                    }
                }
                v22 = v38;
                v24 = v37;
                alloc::string::String::push(&v1, v28);
                break;
            }
        }
        print!("{}", &v1);
        alloc::string::String::truncate(a1);
        v7 = v9;
        v10 = v11;
LABEL_4b1df0:
        alloc::string::String::truncate(v64);
    }
    return v8.field_0;
}
