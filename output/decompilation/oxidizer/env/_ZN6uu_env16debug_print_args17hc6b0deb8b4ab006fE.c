fn uu_env::debug_print_args(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0xc0]
    let v1: u64;  // [bp-0x88]
    let v2: u64;  // [bp-0x80]
    let v3: void*;  // [bp-0x78]
    let v4: u64;  // [bp-0x50]
    let v5: Option<struct48>;  // [bp-0x48]
    let v6: struct48;  // [bp-0x38]
    let v8: u64;  // rax
    let v9: u64;  // rdx
    let v10: u64;  // rdx

    eprintln!("input args:");
    v1 = a0;
    v2 = a0 + a1 * 24;
    v3 = 0;
    v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v1);
    if !v9 {
        return v8;
    }
    do {
        v0 = v8;
        v4 = 1;
        v5 = *((v10 + 8) as &i128);
        v6 = 1;
        eprintln!("arg[{}]: {}", &v0, &v4);
    } while ((v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v1), v10 = v9, v10));
    return v8;
}
