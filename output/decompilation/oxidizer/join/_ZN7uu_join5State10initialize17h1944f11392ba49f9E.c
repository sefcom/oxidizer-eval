fn uu_join::State::initialize(a1: i64, a2: i8) -> : struct8 {
    let a0: void*;  // rsi
    let v1: u64;  // [bp-0xc0]
    let v2: u64;  // [bp-0xb8]
    let v3: struct48;  // [bp-0x70]
    let v4: struct48;  // [bp-0x40]
    let v5: struct48;  // [bp-0x40]
    let v7: u64;  // rdi
    let v8: u64;  // rdx

    v4 = uu_join::State::read_line(v7, a0);
    if v4.field_0 as i64 == 0x8000000000000000 {
        return;
    }
    if v4.field_0 as i64 == 9223372036854775809 {
        v1 = uucore::util_name();
        v2 = v8;
        eprint!("{}: ", &v1);
        eprintln!("{}", &v0);
        std::process::exit(1); /* do not return */
    }
    v3 = v5;
    v3 = v5;
    alloc::vec::Vec<T,A>::push(v7, &v3);
    if !a1 {
        goto LABEL_0x471200;
    } else {
        goto LABEL_0x4711ee;
    }
}
