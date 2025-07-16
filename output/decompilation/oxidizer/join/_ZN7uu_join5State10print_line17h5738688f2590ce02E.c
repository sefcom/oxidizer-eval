fn uu_join::State::print_line(a0: i64, a1: i32, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0x28]
    let v3: u64;  // rax
    let v4: u64;  // rbx
    let v6: u64;  // rax
    let v7: struct8;  // rax

    v0 = v3;
    v4 = a1;
    if *((a3 + 16) as &i64) {
        return uu_join::Repr<Sep>::print_format(a3, v4, a2, a0);
    }
    v6 = uu_join::Line::get_field(a2, *((a0 + 64) as &i64));
    v7 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v6);
    if v7 {
        return v7;
    }
    return uu_join::Repr<Sep>::print_fields(a3, v4, a2, *((a0 + 64) as &i64));
}
