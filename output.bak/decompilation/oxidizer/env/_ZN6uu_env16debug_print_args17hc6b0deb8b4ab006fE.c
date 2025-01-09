fn uu_env::debug_print_args(a0: u32, a1: u32) -> u64 {
    let v0: struct8;  // [sp-0xc0]
    let v1: u64;  // [sp-0x88]
    let v2: u64;  // [sp-0x80]
    let v3: void*;  // [sp-0x78]
    let v4: u64;  // [sp-0x50]
    let v5: u128;  // [sp-0x48]
    let v6: u8;  // [sp-0x38]
    let v8: u256;  // ymm0
    let v9: u256;  // ymm0
    let v10: struct8;  // rax
    let v11: &struct_0;  // rdx
    let v12: &struct_0;  // rdx
    let v13: u128;  // xmm0

    v9 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    eprintln!("input args:");
    v1 = a0;
    v2 = a0 + a1 * 24;
    v3 = 0;
    v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
    if !v11 {
        return v10;
    }
    do {
        v0 = v10;
        v13 = *(&(&v12->padding_0)[1] as &i128);
        v9 = v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13;
        v4 = 1;
        v5 = v13;
        v6 = 1;
        eprintln!("arg[{:?}]: {:?}", &v0, &v4);
        v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
        v12 = v11;
    } while (v11);
    return v10;
}
