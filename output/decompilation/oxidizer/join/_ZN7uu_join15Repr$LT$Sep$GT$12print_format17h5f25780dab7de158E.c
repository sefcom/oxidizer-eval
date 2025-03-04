fn uu_join::Repr<Sep>::print_format(a0: &u64, a1: &u64, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x58]
    let v1: u64;  // [sp-0x50]
    let v2: u64;  // [sp-0x48]
    let v7: void*;  // r14
    let v8: u64;  // rax
    let v9: void*;  // rax
    let v10: u64;  // rax
    let v12: u64;  // rax
    let v15: u64;  // rdx
    let v16: u64;  // rdx

    v1 = a0[33];
    v0 = a0[34];
    v2 = a0[39];
    v7 = 0;
    loop {
        if v7 >= a0[40] {
            return 0;
        }
        v8 = <usize as core::iter::range::Step>::forward_unchecked(v7);
        if v7 {
            v9 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, <uu_join::MultiByteSep as uu_join::Separator>::output_separator(v1, v0), a2);
            if v9 {
                return v9;
            }
        }
        v10 = uu_join::State::print_line::{{closure}}(a2, a3, v7 * 16 + v2);
        if v10 {
            v12 = v10;
        } else {
            v12 = a0[36];
        }
        if v10 {
            v15 = v16;
        } else {
            v15 = a0[37];
        }
        v9 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v12, v15);
        v7 = v8;
        if v9 {
            return v9;
        }
    }
}
