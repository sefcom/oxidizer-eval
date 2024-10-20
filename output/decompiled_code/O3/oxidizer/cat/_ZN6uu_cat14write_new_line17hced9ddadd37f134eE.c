fn uu_cat::write_new_line(a0: &u64, a1: u32, a2: &u64, a3: void*, a4: u8) -> u64 {
    let v0: &struct_0;  // [sp-0xa8]
    let v1: u64;  // [sp-0xa0]
    let v2: struct48;  // [bp-0x98]
    let v3: u64;  // [sp-0x68]
    let v4: void*;  // [sp-0x58]
    let v5: u64;  // [sp-0x50]
    let v6: void*;  // [sp-0x48]
    let v7: u64;  // [sp-0x40]
    let v8: u8;  // [sp-0x38]
    let v10: u64;  // rax
    let v11: u64;  // rsi
    let v12: u64;  // rdx

    if !a3->field_9 {
        v10 = a3->field_8;
        if v10 && *(a2 as &i8) && a3->field_a {
            goto LABEL_4864ab;
        }
        a3->field_a = 1;
        if v10 && *((a2 as &char + 4) as &i8) == 2 {
            v0 = a3;
            v1 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v3 = 2;
            v4 = 0;
            v5 = 6;
            v6 = 0;
            v7 = 32;
            v8 = 3;
            v2 = struct48 {
                field_0: &g_4e4e70
                field_8: 2
                field_16: &v0
                field_24: 1
                field_32: &v3
                field_40: 1
            };
            v10 = std::io::Write::write_fmt(a1, &v2);
            if v10 {
                *(a0) = 0x8000000000000000;
                a0[1] = v10;
                return v10;
            }
            a3->field_0 = a3->field_0 + 1;
        }
        if !(!*((a2 as &char + 2) as &i8)) {
            goto LABEL_486448;
        }
    } else if !*((a2 as &char + 2) as &i8) {
        v10 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, &g_419258, 1);
        if v10 {
            *(a0) = 0x8000000000000000;
            a0[1] = v10;
            return v10;
        }
        a3->field_9 = 0;
    } else {
        v10 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, &g_419274, 2);
        if v10 {
            *(a0) = 0x8000000000000000;
            a0[1] = v10;
            return v10;
        }
        a3->field_9 = 0;
LABEL_486448:
        v11 = &g_419272;
        v12 = 2;
        goto LABEL_486481;
    }
    v11 = &g_419259;
    v12 = 1;
LABEL_486481:
    v10 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, v11, v12);
    if !(!v10) || !(!a4) && !(!((v10 = <std::io::stdio::StdoutLock as std::io::Write>::flush(a1), v10))) {
        *(a0) = 0x8000000000000000;
        a0[1] = v10;
        return v10;
    }
LABEL_4864ab:
    *(a0) = 9223372036854775814;
    return v10;
}
