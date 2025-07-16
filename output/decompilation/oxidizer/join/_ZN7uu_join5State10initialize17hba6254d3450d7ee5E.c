fn uu_join::State::initialize(a1: i64, a2: i8) -> : struct8 {
    let a0: void*;  // rsi
    let v1: u64;  // [bp-0xc0]
    let v2: u64;  // [bp-0xb8]
    let v3: struct8;  // [bp-0x70], Other Possible Types: u64
    let v4: u8;  // [bp-0x68]
    let v5: u128;  // [bp-0x58]
    let v6: u64;  // [bp-0x48]
    let v7: struct48;  // [bp-0x40]
    let v8: u128;  // [bp-0x28]
    let v10: &u64;  // rdi
    let v11: u64;  // rdx

    v7 = uu_join::State::read_line(v10, a0);
    if v7.field_0 as i64 == 0x8000000000000000 {
        return;
    }
    if v7.field_0 as i64 == 9223372036854775809 {
        v1 = uucore::util_name();
        v2 = v11;
        eprint!("{}: ", &v1);
        eprintln!("{}", &v0);
        std::process::exit(1); /* do not return */
    }
    v3 = v7.field_0;
    memcpy(&v4, &v7 as u8, 16);
    v5 = v8;
    v6 = *((&v7.field_32 as &char + 8) as &i64);
    v3 = alloc::vec::Vec<T,A>::push(a1);
    if !(a1 & 255) {
        goto LABEL_0x4716e0;
    } else {
        goto LABEL_0x4716ce;
    }
}
