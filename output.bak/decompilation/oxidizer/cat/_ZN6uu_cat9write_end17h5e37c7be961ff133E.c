fn uu_cat::write_end(a0: u64, a1: u64, a2: u64, a3: u8, a4: u8) -> u64 {
    let v1: &u8;  // rcx
    let v2: u64;  // r8

    if !a4 {
        if !a3 {
            goto LABEL_0x4b0bc0;
        }
        return uu_cat::write_tab_to_end(a1, a2, a0);
    }
    if a3 {
        v1 = &g_41ce28;
        v2 = 2;
    } else {
        v1 = &g_41ce23;
        v2 = 1;
    }
    return uu_cat::write_nonprint_to_end(a1, a2, a0, v1, v2);
}
