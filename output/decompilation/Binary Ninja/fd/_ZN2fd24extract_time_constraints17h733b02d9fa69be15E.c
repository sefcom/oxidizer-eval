
  int64_t fd::extract_time_constraints::h733b02d9fa69be15(int64_t* arg1, void* arg2)

{
    int64_t var_d0 = 0;
    int64_t var_c8 = 8;
    int64_t result = 0;
    
    if (0 + -(*(arg2 + 0x118)))
        goto label_5fbd1c;
    
    void* var_d8 = arg2 + 0x118;
    int32_t var_78;
    uint64_t rdx_2 = fd::filter::time::TimeFilter::after::h806e9649c0de5a90(&var_78, 
        *(arg2 + 0x120), *(arg2 + 0x128));
    void** var_b8;
    void** const var_a8;
    
    if (var_78 == 2)
    {
        var_b8 = &var_d8;
        int64_t (* var_b0_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d7524885660455a;
        var_a8 = &data_802900;
        int64_t var_a0_1 = 2;
        int64_t var_88_1 = 0;
        void*** var_98_1 = &var_b8;
        int64_t var_90_1 = 1;
        void var_48;
        core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_48, 0, rdx_2, &var_a8);
        arg1[1] = anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h06348eb8850c741d(&var_48);
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$fd..filter..time..TimeFilter$GT$$GT$::h01aa39202dfda311(0, 8);
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::push::h06bfc1afd985d20a(&var_d0, &var_78);
    label_5fbd1c:
    
    if (*(arg2 + 0x130) != -0x8000000000000000)
    {
        var_d8 = arg2 + 0x130;
        int32_t var_60;
        uint64_t rdx_5 = fd::filter::time::TimeFilter::before::h5ae92f0af3d8d241(&var_60, 
            *(arg2 + 0x138), *(arg2 + 0x140));
        
        if (var_60 == 2)
        {
            var_b8 = &var_d8;
            int64_t (* var_b0_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d7524885660455a;
            var_a8 = &data_802900;
            int64_t var_a0_2 = 2;
            int64_t var_88_2 = 0;
            void*** var_98_2 = &var_b8;
            int64_t var_90_2 = 1;
            void var_30;
            core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_30, 0, rdx_5, 
                &var_a8);
            arg1[1] =
                anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h06348eb8850c741d(&var_30);
            *arg1 = -0x8000000000000000;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$fd..filter..time..TimeFilter$GT$$GT$::h01aa39202dfda311(var_d0, var_c8);
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h06bfc1afd985d20a(&var_d0, &var_60);
    }
    
    arg1[2] = result;
    *arg1 = var_d0;
    return result;
}
