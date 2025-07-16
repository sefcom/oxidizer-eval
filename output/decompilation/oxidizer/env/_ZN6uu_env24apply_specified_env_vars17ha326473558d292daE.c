fn uu_env::apply_specified_env_vars(a0: i64) -> long long {
    let v0: u64;  // [bp-0x90]
    let v1: u64;  // [bp-0x88]
    let v2: u64;  // [bp-0x50]
    let v3: u64;  // [bp-0x48]
    let v4: u8;  // [bp-0x38]
    let v6: i64;  // rax
    let v7: u64;  // rdx

    v0 = *((a0 + 56) as &i64);
    v1 = *((a0 + 64) as &i64) * 48 + *((a0 + 56) as &i64);
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !v6 {
        return v6;
    }
    do {
        if !*((v6 + 16) as &i64) {
            v2 = uucore::util_name();
            v3 = v7;
            eprint!("{}: warning: ", &v2);
            v2 = 1;
            v3 = *((v6 + 32) as &i128);
            v4 = 1;
            eprintln!("no name specified for value {}", &v2);
        } else {
            std::env::set_var(v6, v6 + 24);
        }
    } while ((v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0), v6));
    return v6;
}
