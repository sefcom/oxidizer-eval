fn uu_cat::write_end(a0: i64, a1: i64, a2: i64, a3: i8, a4: i8) -> u64 {
    let v1: u64;  // rdi
    let v2: u64;  // rsi
    let v3: u64;  // rdx

    if !(a4 & 1) {
        v1 = a1;
        v2 = a2;
        v3 = a0;
        if (a3 & 1) {
            return uu_cat::write_tab_to_end(a1, a2, a0);
        }
        return uu_cat::write_to_end(a1, a2, a0);
    } else if !(a3 & 1) {
        return uu_cat::write_nonprint_to_end(a1, a2, a0, "\t");
    } else {
        return uu_cat::write_nonprint_to_end(a1, a2, a0, "^I");
    }
}
