fn uu_ls::colors::StyleManager::is_current_style(a0: &u64, a1: &u64) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rcx
    let v3: u8;  // dl
    let v4: u64;  // rcx
    let v5: u8;  // dl
    let v8: u64;  // rax
    let v10: u64;  // rax
    let v12: u64;  // rax
    let v14: void*;  // rax
    let v15: u8;  // dl
    let v16: u8;  // cl

    v1 = a0[1];
    if v1 == 2 {
        return 0;
    }
    v2 = *((&a0[2] as &char + 1) as &i8);
    v3 = *((&a1[1] as &char + 1) as &i8);
    if v2 == 18 {
        if v3 == 18 {
            goto LABEL_4e3171;
        }
    } else {
        if v3 != 18 && v2 == v3 {
            if v2 == 16 {
                if *((&a0[2] as &char + 2) as &i8) == *((&a1[1] as &char + 2) as &i8) {
                    goto LABEL_4e3171;
                }
            } else {
                if !(v2 == 17) || !(*((&a0[2] as &char + 2) as &i8) != *((&a1[1] as &char + 2) as &i8)) && !(*((&a0[2] as &char + 3) as &i8) != *((&a1[1] as &char + 3) as &i8)) && !(*((&a0[2] as &char + 4) as &i8) != *((&a1[1] as &char + 4) as &i8)) {
LABEL_4e3171:
                    v4 = *((&a0[2] as &char + 5) as &i8);
                    v5 = *((&a1[1] as &char + 5) as &i8);
                    if v4 == 18 {
                        if v5 != 18 {
                            return 0;
                        }
                        goto LABEL_4e3187;
                    } else {
                        if v5 == 18 {
                            return 0;
                        }
                        if v4 != v5 {
                            return 0;
                        }
                        if v4 == 16 {
                            if *((&a0[2] as &char + 6) as &i8) != *((&a1[1] as &char + 6) as &i8) {
                                return 0;
                            }
                            goto LABEL_4e3187;
                        }
                        if v4 != 17 || *((&a0[2] as &char + 6) as &i8) == *((&a1[1] as &char + 6) as &i8) && *((&a0[2] as &char + 7) as &i8) == *((&a1[1] as &char + 7) as &i8) && a0[3] as i8 == a1[2] as i8 {
LABEL_4e3187:
                            if (v1 & 255 & 255) != !*(a1 as &i8) && *((&a0[1] as &char + 1) as &i8) != !*((a1 as &char + 1) as &i8) && *((&a0[1] as &char + 2) as &i8) != !*((a1 as &char + 2) as &i8) {
                                v8 = v1 | -0x100 | (v1 & 255 & 255) | -0x100 | *((&a0[1] as &char + 1) as &i8) | -0x100 | *((&a0[1] as &char + 2) as &i8) | -0x100 | *((&a0[1] as &char + 3) as &i8);
                                if *((&a0[1] as &char + 3) as &i8) != !*((a1 as &char + 3) as &i8) && *((&a0[1] as &char + 4) as &i8) != !*((a1 as &char + 4) as &i8) {
                                    v10 = v8 | -0x100 | *((&a0[1] as &char + 4) as &i8) | -0x100 | *((&a0[1] as &char + 5) as &i8);
                                    if *((&a0[1] as &char + 5) as &i8) != !*((a1 as &char + 5) as &i8) && *((&a0[1] as &char + 6) as &i8) != !*((a1 as &char + 6) as &i8) {
                                        v12 = v10 | -0x100 | *((&a0[1] as &char + 6) as &i8) | -0x100 | *((&a0[1] as &char + 7) as &i8);
                                        if *((&a0[1] as &char + 7) as &i8) != !*((a1 as &char + 7) as &i8) && (!a1[1] as i8 ^ a0[2] as i8) {
                                            v15 = *((&a0[3] as &char + 1) as &i8);
                                            v16 = *((&a1[2] as &char + 1) as &i8);
                                            v14 = v12 | -0x100 | a0[2] as i8 | -0x100 | v16 == 18 & v15 == 18;
                                            if v15 == 18 {
                                                return v14;
                                            } else if v16 == 18 {
                                                return v14;
                                            } else {
                                                return <lscolors::style::Color as core::cmp::PartialEq>::eq((&a0[3] as &char + 1) as &u64, (&a1[2] as &char + 1) as &u64);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
