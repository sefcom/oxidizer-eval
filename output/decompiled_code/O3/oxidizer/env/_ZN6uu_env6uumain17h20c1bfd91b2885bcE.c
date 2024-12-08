fn uu_env::uumain(a0: u64, a1: i64) -> u64 {
    let v0: u64;  // [sp-0xa8]
    let v1: struct3;  // [bp-0x98]
    let v2: u64;  // [sp-0x68]
    let v3: &u64;  // [sp-0x60]
    let v4: u128;  // [bp-0x48]
    let v5: u64;  // [sp-0x40]
    let v6: u64;  // [sp-0x38]
    let v7: i192;  // [sp-0x28]
    let v9: u64;  // rax
    let v10: u32;  // eax
    let v11: u64;  // rsi
    let v12: u64;  // rdi
    let v13: &u64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    *(&v1.field_0 as &struct3) = struct3 {
        field_0: 0
        field_2: 2
    };
    v9 = uu_env::EnvAppData::run_env(&v1, a0);
    if !v9 {
        v10 = uucore::mods::error::get_exit_code() as i32;
        return v10;
    }
    v0 = v9;
    v7 = format!("{:?}", &v0);
    *(&v4 as &i192) = v7;
    v11 = *((&v7 as &char + 16) as &i64);
    v6 = *((&v7 as &char + 16) as &i64);
    v12 = v5;
    if <alloc::string::String as core::cmp::PartialEq<&str>>::ne(v5, *((&v7 as &char + 16) as &i64)) as i8 {
        v2 = uucore::util_name();
        v3 = v13;
        eprint!("{:?}: ", &v2);
        eprintln!("{:?}", &v4);
    }
    if v13[13]() {
        v2 = uucore::execution_phrase();
        v3 = v13;
        eprintln!("Try '{:?} --help' for more information.", &v2);
    }
    v10 = v13[12]();
    return v10;
}
