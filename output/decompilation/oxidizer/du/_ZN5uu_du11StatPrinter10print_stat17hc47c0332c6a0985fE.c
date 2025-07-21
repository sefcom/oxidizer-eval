fn uu_du::StatPrinter::print_stat(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: Result<struct24, struct8>;  // [bp-0xe0], Other Possible Types: struct32
    let v1: u64;  // [bp-0xd8]
    let v2: struct52;  // [bp-0xc0], Other Possible Types: u64
    let v3: u64;  // [bp-0xb8]
    let v4: u128;  // [bp-0xb0]
    let v6: struct24;  // [bp-0x58]
    let v7: struct12;  // [bp-0x40]
    let v9: u64;  // rcx
    let v11: u64;  // rcx

    if *((a0 + 76) as &i8) == 3 {
        uu_du::StatPrinter::convert_size(a0, a2, v9);
        print!("{}\t", &v0 as u8);
    } else {
        v0 = uu_du::get_time_secs(*((a0 + 76) as &i8), a1);
        match v0 {
            Ok(_) => {
                v4 = *((&v0 as &char + 16) as &i128) as u128;
                v2 = v0 as i64;
                v3 = v1;
                return alloc::boxed::Box<T>::new(&v2);
            },
            Err(_) => {
                v7 = <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<std::time::SystemTime>>::from(<std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(None, None, v3, 0) as u64, a2);
                v0 = struct32 {
                    field_0: *((a0 + 56) as &i128)
                    field_16: 8
                    field_24: 0
                };
                v2 = chrono::datetime::DateTime<Tz>::format_with_items(&v7, &v0);
                v6 = <T as alloc::string::ToString>::to_string(&v2);
                uu_du::StatPrinter::convert_size(a0, a2, v11);
                print!("{}\t{}\t", &v5, &v6);
            },
        }
    }
    core::result::Result<T,E>::unwrap(uucore::mods::display::print_verbatim(a1 + 8));
    print!("{}", a0 + 77);
    return 0;
}
