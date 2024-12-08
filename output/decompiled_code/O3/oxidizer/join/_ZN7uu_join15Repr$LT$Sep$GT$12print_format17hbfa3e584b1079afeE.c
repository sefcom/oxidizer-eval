fn uu_join::Repr<Sep>::print_format(a0: &u64, a1: u64, a2: u64, a3: u64) -> u64 {
    let v0: u64;  // [sp-0x50]
    let v1: u64;  // [sp-0x48]
    let v7: u64;  // rbp
    let v9: void*;  // rax
    let v11: u64;  // r15
    let v13: u64;  // r13

    v1 = a0[1];
    v0 = &a0[5] as &char + 1;
    loop {
        v7 = 0;
        if v7 >= a0[2] {
            return 0;
        }
        if v7 {
            v9 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, <uu_join::OneByteSep as uu_join::Separator>::output_separator(v0), 1);
            if v9 {
                return v9;
            }
        }
        v9 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v11, v13);
        if v9 {
            return v9;
        }
    }
}
