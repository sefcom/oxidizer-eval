fn uu_env::debug_print_args(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: struct8;  // [sp-0xc0]
    let v1: u64;  // [sp-0xb8], Other Possible Types: Arguments
    let v2: u64;  // [sp-0xb0]
    let v3: u64;  // [sp-0xa8]
    let v4: u128;  // [bp-0xa0]
    let v5: u64;  // [sp-0x88]
    let v6: u64;  // [sp-0x80]
    let v7: void*;  // [sp-0x78]
    let v8: u64;  // [sp-0x50]
    let v9: u128;  // [sp-0x48]
    let v10: u8;  // [sp-0x38]
    let v12: u256;  // ymm0
    let v13: u256;  // ymm0
    let v14: struct8;  // rax
    let v15: &struct_0;  // rdx
    let v16: &struct_0;  // rdx
    let v17: u128;  // xmm0

    v1 = "input args:\n";
    v2 = 1;
    v3 = 8;
    v13 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v4 = 0;
    std::io::stdio::_eprint(&v1);
    v5 = a0;
    v6 = a0 + a1 * 24;
    v7 = 0;
    v14 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
    if !v15 {
        return v14;
    }
    do {
        v0 = v14;
        v17 = *(&(&v16->padding_0)[1] as &i128);
        v13 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17;
        v8 = 1;
        v9 = v17;
        v10 = 1;
        eprintln!("arg[{:?}]: {:?}", &v0, &v8);
        v14 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
    } while (v15);
    return v14;
}
