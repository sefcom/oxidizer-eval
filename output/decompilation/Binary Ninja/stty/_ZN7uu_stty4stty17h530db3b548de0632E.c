
  uint64_t uu_stty::stty::h530db3b548de0632(int64_t* arg1)

{
    int64_t* rbx_1;
    void** const var_150;
    int32_t var_138_1;
    int64_t rbp;
    
    if (!*(arg1 + 0x29))
    {
        rbp = 1;
        
        if (0 + -(*arg1))
            goto label_4586c9;
        
        if (arg1[5] == 1)
        {
            label_45870b:
            rbx_1 = &var_150;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hed2105606e4cf42e(&var_150, "when specifying an output style,…", 0x35);
            var_138_1 = 1;
        }
        else
        {
            rbp = 0;
            label_4586c9:
            nix::sys::termios::tcgetattr::h6c2eaf1ab91c3c8a(&var_150, 
                _$LT$uu_stty..Device$u20$as$u20$std..os..fd..owned..AsFd$GT$::as_fd::h63ece466c1809a3b(&arg1[3]));
            void var_a8;
            core::result::Result$LT$T$C$E$GT$::expect::hd6ced1984292ee9f(&var_a8, &var_150);
            
            if (rbp)
            {
                core::result::Result$LT$T$C$E$GT$::expect::hec0d541a941ab66a(
                    uu_stty::print_settings::h6562ceefa3305078(&var_a8, arg1), 
                    "TODO: make proper error here fro…", 0x2b);
                return 0;
            }
            
            int64_t r15_1 = arg1[2];
            
            if (!r15_1)
            {
                label_458795:
                core::result::Result$LT$T$C$E$GT$::expect::hec0d541a941ab66a(
                    nix::sys::termios::tcsetattr::h9180e09cf07383c4(
                        _$LT$uu_stty..Device$u20$as$u20$std..os..fd..owned..AsFd$GT$::as_fd::h63ece466c1809a3b(&arg1[3]), 
                        &var_a8), 
                    "Could not write terminal attribu…", 0x23);
                return 0;
            }
            
            int64_t* r12_1 = arg1[1];
            
            while (true)
            {
                int64_t* var_168 = r12_1;
                
                if (!uu_stty::apply_setting::h519146f657897442(&var_a8, *r12_1, r12_1[1]))
                {
                    int64_t** var_160 = &var_168;
                    int64_t (* var_158_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h73b50bfbd05958df;
                    var_150 = &data_4e2960;
                    int64_t var_148_1 = 2;
                    int64_t var_130_1 = 0;
                    int64_t*** var_140_1 = &var_160;
                    int32_t var_138;
                    var_138 = 1;
                    void var_c8;
                    rbx_1 = &var_c8;
                    core::option::Option$LT$T$GT$::map_or_else::h151e00dca817615d(&var_c8, 
                        &var_150);
                    int32_t var_b0_1 = 1;
                    break;
                }
                
                r12_1 = &r12_1[2];
                
                if (r12_1 == &r12_1[r15_1 * 2])
                    goto label_458795;
            }
        }
    }
    else
    {
        if (arg1[5] != 1)
        {
            rbp = 1;
            
            if (!(0 + -(*arg1)))
                goto label_45870b;
            
            goto label_4586c9;
        }
        
        rbx_1 = &var_150;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hed2105606e4cf42e(&var_150, "the options for verbose and stty…", 0x4e);
        var_138_1 = 1;
    }
    return alloc::boxed::Box$LT$T$GT$::new::ha6383690e510e890(rbx_1);
}
