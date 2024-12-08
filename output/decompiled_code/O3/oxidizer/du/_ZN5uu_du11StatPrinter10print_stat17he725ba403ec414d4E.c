fn uu_du::StatPrinter::print_stat(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: Result<struct24, struct8>;  // [sp-0xe0], Other Possible Types: struct24, struct32
    let v2: i416;  // [sp-0xc0], Other Possible Types: struct52, struct32
    let v3: i64;  // [sp-0xb8]
    let v4: struct24;  // [sp-0x70]
    let v5: struct24;  // [sp-0x58]
    let v6: struct16;  // [sp-0x40], Other Possible Types: i128
    let v8: i64;  // rax
    let v10: i64;  // rdx
    let v11: i64;  // rcx
    let v12: i64;  // r8
    let v13: i64;  // r9
    let v14: i64;  // rsi

    v8 = *((a0 + 76) as &i8);
    if v8 == 3 {
        v0 = uu_du::StatPrinter::convert_size(a0, a2);
        print!("{:?}\t", &v0);
    } else {
        v0 = uu_du::get_time_secs(v8 & 4294967295, a1);
        if v2 != 5 {
            v2 = struct32 {
                field_0: v0
                field_8: v1
                field_16: v0
            };
            return alloc::boxed::Box<T>::new(&v2);
        }
        v6 = <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<std::time::SystemTime>>::from(<std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(0, 0, v3, 0), v10);
        *(&v0.field_0 as &struct32) = struct32 {
            field_0: *((a0 + 56) as &i128)
            field_16: 8
            field_24: 0
        };
        v2 = chrono::datetime::DateTime<Tz>::format_with_items(&v6, &v0);
        v5 = <T as alloc::string::ToString>::to_string(&v2, v10, v11, v12, v13);
        v4 = uu_du::StatPrinter::convert_size(a0, a2);
        print!("{:?}\t{:?}\t", &v4, &v5);
    }
    core::result::Result<T,E>::unwrap(uucore::mods::display::print_verbatim(a1 + 64, v14, v10));
    print!("{:?}", a0 + 77);
    return 0;
}
