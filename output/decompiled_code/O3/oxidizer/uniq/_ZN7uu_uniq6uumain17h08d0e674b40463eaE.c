fn uu_uniq::uumain(a0: u64, a1: u64, a2: i64, a3: i64) -> u64 {
    let v0: u64;  // [sp-0xa8]
    let v1: struct48;  // [bp-0x98]
    let v2: u64;  // [sp-0x68]
    let v3: &u64;  // [sp-0x60]
    let v4: u64;  // [sp-0x48]
    let v5: u64;  // [sp-0x40]
    let v6: u64;  // [sp-0x38]
    let v7: u8;  // [bp-0x28]
    let v8: u8;  // [bp-0x18]
    let v10: &u64;  // rdx
    let v11: u64;  // rcx
    let v12: u64;  // rax

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v12 = uu_uniq::uumain::uumain(a0, a1, v10, v11);
    if !v12 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v12;
    v4 = &v0;
    v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v1 = struct48 {
        field_0: &g_416790
        field_8: 1
        field_16: &v4
        field_24: 1
        field_32: 0
        field_40: <UNKNOWN>
    };
    core::option::Option<T>::map_or_else(&v7, &v1);
    v4 = *(&v7 as &i128);
    v6 = *(&v8 as &i64);
    if <alloc::string::String as core::cmp::PartialEq<&str>>::ne(v5, *(&v8 as &i64)) as i8 {
        v2 = uucore::util_name();
        v3 = v10;
        eprint!("{:?}: ", &v2);
        eprintln!("{:?}", &v4);
    }
    if !v10[13]() {
        return v10[12]();
    }
    v2 = uucore::execution_phrase();
    v3 = v10;
    eprintln!("Try '{:?} --help' for more information.", &v2);
}
