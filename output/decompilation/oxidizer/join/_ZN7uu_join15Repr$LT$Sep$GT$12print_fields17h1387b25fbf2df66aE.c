fn uu_join::Repr<Sep>::print_fields(a0: u64, a1: u64, a2: u32, a3: void*, a4: u32) -> u64 {
    let v1: u64;  // rbp
    let v2: void*;  // rbx
    let v3: u64;  // rbx
    let v4: u64;  // r13
    let v5: u64;  // rdx
    let v6: void*;  // rax
    let v7: u64;  // rax

    v1 = a3->field_10;
    if !v1 {
        return 0;
    }
    v2 = 0;
    do {
        v3 = v2;
        v4 = <usize as core::iter::range::Step>::forward_unchecked(v3);
        if v3 != a4 {
            v6 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, <uu_join::MultiByteSep as uu_join::Separator>::output_separator(a0, a1), v5);
            if v6 {
                return v6;
            }
            v7 = uu_join::Line::get_field(a3, v3);
            if !v7 {
                core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/join/src/join.rs"); /* do not return */
            }
            v6 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v7, v5);
            if v6 {
                return v6;
            }
        }
    } while ((v2 = v4, v4 < v1));
}
