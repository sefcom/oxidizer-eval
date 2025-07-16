fn uu_join::Repr<Sep>::print_format(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0x50]
    let v1: u64;  // [bp-0x48]
    let v3: void*;  // rbp
    let v4: u64;  // rbp
    let v5: u64;  // rax
    let v6: struct8;  // rax
    let v7: u64;  // rax
    let v9: struct8;  // rax

    v1 = *((a0 + 8) as &i64);
    v0 = a0 + 41;
    v3 = 0;
    loop {
        v4 = v3;
        if v4 >= *((a0 + 16) as &i64) {
            return 0;
        }
        v5 = <usize as core::iter::range::Step>::forward_unchecked(v4, a1);
        if v4 {
            v6 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(<uu_join::OneByteSep as uu_join::Separator>::output_separator(v0));
            if v6 {
                return v6;
            }
        }
        v7 = uu_join::State::print_line::{{closure}}(a2, a3, v4 * 16 + v1);
        v9 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v7);
        v3 = v5;
        if v9 {
            return v9;
        }
    }
}
