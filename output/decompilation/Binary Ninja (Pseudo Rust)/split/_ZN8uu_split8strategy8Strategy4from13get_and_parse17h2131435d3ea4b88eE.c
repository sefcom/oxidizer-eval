
  fn uu_split::strategy::Strategy::from::get_and_parse::h2131435d3ea4b88e(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64, arg6: i64) -> i64

{
    let mut var_78: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&var_78, 
        arg2, arg3, arg4);
    let rax: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(arg3, arg4, &var_78);
    
    if rax == 0
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let mut var_50: i32;
    uucore::parser::parse_size::parse_size_u64_max::h351ae83d3c4e9b23(&var_50, *rax.byte_offset(8), 
        *rax.byte_offset(0x10));
    let mut result: i64;
    
    if var_50 != 3
    {
        core::ops::function::FnOnce::call_once::h28af8ecb4f0850c0(&var_78, arg6, &var_50);
        let result_1: i64;
        result = result_1;
        arg1[4] = result;
        let var_68: i128;
        *arg1.byte_offset(0x10) = var_68;
        *arg1 = var_78;
    }
    else
    {
        let var_48: i64;
        
        if var_48 == 0
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &*var_78[8], rax);
            var_78 = 1;
            return arg6(arg1, &var_78);
        }
        
        result = arg5(&arg1[1], var_48);
        *arg1 = 4;
    }
    
    result
}
