fn uu_kill::list(a0: i64) {
    let v0: struct16;  // [bp-0xa0]
    let v1: u64;  // [bp-0x90]
    let v2: u64;  // [bp-0x88]
    let v4: u64;  // r12
    let v5: void*;  // r13
    let v6: void*;  // rax
    let v8: u64;  // rdx

    if !*((a0 + 16) as &i64) {
        uu_kill::print_signals();
        return;
    }
    v4 = *((a0 + 16) as &i64) * 24;
    v5 = 0;
    loop {
        v6 = uu_kill::print_signal(*((8 + *((a0 + 8) as &i64) + v5 as &u8) as &i64), *((16 + *((a0 + 8) as &i64) + v5 as &u8) as &i64));
        if !v6 {
            v5 += 24;
            if v4 == v5 {
                return;
            }
        } else {
            v0 = struct16 {
                field_0: v6
                field_8: &g_4e76b0
            };
            uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v6));
            v1 = uucore::util_name();
            v2 = v8;
            eprintln!("{}: {}", &v1, &v0);
            v5 += 24;
            if v4 == v5 {
                return;
            }
        }
    }
}
