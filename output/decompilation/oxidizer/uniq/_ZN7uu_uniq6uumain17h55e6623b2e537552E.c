fn uu_uniq::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: struct48;  // [bp-0x98]
    let v2: i64;  // [sp-0x68]
    let v3: i64;  // [sp-0x60]
    let v4: i64;  // [sp-0x48], Other Possible Types: struct24
    let v5: i64;  // [sp-0x40]
    let v6: struct24;  // [sp-0x28]
    let v8: i64;  // rax
    let v9: i64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v8 = uu_uniq::uumain::uumain(a0, a1);
    if !v8 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v8;
    v4 = &v0;
    v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v1 = struct48 {
        field_0: &g_416610
        field_8: 1
        field_16: &v4
        field_24: 1
        field_32: 0
        field_40: <UNKNOWN>
    };
    v6 = core::option::Option<T>::map_or_else(&v1);
    v4 = v6;
    if v4 == "" {
        v3 = v9;
        show_error!("{}", &v4);
    }
    if !*((v9 + 104) as &i64)() {
        return *((v9 + 96) as &i64)();
    }
    v2 = uucore::execution_phrase();
    v3 = v9;
    eprintln!("Try '{} --help' for more information.", &v2);
}
