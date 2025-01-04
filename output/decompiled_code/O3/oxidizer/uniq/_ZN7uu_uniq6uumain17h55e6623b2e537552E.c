fn uu_uniq::uumain(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: struct48;  // [bp-0x98]
    let v2: i64;  // [sp-0x68]
    let v3: i64;  // [sp-0x60]
    let v4: i128;  // [sp-0x48]
    let v5: i64;  // [sp-0x40]
    let v6: i64;  // [sp-0x38]
    let v7: i192;  // [sp-0x28], Other Possible Types: struct24
    let v9: i64;  // rdx
    let v10: i64;  // rcx
    let v11: i64;  // rax

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v11 = uu_uniq::uumain::uumain(a0, a1, v9, v10);
    if !v11 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v11;
    v4 = &v0;
    v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v1 = struct48 {
        field_0: &g_416610
        field_8: 1
        field_16: &v4
        field_24: 1
        field_32: 0
        field_40: <UNKNOWN>
    };
    v7 = core::option::Option<T>::map_or_else(&v1);
    v4 = v7;
    v6 = *((&v7 as &char + 16) as &i64);
    if <alloc::string::String as core::cmp::PartialEq<&str>>::ne(v5, *((&v7 as &char + 16) as &i64)) as i8 {
        v2 = uucore::util_name();
        v3 = v9;
        eprint!("{:?}: ", &v2);
        eprintln!("{:?}", &v4);
    }
    if !*((v9 + 104) as &i64)() {
        return *((v9 + 96) as &i64)();
    }
    v2 = uucore::execution_phrase();
    v3 = v9;
    eprintln!("Try '{:?} --help' for more information.", &v2);
}
