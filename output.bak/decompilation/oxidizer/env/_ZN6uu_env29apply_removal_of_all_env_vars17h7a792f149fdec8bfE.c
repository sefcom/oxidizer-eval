fn uu_env::apply_removal_of_all_env_vars(a0: void*) -> u64 {
    let v0: i8;  // [bp-0x70]
    let v1: Option<struct48>;  // [sp-0x50], Other Possible Types: i384
    let v3: i64;  // rax

    if !*((a0 + 152) as &i8) {
        return v3;
    }
    std::env::vars_os();
    loop {
        v1 = <std::env::VarsOs as core::iter::traits::iterator::Iterator>::next(&v0);
        if v1 == 0x8000000000000000 {
            break;
        }
        std::env::remove_var(&v1);
    }
    return v3;
}
