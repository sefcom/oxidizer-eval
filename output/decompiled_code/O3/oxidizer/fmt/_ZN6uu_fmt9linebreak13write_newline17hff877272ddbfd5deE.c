fn uu_fmt::linebreak::write_newline(a0: u32, a1: u32, a2: void*) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v3: &u8;  // r12
    let v4: &u8;  // r12
    let v5: void*;  // rax

    v0 = v2;
    v3 = a2[2];
    if *(a2) - v3 > 1 {
        v3[a2[1]] = 10;
        v4 = v3 + 1;
        a2[2] = v4;
    } else {
        v5 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, &g_41e28e, 1);
        if v5 {
            return v5;
        }
        v4 = a2[2];
    }
    if *(a2) - v4 > a1 {
        memcpy(&v4[a2[1]], a0, a1);
        a2[2] = &v4[a1];
        return 0;
    }
    return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, a0, a1);
}
