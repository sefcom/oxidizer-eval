fn uu_fmt::linebreak::write_newline(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // r12
    let v4: i64;  // r12
    let v5: u64;  // rax

    v0 = v2;
    v3 = *((a2 + 16) as &i64);
    if *(a2 as &i64) - v3 > 1 {
        *((*((a2 + 8) as &i64) + v3) as &i8) = 10;
        *((a2 + 16) as &unsigned long) = v4;
        if a1 >= *(a2 as &i64) - v4 {
            return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, a0, a1);
        }
    } else {
        v5 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, "\n");
        if v5 {
            return v5;
        } else if a1 >= *(a2 as &i64) - v4 {
            return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, a0, a1);
        }
    }
    memcpy(*((a2 + 8) as &i64) + v4, a0, a1);
    *((a2 + 16) as &u64) = v4 + a1;
    return 0;
}
