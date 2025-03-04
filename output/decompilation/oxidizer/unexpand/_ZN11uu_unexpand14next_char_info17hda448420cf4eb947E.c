fn uu_unexpand::next_char_info(a0: void*, a1: u32, a2: &u8, a3: u32, a4: &u8) -> u64 {
    let v0: i64;  // [sp-0x40]
    let v1: i64;  // [sp-0x38]
    let v2: Result<struct16, struct10>;  // [sp-0x30]
    let v4: i64;  // r14
    let v5: i32;  // ecx
    let v6: i64;  // rax
    let v7: i64;  // rcx
    let v8: i32;  // edx
    let v9: i64;  // r14

    if !a1 {
        if a4 < a3 {
            v6 = 1;
            match (v5) {
                8 => {
                    break;
                }
                9 => {
                    break;
                }
                32 => {
                    break;
                }
                _ => {
                    goto LABEL_4b2aa1;
                }
            }
        }
LABEL_4b2aa1:
        v7 = 1;
    } else {
        v4 = *((a2 + a4) as &i8) < 0;
        if v4 + a4 + 1 > a3 {
            v6 = 1;
            goto LABEL_4b2aa1;
        } else {
            v2 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a4, v4 + a4 + 1, a2, a3, "src/uu/unexpand/src/unexpand.rs"), a2);
            match v2 {
                Err(_) => {
                    v6 = 1;
                    v7 = 1;
                },
                Ok(_) => {
                    v0 = *((&v2 as &char + 8) as &i64);
                    v1 = *((&v2 as &char + 16) as &i64) + v0;
                    v7 = 1;
                    if !core::str::validations::next_code_point(&v0) as i32 {
                        v6 = 1;
                    } else {
                        match (v8) {
                            8 => {
                                v6 = 0;
                                break;
                            }
                            9 => {
                                v6 = 0;
                                break;
                            }
                            32 => {
                                v6 = 0;
                                break;
                            }
                            _ => {
                                v9 = v4 + 1;
                                if v8 < 127 {
                                    v6 = (32 <= v8) as u8 as u64;
                                    v7 = v9;
                                    break;
                                } else if v8 <= 159 {
                                    v6 = 0;
                                    v7 = v9;
                                    break;
                                } else {
                                    v6 = unicode_width::tables::charwidth::lookup_width(v8 as u64);
                                    v7 = v9;
                                    break;
                                }
                            }
                        }
                    }
                },
            }
        }
    }
    *((a0 + 8) as &i8) = 3;
    *(a0 as &unsigned long) = v6;
    *((a0 + 16) as &unsigned long) = v7;
    return v6;
}
