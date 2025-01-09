fn uu_more::more(a0: u32, a1: u32, a2: &struct8, a3: u8, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0xe0], Other Possible Types: struct24
    let v1: i64;  // [sp-0xc8], Other Possible Types: struct24, Result<struct24, struct8>, struct9
    let v2: i32;  // [sp-0xac]
    let v3: struct8;  // [sp-0xa8], Other Possible Types: i544, struct2, struct68, Result<struct4, struct4>
    let v4: i64;  // [sp-0x90]
    let v5: i16;  // [sp-0x68]
    let v6: i192;  // [sp-0x48], Other Possible Types: struct24
    let v7: i64;  // [bp+0x8]
    let v8: i8;  // [bp+0x10]
    let v9: i8;  // [bp+0x18]
    let v10: i64;  // r14
    let v13: i64;  // r15
    let v14: i8;  // bpl
    let v15: i64;  // rdx
    let v16: i64;  // rax
    let v17: i64;  // rax
    let v18: i64;  // rax
    let v19: i64;  // 4096
    let v22: i64;  // 4096
    let v23: i64;  // rax
    let v25: i64;  // rcx
    let v26: i32;  // eax
    let v27: i64;  // rax
    let v28: i64;  // rax
    let v29: i32;  // ebp
    let v30: i64;  // rax
    let v31: i64;  // rax

    v2 = a3;
    v10 = v9;
    v3 = crossterm::terminal::size() as u32;
    v6 = uu_more::break_buff(a0, a1, core::result::Result<T,E>::unwrap(&v3) as i32);
    v13 = v7;
    v3 = uu_more::Pager::new(*((v10 + 34) as &i16), &v6, v13, v8, v10);
    v14 = v2;
    if *(v10 as &i64) == 0x8000000000000000 {
LABEL_4dcd66:
        if !v14 {
            goto LABEL_4dce5e;
        }
    } else {
        if uu_more::search_pattern_in_file(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), v10) {
            v4 = v15;
            goto LABEL_4dcd66;
        }
        v16 = crossterm::command::write_command_ansi(a2, 4);
        if v16 {
LABEL_4dce37:
            v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
            return v17;
        }
        v16 = <std::io::stdio::Stdout as std::io::Write>::flush(a2);
        if !(!v16) || !((v16 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v16)) {
            goto LABEL_4dce37;
        }
        v5 -= 1;
        if !v14 {
            goto LABEL_4dce5e;
        }
    }
    v18 = crossterm::command::write_command_ansi(a2, 4);
    if !v18 {
        v18 = <std::io::stdio::Stdout as std::io::Write>::flush(a2);
    }
    core::result::Result<T,E>::unwrap(v18, "src/uu/more/src/more.rs");
    if a4 {
        v19 = a4;
    } else {
        v19 = 1;
    }
    if !a4 {
        v22 = a4;
    } else {
        v22 = a5;
    }
    v1 = alloc::str::<impl str>::replace(v19, v22);
    v23 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, *((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64));
    if v23 {
        v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
        return v17;
    }
    v5 -= 3;
LABEL_4dce5e:
    v3 = uu_more::Pager::draw(a2, 0x110000);
    if v14 {
        *((v10 + 24) as &i64) = 0;
        v5 += 3;
    }
    if !v13 && uu_more::Pager::should_close(&v3) as i8 {
        return 0;
    }
    loop {
        do {
            v1 = crossterm::event::poll(None, 10000000);
        } while (!core::result::Result<T,E>::unwrap(&v1) as i8);
        v1 = crossterm::event::read();
        v0 = core::result::Result<T,E>::unwrap(&v1);
        v25 = v0 ^ 0x8000000000000000;
        if v25 >= 6 {
            v25 = 4;
        }
        if v25 != 2 {
            if !(!v16) || !((v16 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v16)) {
                goto LABEL_4dceb0;
            }
            v3 = uu_more::Pager::page_resize(*((&v0 as &char + 10) as &i16), *((v10 + 32) as &i32));
            goto LABEL_4dcf2c;
        }
        v26 = *((&v0 as &char + 18) as &i8);
        if !v26 {
            v27 = *((&v0 as &char + 8) as &i8);
            if !(!v16) || !((v16 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v16)) {
                goto LABEL_4dd056;
            }
            v28 = *((&v0 as &char + 16) as &i8);
            if v28 == 2 {
                if *((&v0 as &char + 12) as &i32) == 99 {
                    goto LABEL_4dd173;
                }
                v29 = *((&v0 as &char + 12) as &i32);
                goto LABEL_4dcf31;
            } else {
                if !(!v16) || !((v16 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v16)) {
                    goto LABEL_4dd0b1;
                }
                if *((&v0 as &char + 12) as &i32) == 113 {
LABEL_4dd173:
                    uu_more::reset_term(a2);
                    std::process::exit(0); /* do not return */
                }
                v29 = *((&v0 as &char + 12) as &i32);
                goto LABEL_4dd0bd;
            }
        }
        if v26 == 2 {
            goto LABEL_4dceb0;
        } else {
            goto LABEL_4dcfb1;
        }
LABEL_4dcfb1:
        v27 = *((&v0 as &char + 8) as &i8);
LABEL_4dd056:
        switch (v27) {
        case 4: case 8:
            if !(!v16) || !((v16 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v16)) {
                goto LABEL_4dceb0;
            }
            v3 = uu_more::Pager::page_up();
            v17 = uu_more::paging_add_back_message(*((v10 + 32) as &i32), a2);
            v29 = 0x110000;
        case 5: case 9:
            if !(!v16) || !((v16 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v16)) {
                goto LABEL_4dceb0;
            }
            goto LABEL_4dd0ed;
        case 15:
            v28 = *((&v0 as &char + 16) as &i8);
LABEL_4dd0b1:
            v29 = *((&v0 as &char + 12) as &i32);
            if !(!v16) || !((v16 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v16)) {
                goto LABEL_4dcf31;
            }
LABEL_4dd0bd:
            if v29 == 32 {
LABEL_4dd0ed:
                if !(!v16) || !((v16 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v16)) {
                    goto LABEL_4dd129;
                }
                v3 = uu_more::Pager::page_down();
                break;
            }
            if v29 == 107 {
                v3 = uu_more::Pager::prev_line();
                break;
            } else {
                if v29 == 106 {
                    if !uu_more::Pager::should_close(&v3) as i8 {
                        v3 = uu_more::Pager::next_line();
                        break;
                    } else {
LABEL_4dd129:
                        v17 = 0;
                    }
LABEL_4dcf2c:
                    v29 = 0x110000;
                }
LABEL_4dcf31:
                if *((v10 + 37) as &i8) {
                    v0 = std::io::stdio::stdout();
                    v30 = crossterm::command::write_command_ansi(&v0, 0, 0);
                    if !v30 {
                        v30 = crossterm::command::write_command_ansi(&v0, 2);
                        if !v30 {
                            v1 = std::io::stdio::stdout();
                            v30 = <std::io::stdio::Stdout as std::io::Write>::flush(&v1);
                        }
                    }
                    core::result::Result<T,E>::unwrap(v30, "src/uu/more/src/more.rs");
                } else if *((v10 + 36) as &i8) {
                    v0 = std::io::stdio::stdout();
                    v31 = crossterm::command::write_command_ansi(&v0, 0);
                    if !v31 {
                        v31 = crossterm::command::write_command_ansi(&v0, 0, 0);
                        if !v31 {
                            v1 = std::io::stdio::stdout();
                            v31 = <std::io::stdio::Stdout as std::io::Write>::flush(&v1);
                        }
                    }
                    core::result::Result<T,E>::unwrap(v31, "src/uu/more/src/more.rs");
                }
                v3 = uu_more::Pager::draw(a2, v29);
                continue;
            }
        default:
LABEL_4dceb0:
        }
    }
}
