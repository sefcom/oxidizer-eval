fn uu_ls::dired::indent(a0: u64) -> u64 {
    let v0: struct40;  // [bp-0x38], Other Possible Types: u64
    let v1: u128;  // [bp-0x20]
    let v3: u64;  // rax
    let v4: void*;  // rax
    let v5: u128;  // xmm0

    v0 = struct40 {
        field_0: "  "
        field_8: &g_0
        field_16: &g_0
        field_24: <UNKNOWN>
        field_32: <UNKNOWN>
    };
    *(&v1 as &&u128) = &g_0;
    v3 = std::io::Write::write_fmt(a0, &v0);
    if !v3 {
        return &g_0;
    }
    v0 = 0x8000000000000000;
    v1 = v3;
    v4 = __rust_alloc(32, &g_0);
    v5 = *(&v0.field_0 as &i128);
    *((v4 + &g_10) as &i128) = *(&v0.field_16 as &i128);
    *(v4 as &u128) = v5;
    return v4;
}
