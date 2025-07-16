fn uu_join::Repr<Sep>::print_fields(a1: i64, a2: i64) -> : struct8 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x38]
    let v2: u64;  // rax
    let v3: void*;  // rbp
    let v4: i64;  // 4096
    let v5: i64;  // rsi
    let v6: u64;  // rbp
    let v7: u64;  // r13
    let v8: core::result::Result<(), std::io::error::Error>;  // rax
    let v9: u64;  // rax
    let v10: core::result::Result<(), std::io::error::Error>;  // rax
    let v11: i64;  // rsi

    v0 = v2;
    if !*((a1 + 16) as &i64) {
        return 0;
    }
    v3 = 0;
    v4 = a1;
    do {
        v5 = v11;
        v6 = v3;
        v7 = <usize as core::iter::range::Step>::forward_unchecked(v6, v5);
        if v6 != a2 {
            v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a0, 1, 0);
            match v8 {
                Err(_) => {
                    return v8;
                },
                Ok(_) => {
                    v9 = uu_join::Line::get_field(a1, v6);
                    if !v9 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v10 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a0, v9, a2);
                    if let Err(_) = v10 {
                        return v10;
                    }
                },
            }
        }
        v3 = v7;
    } while (v3 < *((a1 + 16) as &i64));
    return 0;
}
