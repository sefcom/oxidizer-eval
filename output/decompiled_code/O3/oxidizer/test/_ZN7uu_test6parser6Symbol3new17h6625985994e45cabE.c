fn uu_test::parser::Symbol::new(a0: &u64, a1: &u64) -> u64 {
    let v0: Enum;  // [sp-0x38], Other Possible Types: u128
    let v1: i8;  // [bp-0x28]
    let v3: u64;  // r14
    let v4: u64;  // r15
    let v5: u64;  // r12
    let v6: &u64;  // rax
    let v7: u64;  // rcx
    let v8: u64;  // rcx

    v3 = *(a1);
    if v3 == 0x8000000000000000 {
        *(a0) = 6;
        return a0;
    }
    v4 = a1[1];
    v5 = a1[2];
    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v4, v5);
    if v0 as i64 {
LABEL_4822a7:
        a0[1] = v3;
        a0[2] = v4;
        a0[3] = v5;
        *(a0) = 3;
        return a0;
    }
    v6 = *((&v0 as &char + 8) as &i64);
    v7 = v1;
    if v7 == 3 {
        if (!(!(*((v6 as &char + 2) as &i8) ^ 113)) || !(!(*(v6 as &i16) ^ 25901))) && (!(!(*((v6 as &char + 2) as &i8) ^ 101)) || !(!(*(v6 as &i16) ^ 26413))) && (!(!(*((v6 as &char + 2) as &i8) ^ 116)) || !(!(*(v6 as &i16) ^ 26413))) && (!(!(*((v6 as &char + 2) as &i8) ^ 101)) || !(!(*(v6 as &i16) ^ 27693))) && (!(!(*((v6 as &char + 2) as &i8) ^ 116)) || !(!(*(v6 as &i16) ^ 27693))) && (!(!(*((v6 as &char + 2) as &i8) ^ 101)) || !(!(*(v6 as &i16) ^ 28205))) {
            if (!(!(*((v6 as &char + 2) as &i8) ^ 102)) || !(!(*(v6 as &i16) ^ 25901))) && (!(!(*((v6 as &char + 2) as &i8) ^ 116)) || !(!(*(v6 as &i16) ^ 28205))) && (!(!(*((v6 as &char + 2) as &i8) ^ 116)) || !(!(*(v6 as &i16) ^ 28461))) {
                a0[1] = v3;
                a0[2] = v4;
                a0[3] = v5;
                *(a0) = 3;
                return a0;
            }
            a0[2] = v3;
            a0[3] = v4;
            a0[4] = v5;
            a0[1] = 2;
            *(a0) = 4;
            return a0;
        }
        a0[2] = v3;
        a0[3] = v4;
        a0[4] = v5;
        a0[1] = 1;
        *(a0) = 4;
        return a0;
    }
    if v7 != 2 {
        if v7 != 1 {
            a0[1] = v3;
            a0[2] = v4;
            a0[3] = v5;
            *(a0) = 3;
            return a0;
        }
        if *(v6 as &i8) == 40 {
            v8 = 0;
            goto LABEL_4825a5;
        } else {
            v8 = 1;
            if *(v6 as &i8) == 33 {
LABEL_4825a5:
                *(a0) = v8;
                if v3 {
                    return a0;
                }
                return a0;
            } else if *(v6 as &i8) != 61 {
                a0[1] = v3;
                a0[2] = v4;
                a0[3] = v5;
                *(a0) = 3;
                return a0;
            }
        }
    } else {
        if !(*(v6 as &i16) != 24877) || !(*(v6 as &i16) != 28461) {
            a0[1] = v3;
            a0[2] = v4;
            a0[3] = v5;
            *(a0) = 2;
            return a0;
        }
        if *(v6 as &i16) != 15677 && *(v6 as &i16) != 15649 {
            if !(*(v6 as &i16) != 28205) || !(*(v6 as &i16) != 31277) {
                a0[2] = v3;
                a0[3] = v4;
                a0[4] = v5;
                a0[1] = 0;
                *(a0) = 5;
                return a0;
            } else if ... {
                a0[2] = v3;
                a0[3] = v4;
                a0[4] = v5;
                a0[1] = 1;
                *(a0) = 5;
                return a0;
            }
            goto LABEL_4822a7;
        }
    }
    a0[2] = v3;
    a0[3] = v4;
    a0[4] = v5;
    a0[1] = 0;
    *(a0) = 4;
    return a0;
}
