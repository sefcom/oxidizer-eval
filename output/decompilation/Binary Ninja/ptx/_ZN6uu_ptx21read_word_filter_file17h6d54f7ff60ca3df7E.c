
  int64_t* uu_ptx::read_word_filter_file::h6d54f7ff60ca3df7(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    int32_t var_118;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(
        &var_118, arg2, arg3, arg4);
    void* rax =
        clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(arg3, arg4, &var_118);
    
    if (!rax)
    {
        core::option::expect_failed::h3f620cfb8545dc61("parsing options failed!src/uu/pt…");
        /* no return */
    }
    
    void var_e0;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_e0, 
        rax);
    int64_t var_d8;
    uint64_t var_d0;
    int64_t* result;
    uint64_t rax_2;
    void* const rdx_1;
    int64_t rbx;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc639eb17d6278023(var_d8, var_d0, "-[^]+[^ \t\n]+", 1))
    {
        std::fs::File::open::h019c38f8f9e56350(&var_118, &var_e0);
        
        if (var_118 != 1)
        {
            rbx = 0;
            int32_t var_114;
            rax_2 = alloc::boxed::Box$LT$T$GT$::new::h78f68dd9e7792e5e(var_114);
            rdx_1 = &data_651680;
            goto label_52a9e1;
        }
        
        int64_t* result_1;
        result = result_1;
        arg1[1] = result;
        *arg1 = 0;
    }
    else
    {
        rbx = 1;
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        rbx = 1;
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::h16f26c34398979df(
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        rdx_1 = &data_6516d8;
        label_52a9e1:
        int128_t var_68;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h3d0c7b14f6b3f130(&var_68, 
            rax_2, rdx_1);
        char var_124_1 = rbx;
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h5d2cbf9a529b523a(&var_118);
        int128_t var_c8 = var_118;
        int64_t var_38;
        int64_t var_e8_1 = var_38;
        int128_t var_48;
        int128_t var_f8_1 = var_48;
        int128_t var_58;
        int128_t var_108_1 = var_58;
        var_118 = var_68;
        
        while (true)
        {
            int64_t var_98;
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf1a349345bfe7630(&var_98, &var_118);
            int64_t rax_4 = var_98;
            
            if (rax_4 == -0x7fffffffffffffff)
            {
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$$GT$::h7e59a5e3ea852bfd(&var_118);
                int128_t zmm0_2 = var_c8;
                result = arg1;
                int128_t var_f8;
                *(result + 0x20) = var_f8;
                int128_t var_108;
                *(result + 0x10) = var_108;
                *result = zmm0_2;
                
                if (!var_124_1)
                    break;
            }
            else
            {
                int64_t var_90;
                
                if (rax_4 == -0x8000000000000000)
                {
                    arg1[1] = var_90;
                    *arg1 = 0;
                    core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$$GT$::h7e59a5e3ea852bfd(&var_118);
                    result = core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h4d7c816e60293aed(&var_c8);
                    
                    if (!var_124_1)
                        break;
                }
                else
                {
                    int64_t var_80 = rax_4;
                    int64_t var_78_1 = var_90;
                    int64_t var_88;
                    int64_t var_70_1 = var_88;
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hcab8d607c758db94(
                        &var_c8, &var_80);
                    continue;
                }
            }
            
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(
                &var_e0);
        }
    }
    return result;
}
