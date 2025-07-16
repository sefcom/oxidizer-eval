fn uu_head::read_but_last_n_lines(a0: i64, a1: i64, a2: i8) -> long long {
    let v0: std::io::stdio::StderrLock;  // [bp-0xe8]
    let v1: std::io::stdio::Stdout;  // [bp-0xe0]
    let v2: u64;  // [bp-0xd8]
    let v3: Result<struct56, struct16>;  // [bp-0xd0]
    let v4: Result<struct48, struct32>;  // [bp-0xc8]
    let v5: u192;  // [bp-0xc0]
    let v7: u64;  // [bp-0xb8]
    let v8: u64;  // [bp-0xb0]
    let v9: u128;  // [bp-0xa8]
    let v10: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // [bp-0x98]
    let v11: u8;  // [bp-0x88]
    let v12: u64;  // [bp-0x78]
    let v13: struct49;  // [bp-0x68]
    let v14: u128;  // [bp-0x58]
    let v16: core::result::Result<(), std::io::error::Error>;  // rbx

    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1);
    v13 = uu_head::take::TakeAllBut<I>::new(a0, a2, a1);
    v12 = v13.field_0;
    memcpy(&v11, &v13 as u128, 16);
    v10 = v14;
    v9 = *(&v13.field_0 as &i128);
    do {
        vvar_189{stack -192} = struct24 OrderedDict({0: 𝜙@64b [((4954750, None), vvar_147{stack -192}), ((4954584, None), None)], 16: 𝜙@64b [((4954750, None), vvar_149{stack -176}), ((4954584, None), None)]})
        <uu_head::take::TakeAllBut<I> as core::iter::traits::iterator::Iterator>::next(&v5, &v9);
        if v5 as i64 == 9223372036854775809 {
            return 0;
        }
        v16 = v7;
    } while (v5 as i64 != 0x8000000000000000 && (v2 = v5 as i64, v3 = v16, v4 = v8, v16 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v16, v4), !v16));
    return v16;
}
