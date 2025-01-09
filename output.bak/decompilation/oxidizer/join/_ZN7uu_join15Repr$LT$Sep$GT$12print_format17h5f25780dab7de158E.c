fn uu_join::Repr<Sep>::print_format(a0: &u64, a1: &u64, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x58]
    let v1: u64;  // [sp-0x50]
    let v2: u64;  // [sp-0x48]
    let v7: void*;  // r14
    let v8: u64;  // r14
    let v10: u32;  // rdx
    let v11: void*;  // rax
    let v12: u64;  // rax
    let v13: u64;  // r15
    let v15: u64;  // rbx

    v1 = a0[33];
    v0 = a0[34];
    v2 = a0[39];
    v7 = 0;
    loop {
        v8 = v7;
        if v8 >= a0[40] {
            return 0;
        }
        if v8 {
            v11 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, <uu_join::MultiByteSep as uu_join::Separator>::output_separator(v1, v0), v10);
            if v11 {
                return v11;
            }
        }
        v12 = uu_join::State::print_line::{{closure}}(a2, a3, v8 * 16 + v2);
        if v12 {
            v13 = v12;
        } else {
            v13 = a0[36];
        }
        if !v12 {
            v15 = a0[37];
        } else {
            v15 = v10;
        }
        v11 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v13, v15);
        v7 = <usize as core::iter::range::Step>::forward_unchecked(v8);
        if v11 {
            return v11;
        }
    }
}
