fn uu_join::Repr<Sep>::print_format(a0: &u64, a1: &u64, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v5: void*;  // rbp
    let v6: u64;  // rbp
    let v8: void*;  // rax
    let v9: u64;  // rax
    let v10: u64;  // r15
    let v12: u64;  // r13
    let v13: u64;  // rdx

    v0 = a0[1];
    v5 = 0;
    loop {
        v6 = v5;
        if v6 >= a0[2] {
            return 0;
        }
        if v6 {
            v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, " ");
            if v8 {
                return v8;
            }
        }
        v9 = uu_join::State::print_line::{{closure}}(a2, a3, v6 * 16 + v0);
        if v9 {
            v10 = v9;
        } else {
            v10 = a0[3];
        }
        if !v9 {
            v12 = a0[4];
        } else {
            v12 = v13;
        }
        v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v10, v12);
        v5 = <usize as core::iter::range::Step>::forward_unchecked(v6);
        if v8 {
            return v8;
        }
    }
}
