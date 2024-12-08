fn uu_csplit::SplitWriter::writeln(a0: void*, a1: u32, a2: u32) -> u64 {
    let v1: u64;  // rax
    let v2: &u8;  // r15
    let v3: void*;  // rax
    let v4: &u8;  // r15

    if a0[7] as i8 {
        return 0;
    }
    v1 = *(a0);
    if v1 == 0x8000000000000000 {
        panic!("trying to write to a split that was not created");
    }
    v2 = a0[2];
    if v1 - v2 > a2 {
        memcpy(&v2[a0[1]], a1, a2);
        v4 = &v2[a2];
        a0[2] = v4;
    } else {
        v3 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, a1, a2);
        if v3 {
            return v3;
        }
        v4 = a0[2];
    }
    if *(a0) - v4 > 1 {
        v4[a0[1]] = 10;
        a0[2] = v4 + 1;
    } else {
        v3 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, &g_470a13, 1);
        if v3 {
            return v3;
        }
    }
    a0[6] = a0[6] + a2 + 1;
}
