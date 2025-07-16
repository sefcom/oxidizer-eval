fn uu_join::State::print_line(a0: i64, a1: i32, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0x28]
    let v3: u64;  // rax
    let v5: u64;  // rax
    let v6: struct8;  // rax

    v0 = v3;
    if *((a3 + 16) as &i64) {
        return uu_join::Repr<Sep>::print_format(a3, a1, a2, a0);
    }
    v5 = uu_join::Line::get_field(a2, *((a0 + 64) as &i64));
    v6 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v5);
    if v6 {
        return v6;
    }
    return uu_join::Repr<Sep>::print_fields(a2, *((a0 + 64) as &i64), a3);
}
