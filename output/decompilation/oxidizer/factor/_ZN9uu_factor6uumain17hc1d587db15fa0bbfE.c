fn uu_factor::uumain(a0: u64, a1: u64) -> long long {
    let v0: u64;  // [bp-0x98]
    let v1: &str;  // [bp-0x88]
    let v2: i64;  // [bp-0x78]
    let v3: u64;  // [bp-0x70]
    let v4: void*;  // [bp-0x68]
    let v5: i64;  // [bp-0x58]
    let v6: u128;  // [bp-0x58]
    let v7: void*;  // [bp-0x50]
    let v8: u64;  // [bp-0x48]
    let v9: struct24;  // [bp-0x38], Other Possible Types: u64
    let v10: i64;  // [bp-0x30]
    let v11: u64;  // [bp-0x28]
    let v14: u64;  // rax
    let v15: i64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers());
    v14 = uu_factor::uumain::uumain(a0, a1);
    if !v14 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v14;
    v5 = &v0;
    v7 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v1 = "\x01";
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    v9 = core::option::Option<T>::map_or_else(&v1 as u64);
    v6 = v9.field_0;
    v8 = v11;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt, v11, 1, 0) {
        v9 = uucore::util_name();
        v10 = v15;
        eprint!("{}: ", &v9);
        eprintln!("{}", &v5);
    }
    if !*((v15 + 96) as &i64)(v0) as i8 {
        return *((v15 + 88) as &i64)(v0) as u32;
    }
    v9 = uucore::execution_phrase();
    v10 = v15;
    eprintln!("Try '{} --help' for more information.", &v9);
    return *((v15 + 88) as &i64)(v0) as u32;
}
