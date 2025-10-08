fn uu_join::State::print_line(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0x28]
    let v1: u8;  // [bp-0x21]
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: u64;  // rax
    let v6: u64;  // rdx
    let v7: core::result::Result<(), std::io::error::Error>;  // rax
    let v8: u64;  // rax

    v0 = v3;
    if *((a3 + 16) as &i64) {
        v4 = uu_join::Repr<Sep>::print_format(a3, a1, a2, a0);
        if v4 {
            return v4;
        }
    } else {
        v5 = uu_join::Line::get_field(a2, *((a0 + 64) as &i64));
        v7 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v5, v6);
        match v7 {
            Err(_) => {
                return v7;
            },
            Ok(_) => {
                v8 = uu_join::Repr<Sep>::print_fields(a3, a1, a2, *((a0 + 64) as &i64));
                if v8 {
                    return v8;
                }
            },
        }
    }
    v1 = *((a3 + 40) as &i8);
    return <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v1, 1);
}
