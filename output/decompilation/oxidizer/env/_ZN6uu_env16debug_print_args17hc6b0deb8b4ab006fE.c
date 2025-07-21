fn uu_env::debug_print_args(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0xc0]
    let v1: struct24;  // [bp-0x88]
    let v2: u64;  // [bp-0x50]
    let v3: Option<struct48>;  // [bp-0x48]
    let v4: struct48;  // [bp-0x38]
    let v6: u64;  // rax
    let v7: core::fmt::rt::Argument;  // rdx
    let v8: core::fmt::rt::Argument;  // rdx

    eprintln!("input args:");
    v1 = struct24 {
        field_0: a0
        field_8: a0 + a1 * 24
        field_16: 0
    };
    v6 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v1);
    if !v7 {
        return v6;
    }
    do {
        v0 = v6;
        v2 = 1;
        v3 = *((v8 + 8) as &i128);
        v4 = 1;
        eprintln!("arg[{}]: {}", &v0, &v2);
    } while ((v6 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v1), v7 = v7, v8));
    return v6;
}
