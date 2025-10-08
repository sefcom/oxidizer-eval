fn uu_more::more(a0: u32, a1: u64, a2: u32, a3: u64, a4: void*, a5: u32, a6: u32, a7: void*) -> long long {
    let v0: u32;  // [bp-0x158]
    let v2: u64;  // [bp-0x148]
    let v3: struct10;  // [bp-0x140]
    let v4: struct24;  // [bp-0x140], Other Possible Types: u192
    let v5: iNone;  // [bp-0x13f]
    let v6: u64;  // [bp-0x138]
    let v7: u64;  // [bp-0x130]
    let v8: iNone;  // [bp-0x128]
    let v9: iNone;  // [bp-0x118]
    let v10: iNone;  // [bp-0x108]
    let v11: u128;  // [bp-0xf8]
    let v12: iNone;  // [bp-0xe8]
    let v13: iNone;  // [bp-0xd8]
    let v14: iNone;  // [bp-0xc8]
    let v15: u64;  // [bp-0xb8]
    let v16: struct8;  // [bp-0xb8]
    let v17: struct8;  // [bp-0xb8]
    let v18: struct8;  // [bp-0xb8]
    let v20: u64;  // [bp-0xb0]
    let v21: u64;  // [bp-0xa8]
    let v22: iNone;  // [bp-0xa0]
    let v23: iNone;  // [bp-0x90]
    let v24: iNone;  // [bp-0x80]
    let v25: u128;  // [bp-0x70]
    let v27: iNone;  // [bp-0x60], Other Possible Types: u64
    let v28: u64;  // [bp-0x60]
    let v29: iNone;  // [bp-0x50]
    let v30: iNone;  // [bp-0x40]
    let v31: void*;  // rbx
    let v33: u64;  // rax
    let v34: void*;  // rbp
    let v35: u64;  // r14
    let v36: i8;  // r13b
    let v37: core::result::Result<(), std::io::error::Error>;  // rax
    let v38: core::result::Result<(), std::io::error::Error>;  // rax
    let v39: void*;  // rax
    let v40: core::result::Result<(), std::io::error::Error>;  // rax
    let v41: core::result::Result<(), std::io::error::Error>;  // rax
    let v42: void*;  // r12
    let v43: i64;  // r15
    let v44: void*;  // r15
    let v45: u64;  // r13
    let v47: u64;  // rcx
    let v48: u64;  // rax
    let v49: u64;  // r14
    let v50: core::result::Result<(), std::io::error::Error>;  // rax
    let v51: core::result::Result<(), std::io::error::Error>;  // rax

    v31 = a4;
    v2 = a3;
    v3 = crossterm::terminal::size();
    if v3.field_0 as i8 == 1 {
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    }
    v4 = uu_more::Pager::new(a0, (!a7[32] as i8 ? (&v3.field_0)[2] : a7[34] as i16), a5, a6, a7);
    v33 = v4.field_0;
    if v33 == 2 {
        return v20;
    }
    v34 = a7;
    v30 = v14;
    v29 = v13;
    v27 = v12;
    v25 = v11;
    v24 = v10;
    v23 = v9;
    v22 = v8;
    v15 = v33;
    v20 = v6;
    v21 = v7;
    v35 = a1;
    v36 = v0;
    if (((0 ^ *(a7 as &i64)) & (0 ^ -(*(a7 as &i64)))) >> 63) as char || (v15 & 1) {
        if v36 {
            goto LABEL_4714b9;
        }
        goto LABEL_4715db;
    }
    v37 = crossterm::command::write_command_ansi(v35, 4);
    if let Err(_) = v37 {
LABEL_471504:
        v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v37);
        goto LABEL_47150d;
    }
    v37 = <std::io::stdio::Stdout as std::io::Write>::flush(v35);
    if let Err(_) = v37 {
        goto LABEL_471504;
    }
    v38 = <std::io::stdio::Stdout as std::io::Write>::write_all(v35, "\rPattern not found\n");
    match v38 {
        Err(_) => {
            v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v38);
            goto LABEL_47150d;
        },
        Ok(_) => {
            v27 = v28 - 1;
            if v36 {
LABEL_4714b9:
                v40 = crossterm::command::write_command_ansi(v35, 4);
                match v40 {
                    Ok(_) => {
                        v40 = <std::io::stdio::Stdout as std::io::Write>::flush(v35);
                        if let Err(_) = v40 {
                            goto LABEL_4714d9;
                        }
                        v4 = alloc::str::<impl str>::replace((v2 ? v2 : 1), v31);
                        v41 = <std::io::stdio::Stdout as std::io::Write>::write_all(v35, v6, v7);
                        if let Ok(_) = v41 {
                            goto LABEL_4715db;
                        }
                        v42 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v41);
                        goto LABEL_0x4715f3;
                    },
                    Err(_) => {
LABEL_4714d9:
                        v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v40);
                    },
                }
            }
LABEL_4715db:
            v42 = uu_more::Pager::draw(&v15, v35, 0x110000);
            if !v39 {
                if v36 {
                    *(&a7[24] as &i64) = 0;
                    v27 += 3;
                }
                if (uu_more::Pager::should_close(&v15) as u8 & (!a5) as u8 as u8) {
                    goto LABEL_0x4715f3;
                }
                loop {
                    crossterm::event::poll(v43, 0, 10000000);
                    if v4.field_0 as i8 == 1 {
                        v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
                    }
                    if !(v5 as i8 & 1) {
                        continue;
                    }
                    crossterm::event::read(v43);
                    v44 = v34;
                    v45 = v6;
                    if v4 as i64 == 9223372036854775814 {
                        v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v45);
                    }
                    match (v4 as i64 ^ 0x8000000000000000) {
                        2 => {
                            v47 = v7 >> 16;
                            if v47 as u8 {
                                if v47 as u32 == 1 {
                                    goto LABEL_471829;
                                }
                                goto LABEL_47166a;
                            }
                            if v45 as u8 == 15 {
                                if v7 as u8 != 2 {
                                    if !v7 as u32 && (v45 >> 32) as u32 == 113 {
                                        goto LABEL_0x4715f3;
                                    }
                                } else {
                                    if (v45 >> 32) as u32 == 99 {
                                        goto LABEL_0x4715f3;
                                    }
                                }
                            }
LABEL_471829:
                            if (v7 & 255) {
                                goto LABEL_47182d;
                            }
                            match (v45 as u32) {
                                4 | 8 => {
                                    v42 = uu_more::Pager::page_up(&v16);
                                    if v42 {
                                        goto LABEL_0x4715f3;
                                    }
                                    v42 = uu_more::paging_add_back_message(v44, a1);
                                    v0 = 0x110000;
                                    if v42 {
                                        goto LABEL_0x4715f3;
                                    }
                                    break;
                                }
                                15 => {
                                    v48 = v45 >> 32;
                                    if v48 == 32 {
                                        break;
                                    }
                                    if v48 as u32 != 106 {
                                        if v48 as u32 != 107 {
                                            goto LABEL_47182d;
                                        }
                                        v0 = 0x110000;
                                        v17 = uu_more::Pager::prev_line();
                                    } else {
                                        if uu_more::Pager::should_close(&v16) as u8 {
                                            goto LABEL_0x4715f3;
                                        }
                                        v0 = 0x110000;
                                        v18 = uu_more::Pager::next_line();
                                    }
                                }
                                _ => {
LABEL_47182d:
                                    if v45 as u8 != 15 {
                                        goto LABEL_47166a;
                                    }
                                    break;
                                }
                            }
                        }
                        5 => {
                            v0 = 0x110000;
                            v16 = uu_more::Pager::page_resize(v45 & 4294967295, (v45 >> 16) as u16, v44[32] as i32 as i16);
                        }
                        _ => {
LABEL_47166a:
                            v34 = v44;
                            continue;
                        }
                    }
                    v34 = v44;
                    if v44[37] as i8 {
                        v49 = a1;
                        v50 = crossterm::command::write_command_ansi(v49);
                        if let Ok(_) = v50 {
                            v50 = crossterm::command::write_command_ansi(v49, 2);
                            if let Ok(_) = v50 {
                                v50 = <std::io::stdio::Stdout as std::io::Write>::flush(v49);
                                if let Ok(_) = v50 {
                                    goto LABEL_4717e6;
                                }
                            }
                        }
                        v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v50);
                    }
                    v49 = a1;
                    if v34[36] as i8 {
                        v51 = crossterm::command::write_command_ansi(v49, 0);
                        if let Ok(_) = v51 {
                            v51 = crossterm::command::write_command_ansi(v49);
                            if let Ok(_) = v51 {
                                v51 = <std::io::stdio::Stdout as std::io::Write>::flush(v49);
                                if let Ok(_) = v51 {
                                    goto LABEL_4717e6;
                                }
                            }
                        }
                        v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v51);
                    } else {
LABEL_4717e6:
                        v42 = uu_more::Pager::draw(&v16, v49, v0);
                        if v42 {
                            goto LABEL_0x4715f3;
                        }
                    }
                }
LABEL_47150d:
                goto LABEL_4715f3__3;
            }
        },
    }
LABEL_4715f3__3:
    return v42;
}
