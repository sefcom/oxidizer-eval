
  int64_t uu_split::get_input_size::hff72b499bd50ee30(void* arg1, void* arg2, int64_t* arg3, int64_t arg4, int64_t arg5)

{
    int64_t r14 = arg5;
    void* var_118 = arg1;
    
    if (!arg4)
    {
        *(arg1 + 0x10);
        int64_t rax_1;
        rax_1 = uucore::features::fs::sane_blksize::sane_blksize_from_path::haa29efd65464ae5d(
            *(arg1 + 8));
        r14 = rax_1;
    }
    
    void* const var_100 = arg2;
    int64_t var_f8 = r14;
    int64_t rax_2;
    int64_t rdx;
    rax_2 = std::io::default_read_to_end::h83389f9d77e2b24f(&var_100, arg3, 0, arg4);
    
    if (!rax_2)
    {
        if (r14 > rdx)
            return 0;
        
        void** var_110;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(*(arg1 + 8), *(arg1 + 0x10), "-xmulti-character separator mult…", 1))
        {
            std::fs::metadata::h341dbab23461c7c8(&var_100, arg1);
            
            if (var_100 != 2)
            {
                int64_t var_b0;
                
                if (var_b0 >= rdx)
                    return 0;
                
                void* rax_6 = var_118;
                *(rax_6 + 0x10);
                std::fs::File::open::hf05dc8e7da5fafe3(&var_100, *(rax_6 + 8));
                
                if (!var_100)
                {
                    int32_t var_11c = *var_100[4];
                    int64_t rax_8;
                    int64_t rdx_6;
                    rax_8 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(
                        &var_11c, 1, 0);
                    
                    if (!rax_8)
                    {
                        if (rdx_6)
                        {
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::hc63c21dac960bcdf(
                                &var_11c);
                            return 0;
                        }
                        
                        var_110 = &var_118;
                        int64_t (* var_108_2)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haeb779686b12abb9;
                        var_100 = &data_5483c0;
                        int64_t var_f8_2 = 2;
                        int64_t var_e0_2 = 0;
                        void*** var_f0_2 = &var_110;
                        int64_t var_e8_2 = 1;
                        void var_50;
                        core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_50, 0, 
                            &var_100);
                        std::io::error::Error::new::hd2fa1afc07f95968(0x27, &var_50);
                    }
                    
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hc63c21dac960bcdf(&var_11c);
                }
            }
        }
        else
        {
            var_110 = &var_118;
            int64_t (* var_108_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haeb779686b12abb9;
            var_100 = &data_5483a0;
            int64_t var_f8_1 = 2;
            int64_t var_e0_1 = 0;
            void*** var_f0_1 = &var_110;
            int64_t var_e8_1 = 1;
            void var_38;
            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_38, 0, &var_100);
            std::io::error::Error::new::hd2fa1afc07f95968(0x27, &var_38);
        }
    }
    
    return 1;
}
