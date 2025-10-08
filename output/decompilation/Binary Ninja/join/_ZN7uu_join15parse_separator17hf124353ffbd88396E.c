
  void uu_join::parse_separator::hf124353ffbd88396(int64_t* arg1, char* arg2, int64_t arg3)

{
    uint64_t* rax;
    
    if (arg3 == 1)
    {
        rax = *arg2;
        *arg1 = -0x8000000000000000;
        arg1[1] = rax;
    }
    else if (arg3)
    {
        int32_t var_90;
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_90, arg2, arg3);
        
        if (var_90 != 1)
        {
            int64_t var_88;
            int64_t var_60 = var_88;
            uint64_t var_80;
            uint64_t var_58_1 = var_80;
            int64_t var_a0 = var_88;
            int64_t var_98_1 = var_88 + var_80;
            char rax_2;
            int32_t rdx;
            rax_2 = core::str::validations::next_code_point::h0099d433804eecaf(&var_a0, arg1);
            
            if (!(rax_2 & 1) || rdx == 0x110000)
            {
                core::option::expect_failed::h3f620cfb8545dc61("valid string with at least one b…");
                /* no return */
            }
            
            int32_t rdx_1;
            rax = core::str::validations::next_code_point::h0099d433804eecaf(&var_a0, arg1);
            
            if (!(rax & 1))
                _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h7bd9bfc71eaad3d0(arg1, var_88, var_80);
            else if ((rdx ^ 0x5c) | (rdx_1 ^ 0x30))
            {
                int64_t* var_50 = &var_60;
                int64_t (* var_48_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4a0c6b711cbcdca8;
                var_90 = &data_4fe520;
                int64_t var_88_1 = 1;
                int64_t var_70_1 = 0;
                int64_t** var_80_1 = &var_50;
                int32_t var_78;
                var_78 = 1;
                void var_40;
                core::option::Option$LT$T$GT$::map_or_else::h9a77d6fb89838746(&var_40, &var_90);
                int32_t var_28_1 = 1;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h6838e3ae00012226(&var_40);
                arg1[2] = &data_4fe360;
                *arg1 = -0x7ffffffffffffffc;
            }
            else
            {
                *arg1 = -0x8000000000000000;
                arg1[1] = 0;
            }
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9c1c5d77c0020408(&var_90, "non-UTF-8 multi-byte tabvalid st…", 0x18);
            int32_t var_78_1 = 1;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h6838e3ae00012226(&var_90);
            arg1[2] = &data_4fe360;
            *arg1 = -0x7ffffffffffffffc;
        }
    }
    else
        *arg1 = -0x7ffffffffffffffe;
}
