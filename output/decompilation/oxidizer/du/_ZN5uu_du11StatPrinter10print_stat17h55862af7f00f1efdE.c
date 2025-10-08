fn uu_du::StatPrinter::print_stat(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: Result<struct24, struct8>;  // [bp-0xf0], Other Possible Types: struct24, struct33
    let v1: u64;  // [bp-0xe8]
    let v2: struct60;  // [bp-0xc8], Other Possible Types: u64
    let v3: u64;  // [bp-0xc0]
    let v4: u128;  // [bp-0xb8]
    let v5: struct24;  // [bp-0x70]
    let v6: struct24;  // [bp-0x58]
    let v7: struct16;  // [bp-0x40]

    if *((a0 + 76) as &i8) == 3 {
        v0 = uu_du::StatPrinter::convert_size(a0, a2);
        print!("{}\t", &v0);
    } else {
        v0 = uu_du::get_time_secs(*((a0 + 76) as &i8), a1);
        match v0 {
            Ok(_) => {
                v4 = *((&v0 as &char + 16) as &i128) as u128;
                v2 = v0 as i64;
                v3 = v1;
                return alloc::boxed::Box<T>::new(&v2) as u64;
            },
            Err(_) => {
                v7 = <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<std::time::SystemTime>>::from(<std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(None, None, v3, 0) as u64, a2);
                v0 = struct33 {
                    field_0: *((a0 + 56) as &i128)
                    field_16: ""
                    field_32: 0
                };
                v2 = chrono::datetime::DateTime<Tz>::format_with_items(&v7, &v0);
                v6 = <T as alloc::string::SpecToString>::spec_to_string(&v2);
                v5 = uu_du::StatPrinter::convert_size(a0, a2);
                print!("{}\t{}\t", &v5, &v6);
            },
        }
    }
    core::result::Result<T,E>::unwrap(uucore::mods::display::print_verbatim(a1 + 64));
    print!("{}", a0 + 77);
    return 0;
}
