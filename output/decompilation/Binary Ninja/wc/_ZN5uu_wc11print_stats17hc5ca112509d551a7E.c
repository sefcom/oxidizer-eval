
  ssize_t uu_wc::print_stats::hc5ca112509d551a7(void* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4, int64_t arg5)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_b0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t* var_150 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b0);
    var_b0 = *(arg1 + 0x1a);
    int64_t var_a8 = arg2[2];
    char var_a0 = *(arg1 + 0x1b);
    int64_t var_98 = arg2[3];
    char var_90 = *(arg1 + 0x19);
    int64_t var_88 = arg2[1];
    char var_80 = *(arg1 + 0x18);
    int64_t var_78 = *arg2;
    char var_70 = *(arg1 + 0x1c);
    int64_t var_68 = arg2[4];
    char const* const var_148 = 1;
    int64_t var_140 = 0;
    int64_t** var_f0 = &var_b0;
    void* const var_60;
    int64_t* var_e8 = &var_60;
    char* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::hb5039a33fc84877e(&var_f0);
    void* const var_130;
    int64_t* var_e0;
    ssize_t result_1;
    
    if (i)
    {
        void* var_138;
        
        if (arg5 > 0xffff)
        {
            var_138 = &i[8];
            var_130 = &data_4f9348;
            int64_t var_128_3 = 1;
            int64_t var_120_3 = 8;
            int128_t var_118_2 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_130);
            /* no return */
        }
        
        do
        {
            var_138 = &i[8];
            var_e0 = &var_148;
            int64_t (* var_d8_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
            void** var_d0_1 = &var_138;
            int64_t (* var_c8_1)(int64_t* arg1, int64_t* arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2d159e5c1bc14aca;
            int64_t var_c0_1 = 0;
            int16_t var_b8_1 = arg5;
            var_60 = &data_41a470;
            int64_t var_58_1 = 2;
            char const* const var_40_1 = &data_41a5b0;
            int64_t var_38_1 = 2;
            int64_t** var_50_1 = &var_e0;
            int64_t var_48_1 = 3;
            result_1 = std::io::Write::write_fmt::h441ee91dd5daaf10(&var_150, &var_60);
            
            if (result_1)
                goto label_46a55e_1;
            
            var_148 = " FilesDisabledextraStdinReprNotA…";
            int64_t var_140_1 = 1;
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::hb5039a33fc84877e(&var_f0);
        } while (i);
    }
    
    ssize_t result;
    
    if (!arg3)
    {
        label_46a530:
        var_130 = &data_4f9358;
        int64_t var_128_2 = 1;
        int64_t var_120_2 = 8;
        int128_t var_118_1 = {0};
        result_1 = std::io::Write::write_fmt::h441ee91dd5daaf10(&var_150, &var_130);
        label_46a55e:
        result = result_1;
    }
    else
    {
        var_e0 = &var_148;
        int64_t (* var_d8_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
        var_130 = &data_4187e0;
        int64_t var_128_1 = 1;
        int128_t var_118;
        *var_118[8] = 0;
        int64_t** var_120_1 = &var_e0;
        var_118 = 1;
        result_1 = std::io::Write::write_fmt::h441ee91dd5daaf10(&var_150, &var_130);
        
        if (result_1)
        {
            label_46a55e_1:
            result = result_1;
        }
        else
        {
            result = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_150, arg3, arg4);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::hb3c9186f2dd9bd85(-0x8000000000000000, arg3);
            
            if (!result)
                goto label_46a530;
        }
    }
    
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h5259c003b4f186df(var_150);
    return result;
}
