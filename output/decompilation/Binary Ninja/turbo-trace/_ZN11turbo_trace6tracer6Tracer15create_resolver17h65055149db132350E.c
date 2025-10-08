
  int64_t turbo_trace::tracer::Tracer::create_resolver::h65055149db132350(void* arg1, int64_t arg2, uint64_t arg3)

{
    int128_t var_1b0;
    _$LT$oxc_resolver..options..ResolveOptions$u20$as$u20$core..default..Default$GT$::default::h8485d01452810ea0(&var_1b0);
    char var_2b = 1;
    int128_t var_338;
    memcpy(&var_338, &var_1b0, 0x186);
    char var_1b2 = 2;
    char var_29;
    char var_1b1 = var_29;
    oxc_resolver::options::ResolveOptions::with_extension::h83107bc3c492dfde(&var_1b0, &var_338, 
        ".ts.d.ts**/*.jsvalid glob**/*.ts…", 3);
    oxc_resolver::options::ResolveOptions::with_extension::h83107bc3c492dfde(&var_338, &var_1b0, 
        ".tsx\", 4);
    oxc_resolver::options::ResolveOptions::with_extension::h83107bc3c492dfde(&var_1b0, &var_338, 
        ".jsxRoot(", 4);
    oxc_resolver::options::ResolveOptions::with_extension::h83107bc3c492dfde(&var_338, &var_1b0, 
        ".d.ts**/*.jsvalid glob**/*.ts**/…", 5);
    oxc_resolver::options::ResolveOptions::with_extension::h83107bc3c492dfde(&var_1b0, &var_338, 
        ".mjs>", 4);
    oxc_resolver::options::ResolveOptions::with_extension::h83107bc3c492dfde(&var_338, &var_1b0, 
        ".cjs|", 4);
    oxc_resolver::options::ResolveOptions::with_main_field::he3f4c4609b4bac47(&var_1b0, &var_338, 
        "modulenetospath/posixpath/win32p…", 6);
    oxc_resolver::options::ResolveOptions::with_main_field::he3f4c4609b4bac47(&var_338, &var_1b0, 
        "types/rustc/bf64d66bd58719fac258…", 5);
    void var_4c0;
    oxc_resolver::options::ResolveOptions::with_condition_names::h56ea05014ceabc25(&var_4c0, 
        &var_338, &data_a02ab8, 5);
    
    if (arg2)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::haf8e89f95b98fa54(&var_1b0, arg2, arg3);
        var_338 = var_1b0;
        int128_t var_370;
        core::ptr::drop_in_place$LT$core..option..Option$LT$oxc_resolver..options..TsconfigOptions$GT$$GT$::h3a30df05dae62801(&var_370);
        int64_t var_1a0;
        int64_t var_360_1 = var_1a0;
        var_370 = var_338;
        int64_t var_358_1 = -0x7fffffffffffffff;
    }
    
    memcpy(&var_1b0, &var_4c0, 0x188);
    return oxc_resolver::ResolverGeneric$LT$C$GT$::new::hd2f97fa26530c491(arg1, &var_1b0);
}
