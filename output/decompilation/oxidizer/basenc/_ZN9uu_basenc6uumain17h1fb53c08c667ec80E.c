fn uu_basenc::uumain(a0: u32, a1: u32) -> long long {
    let v0: u64;  // [bp-0x98]
    let v1: u128;  // [bp-0x58]
    let v2: u64;  // [bp-0x48]
    let v3: alloc::string::String;  // [bp-0x38], Other Possible Types: u64
    let v4: i64;  // [bp-0x30]
    let v5: u64;  // [bp-0x28]
    let v8: u64;  // rax
    let v9: i64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers());
    v8 = uu_basenc::uumain::uumain(a0, a1);
    if !v8 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v8;
    v3 = format!("{}", &v0);
    v1 = *(&v3.vec.buf.inner.cap as &i128);
    v2 = v5;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5) {
        v3 = uucore::util_name();
        v4 = v9;
        eprint!("{}: ", &v3);
        eprintln!("{}", &v1);
    }
    if !*((v9 + 96) as &i64)(v0) as i8 {
        return *((v9 + 88) as &i64)(v0) as u32;
    }
    v3 = uucore::execution_phrase();
    v4 = v9;
    eprintln!("Try '{} --help' for more information.", &v3);
    return *((v9 + 88) as &i64)(v0) as u32;
}
