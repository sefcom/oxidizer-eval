fn uu_more::more(a0: i64, a1: i64, a2: i64, a3: i8, a4: i64, a5: i64, a6: i64, a7: i64, a8: i64) -> long long {
    let v4: u8;  // [bp-0xc8]
    let v8: u64;  // [bp-0xc0]
    let v9: u8;  // [bp-0xb8]
    let v10: u32;  // [bp-0xac]
    let v11: struct10;  // [bp-0xa8], Other Possible Types: struct68
    let v17: u64;  // [bp-0xa0]
    let v18: u32;  // [bp-0x98]
    let v20: u16;  // [bp-0x68]
    let v21: struct24;  // [bp-0x48]
    let v23: u16;  // _bp
    let v24: u8;  // bpl
    let v26: core::result::Result<(), std::io::error::Error>;  // rax
    let v27: struct32;  // r15
    let v28: Result<struct40, struct16>;  // rax
    let v29: u64;  // 4096
    let v31: u64;  // rsi
    let v32: u64;  // 4096
    let v33: core::result::Result<(), std::io::error::Error>;  // rax

    v10 = a3;
    v11 = crossterm::terminal::size();
    v21 = uu_more::break_buff(a0, a1, core::result::Result<T,E>::unwrap(&v11) as i32);
    v11 = uu_more::Pager::new(v23, &v21, a6, a7, a8);
    v24 = v10;
    if *(a8 as &i64) == 0x8000000000000000 || uu_more::search_pattern_in_file(v17, v18, a8) {
        if !(!v24) {
            goto LABEL_4dcd6f;
        }
LABEL_4dce5e:
        uu_more::Pager::draw(&v11, a2, 0x110000);
        if v24 {
            *((a8 + 24) as &i64) = 0;
            v20 += 3;
        }
        if !(!a6) {
            goto LABEL_0x4dceba;
        }
        if !uu_more::Pager::should_close(&v11) as i8 {
            goto LABEL_0x4dceba;
        } else {
            goto LABEL_4dd145;
        }
    } else {
        v26 = crossterm::command::write_command_ansi(a2, 4);
        if v26 || (v26 = <std::io::stdio::Stdout as std::io::Write>::flush(a2), v26 || (v26 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, "\rPattern not found\n"), v26)) {
            v27 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
        } else {
            v20 -= 1;
            if !v24 {
                goto LABEL_4dce5e;
            }
LABEL_4dcd6f:
            v28 = crossterm::command::write_command_ansi(a2, 4);
            if !v28 {
                v28 = <std::io::stdio::Stdout as std::io::Write>::flush(a2);
            }
            core::result::Result<T,E>::unwrap(v28, "src/uu/more/src/more.rs");
            if a4 {
                v29 = a4;
            } else {
                v29 = 1;
            }
            v31 = v29;
            if !a4 {
                v32 = a4;
            } else {
                v32 = a5;
            }
            alloc::str::<impl str>::replace(&v4, v31, v32);
            v33 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, v8, *(&v9 as &i64));
            if let Ok(_) = v33 {
                goto LABEL_4dce5e;
            }
            v27 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v33);
        }
    }
LABEL_4dd145:
    return v27;
}
