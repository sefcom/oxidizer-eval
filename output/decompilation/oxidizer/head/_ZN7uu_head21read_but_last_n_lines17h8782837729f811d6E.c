fn uu_head::read_but_last_n_lines(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xe8]
    let v1: i64;  // [sp-0xe0]
    let v2: i64;  // [sp-0xd8]
    let v3: i64;  // [sp-0xd0]
    let v4: i64;  // [sp-0xc8]
    let v5: Option<struct24>;  // [sp-0xc0]
    let v6: iNone;  // [sp-0xa8]
    let v7: iNone;  // [sp-0x98]
    let v8: iNone;  // [sp-0x88]
    let v9: i64;  // [sp-0x78]
    let v10: struct49;  // [sp-0x68]
    let v12: i64;  // rax
    let v13: i64;  // rbx

    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1);
    v10 = uu_head::take::TakeAllBut<I>::new(a0, a2 as u64, a1);
    v9 = v10.field_0;
    v8 = *(&v10.field_32 as &i128);
    v7 = v10.field_16;
    v6 = *(&v10.field_0 as &i128);
    loop {
        v5 = <uu_head::take::TakeAllBut<I> as core::iter::traits::iterator::Iterator>::next(&v6);
        v12 = v5 as i64;
        match v5 {
            None => {
                return 0;
            },
            Some(_) => {
                v13 = *((&v5 as &char + 8) as &i64);
                if v12 == 0x8000000000000000 {
                    return v13;
                }
                v2 = v12;
                v3 = v13;
                v4 = *((&v5 as &char + 16) as &i64);
                v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v13, v4);
                if v13 {
                    return v13;
                }
            },
        }
    }
}
