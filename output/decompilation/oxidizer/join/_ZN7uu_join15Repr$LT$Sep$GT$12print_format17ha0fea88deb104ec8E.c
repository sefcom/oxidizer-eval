fn uu_join::Repr<Sep>::print_format(a0: &u64, a1: &u64, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v1: u64;  // [sp-0x40]
    let v6: void*;  // rbp
    let v7: u64;  // rax
    let v8: void*;  // rax
    let v9: u64;  // rax
    let v11: u64;  // rax
    let v14: u64;  // rdx
    let v15: u64;  // rdx

    v1 = a0[1];
    v0 = &a0[5] as &char + 1;
    v6 = 0;
    loop {
        if v6 >= a0[2] {
            return 0;
        }
        v7 = <usize as core::iter::range::Step>::forward_unchecked(v6);
        if v6 {
            v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, <uu_join::OneByteSep as uu_join::Separator>::output_separator(v0), 1);
            if v8 {
                return v8;
            }
        }
        v9 = uu_join::State::combine::{{closure}}(a2, v6 * 16 + v1);
        if !v9 {
            v11 = a0[3];
        } else {
            v11 = v9;
        }
        if v9 {
            v14 = v15;
        } else {
            v14 = a0[4];
        }
        v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v11, v14);
        v6 = v7;
        if v8 {
            return v8;
        }
    }
}
