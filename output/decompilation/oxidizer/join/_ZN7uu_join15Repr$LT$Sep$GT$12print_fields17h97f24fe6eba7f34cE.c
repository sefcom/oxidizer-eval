fn uu_join::Repr<Sep>::print_fields(a0: &struct8, a1: void*, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v2: u64;  // rax
    let v3: u64;  // r13
    let v4: void*;  // rbp
    let v5: u64;  // rbx
    let v6: void*;  // rax
    let v7: u64;  // rax

    v0 = v2;
    v3 = a1->field_10;
    if !v3 {
        return 0;
    }
    v4 = 0;
    do {
        v5 = <usize as core::iter::range::Step>::forward_unchecked(v4);
        if v4 != a2 {
            v6 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a0, " ");
            if v6 {
                return v6;
            }
            v7 = uu_join::Line::get_field(a1, v4);
            if !v7 {
                core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/join/src/join.rs"); /* do not return */
            }
            v6 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a0, v7, a2);
            if v6 {
                return v6;
            }
        }
    } while ((v4 = v5, v4 < v3));
}
