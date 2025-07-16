fn uu_join::Repr<Sep>::print_fields(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v1: void*;  // rbx
    let v2: u64;  // 4096
    let v3: u64;  // rsi
    let v4: u64;  // rbx
    let v5: u64;  // r13
    let v6: core::result::Result<(), std::io::error::Error>;  // rax
    let v7: u64;  // rax
    let v8: core::result::Result<(), std::io::error::Error>;  // rax
    let v9: u64;  // rsi

    if !*((a3 + 16) as &i64) {
        return 0;
    }
    v1 = 0;
    v2 = a1;
    do {
        v3 = v9;
        v4 = v1;
        v5 = <usize as core::iter::range::Step>::forward_unchecked(v4, v3);
        if v4 != a4 {
            v6 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, <uu_join::MultiByteSep as uu_join::Separator>::output_separator(a0, a1), a2);
            match v6 {
                Err(_) => {
                    return v6;
                },
                Ok(_) => {
                    v7 = uu_join::Line::get_field(a3, v4);
                    if !v7 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v7, a2);
                    if let Err(_) = v8 {
                        return v8;
                    }
                },
            }
        }
        v1 = v5;
    } while (v1 < *((a3 + 16) as &i64));
    return 0;
}
