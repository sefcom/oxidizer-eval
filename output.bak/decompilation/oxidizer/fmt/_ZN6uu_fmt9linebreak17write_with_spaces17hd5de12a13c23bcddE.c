fn uu_fmt::linebreak::write_with_spaces(a0: u32, a1: u32, a2: u32, a3: &struct8) -> u64 {
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
        v3 = a3->field_10;
        if a3->field_0 - v3 < 2 {
            v6 = &g_41e189;
            v7 = 1;
            goto LABEL_4bc6c6;
        } else {
            v3[a3->field_8] = 32;
            v5 = v3 + 1;
        }
    } else {
        if !(a2 == 2) {
            goto LABEL_4bc65c;
        }
        v4 = a3->field_10;
        if a3->field_0 - v4 >= 3 {
            *(&v4[a3->field_8] as &i16) = 8224;
            v5 = v4 + 2;
        } else {
            v6 = &g_41e187;
            v7 = 2;
LABEL_4bc6c6:
            v8 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v6, v7);
            if v8 {
                return v8;
            }
LABEL_4bc65c:
            v9 = a3->field_10;
            if a3->field_0 - v9 > a1 {
                memcpy(&v9[a3->field_8], a0, a1);
                a3->field_10 = &v9[a1];
                return 0;
            }
            return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, a0, a1);
        }
    }
    a3->field_10 = v5;
    goto LABEL_4bc65c;
}
