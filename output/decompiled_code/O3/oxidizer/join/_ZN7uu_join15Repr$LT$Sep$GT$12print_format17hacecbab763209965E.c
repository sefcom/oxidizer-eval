fn uu_join::Repr<Sep>::print_format(a0: &u64, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x50]
    let v1: u64;  // [sp-0x48]
    let v2: u64;  // [sp-0x40]
    let v8: u64;  // rbp
    let v10: u64;  // rdx
    let v11: void*;  // rax
    let v13: u64;  // r14
    let v15: u64;  // r13

    v1 = a0[33];
    v0 = a0[34];
    v2 = a0[39];
    loop {
        v8 = 0;
        if v8 >= a0[40] {
            return 0;
        }
        if v8 {
            v11 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, <uu_join::MultiByteSep as uu_join::Separator>::output_separator(v1, v0), v10);
            if v11 {
                return v11;
            }
        }
        v11 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v13, v15);
        if v11 {
            return v11;
        }
    }
}
