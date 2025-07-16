fn uu_fmt::linebreak::write_with_spaces(a0: i64, a1: i32, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // r14
    let v4: u64;  // rax
    let v5: u64;  // rax
    let v6: core::option::Option<(usize, char)>;  // rax
    let v7: u64;  // rsi
    let v8: u64;  // rdx
    let v9: core::result::Result<(), std::io::error::Error>;  // rax
    let v10: u64;  // r12

    v0 = v2;
    v3 = a1;
    if a2 == 1 {
        v4 = *((a3 + 16) as &i64);
        if *(a3 as &i64) - v4 >= 2 {
            *((*((a3 + 8) as &i64) + v4) as &i8) = 32;
            v6 = v4 + 1;
LABEL_4bc658:
            *((a3 + 16) as &core::option::Option<(usize, char)>) = v6;
        } else {
LABEL_4bc6c6:
            v9 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v7, v8);
            if let Err(_) = v9 {
                return v9;
            }
        }
    } else if a2 == 2 {
        v5 = *((a3 + 16) as &i64);
        if *(a3 as &i64) - v5 < 3 {
            goto LABEL_4bc6c6;
        }
        *((*((a3 + 8) as &i64) + v5) as &i16) = 8224;
        v6 = v5 + 2;
        goto LABEL_4bc658;
    }
    v10 = *((a3 + 16) as &i64);
    if *(a3 as &i64) - v10 <= v3 {
        return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, a0, v3);
    }
    memcpy(*((a3 + 8) as &i64) + v10, a0, v3);
    *((a3 + 16) as &u64) = v10 + v3;
    return 0;
}
