fn uu_fold::fold_file(a0: i64, a1: i32, a2: i64) -> long long {
    let v0: u64;  // [bp-0x208]
    let v1: void*;  // [bp-0xe0]
    let v2: u64;  // [bp-0xd8]
    let v3: i64;  // [bp-0xd0]
    let v4: u64;  // [bp-0xc8]
    let v5: i64;  // [bp-0xc8]
    let v6: i64;  // [bp-0xc0]
    let v7: u64;  // [bp-0xa8]
    let v8: struct16;  // [bp-0xa8], Other Possible Types: u64
    let v9: u64;  // [bp-0xa8]
    let v10: alloc::string::String;  // [bp-0xa0]
    let v11: alloc::string::String;  // [bp-0xa0]
    let v12: alloc::string::String;  // [bp-0xa0]
    let v13: u64;  // [bp-0x78]
    let v14: u32;  // [bp-0x64]
    let v15: void*;  // [bp-0x60]
    let v16: u64;  // [bp-0x58]
    let v17: void*;  // [bp-0x50]
    let v18: u64;  // [bp-0x48]
    let v19: struct16;  // [bp-0x40]
    let v21: void*;  // rbx, Other Possible Types: u64
    let v22: i64;  // r15
    let v23: i64;  // r13
    let v26: u32;  // edx
    let v27: u32;  // ebp
    let v28: i64;  // r15
    let v29: i64;  // r12
    let v30: u64;  // rdi
    let v31: i64;  // rsi
    let v32: i64;  // rsi
    let v33: i64;  // r12
    let v35: i64;  // r15
    let v36: i64;  // r13
    let v37: u64;  // rbx
    let v38: i64;  // rsi
    let v39: i64;  // rsi
    let v40: i64;  // r13
    let v42: i64;  // rsi
    let v43: i64;  // r13
    let v47: i64;  // rsi
    let v63: u64;  // rsi
    let v69: core::option::Option<u32>;  // rax:rax

    v15 = 0;
    v16 = 1;
    v17 = 0;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v14 = a1;
    v18 = a1;
    v21 = 0;
    v13 = "src/uu/fold/src/fold.rs";
    v22 = 0;
    loop {
        v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::append_to_string(&v15, a0), a2);
        if v8.field_0 || !v10 {
            break;
        }
        v19 = struct16 {
            field_0: v16
            field_8: 0 + v16
        };
        v69 = core::str::validations::next_code_point(&v19) as u128;
        v27 = (!v69 as i32 ? 0x110000 : v26);
        match (v27) {
            10 => {
                v4 = v2;
                v6 = v3;
                println!("{}", &v4);
                alloc::string::String::replace_range(&v1, v3, 1, 0);
                v21 = 0;
                v22 = v3;
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
                v28 = v22;
                if v28 >= a2 {
                    v29 = v23 + 1;
                    v30 = v2;
                    v31 = v3;
                    if !v21 {
                        v32 = v31;
                    } else {
                        v32 = v29;
                    }
                    v33 = v32;
                    v4 = v30;
                    v6 = v33;
                    println!("{}", &v4);
                    alloc::string::String::replace_range(&v1, v33, 1, 0);
                    v21 = 0;
                    v7 = v9;
                    v10 = v11;
                    v28 = v3;
                }
                v35 = v28;
                match (v27) {
                    8 => {
                        v22 = v35 - 1;
                        if v35 < 1 {
                            v22 = 0;
                            v36 = v23;
                            v37 = v21;
                            break;
                        } else {
                            v36 = v23;
                            v37 = v21;
                            break;
                        }
                    }
                    9 => {
                        v22 = (v35 & -8) + 8;
                        v38 = v3;
                        v8 = v7;
                        v12 = v10;
                        v39 = v38;
                        if v22 > a2 {
                            if v38 {
                                v40 = v23 + 1;
                                if !v21 {
                                    v42 = v38;
                                } else {
                                    v42 = v40;
                                }
                                v43 = v42;
                                v5 = v2;
                                v6 = v43;
                                println!("{}", &v5);
                                alloc::string::String::replace_range(&v1, v43, 1, 0);
                                v8 = v9;
                                v12 = v11;
                                v39 = v3;
                            } else {
                                v8 = v7;
                                v12 = v10;
                                v39 = 0;
                            }
                        }
                        v47 = v39;
                        v10 = v12;
                        v7 = v8;
                        v36 = v47;
                        v37 = v18;
                        break;
                    }
                    13 => {
                        v22 = 0;
                        v36 = v23;
                        v37 = v21;
                        break;
                    }
                    _ => {
                        if v14 as i8 && (v27 <= 32 && !((v0 = 0x100003800, !((*((&v0 as &u8 + ((v27 & 63) as u64 >> 3)) as &i8) as u8 as u64 >> (v27 as u8 & 63 & 7) as u64) as u8 & 1))) || v27 >= 128 && core::unicode::unicode_data::white_space::lookup(v27)) {
                            v22 = v35 + 1;
                            v36 = v3;
                            v37 = 1;
                            break;
                        } else {
                            v22 = v35 + 1;
                            v36 = v23;
                            v37 = v21;
                            break;
                        }
                    }
                }
                v21 = v37;
                v23 = v36;
                alloc::string::String::push(&v1, v27);
                break;
            }
        }
        print!("{}", &v1);
        alloc::string::String::truncate(a1);
        v7 = v9;
        v10 = v11;
LABEL_4b1df0:
        alloc::string::String::truncate(v63);
    }
    return v8.field_0;
}
