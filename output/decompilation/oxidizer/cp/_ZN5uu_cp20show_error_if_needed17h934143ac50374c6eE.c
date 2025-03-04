fn uu_cp::show_error_if_needed(a0: &u64) -> u64 {
    let v0: u64;  // [sp-0x60]
    let v1: &u64;  // [sp-0x58]
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: u64;  // rdx

    v1 = a0;
    v4 = (v3 < 11 ? *(a0) - 2 : 4);
    if v4 == 3 {
        return v4;
    } else if v4 == 6 {
        return v4;
    } else {
        v0 = v5;
        v4 = show_error!("{}", &v1);
        return v4;
    }
}
