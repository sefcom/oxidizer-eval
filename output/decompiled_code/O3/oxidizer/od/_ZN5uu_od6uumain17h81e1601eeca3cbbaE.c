fn uu_od::uumain(a0: u32, a1: u32, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: u64;  // [sp-0xa8]
    let v1: u64;  // [sp-0x68]
    let v2: &u64;  // [sp-0x60]
    let v3: u128;  // [bp-0x48]
    let v4: u32;  // [sp-0x40]
    let v5: u64;  // [sp-0x38]
    let v6: i192;  // [sp-0x28]
    let v8: &u64;  // rdx
    let v9: u32;  // rcx
    let v10: u32;  // r8
    let v11: u32;  // r9
    let v12: u64;  // rax

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v12 = uu_od::uumain::uumain(a0, a1, v8, v9, v10, v11);
    if !v12 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v12;
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
