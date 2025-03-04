fn uu_join::State::initialize(a0: &struct8, a1: u32, a2: u8) -> u64 {
    let v0: i64;  // [sp-0xc8]
    let v1: i64;  // [sp-0xb8]
    let v2: struct48;  // [bp-0x70]
    let v3: Option<Result<struct48, struct8>>;  // [sp-0x40]
    let v5: i64;  // rax
    let v6: i64;  // rdx

    v3 = uu_join::State::read_line(a0);
    v5 = v3 as i64;
    if v5 == 0x8000000000000000 {
        return 0;
    } else if v5 == 9223372036854775809 {
        v0 = *((&v3 as &char + 8) as &i64);
        v1 = v6;
        show_error!("{}", &v0);
        std::process::exit(1); /* do not return */
    } else {
        v2 = struct48 {
            field_0: v5
            field_8: *((&v3 as &char + 8) as &i128)
            field_24: *((&v3 as &char + 24) as &i128)
            field_40: *((&v3 as &char + 40) as &i64)
        };
        alloc::vec::Vec<T,A>::push(a0, &v2);
        if a2 {
            return *((*((a0 + 8) as &i64) + 16) as &i64);
        }
        return 0;
    }
}
