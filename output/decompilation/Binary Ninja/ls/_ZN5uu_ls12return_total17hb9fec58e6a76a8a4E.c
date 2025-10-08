
  uint64_t uu_ls::return_total::hb9fec58e6a76a8a4(int64_t* arg1, void* arg2, int64_t arg3, void* arg4, void* arg5)

{
    void* var_b0;
    void* rbx;
    uint64_t r15;
    
    if (arg3)
    {
        int64_t r13_1 = *(arg4 + 0xd8);
        int64_t i_1 = arg3 * 0x130;
        r15 = 0;
        char rbp_1 = *(arg4 + 0xf9);
        int64_t i;
        
        do
        {
            void* rax_1 = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg2, arg5);
            var_b0 = rax_1;
            
            if (rax_1)
                rax_1 = &var_b0;
            
            r15 += core::option::Option$LT$T$GT$::map_or::hffc32c0b19950d04(rax_1, r13_1, rbp_1);
            arg2 += 0x130;
            i = i_1;
            i_1 -= 0x130;
        } while (i != 0x130);
        rbx = arg4;
        
        if (*(rbx + 0xf6))
            goto label_59c023;
        
        goto label_59c061;
    }
    
    r15 = 0;
    rbx = arg4;
    uint64_t result;
    
    if (!*(rbx + 0xf6))
    {
        label_59c061:
        void var_48;
        uu_ls::display_size::hb2e480a0d8619531(&var_48, r15, *(rbx + 0xf9));
        void* var_80 = &var_48;
        int64_t (* var_78_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        void* var_70_1 = rbx + 0x102;
        int64_t (* var_68_1)(char* arg1, int64_t* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
        var_b0 = &data_686bf8;
        int64_t var_a8_1 = 2;
        int64_t var_90_1 = 0;
        void** var_a0_1 = &var_80;
        int64_t var_98_1 = 2;
        int128_t var_60;
        core::option::Option$LT$T$GT$::map_or_else::h69a0b1154707aabf(&var_60, &var_b0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_48);
        uint64_t result_1;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_60;
    }
    else
    {
        label_59c023:
        int64_t rdx_1;
        result = uu_ls::dired::indent::h7abdb3264981e476(arg5);
        
        if (!result)
            goto label_59c061;
        
        arg1[1] = result;
        arg1[2] = rdx_1;
        *arg1 = -0x8000000000000000;
    }
    
    return result;
}
