fn uu_fmt::linebreak::write_with_spaces(a0: u32, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v3: &u8;  // rax
    let v4: &u8;  // rax
    let v5: u64;  // rax
    let v6: u64;  // rsi
    let v7: u64;  // rdx
    let v8: void*;  // rax
    let v9: &u8;  // r12

    v0 = v2;
    if a2 == 1 {
        v3 = a3[2];
        if *(a3) - v3 <= 1 {
            v6 = &g_41e291;
            v7 = 1;
            goto LABEL_4bdf16;
        } else {
            v3[a3[1]] = 32;
            v5 = v3 + 1;
        }
    } else {
        if !(a2 == 2) {
            goto LABEL_4bdeac;
        }
        v4 = a3[2];
        if *(a3) - v4 > 2 {
            *(&v4[a3[1]] as &i16) = 8224;
            v5 = v4 + 2;
        } else {
            v6 = &g_41e28f;
            v7 = 2;
LABEL_4bdf16:
            v8 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v6, v7);
            if v8 {
                return v8;
            }
LABEL_4bdeac:
            v9 = a3[2];
            if *(a3) - v9 > a1 {
                memcpy(&v9[a3[1]], a0, a1);
                a3[2] = &v9[a1];
                return 0;
            }
            return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, a0, a1);
        }
    }
    a3[2] = v5;
    goto LABEL_4bdeac;
}
