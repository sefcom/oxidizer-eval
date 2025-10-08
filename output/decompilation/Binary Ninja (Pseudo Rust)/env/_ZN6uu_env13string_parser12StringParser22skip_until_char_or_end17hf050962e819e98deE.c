
  fn uu_env::string_parser::StringParser::skip_until_char_or_end::hf050962e819e98de(arg1: *mut i64, arg2: i32) -> i64

{
    let mut var_1c: i32 = arg2;
    let mut rax: i8;
    let mut rdx: i8;
    rax = uu_env::native_int_str::get_single_native_int_value::h3916294b36a5dcb6(&var_1c);
    
    if (rax & 1) == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_1d: i8 = rdx;
    let rax_1: i64 = arg1[2];
    let rcx_1: i64 = arg1[3] + rax_1;
    let mut var_18: i64 = rax_1;
    let var_10: i64 = rcx_1;
    let mut rax_2: i8;
    let mut rdx_1: i64;
    rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h63e9c5b79db2e425(&var_18, &var_1d);
    let mut rdx_2: i64;
    
    if (rax_2 & 1) != 0
    {
        rdx_2 = rdx_1 + arg1[4];
    }
    else
    {
        rdx_2 = arg1[1];
    }
    
    uu_env::string_parser::StringParser::set_pointer::h0708f02e2329cb25(arg1, rdx_2)
}
