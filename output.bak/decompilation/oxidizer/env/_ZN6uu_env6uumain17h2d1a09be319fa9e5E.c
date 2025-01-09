fn uu_env::uumain(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [sp-0xa8]
    let v1: u16;  // [sp-0x98]
    let v2: u8;  // [sp-0x96]
    let v3: u64;  // [sp-0x90]
    let v4: &&struct_1;  // [sp-0x88]
    let v5: u64;  // [sp-0x80]
    let v6: void*;  // [sp-0x78]
    let v7: u64;  // [sp-0x68]
    let v8: &u64;  // [sp-0x60]
    let v9: &u8;  // [sp-0x48]
    let v10: u64;  // [sp-0x40]
    let v11: u64;  // [sp-0x38]
    let v12: i8;  // [bp-0x28]
    let v13: i8;  // [bp-0x18]
    let v15: u64;  // rdx
    let v16: u64;  // rax
    let v17: u32;  // eax
    let v18: u64;  // rsi
    let v19: u64;  // rdi
    let v20: &u64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v1 = 0;
    v2 = 2;
    v15 = a1;
    v16 = uu_env::EnvAppData::run_env(&v1, a0, a1);
    if !v16 {
        v17 = uucore::mods::error::get_exit_code() as i32;
        return v17;
    }
    v0 = v16;
    v9 = &v0;
    v10 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v1 = &g_417280;
    v3 = 1;
    v6 = 0;
    v4 = &v9;
    v5 = 1;
    core::option::Option<T>::map_or_else();
    *(&v9 as &i8) = v12;
    v18 = v13;
    v11 = v13;
    v19 = v10;
    if v9 == "" {
        v7 = uucore::util_name();
        v8 = v20;
        eprint!("{:?}: ", &v7);
        eprintln!("{:?}", &v9);
    }
    if v20[13]() {
        v7 = uucore::execution_phrase();
        v8 = v20;
        eprintln!("Try '{:?} --help' for more information.", &v7);
    }
    v17 = v20[12]();
    return v17;
}
