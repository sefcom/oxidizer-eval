fn uu_join::State::print_line(a0: &struct_1, a1: u64, a2: u64, a3: &struct_0) -> u64 {
    let v0: u64;  // [bp-0x28]
    let v1: u8;  // [sp-0x21]
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: u64;  // r15
    let v6: u64;  // rax

    v0 = v3;
    if !a3->field_10 {
        v5 = a0->field_40;
        v6 = uu_join::Line::get_field(a2, v5);
        if !v6 {
            v6 = a3->field_18;
        }
        v4 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v6, a3->field_20);
        if v4 {
            return v4;
        }
        v4 = uu_join::Repr<Sep>::print_fields(a3, a1, a2, v5);
        if v4 {
            return v4;
        }
    } else {
        v4 = uu_join::Repr<Sep>::print_format(a3, a1, a2, a0);
        if v4 {
            return v4;
        }
    }
    v1 = a3->field_28;
    v4 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v1, 1);
    return v4;
}
