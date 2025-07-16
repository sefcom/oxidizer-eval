fn uu_fmt::linebreak::write_newline(a0: i64, a1: i32, a2: i64) -> long long {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // rbx
    let v4: u64;  // r12
    let v5: u64;  // r12
    let v6: core::result::Result<(), std::io::error::Error>;  // rax

    v0 = v2;
    v3 = a1;
    v4 = *((a2 + 16) as &i64);
    if *(a2 as &i64) - v4 > 1 {
        *((*((a2 + 8) as &i64) + v4) as &i8) = 10;
        v5 = v4 + 1;
        *((a2 + 16) as &u64) = v5;
    } else {
        v6 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, "\n");
        if let Err(_) = v6 {
            return v6;
        }
    }
    if *(a2 as &i64) - v5 <= v3 {
        return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, a0, v3);
    }
    memcpy(*((a2 + 8) as &i64) + v5, a0, v3);
    *((a2 + 16) as &u64) = v5 + v3;
    return 0;
}
