fn uu_join::Repr<Sep>::print_fields(a0: u64, a1: u64, a2: &struct_0, a3: u64) -> u64 {
    let v0: &struct_0;  // [sp-0x38], Other Possible Types: u64
    let v2: u64;  // rax
    let v3: u64;  // r15
    let v4: void*;  // rbp
    let v5: u64;  // rbp
    let v6: u64;  // rbx
    let v7: void*;  // rax
    let v8: u64;  // rax
    let v9: u32;  // rdx

    v0 = v2;
    v0 = a2;
    v3 = a2->field_10;
    if !v3 {
        return 0;
    }
    v4 = 0;
    do {
        v5 = v4;
        v6 = <usize as core::iter::range::Step>::forward_unchecked(v5);
        if v5 != a3 {
            v7 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, <uu_join::OneByteSep as uu_join::Separator>::output_separator(a0 + 41), 1);
            if v7 {
                return v7;
            }
            v8 = uu_join::Line::get_field(v0, v5);
            if !v8 {
                core::option::unwrap_failed(); /* do not return */
            }
            v7 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v8, v9);
            if v7 {
                return v7;
            }
        }
    } while ((v4 = v6, v6 < v3));
}
