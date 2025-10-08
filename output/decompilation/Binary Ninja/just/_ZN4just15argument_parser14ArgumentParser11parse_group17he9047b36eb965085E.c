
  uint64_t just::argument_parser::ArgumentParser::parse_group::he9047b36eb965085(char* arg1, int64_t* arg2)

{
    int64_t rbp = arg2[3];
    uint64_t result;
    int128_t var_128;
    int72_t var_119;
    char result_1;
    int128_t var_107;
    int64_t var_f0;
    int128_t var_e8;
    int128_t var_d8;
    int128_t var_c8;
    int128_t var_b8;
    int64_t var_a8;
    int128_t var_98;
    int64_t var_88_1;
    int128_t var_78;
    void* r12_2;
    
    if (rbp >= arg2[1])
    {
        int64_t rax_3;
        int64_t rdx_2;
        rax_3 = just::argument_parser::ArgumentParser::rest::hce89c867d88cb806(arg2);
        just::argument_parser::ArgumentParser::resolve_recipe::h7bff01a000980bc2(&result_1, 
            arg2[2], rax_3, rdx_2);
        result = result_1;
        
        if (result == 0x38)
        {
            r12_2 = var_e8;
            int64_t rax_4 = *var_e8[8];
            var_128 = var_107;
            *var_119[8] = var_f0;
            var_78 = var_107;
            int64_t var_50 = rax_4;
            
            if (!rax_4)
            {
                var_88_1 = var_f0;
                var_98 = var_78;
                goto label_656500;
            }
            
            result_1 = 0;
            core::panicking::assert_failed::h449f2a7fe5426575(0, &var_50, &data_4692d0, &result_1);
            /* no return */
        }
        
        label_656450:
        var_128 = var_107;
        *(arg1 + 0x60) = var_a8;
        *(arg1 + 0x50) = var_b8;
        *(arg1 + 0x40) = var_c8;
        *(arg1 + 0x30) = var_d8;
        *(arg1 + 0x10) = var_107;
        *(arg1 + 1) = var_128;
        *arg1 = result;
        *(arg1 + 0x20) = var_e8;
    }
    else
    {
        int64_t* rax = *arg2;
        int64_t rcx_1 = rbp << 4;
        char* r15_1 = *(rax + rcx_1);
        void* r12_1 = *(rax + rcx_1 + 8);
        
        if (!_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(0x3a, r15_1, r12_1))
        {
            int64_t rax_6;
            int64_t rdx_4;
            rax_6 = just::argument_parser::ArgumentParser::rest::hce89c867d88cb806(arg2);
            just::argument_parser::ArgumentParser::resolve_recipe::h7bff01a000980bc2(&result_1, 
                arg2[2], rax_6, rdx_4);
            result = result_1;
            
            if (result != 0x38)
                goto label_656450;
            
            r12_2 = var_e8;
            rbp += *var_e8[8];
            var_98 = var_107;
            var_88_1 = var_f0;
            arg2[3] = rbp;
            label_656500:
            int64_t rax_9;
            int64_t rdx_7;
            rax_9 = just::argument_parser::ArgumentParser::rest::hce89c867d88cb806(arg2);
            just::recipe::Recipe$LT$D$GT$::argument_range::hb6d51d234f252302(&var_128, 
                *(r12_2 + 0x50), *(r12_2 + 0x58));
            int64_t rax_11 = core::cmp::Ord::min::hb98d0a4c5ddf358d(rdx_7, 
                just::recipe::Recipe$LT$D$GT$::max_arguments::h4d291109c050f382(*(r12_2 + 0x50), 
                    *(r12_2 + 0x58)));
            
            if (!_$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$just..range_ext..RangeExt$LT$T$GT$$GT$::range_contains::hff29ddceadc8cf0e(var_128, *var_128[8], rax_11))
            {
                void* rax_19;
                int64_t rdx_12;
                rax_19 = just::token::Token::lexeme::h66587cdf67f63270(r12_2 + 0x90);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h01c1076a84aed2ad(&result_1, *(r12_2 + 0x50), *(r12_2 + 0x58));
                int32_t* r13_2 = *(r12_2 + 0x50);
                int64_t rbp_2 = *(r12_2 + 0x58);
                int64_t rax_20 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hca6170881fec0ef2(r13_2, rbp_2 * 0xd0 + r13_2);
                int64_t rax_21 =
                    just::recipe::Recipe$LT$D$GT$::max_arguments::h4d291109c050f382(r13_2, rbp_2);
                *(arg1 + 0x30) = result_1;
                *(arg1 + 0x40) = *var_107[0xf];
                *arg1 = 1;
                *(arg1 + 8) = rdx_7;
                *(arg1 + 0x10) = rax_20;
                *(arg1 + 0x18) = rax_21;
                *(arg1 + 0x20) = rax_19;
                *(arg1 + 0x28) = rdx_12;
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_98);
            }
            
            int64_t rax_13;
            int64_t rdx_11;
            rax_13 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h6a42e857aad4d1cb(rax_11, rax_9, rdx_7);
            int128_t var_48;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hb39d7af186885eb1(&var_48, rax_13, rdx_11);
            arg2[3] = rbp + rax_11;
            *var_e8[8] = var_88_1;
            var_f0 = var_98;
            int64_t var_38;
            *var_107[0xf] = var_38;
            int128_t zmm0_4 = var_48;
            result_1 = zmm0_4;
            *(arg1 + 8) = zmm0_4;
            *(arg1 + 0x18) = *var_107[0xf];
            *(arg1 + 0x20) = var_f0;
            *(arg1 + 0x28) = var_e8;
            result = *var_e8[8];
            *(arg1 + 0x30) = result;
            *arg1 = 0x38;
        }
        else
        {
            var_78 = r15_1;
            *var_78[8] = r12_1;
            _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::h48731c1f5c72278a(&result_1, &var_78, 1);
            int64_t rax_2 = result_1;
            
            if (-(rax_2) != -0x8000000000000000)
            {
                *var_119[9] = var_f0;
                var_128 = var_107;
                var_128 = rax_2;
                just::argument_parser::ArgumentParser::resolve_recipe::he6ebb1d5b0007439(&result_1, 
                    arg2[2], *var_128[8], *var_119[1]);
                char result_2 = result_1;
                
                if (result_2 == 0x38)
                {
                    r12_2 = var_e8;
                    var_98 = var_107;
                    var_88_1 = var_f0;
                    rbp += 1;
                    arg2[3] = rbp;
                    core::ptr::drop_in_place$LT$just..module_path..ModulePath$GT$::hf76cd48e801dbf16(&var_128);
                    goto label_656500;
                }
                
                var_78 = var_107;
                var_78 = var_107;
                *(arg1 + 0x60) = var_a8;
                *(arg1 + 0x50) = var_b8;
                *(arg1 + 0x40) = var_c8;
                *(arg1 + 0x30) = var_d8;
                *(arg1 + 0x10) = var_78;
                *(arg1 + 1) = var_78;
                *arg1 = result_2;
                *(arg1 + 0x20) = var_e8;
                return core::ptr::drop_in_place$LT$just..module_path..ModulePath$GT$::hf76cd48e801dbf16(&var_128);
            }
            
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&arg1[0x28], r15_1, r12_1);
            *arg1 = 0x34;
            *(arg1 + 8) = 0;
        }
    }
    return result;
}
