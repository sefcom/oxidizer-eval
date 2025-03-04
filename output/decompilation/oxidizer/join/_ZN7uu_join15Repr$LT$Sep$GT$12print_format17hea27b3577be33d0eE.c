fn uu_join::Repr<Sep>::print_format(a0: &u64, a1: &u64, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v5: void*;  // rbp
    let v6: u64;  // rax
    let v7: void*;  // rax
    let v8: u64;  // rax
    let v10: u64;  // rax
    let v13: u64;  // rdx
    let v14: u64;  // rdx

    v0 = a0[1];
    v5 = 0;
    while (v5 < a0[2]) {
        v6 = <usize as core::iter::range::Step>::forward_unchecked(v5);
        if v5 {
            v7 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, " ");
            if v7 {
                return v7;
            }
        }
        v8 = uu_join::State::combine::{{closure}}(a2, v5 * 16 + v0);
        if v8 {
            v10 = v8;
        } else {
            v10 = a0[3];
        }
        if !v8 {
            v13 = a0[4];
        } else {
            v13 = v14;
        }
        v7 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v10, v13);
        v5 = v6;
        if v7 {
            return v7;
        }
    }
    return 0;
}
