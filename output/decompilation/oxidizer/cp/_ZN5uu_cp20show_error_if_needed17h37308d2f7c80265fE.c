fn uu_cp::show_error_if_needed(a0: &struct32) -> u64 {
    let v0: u64;  // [bp-0x68]
    let v1: u64;  // [bp-0x60]
    let v2: struct16;  // [bp-0x58]
    let v4: u64;  // rax
    let v5: u64;  // rdx

    v2 = a0;
    v4 = *(a0 as &i64);
    if v4 == 9223372036854775812 {
        return v4;
    } else if v4 != 9223372036854775815 {
        v0 = uucore::util_name();
        v1 = v5;
        eprint!("{}: ", &v0);
        return eprintln!("{}", &v2);
    } else {
        return v4;
    }
}
