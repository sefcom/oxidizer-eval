fn uu_more::Pager::draw_lines(a1: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x90]
    let v1: u64;  // [bp-0x80]
    let v2: u64;  // [bp-0x78]
    let v4: core::result::Result<(), std::io::error::Error>;  // rax
    let v5: u64;  // r12
    let v6: core::fmt::Arguments;  // r13
    let v7: core::fmt::Arguments;  // r13
    let v8: core::result::Result<(), std::io::error::Error>;  // rax

    v4 = crossterm::command::write_command_ansi(a1);
    if let Ok(_) = v4 {
        v4 = <std::io::stdio::Stdout as std::io::Write>::flush(a1);
        if let Ok(_) = v4 {
            if uu_more::Pager::load_visible_lines(a0) as u64 {
                return;
            } else if !*((a0 + 32) as &i64) {
                return;
            } else {
                loop {
                    v7 = v6;
                    v0 = v5;
                    format!("\r{}", &v0);
                    v8 = <std::io::stdio::Stdout as std::io::Write>::write_all(a1, v1, v2);
                    match v8 {
                        Err(_) => {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
                            return;
                        },
                        Ok(_) => {
                            v5 += 24;
                            v6 = v7 - 24;
                            if v7 == 24 {
                                return;
                            }
                        },
                    }
                }
            }
        }
    }
    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
    return;
}
