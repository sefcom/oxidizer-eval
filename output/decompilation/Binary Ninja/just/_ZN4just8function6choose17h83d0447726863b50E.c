
  int64_t* just::function::choose::h83d0447726863b50(int64_t* arg1, int64_t arg2, char* arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    uint64_t rbx;
    uint64_t var_30 = rbx;
    char* var_88 = arg3;
    int64_t var_80 = arg4;
    int64_t rax;
    int64_t rdx;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::hdd70f1898d43baa2();
    int64_t var_78;
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h63b6eadcd60cf47f(&var_78, 
        arg6, rax, rdx);
    int64_t r13_1 = arg6 + arg5;
    int64_t var_b0 = arg5;
    char rax_1;
    int32_t rdx_2;
    rax_1 = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_b0, rbx);
    int64_t* result;
    int32_t var_118;
    char** var_100;
    void** const var_e0;
    
    if (!(rax_1 & 1))
    {
        label_669e80:
        core::iter::traits::iterator::Iterator::collect::h3611f2f820a4d673(&var_118, arg5);
        char var_98;
        uint64_t rdx_6 = core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
            &var_98, arg3, arg4);
        int64_t var_110;
        int64_t rbx_2;
        
        if (!var_98)
        {
            int64_t var_90;
            rbx_2 = var_90;
            label_669f4c:
            var_100 = rand::rngs::thread::rng::hef6247fa92ae25d7();
            int64_t var_d0_2 = 0;
            int64_t var_c8_2 = rbx_2;
            var_e0 = &var_118;
            char*** var_d8_2 = &var_100;
            core::iter::traits::iterator::Iterator::collect::hcf3d54e9baa350db(arg1, &var_e0);
            core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h0c7eb0e715cf9f73(
                &var_100);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h4b26006e42ee6c54(var_118, 
                var_110);
            result = arg1;
        }
        else
        {
            char var_97;
            char var_121 = var_97;
            var_100 = &var_88;
            int64_t (* var_f8_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
            char* var_f0_1 = &var_121;
            int64_t (* var_e8_1)(char* arg1, int64_t* arg2) = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h3e61086f3d7b9af4;
            var_e0 = &data_82fdd0;
            int64_t var_d8_1 = 2;
            int64_t var_c0_1 = 0;
            char*** var_d0_1 = &var_100;
            int64_t var_c8_1 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_b0, 0, rdx_6, 
                &var_e0);
            int64_t rax_5 = var_b0;
            
            if (-(rax_5) == -0x8000000000000000)
            {
                rbx_2 = r13_1;
                goto label_669f4c;
            }
            
            result = arg1;
            result[1] = rax_5;
            *(result + 0x10) = r13_1;
            *result = 1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h4b26006e42ee6c54(var_118, 
                var_110);
        }
    }
    else
    {
        while (true)
        {
            var_118 = rdx_2;
            char rax_2;
            uint64_t rdx_3;
            rax_2 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h2af7b92ca7762240(
                &var_78, rdx_2);
            
            if (rax_2)
            {
                var_100 = &var_118;
                int64_t (* var_f8_2)(int32_t* arg1, int64_t* arg2) =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                var_e0 = &data_82fdb0;
                int64_t var_d8_3 = 2;
                int64_t var_c0_2 = 0;
                char*** var_d0_3 = &var_100;
                int64_t var_c8_3 = 1;
                int128_t var_48;
                core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_48, 0, rdx_3, 
                    &var_e0);
                result = arg1;
                int64_t var_38;
                result[3] = var_38;
                *(result + 8) = var_48;
                *result = 1;
                break;
            }
            
            char rax_3;
            rax_3 = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_b0, &var_b0);
            
            if (!(rax_3 & 1))
                goto label_669e80;
        }
    }
    int64_t var_70;
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$char$GT$$GT$::h545f9764f395959f(var_78, var_70);
    return result;
}
