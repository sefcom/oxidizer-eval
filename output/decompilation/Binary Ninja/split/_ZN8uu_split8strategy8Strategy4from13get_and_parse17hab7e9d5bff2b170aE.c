
  int64_t uu_split::strategy::Strategy::from::get_and_parse::hab7e9d5bff2b170a(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    int128_t var_a8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(&var_a8, 
        arg2, arg3, arg4);
    void* rax =
        clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(arg3, arg4, &var_a8);
    
    if (!rax)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int32_t var_78;
    uucore::features::parser::parse_size::parse_size_u64_max::hec104ac5ce610c62(&var_78, 
        *(rax + 8), *(rax + 0x10));
    int64_t result;
    
    if (var_78 != 4)
    {
        int128_t var_68;
        int128_t var_48_1 = var_68;
        int128_t var_58 = var_78;
        arg6(&var_a8, &var_58);
        int64_t result_1;
        result = result_1;
        arg1[4] = result;
        int128_t var_98;
        *(arg1 + 0x10) = var_98;
        *arg1 = var_a8;
    }
    else
    {
        int64_t var_70;
        
        if (!var_70)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &*var_a8[8], rax);
            var_a8 = 1;
            return arg6(arg1, &var_a8);
        }
        
        result = arg5(&arg1[1], var_70);
        *arg1 = 4;
    }
    
    return result;
}
