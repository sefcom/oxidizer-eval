fn uu_join::State::initialize(a0: &struct8, a1: u32, a2: u8) -> u64 {
    let v0: i64;  // [sp-0xc8]
    let v1: i64;  // [sp-0xc0]
    let v2: i64;  // [sp-0xb8]
    let v3: struct48;  // [bp-0x70]
    let v4: i384;  // [sp-0x40], Other Possible Types: Option<Result<struct48, struct8>>
    let v6: i64;  // rax
    let v7: i64;  // rdx

    v4 = uu_join::State::read_line(a0);
    v6 = v4;
    if v6 == 0x8000000000000000 {
        return 0;
    } else if v6 == 9223372036854775809 {
        v0 = *((&v4 as &char + 8) as &i64);
        v1 = uucore::util_name();
        v2 = v7;
        eprint!("{}: ", &v1);
        eprintln!("{}", &v0);
        std::process::exit(1); /* do not return */
    } else {
        v3 = struct48 {
            field_0: v6
            field_8: *((&v4 as &char + 8) as &i128)
            field_24: *((&v4 as &char + 24) as &i128)
            field_40: *((&v4 as &char + 40) as &i64)
        };
        alloc::vec::Vec<T,A>::push(a0, &v3);
        if a2 {
            return *((*((a0 + 8) as &i64) + 16) as &i64);
        }
        return 0;
    }
}
