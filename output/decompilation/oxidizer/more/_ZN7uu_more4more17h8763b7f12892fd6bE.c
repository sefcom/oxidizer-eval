fn uu_more::more(a0: u32, a1: u32, a2: u32, a3: u8, a4: u32, a5: u32, a6: u32, a7: u32, a8: void*) -> u64 {
    let v1: struct24;  // [sp-0xc8]
    let v2: struct8;  // [sp-0xa8], Other Possible Types: Result<struct4, struct8>, struct68
    let v3: i64;  // [sp-0x90]
    let v4: i16;  // [sp-0x68]
    let v5: i16;  // [sp-0x68]
    let v6: struct24;  // [sp-0x48]
    let v8: i32;  // edx
    let v9: i32;  // ebp
    let v10: i64;  // rdx
    let v11: i64;  // rax
    let v12: i64;  // rax
    let v14: i64;  // rdx
    let v24: i64;  // r15

    v2 = crossterm::terminal::size();
    v9 = v8;
    if *((a8 + 32) as &i16) {
        v9 = *((a8 + 34) as &i16);
    }
    v6 = uu_more::break_buff(a0, a1, core::result::Result<T,E>::unwrap(&v2) as i32);
    v2 = uu_more::Pager::new(v9 as u64, &v6, a6, a7, a8);
    if *(a8 as &i64) == 0x8000000000000000 {
LABEL_4dcd66:
        if !a3 {
            goto LABEL_4dce5e;
        }
        goto LABEL_4dcd6f;
    }
    if uu_more::search_pattern_in_file(*((&v2.field_0 as &char + 8) as &i64), v2.field_16, a8) {
        v3 = v10;
        goto LABEL_4dcd66;
    }
    v11 = crossterm::command::write_command_ansi(a2, 4);
    if v11 {
LABEL_4dce37:
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
        return v24;
    }
    v11 = <std::io::stdio::Stdout as std::io::Write>::flush(a2);
    if !(!v11 && (v11 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, "Pattern not found
"), !v11)) {
        goto LABEL_4dce37;
    }
    v5 = v4 - 1;
    if a3 {
LABEL_4dcd6f:
        v12 = crossterm::command::write_command_ansi(a2, 4);
        if !v12 {
            v12 = <std::io::stdio::Stdout as std::io::Write>::flush(a2);
        }
        core::result::Result<T,E>::unwrap(v12, "src/uu/more/src/more.rs");
        v14 = a5;
        if !a4 {
            v14 = a4;
        }
        v1 = alloc::str::<impl str>::replace((a4 ? a4 : 1), v14);
        if <std::io::stdio::Stdout as std::io::Write>::write_all(a2, *((&v1.field_0 as &char + 8) as &i64), v1.field_16) {
            return v24;
        }
        v5 -= 3;
    }
LABEL_4dce5e:
    v2 = uu_more::Pager::draw(a2, 0x110000);
    if a3 {
        *((a8 + 24) as &i64) = 0;
        v4 = v5 + 3;
    }
    if !a6 && uu_more::Pager::should_close(&v2) as i8 {
        return v24;
    }
}
