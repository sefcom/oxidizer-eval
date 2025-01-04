fn uu_more::more(a0: u32, a1: u32, a2: &struct8, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xe0], Other Possible Types: struct24
    let v1: i64;  // [sp-0xc8], Other Possible Types: struct9, struct24, Result<struct24, struct16>
    let v2: i32;  // [sp-0xac]
    let v3: struct8;  // [sp-0xa8], Other Possible Types: i32, struct68, struct2, Result<struct4, struct4>
    let v4: i64;  // [sp-0x90]
    let v5: i16;  // [sp-0x68]
    let v6: struct24;  // [sp-0x48], Other Possible Types: i192
    let v7: i64;  // [bp+0x8]
    let v8: i8;  // [bp+0x10]
    let v9: i8;  // [bp+0x18]
    let v10: i64;  // r14
    let v13: i64;  // r8
    let v14: i64;  // r9
    let v15: i64;  // r15
    let v16: i8;  // bpl
    let v17: i64;  // rax
    let v18: i64;  // rsi
    let v19: i64;  // rdx
    let v20: i64;  // rax
    let v21: i64;  // rax
    let v22: i64;  // 4096
    let v25: i64;  // 4096
    let v26: i64;  // rax
    let v28: i64;  // rcx
    let v29: i64;  // rcx
    let v30: i64;  // rcx
    let v31: i64;  // rcx
    let v33: i64;  // rax
    let v34: i32;  // eax
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v37: i32;  // ebp
    let v38: i64;  // rax
    let v39: i64;  // rax

    v2 = a3;
    v10 = v9;
    v3 = crossterm::terminal::size(a1, a2, a3, a4, a5);
    v6 = uu_more::break_buff(a0, a1, core::result::Result<T,E>::unwrap(&v3) as i32, v13, v14);
    v15 = v7;
    v3 = uu_more::Pager::new(*((v10 + 34) as &i16), &v6, v15, v8, v10);
    v16 = v2;
    if *(v10 as &i64) == 0x8000000000000000 {
LABEL_4dcd66:
        if !v16 {
            goto LABEL_4dce5e;
        }
    } else {
        if uu_more::search_pattern_in_file(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), v10) {
            v4 = v19;
            goto LABEL_4dcd66;
        }
        v17 = crossterm::command::write_command_ansi(a2, 4);
        if v17 {
LABEL_4dce37:
            v20 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
            return v20;
        }
        v17 = <std::io::stdio::Stdout as std::io::Write>::flush(a2, v18, v19);
        if !(!v17) || !((v17 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v17)) {
            goto LABEL_4dce37;
        }
        v5 -= 1;
        if !v16 {
            goto LABEL_4dce5e;
        }
    }
    v21 = crossterm::command::write_command_ansi(a2, 4);
    if !v21 {
        v21 = <std::io::stdio::Stdout as std::io::Write>::flush(a2, v18, v19);
    }
    core::result::Result<T,E>::unwrap(v21, "src/uu/more/src/more.rs");
    if a4 {
        v22 = a4;
    } else {
        v22 = 1;
    }
    if !a4 {
        v25 = a4;
    } else {
        v25 = a5;
    }
    v1 = alloc::str::<impl str>::replace(v22, v25);
    v26 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, *((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64));
    if v26 {
        v20 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
        return v20;
    }
    v5 -= 3;
LABEL_4dce5e:
    v3 = uu_more::Pager::draw(a2, 0x110000);
    if v16 {
        *((v10 + 24) as &i64) = 0;
        v5 += 3;
    }
    if !v15 && uu_more::Pager::should_close(&v3) as i8 {
        return 0;
    }
    loop {
        do {
            v1 = crossterm::event::poll(None, 10000000, v28, v13, v14);
        } while (!core::result::Result<T,E>::unwrap(&v1) as i8);
        v1 = crossterm::event::read(v18, v19, v29, v13, v14);
        v0 = core::result::Result<T,E>::unwrap(&v1);
        v30 = v0 ^ 0x8000000000000000;
        if v30 >= 6 {
            v31 = 4;
        } else {
            v31 = v30;
        }
        v33 = v31;
        if v33 != 2 {
            if !(!v17) || !((v17 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v17)) {
                goto LABEL_4dceb0;
            }
            v3 = uu_more::Pager::page_resize(*((&v0 as &char + 10) as &i16), *((v10 + 32) as &i32));
            goto LABEL_4dcf2c;
        }
        v34 = *((&v0 as &char + 18) as &i8);
        if !v34 {
            v35 = *((&v0 as &char + 8) as &i8);
            if !(!v17) || !((v17 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v17)) {
                goto LABEL_4dd056;
            }
            v36 = *((&v0 as &char + 16) as &i8);
            if v36 == 2 {
                if *((&v0 as &char + 12) as &i32) == 99 {
                    goto LABEL_4dd173;
                }
                v37 = *((&v0 as &char + 12) as &i32);
                goto LABEL_4dcf31;
            } else {
                if !(!v17) || !((v17 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v17)) {
                    goto LABEL_4dd0b1;
                }
                if *((&v0 as &char + 12) as &i32) == 113 {
LABEL_4dd173:
                    uu_more::reset_term(a2, v18, v19, v30, v13, v14);
                    std::process::exit(0); /* do not return */
                }
                v37 = *((&v0 as &char + 12) as &i32);
                goto LABEL_4dd0bd;
            }
        }
        if v34 == 2 {
            goto LABEL_4dceb0;
        } else {
            goto LABEL_4dcfb1;
        }
LABEL_4dcfb1:
        v35 = *((&v0 as &char + 8) as &i8);
LABEL_4dd056:
        switch (v35) {
        case 4: case 8:
            if !(!v17) || !((v17 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v17)) {
                goto LABEL_4dceb0;
            }
            v3 = uu_more::Pager::page_up();
            v20 = uu_more::paging_add_back_message(*((v10 + 32) as &i32), a2, v19);
            v37 = 0x110000;
        case 5: case 9:
            if !*((&v0 as &char + 16) as &i8) {
                goto LABEL_4dd0ed;
            }
            goto LABEL_4dceb0;
        case 15:
            v36 = *((&v0 as &char + 16) as &i8);
LABEL_4dd0b1:
            v37 = *((&v0 as &char + 12) as &i32);
            if !(!v17) || !((v17 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v17)) {
                goto LABEL_4dcf31;
            }
LABEL_4dd0bd:
            if v37 == 32 {
LABEL_4dd0ed:
                if !(!v17) || !((v17 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v17)) {
                    goto LABEL_4dd129;
                }
                v3 = uu_more::Pager::page_down();
                break;
            }
            if v37 == 107 {
                v3 = uu_more::Pager::prev_line();
                break;
            } else {
                if !(!v17) || !((v17 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_418db9, 19), !v17)) {
                    goto LABEL_4dcf31;
                }
                if !uu_more::Pager::should_close(&v3) as i8 {
                    v3 = uu_more::Pager::next_line();
                    break;
                } else {
LABEL_4dd129:
                    v20 = 0;
                }
            }
LABEL_4dcf2c:
            v37 = 0x110000;
LABEL_4dcf31:
            if *((v10 + 37) as &i8) {
                v0 = std::io::stdio::stdout();
                v38 = crossterm::command::write_command_ansi(&v0, 0, 0);
                if !v38 {
                    v38 = crossterm::command::write_command_ansi(&v0, 2);
                    if !v38 {
                        v1 = std::io::stdio::stdout();
                        v38 = <std::io::stdio::Stdout as std::io::Write>::flush(&v1, v18, v19);
                    }
                }
                core::result::Result<T,E>::unwrap(v38, "src/uu/more/src/more.rs");
            } else if *((v10 + 36) as &i8) {
                v0 = std::io::stdio::stdout();
                v39 = crossterm::command::write_command_ansi(&v0, 0);
                if !v39 {
                    v39 = crossterm::command::write_command_ansi(&v0, 0, 0);
                    if !v39 {
                        v1 = std::io::stdio::stdout();
                        v39 = <std::io::stdio::Stdout as std::io::Write>::flush(&v1, v18, v19);
                    }
                }
                core::result::Result<T,E>::unwrap(v39, "src/uu/more/src/more.rs");
            }
            v3 = uu_more::Pager::draw(a2, v37);
            continue;
        default:
LABEL_4dceb0:
        }
    }
}
