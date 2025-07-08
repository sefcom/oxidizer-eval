
  int64_t* uu_od::parse_inputs::parse_inputs_traditional::h2788ba0cc89acb8c(int128_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t* r14 = arg2;
    int64_t* result;
    int64_t var_80;
    void* var_a8;
    void** const var_90;
    void** const rax_4;
    
    if (arg3 > 3)
    {
        var_a8 = &r14[6];
        int64_t (* var_a0_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        rax_4 = &data_541ef0;
        label_4d2fcb:
        var_90 = rax_4;
        int64_t var_88_1 = 1;
        int64_t var_70_1 = 0;
        void** var_80_1 = &var_a8;
        int64_t var_78_1 = 1;
        result = core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(arg1, &var_90);
        arg1[2] = 3;
    }
    else
        switch (arg3)
        {
            case 0:
            {
                int128_t* rax_1 = alloc::alloc::Global::alloc_impl::hf61749d460433fff();
                
                if (!rax_1)
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(
                    &var_90, "-traditionaladdress-radixread-by…", 1);
                int64_t var_98_1 = var_80;
                int128_t zmm0_1 = var_90;
                var_a8 = zmm0_1;
                rax_1[1] = var_80;
                *rax_1 = zmm0_1;
                result = alloc::slice::hack::into_vec::h371cf1993c745829(arg1, rax_1, 1);
                arg1[2] = 2;
                break;
            }
            case 1:
            {
                uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&var_a8, *r14, r14[1]);
                
                if (!var_a8)
                {
                    int64_t* var_a0;
                    r14 = var_a0;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(
                        &var_90, "-traditionaladdress-radixread-by…", 1);
                    result = nullptr;
                }
                else
                {
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h20a08bdd9390469f(&var_90, r14, &r14[2]);
                    result = 2;
                }
                
                arg1[1] = var_80;
                *arg1 = var_90;
                *(arg1 + 0x18) = r14;
                arg1[2] = result;
                break;
            }
            case 2:
            {
                char* r15_1 = *r14;
                uint64_t r12_1 = r14[1];
                int64_t var_50;
                uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&var_50, r15_1, r12_1);
                int64_t var_60;
                uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&var_60, r14[2], 
                    r14[3]);
                int64_t rax_3 = var_60;
                int64_t var_58;
                
                if (var_50 | rax_3)
                {
                    if (rax_3)
                        goto label_4d2fb4;
                    
                    result = _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(arg1, r15_1, r12_1);
                    *(arg1 + 0x18) = var_58;
                    arg1[2] = 0;
                }
                else
                {
                    result = _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(arg1, "-traditionaladdress-radixread-by…", 1);
                    int64_t var_48;
                    *(arg1 + 0x18) = var_48;
                    arg1[2] = 1;
                    *(arg1 + 0x28) = var_58;
                }
                break;
            }
            case 3:
            {
                int64_t var_40;
                uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&var_40, r14[2], 
                    r14[3]);
                int64_t var_30;
                uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&var_30, r14[4], 
                    r14[5]);
                
                if (var_40)
                {
                    label_4d2fb4:
                    var_a8 = &r14[2];
                    int64_t (* var_a0_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                    rax_4 = &data_541ed0;
                    goto label_4d2fcb;
                }
                
                if (var_30)
                {
                    var_a8 = &r14[4];
                    int64_t (* var_a0_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                    rax_4 = &data_541ee0;
                    goto label_4d2fcb;
                }
                
                result =
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(
                    arg1, *r14, r14[1]);
                int64_t var_38;
                *(arg1 + 0x18) = var_38;
                arg1[2] = 1;
                int64_t var_28;
                *(arg1 + 0x28) = var_28;
                break;
            }
        }
    return result;
}
