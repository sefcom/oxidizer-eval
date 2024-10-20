fn uu_ptx::trim_idx(a0: &u32, a1: u64, a2: &u32, a3: &u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: &u32;  // rdx
    let v3: u64;  // rax
    let v4: u32;  // r8d
    let v5: u32;  // r9d
    let v6: &u32;  // rdx
    let v7: u32;  // r9d
    let v8: u32;  // r10d

    v2 = a2;
    v0 = v3;
    if a2 > a3 {
        core::panicking::panic(); /* do not return */
    }
    if a3 > a1 {
        core::panicking::panic(); /* do not return */
    }
    if !(a2 < a3) {
        goto LABEL_53a5ee;
    }
    loop {
        v4 = *((a0 + 0x4 * v2 as u64) as &i32);
        if v4 - 9 >= 5 && v4 != 32 {
            if v4 < 128 {
                goto LABEL_53a5ee;
            }
            if v4 >> 8 > 31 {
                switch (v5) {
                case 32:
                    break;
                case 48:
                    break;
                default:
LABEL_53a5ee:
                    if v2 >= a3 {
                        return v6;
                    }
                    goto LABEL_53a5f7;
                }
            } else {
                switch (v5) {
                case 0:
                    break;
                case 22:
                    break;
                default:
LABEL_53a5ee:
                    if v2 >= a3 {
                        return v6;
                    }
                    goto LABEL_53a5f7;
                }
            }
            if !v4 == 5760 {
                goto LABEL_53a5ee;
            } else {
                goto LABEL_53a580;
            }
        }
LABEL_53a580:
        v2 = v2 as &char + 1;
        if a3 == v2 {
            return v6;
        }
    }
LABEL_53a5f7:
    loop {
        a3 = a3 as &char + 1;
        if a3 >= a1 {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v7 = *((a0 + 0x4 * a3 as u64) as &i32);
        if v7 - 9 >= 5 && v7 != 32 {
            break;
        }
LABEL_53a630:
        if v2 >= a3 {
            return v6;
        }
    }
    if v7 < 128 {
        goto LABEL_53a6b1;
    }
    if v7 >> 8 > 31 {
        switch (v8) {
        case 32:
            break;
        case 48:
            goto LABEL_53a618;
        default:
LABEL_53a6b1:
            return v6;
        }
    } else {
        switch (v8) {
        case 0:
            break;
        case 22:
            break;
        default:
LABEL_53a6b1:
            return v6;
        }
    }
LABEL_53a618:
    if !(!v7 == 5760) {
        goto LABEL_53a630;
    }
    goto LABEL_53a6b1;
}
