fn uu_join::Repr<Sep>::print_format(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0x48]
    let v2: void*;  // rbp
    let v3: u64;  // rbp
    let v4: u64;  // rax
    let v5: struct8;  // rax
    let v6: u64;  // rax
    let v8: struct8;  // rax

    v0 = *((a0 + 8) as &i64);
    v2 = 0;
    loop {
        v3 = v2;
        if v3 >= *((a0 + 16) as &i64) {
            return 0;
        }
        v4 = <usize as core::iter::range::Step>::forward_unchecked(v3, a1);
        if v3 {
            v5 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(&g_40b685);
            if v5 {
                return v5;
            }
        }
        v6 = uu_join::State::print_line::{{closure}}(a2, a3, v3 * 16 + v0);
        v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v6);
        v2 = v4;
        if v8 {
            return v8;
        }
    }
}
