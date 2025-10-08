
  fn uu_split::strategy::Strategy::from::get_and_parse::hab7e9d5bff2b170a(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64, arg6: i64) -> i64

{
    let mut var_a8: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(&var_a8, 
        arg2, arg3, arg4);
    let rax: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(arg3, arg4, &var_a8);
    
    if rax == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_78: i32;
    uucore::features::parser::parse_size::parse_size_u64_max::hec104ac5ce610c62(&var_78, 
        *rax.byte_offset(8), *rax.byte_offset(0x10));
    let mut result: i64;
    
    if var_78 != 4
    {
        let var_68: i128;
        let var_48_1: i128 = var_68;
        let mut var_58: i128 = var_78;
        arg6(&var_a8, &var_58);
        let result_1: i64;
        result = result_1;
        arg1[4] = result;
        let var_98: i128;
        *arg1.byte_offset(0x10) = var_98;
        *arg1 = var_a8;
    }
    else
    {
        let var_70: i64;
        
        if var_70 == 0
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &*var_a8[8], rax);
            var_a8 = 1;
            return arg6(arg1, &var_a8);
        }
        
        result = arg5(&arg1[1], var_70);
        *arg1 = 4;
    }
    
    result
}
