fn uu_env::uumain(a0: u64, a1: u32) -> long long {
    let v0: u64;  // [bp-0x98]
    let v1: struct4;  // [bp-0x88]
    let v2: u128;  // [bp-0x58]
    let v3: u64;  // [bp-0x48]
    let v4: alloc::string::String;  // [bp-0x38], Other Possible Types: u64
    let v5: i64;  // [bp-0x30]
    let v6: u64;  // [bp-0x28]
    let v9: u64;  // rax
    let v10: i64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers());
    v1 = struct4 {
        field_0: 0
        field_2: 2
    };
    v9 = uu_env::EnvAppData::run_env(&v1, a0, a1);
    if !v9 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v9;
    v4 = format!("{}", &v0);
    v2 = *(&v4.vec.buf.inner.cap as &i128);
    v3 = v6;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6) {
        v4 = uucore::util_name();
        v5 = v10;
        eprint!("{}: ", &v4);
        eprintln!("{}", &v2);
    }
    if !*((v10 + 96) as &i64)(v0) as i8 {
        return *((v10 + 88) as &i64)(v0) as u32;
    }
    v4 = uucore::execution_phrase();
    v5 = v10;
    eprintln!("Try '{} --help' for more information.", &v4);
    return *((v10 + 88) as &i64)(v0) as u32;
}
