fn uu_fold::fold_file(a0: i64, a1: i32, a2: i64) -> u64 {
    let v0: u64;  // [bp-0x208]
    let v1: void*;  // [bp-0xe0]
    let v2: struct8;  // [bp-0xe0]
    let v3: u64;  // [bp-0xd8]
    let v4: void*;  // [bp-0xd0]
    let v5: void*;  // [bp-0xd0]
    let v6: u64;  // [bp-0xc8]
    let v7: u64;  // [bp-0xc0]
    let v8: Result<struct16, struct16>;  // [bp-0xa8]
    let v9: u64;  // [bp-0xa8]
    let v10: u64;  // [bp-0xa8]
    let v11: u64;  // [bp-0xa8]
    let v12: u64;  // [bp-0xa0]
    let v13: u64;  // [bp-0xa0]
    let v14: u64;  // [bp-0xa0]
    let v15: void*;  // [bp-0x70]
    let v16: struct8;  // [bp-0x70]
    let v17: u64;  // [bp-0x68]
    let v18: void*;  // [bp-0x60]
    let v19: u32;  // [bp-0x54]
    let v20: u64;  // [bp-0x48]
    let v21: struct16;  // [bp-0x40]
    let v23: u8;  // r15b
    let v24: i64;  // r14
    let v25: core::option::Option<&str>;  // rbx, Other Possible Types: struct640
    let v26: void*;  // r13
    let v28: core::fmt::Arguments;  // r14
    let v31: u32;  // ebp
    let v32: void*;  // rbx
    let v33: void*;  // r13
    let v34: core::result::Result<usize, core::num::error::ParseIntError>;  // r12
    let v36: core::option::Option<&str>;  // rax
    let v37: u64;  // rdx
    let v39: void*;  // rbx
    let v40: i64;  // r13
    let v41: void*;  // r12
    let v42: void*;  // r12
    let v43: void*;  // r13
    let v44: void*;  // r12
    let v45: void*;  // r13
    let v47: core::option::Option<&str>;  // rax
    let v50: void*;  // r12
    let v54: void*;  // r12
    let v55: core::option::Option<&str>;  // rax
    let v58: core::option::Option<u32>;  // rax:rax

    v15 = 0;
    v17 = 1;
    v18 = 0;
    v1 = 0;
    v3 = 1;
    v5 = 0;
    v19 = a1;
    v20 = a1;
    v23 = 0;
    v24 = &v15;
    v25 = 0;
    loop {
        v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::append_to_string(v24, a0), a2);
        if v8 as i64 || !v12 {
            break;
        }
        v21 = struct16 {
            field_0: v17
            field_8: 0 + v17
        };
        v28 = &v1;
        loop {
            v58 = core::str::validations::next_code_point(&v21) as u128;
            v31 = (!(v58 as i8 & 1) ? 0x110000 : v37);
            match (v31) {
                10 => {
                    v54 = v5;
                    v55 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v54, v3, v54) as u64;
                    v6 = v55;
                    v7 = v37;
                    println!("{}", &v6);
                    v24 = &v15;
                    alloc::string::String::replace_range(&v1, v54);
                    v23 = 0;
                    v25 = v5;
                    v9 = v10;
                    v12 = v13;
                    if !v5 {
                        goto LABEL_45bdfa;
                    }
LABEL_45c193:
                    print!("{}", &v1);
                    v2 = alloc::string::String::truncate();
                    v9 = v10;
                    v12 = v13;
                    goto LABEL_45bdfa;
                }
                1114112 => {
                    v24 = &v15;
                    v9 = v11;
                    if !v5 {
                        goto LABEL_45bdfa;
                    }
                    goto LABEL_45c193;
                }
                _ => {
                    v9 = v11;
                    v32 = v25;
                    if v32 >= a2 {
                        if (v23 & 1) {
                            v33 = v26 + 1;
                            v4 = v5;
                        } else {
                            v34 = v5;
                        }
                        v26 = v34;
                        v36 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v26, v3, v34) as u64;
                        v6 = v36;
                        v7 = v37;
                        println!("{}", &v6);
                        v28 = &v1;
                        alloc::string::String::replace_range(&v1, v26);
                        v23 = 0;
                        v9 = v10;
                        v12 = v13;
                        v32 = v5;
                    }
                    v39 = v32;
                    v11 = v9;
                    match (v31) {
                        8 => {
                            v25 = v39 - 1;
                            if v39 < 1 {
                                v25 = 0;
                                v40 = v26;
                                break;
                            } else {
                                v40 = v26;
                                break;
                            }
                        }
                        9 => {
                            v25 = (v39 & -8) + 8;
                            v41 = v5;
                            v9 = v11;
                            v14 = v12;
                            v42 = v41;
                            if v25 > a2 {
                                if v41 {
                                    v43 = v26 + 1;
                                    if !(v23 & 1) {
                                        v44 = v41;
                                    } else {
                                        v44 = v43;
                                    }
                                    v45 = v44;
                                    v47 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v45, v3, v41) as u64;
                                    v6 = v47;
                                    v7 = v37;
                                    println!("{}", &v6);
                                    v28 = &v1;
                                    alloc::string::String::replace_range(&v1, v45);
                                    v9 = v10;
                                    v14 = v13;
                                    v42 = v5;
                                } else {
                                    v9 = v11;
                                    v14 = v12;
                                    v42 = 0;
                                }
                            }
                            v50 = v42;
                            v12 = v14;
                            v11 = v9;
                            v23 = v20;
                            v40 = v50;
                            break;
                        }
                        13 => {
                            v25 = 0;
                            v40 = v26;
                            break;
                        }
                        _ => {
                            if v19 as i8 {
                                if v31 <= 32 {
                                    v0 = 0x100003800;
                                    if (*((&v0 + ((v31 & 63) >> 3)) as &i8) >> (v31 & 63 & 7) & 1) {
                                        goto LABEL_45c081;
                                    }
                                }
                                if v31 < 128 || !core::unicode::unicode_data::white_space::lookup(v31) {
                                    goto LABEL_45c0c3;
                                }
LABEL_45c081:
                                v25 = v39 + 1;
                                v23 = 1;
                                v40 = v5;
                                break;
                            } else {
LABEL_45c0c3:
                                v25 = v39 + 1;
                                v40 = v26;
                                break;
                            }
                        }
                    }
                    v26 = v40;
                    alloc::string::String::push(v28, v31);
                    break;
                }
            }
        }
LABEL_45bdfa:
        v11 = v9;
        v16 = alloc::string::String::truncate();
    }
    return v8 as i64;
}
