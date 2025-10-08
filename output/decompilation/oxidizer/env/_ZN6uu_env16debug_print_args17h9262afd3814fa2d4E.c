fn uu_env::debug_print_args(a0: i64, a1: i64) -> u64 {
    let v0: struct24;  // [bp-0xc0]
    let v1: struct24;  // [bp-0x88]
    let v2: struct24;  // [bp-0x50]
    let v3: u64;  // [bp-0x48]
    let v4: Option<struct17>;  // [bp-0x40]
    let v5: Option<struct40>;  // [bp-0x38]
    let v7: core::fmt::Arguments;  // rax
    let v8: &mut [u8];  // rdx
    let v9: &mut [u8];  // rdx

    eprintln!("input args:");
    v1 = struct24 {
        field_0: a0
        field_8: a0 + a1 * 24
        field_16: 0
    };
    v7 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v1);
    if !v8 {
        return v7;
    }
    do {
        v0 = v7;
        v2 = 1;
        v3 = *((v9 + 8) as &i64);
        v4 = *((v9 + 16) as &i64);
        v5 = 1;
        eprintln!("arg[{}]: {}", &v0, &v2);
        v7 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v1);
        v8 = v8;
    } while (v9);
    return v7;
}
