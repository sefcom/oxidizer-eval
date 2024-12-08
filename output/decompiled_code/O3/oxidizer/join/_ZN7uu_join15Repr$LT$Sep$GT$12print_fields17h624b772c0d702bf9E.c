fn uu_join::Repr<Sep>::print_fields(a0: u64, a1: u64, a2: u64, a3: &struct_0, a4: u64) -> u64 {
    let v1: u64;  // rbp
    let v3: u64;  // rbx
    let v4: u64;  // r13
    let v5: u64;  // rdx
    let v6: void*;  // rax
    let v7: u64;  // rax

    v1 = a3->field_10;
    if !v1 {
        return 0;
    }
    do {
        v3 = 0;
        v4 = <usize as core::iter::range::Step>::forward_unchecked(v3);
        if v3 != a4 {
            v6 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, <uu_join::MultiByteSep as uu_join::Separator>::output_separator(a0, a1), v5);
            if v6 {
                return v6;
            }
            v7 = uu_join::Line::get_field(a3, v3);
            if !v7 {
                core::option::unwrap_failed(); /* do not return */
            }
            v6 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v7, v5);
            if v6 {
                return v6;
            }
        }
    } while (v4 < v1);
}
