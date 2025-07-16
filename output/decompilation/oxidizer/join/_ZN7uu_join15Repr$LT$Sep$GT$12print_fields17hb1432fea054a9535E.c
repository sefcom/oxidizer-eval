fn uu_join::Repr<Sep>::print_fields(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: i64;  // [bp-0x38], Other Possible Types: u64
    let v2: u64;  // rax
    let v3: void*;  // rbp
    let v4: u64;  // rbp
    let v5: u64;  // rbx
    let v6: struct8;  // rax
    let v7: u64;  // rax
    let v8: struct8;  // rax

    v0 = v2;
    v0 = a2;
    if !*((a2 + 16) as &i64) {
        return 0;
    }
    do {
        v4 = v3;
        v5 = <usize as core::iter::range::Step>::forward_unchecked(v4, a1);
        if v4 != a3 {
            v6 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(<uu_join::OneByteSep as uu_join::Separator>::output_separator(a0 + 41));
            if v6 {
                return v6;
            }
            v7 = uu_join::Line::get_field(v0, v4);
            if !v7 {
                core::option::unwrap_failed(); /* do not return */
            }
            v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v7);
            if v8 {
                return v8;
            }
        }
        v3 = v5;
    } while (v3 < *((a2 + 16) as &i64));
    return 0;
}
