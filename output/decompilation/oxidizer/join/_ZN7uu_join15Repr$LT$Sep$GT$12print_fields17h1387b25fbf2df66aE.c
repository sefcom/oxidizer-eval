fn uu_join::Repr<Sep>::print_fields(a0: u64, a1: u64, a2: u32, a3: void*, a4: u32) -> u64 {
    let v1: u64;  // rbp
    let v2: void*;  // rbx
    let v3: u64;  // r13
    let v4: void*;  // rax
    let v5: u64;  // rax

    v1 = a3->field_10;
    if !v1 {
        return 0;
    }
    v2 = 0;
    do {
        v3 = <usize as core::iter::range::Step>::forward_unchecked(v2);
        if v2 != a4 {
            v4 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, <uu_join::MultiByteSep as uu_join::Separator>::output_separator(a0, a1), a2);
            if v4 {
                return v4;
            }
            v5 = uu_join::Line::get_field(a3, v2);
            if !v5 {
                core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/join/src/join.rs"); /* do not return */
            }
            v4 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v5, a2);
            if v4 {
                return v4;
            }
        }
    } while ((v2 = v3, v2 < v1));
}
