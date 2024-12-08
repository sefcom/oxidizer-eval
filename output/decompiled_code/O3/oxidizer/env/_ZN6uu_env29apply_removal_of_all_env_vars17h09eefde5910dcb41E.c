fn uu_env::apply_removal_of_all_env_vars(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: struct32;  // [sp-0x70], Other Possible Types: i256
    let v1: i384;  // [sp-0x50], Other Possible Types: Option<struct48>
    let v3: i64;  // rsi
    let v4: i64;  // rdx
    let v5: i64;  // rax

    if !*((a0 + 152) as &i8) {
        return v5;
    }
    v0 = std::env::vars_os();
    loop {
        v1 = <std::env::VarsOs as core::iter::traits::iterator::Iterator>::next(&v0);
        if v1 == 0x8000000000000000 {
            break;
        }
        std::env::remove_var(&v1, v3, v4);
    }
    return v5;
}
