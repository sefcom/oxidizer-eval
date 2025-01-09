fn uu_cp::uumain(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [sp-0xa8]
    let v1: u64;  // [sp-0x98]
    let v2: u64;  // [sp-0x90]
    let v3: &&struct_1;  // [sp-0x88]
    let v4: u64;  // [sp-0x80]
    let v5: void*;  // [sp-0x78]
    let v6: u64;  // [sp-0x68]
    let v7: &u64;  // [sp-0x60]
    let v8: &u8;  // [sp-0x48]
    let v9: u64;  // [sp-0x40]
    let v10: u64;  // [sp-0x38]
    let v11: i8;  // [bp-0x28]
    let v12: i8;  // [bp-0x18]
    let v14: u64;  // rax
    let v15: &u64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v14 = uu_cp::uumain::uumain(a0, a1);
    if !v14 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v14;
    v8 = &v0;
    v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v1 = &g_41e7f0;
    v2 = 1;
    v5 = 0;
    v3 = &v8;
    v4 = 1;
    core::option::Option<T>::map_or_else();
    *(&v8 as &i8) = v11;
    v10 = v12;
    if v8 == "" {
        v6 = uucore::util_name();
        v7 = v15;
        eprint!("{:?}: ", &v6);
        eprintln!("{:?}", &v8);
    }
    if !v15[13]() {
        return v15[12]();
    }
    v6 = uucore::execution_phrase();
    v7 = v15;
    eprintln!("Try '{:?} --help' for more information.", &v6);
}
