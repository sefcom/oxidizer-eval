fn uu_env::apply_specified_env_vars(a0: i64) -> long long {
    let v0: struct16;  // [bp-0x90]
    let v1: u64;  // [bp-0x50]
    let v2: core::fmt::Arguments;  // [bp-0x48], Other Possible Types: u128
    let v3: u8;  // [bp-0x38]
    let v5: i64;  // rax
    let v6: core::fmt::Arguments;  // rdx

    v0 = struct16 {
        field_0: *((a0 + 56) as &i64)
        field_8: *((a0 + 64) as &i64) * 48 + *((a0 + 56) as &i64)
    };
    v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !v5 {
        return v5;
    }
    do {
        if !*((v5 + 16) as &i64) {
            v1 = uucore::util_name();
            v2 = v6;
            eprint!("{}: warning: ", &v1);
            v1 = 1;
            v2 = *((v5 + 32) as &i128);
            v3 = 1;
            eprintln!("no name specified for value {}", &v1);
        } else {
            std::env::set_var(v5, v5 + 24);
        }
    } while ((v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0), v5));
    return v5;
}
