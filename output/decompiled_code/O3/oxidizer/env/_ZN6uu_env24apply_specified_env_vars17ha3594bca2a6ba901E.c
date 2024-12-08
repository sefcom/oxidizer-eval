fn uu_env::apply_specified_env_vars(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x90]
    let v1: u64;  // [sp-0x88]
    let v2: u64;  // [sp-0x50]
    let v3: u128;  // [bp-0x48]
    let v4: u8;  // [sp-0x38]
    let v6: struct8;  // rax
    let v7: u64;  // rdx
    let v8: u256;  // ymm0
    let v9: u64;  // rdx
    let v10: u128;  // xmm0

    v0 = a0[7];
    v1 = a0[8] * 48 + v0;
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v6 {
        return v6;
    }
    do {
        if *((v6 + 16) as &i64) {
            std::env::set_var(v6, v6 + 24, v7);
        } else {
            v2 = uucore::util_name();
            v3 = v9;
            eprint!("{:?}: warning: ", &v2);
            v10 = *((v6 + 32) as &i128);
            v8 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v10;
            v2 = 1;
            v3 = v10;
            v4 = 1;
            eprintln!("no name specified for value {:?}", &v2);
        }
    } while ((v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v6));
    return v6;
}
