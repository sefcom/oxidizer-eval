fn uu_join::Repr<Sep>::print_fields(a0: &struct8, a1: void*, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v2: u64;  // rax
    let v3: u64;  // r13
    let v4: void*;  // rbp
    let v5: u64;  // rbp
    let v6: u64;  // rbx
    let v7: void*;  // rax
    let v8: u64;  // rax
    let v9: u32;  // rdx

    v0 = v2;
    v3 = a1->field_10;
    if !v3 {
        return 0;
    }
    v4 = 0;
    do {
        v5 = v4;
        v6 = <usize as core::iter::range::Step>::forward_unchecked(v5);
        if v5 != a2 {
            v7 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a0, " ");
            if v7 {
                return v7;
            }
            v8 = uu_join::Line::get_field(a1, v5);
            if !v8 {
                core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/join/src/join.rs"); /* do not return */
            }
            v7 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a0, v8, v9);
            if v7 {
                return v7;
            }
        }
    } while ((v4 = v6, v6 < v3));
}
