fn uu_pwd::uumain(a0: u64, a1: u64, a2: i64) -> u64 {
    let v0: u64;  // [sp-0xa8]
    let v1: u64;  // [sp-0x68]
    let v2: &u64;  // [sp-0x60]
    let v3: u128;  // [bp-0x48]
    let v4: u64;  // [sp-0x40]
    let v5: u64;  // [sp-0x38]
    let v6: i192;  // [sp-0x28]
    let v8: &u64;  // rdx
    let v9: u64;  // rax

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v9 = uu_pwd::uumain::uumain(a0, a1, v8);
    if !v9 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v9;
    v6 = format!("{:?}", &v0);
    *(&v3 as &i192) = v6;
    v5 = *((&v6 as &char + 16) as &i64);
    if <alloc::string::String as core::cmp::PartialEq<&str>>::ne(v4, *((&v6 as &char + 16) as &i64)) as i8 {
        v1 = uucore::util_name();
        v2 = v8;
        eprint!("{:?}: ", &v1);
        eprintln!("{:?}", &v3);
    }
    if !v8[13]() {
        return v8[12]();
    }
    v1 = uucore::execution_phrase();
    v2 = v8;
    eprintln!("Try '{:?} --help' for more information.", &v1);
}
