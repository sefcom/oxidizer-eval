fn uu_more::reset_term(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x38], Other Possible Types: Arguments
    let v2: u64;  // rax
    let v3: u64;  // rcx
    let v4: u64;  // rax
    let v5: u64;  // rsi
    let v6: u64;  // rdx
    let v7: u64;  // rax

    v2 = crossterm::terminal::sys::unix::disable_raw_mode(a0, a1);
    if v2 {
        v0 = v2;
        core::result::unwrap_failed(); /* do not return */
    }
    v4 = <std::io::stdio::Stdout as std::io::Write>::write_all(a0, &anon.d58bd02a723bd021606085005bc52729.42.llvm.16558445346262642515, 4, v3);
    if v4 {
        v0 = v4;
        core::result::unwrap_failed(); /* do not return */
    }
    v0 = Arguments {
        pieces: ["\r"]
        args: []
        fmt: None
    };
    std::io::stdio::_print(&v0);
    v7 = <std::io::stdio::Stdout as std::io::Write>::flush(a0, v5, v6, v3);
    if v7 {
        v0 = v7;
        core::result::unwrap_failed(); /* do not return */
    }
    return v7;
}
