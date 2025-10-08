fn uu_seq::uumain(a0: u32, a1: u32) -> long long {
    let v0: u64;  // [bp-0x90]
    let v1: alloc::string::String;  // [bp-0x50], Other Possible Types: u64
    let v2: i64;  // [bp-0x48]
    let v3: u64;  // [bp-0x40]
    let v4: u128;  // [bp-0x28]
    let v5: u64;  // [bp-0x18]
    let v8: u64;  // rax
    let v9: i64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers());
    v8 = uu_seq::uumain::uumain(a0, a1);
    if !v8 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v8;
    v1 = format!("{}", &v0);
    v4 = *(&v1.vec.buf.inner.cap as &i128);
    v5 = v3;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt, v3, 1, 0) {
        v1 = uucore::util_name();
        v2 = v9;
        eprint!("{}: ", &v1);
        eprintln!("{}", &v4);
    }
    if !*((v9 + 96) as &i64)(v0) as i8 {
        return *((v9 + 88) as &i64)(v0) as u32;
    }
    v1 = uucore::execution_phrase();
    v2 = v9;
    eprintln!("Try '{} --help' for more information.", &v1);
    return *((v9 + 88) as &i64)(v0) as u32;
}
