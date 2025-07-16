fn uu_join::Repr<Sep>::print_format(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0x58]
    let v1: u64;  // [bp-0x50]
    let v2: u64;  // [bp-0x48]
    let v4: void*;  // r14
    let v5: u64;  // r14
    let v6: u64;  // rax
    let v7: struct8;  // rax
    let v8: u64;  // rax
    let v10: struct8;  // rax

    v1 = *((a0 + 264) as &i64);
    v0 = *((a0 + 272) as &i64);
    v2 = *((a0 + 312) as &i64);
    v4 = 0;
    loop {
        v5 = v4;
        if v5 >= *((a0 + 320) as &i64) {
            return 0;
        }
        v6 = <usize as core::iter::range::Step>::forward_unchecked(v5, a1);
        if v5 {
            v7 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(<uu_join::MultiByteSep as uu_join::Separator>::output_separator(v1, v0));
            if v7 {
                return v7;
            }
        }
        v8 = uu_join::State::print_line::{{closure}}(a2, a3, v5 * 16 + v2);
        v10 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v8);
        v4 = v6;
        if v10 {
            return v10;
        }
    }
}
