fn uu_more::setup_term() -> : struct16 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: std::io::stdio::Stdout;  // rax
    let v4: u64;  // rax
    let v5: void*;  // rax
    let v6: std::io::stdio::Stdout;  // rdx
    let v7: std::io::stdio::Stdout;  // rdx

    v0 = v2;
    v3 = std::io::stdio::stdout();
    v4 = crossterm::terminal::enable_raw_mode();
    if v4 {
        v5 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        v7 = v6;
    } else {
        v5 = 0;
        v7 = v3;
    }
    return struct16 {
        field_0: v5
        field_8: v7
    };
}
