fn uu_du::StatPrinter::print_stat(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: struct32;  // [sp-0xe0], Other Possible Types: Result<struct24, struct8>, struct24
    let v1: struct52;  // [sp-0xc0], Other Possible Types: int, unsigned long
    let v2: i64;  // [sp-0xb8]
    let v3: struct24;  // [sp-0x70]
    let v4: struct24;  // [sp-0x58]
    let v5: struct16;  // [sp-0x40]
    let v7: i64;  // rax

    v7 = *((a0 + 76) as &i8);
    if v7 as u8 == 3 {
        v0 = uu_du::StatPrinter::convert_size(a0, a2);
        print!("{}	", &v0);
    } else {
        v0 = uu_du::get_time_secs(v7 & 4294967295, a1);
        if v1 != 5 {
            return alloc::boxed::Box<T>::new(&v1);
        }
        v5 = <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<std::time::SystemTime>>::from(<std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(0, 0, v2, 0), a2);
        v0 = struct32 {
            field_0: *((a0 + 56) as &i128)
            field_16: 8
            field_24: 0
        };
        v1 = chrono::datetime::DateTime<Tz>::format_with_items(&v5, &v0);
        v4 = <T as alloc::string::ToString>::to_string(&v1);
        v3 = uu_du::StatPrinter::convert_size(a0, a2);
        print!("{}	{}	", &v3, &v4);
    }
    core::result::Result<T,E>::unwrap(uucore::mods::display::print_verbatim(a1 + 64));
    print!("{}", a0 + 77);
    return 0;
}
