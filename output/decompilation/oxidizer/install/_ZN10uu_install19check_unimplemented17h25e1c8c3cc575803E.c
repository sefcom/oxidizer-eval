fn uu_install::check_unimplemented(a0: i64) -> u64 {
    let v0: void*;  // [bp-0x48]
    let v3: i64;  // rdi
    let v4: void*;  // rsi
    let v5: u64;  // rdx

    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "preserve-context") && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "context") {
        return 0;
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v3, v4, v5);
    v0 = 0;
    return alloc::boxed::Box<T>::new(&v0) as u64;
}
