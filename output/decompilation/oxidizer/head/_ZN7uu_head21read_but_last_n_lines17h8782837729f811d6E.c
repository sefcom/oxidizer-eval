fn uu_head::read_but_last_n_lines(a0: i64, a1: i64, a2: i8) -> long long {
    let v0: std::io::stdio::StderrLock;  // [bp-0xe8]
    let v1: std::io::stdio::Stdout;  // [bp-0xe0]
    let v2: u64;  // [bp-0xd8]
    let v3: u64;  // [bp-0xd0]
    let v4: u64;  // [bp-0xc8]
    let v6: struct24;  // [bp-0xc0]
    let v7: u64;  // [bp-0xb8]
    let v8: u64;  // [bp-0xb0]
    let v9: struct56;  // [bp-0xa8]
    let v10: struct49;  // [bp-0x68]
    let v11: struct56;  // [bp-0x68]
    let v13: core::result::Result<(), std::io::error::Error>;  // rbx

    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1);
    v10 = uu_head::take::TakeAllBut<I>::new(a0, a2, a1);
    v9 = v11;
    do {
        vvar_191{stack -192} = struct24 OrderedDict({0: 𝜙@64b [((4955134, None), vvar_147{stack -192}), ((4954968, None), None)], 16: 𝜙@64b [((4955134, None), vvar_149{stack -176}), ((4954968, None), None)]})
        <uu_head::take::TakeAllBut<I> as core::iter::traits::iterator::Iterator>::next(&v6, &v9);
        if v6.field_0 as i64 == 9223372036854775809 {
            return 0;
        }
        v13 = v7;
    } while (v6.field_0 as i64 != 0x8000000000000000 && (v2 = v6.field_0 as i64, v3 = v13, v4 = v8, v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v13, v4), !v13));
    return v13;
}
