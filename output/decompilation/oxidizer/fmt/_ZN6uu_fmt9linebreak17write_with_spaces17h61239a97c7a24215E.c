fn uu_fmt::linebreak::write_with_spaces(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: i64;  // rax
    let v5: u64;  // rsi
    let v6: u64;  // rdx
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // r12

    v0 = v2;
    if a2 == 1 {
        v7 = *((a3 + 16) as &i64);
        if *(a3 as &i64) - v7 >= 2 {
            *((*((a3 + 8) as &i64) + v7) as &i8) = 32;
            v4 = v7 + 1;
LABEL_46281c:
            *((a3 + 16) as &unsigned long) = v4;
        } else {
LABEL_46288b:
            v8 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v5, v6);
            if v8 {
                return v8;
            }
        }
    } else if a2 == 2 {
        v3 = *((a3 + 16) as &i64);
        if *(a3 as &i64) - v3 < 3 {
            goto LABEL_46288b;
        }
        *((*((a3 + 8) as &i64) + v3) as &i16) = 8224;
        v4 = v3 + 2;
        goto LABEL_46281c;
    }
    v9 = *((a3 + 16) as &i64);
    if a1 >= *(a3 as &i64) - v9 {
        return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, a0, a1);
    }
    memcpy(*((a3 + 8) as &i64) + v9, a0, a1);
    *((a3 + 16) as &u64) = v9 + a1;
    return 0;
}
