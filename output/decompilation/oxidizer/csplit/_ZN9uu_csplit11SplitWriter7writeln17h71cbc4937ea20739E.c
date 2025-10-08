fn uu_csplit::SplitWriter::writeln(a0: &struct16, a1: i64, a2: i64) -> u64 {
    let v1: u64;  // r15
    let v2: u64;  // rax

    if !*((a0 + 56) as &i8) {
        if !((((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char) {
            v1 = *((a0 + 16) as &i64);
            if a2 < *(a0 as &i64) - v1 {
                memcpy(*((a0 + 8) as &i64) + v1, a1, a2);
                *((a0 + 16) as &u64) = v1 + a2;
            } else {
                v2 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, a1, a2);
                if v2 {
                    return v2;
                }
            }
            *((a0 + 48) as &u64) = *((a0 + 48) as &i64) + a2;
        } else {
            panic!("trying to write to a split that was not created");
        }
    }
    return 0;
}
