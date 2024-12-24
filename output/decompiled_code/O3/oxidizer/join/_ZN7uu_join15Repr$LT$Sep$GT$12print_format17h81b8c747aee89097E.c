fn uu_join::Repr<Sep>::print_format(a0: &u64, a1: &u64, a2: u64, a3: u64) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v6: u64;  // rbp
    let v8: void*;  // rax
    let v10: u64;  // r15
    let v12: u64;  // r13

    v0 = a0[1];
    loop {
        v6 = 0;
        if v6 >= a0[2] {
            return 0;
        }
        if v6 {
            v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, " ");
            if v8 {
                return v8;
            }
        }
        v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v10, v12);
        if v8 {
            return v8;
        }
    }
}
