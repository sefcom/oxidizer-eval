fn uu_cp::show_error_if_needed(a0: &u64) -> u64 {
    let v0: u64;  // [sp-0x68]
    let v1: u64;  // [sp-0x60]
    let v2: &u64;  // [sp-0x58]
    let v4: u64;  // rcx
    let v5: u64;  // rdx

    v2 = a0;
    v4 = *(a0) - 2;
    if v4 >= 11 {
        v4 = 4;
    }
    if v4 == 3 {
        return v4;
    } else if v4 == 6 {
        return v4;
    } else {
        v0 = uucore::util_name();
        v1 = v5;
        eprint!("{:?}: ", &v0);
        v4 = eprintln!("{:?}", &v2);
        return v4;
    }
}
