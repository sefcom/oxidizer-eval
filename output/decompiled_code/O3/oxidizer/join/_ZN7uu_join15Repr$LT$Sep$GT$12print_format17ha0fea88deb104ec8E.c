fn uu_join::Repr<Sep>::print_format(a0: &u64, a1: u64, a2: void*) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v1: u64;  // [sp-0x40]
    let v6: void*;  // rbp
    let v7: u64;  // rbp
    let v9: void*;  // rax
    let v10: u64;  // rax
    let v11: u64;  // r14
    let v13: u64;  // rbx
    let v14: u64;  // rdx

    v1 = a0[1];
    v0 = &a0[5] as &char + 1;
    v6 = 0;
    loop {
        v7 = v6;
        if v7 >= a0[2] {
            return 0;
        }
        if v7 {
            v9 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, <uu_join::OneByteSep as uu_join::Separator>::output_separator(v0), 1);
            if v9 {
                return v9;
            }
        }
        v10 = uu_join::State::combine::{{closure}}(a2, v7 * 16 + v1);
        if v10 {
            v11 = v10;
        } else {
            v11 = a0[3];
        }
        if !v10 {
            v13 = a0[4];
        } else {
            v13 = v14;
        }
        v9 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v11, v13);
        v6 = <usize as core::iter::range::Step>::forward_unchecked(v7);
        if v9 {
            return v9;
        }
    }
}
