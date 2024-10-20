fn uu_dircolors::generate_type_output(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0x78]
    let v1: i64;  // [sp-0x70]
    let v2: i64;  // [sp-0x68]
    let v3: i192;  // [bp-0x60], Other Possible Types: struct24
    let v4: i64;  // [sp-0x50]
    let v5: i128;  // [sp-0x48]
    let v6: i64;  // [sp-0x38]

    if *(a1 as &i8) == 2 {
        v0 = 18;
        v1 = __rust_alloc(432, 8);
        v2 = 0;
        v3 = struct24 {
            field_0: &v2
            field_8: 0
            field_16: v8
        };
        <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold("RESET", ".tar", &v3);
        v5 = v0;
        v6 = v2;
        v3 = alloc::str::join_generic_copy(*((&v5 as &char + 8) as &i64), v6, &g_4228ff, 1);
        *((a0 + 16) as &i64) = v4;
        *(a0 as &i192) = v3;
        return a0;
    }
    v0 = 18;
    v1 = __rust_alloc(432, 8);
    v2 = 0;
    v3 = &v2;
    <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold("RESET", ".tar", &v3);
    v5 = v0;
    v6 = v2;
    v3 = alloc::str::join_generic_copy(*((&v5 as &char + 8) as &i64), v6, &g_422900, 1);
    *((a0 + 16) as &i64) = v4;
    *(a0 as &i192) = v3;
    return a0;
}
