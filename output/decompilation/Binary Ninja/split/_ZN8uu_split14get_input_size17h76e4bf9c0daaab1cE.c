
  int64_t uu_split::get_input_size::h76e4bf9c0daaab1c(void* arg1, void* arg2, int64_t* arg3, char arg4, int64_t arg5)

{
    int64_t r14 = arg5;
    void* var_118 = arg1;
    
    if (!(arg4 & 1))
        r14 = uucore::features::fs::sane_blksize::sane_blksize_from_path::h50cbcdc20fa4ef11(
            *(arg1 + 8));
    
    void* const var_e8 = arg2;
    int64_t var_e0 = r14;
    int64_t var_d8 = r14;
    char rax_2;
    int64_t rdx;
    rax_2 = std::io::default_read_to_end::hb855d02ac9073fed(&var_e8, arg3);
    
    if (!(rax_2 & 1))
    {
        if (r14 > rdx)
            return 0;
        
        void** var_110;
        void** var_100;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(*(arg1 + 8), *(arg1 + 0x10), "-rlsrc/uu/split/src/strategy.rsb…", 1))
        {
            std::fs::metadata::h87fecb55dab6d3cc(&var_e8, arg1);
            
            if (var_e8 != 2)
            {
                int64_t var_98;
                
                if (var_98 >= rdx)
                    return 0;
                
                void* rax_7 = var_118;
                *(rax_7 + 0x10);
                std::fs::File::open::h02f17a72580f2f54(&var_e8, *(rax_7 + 8));
                
                if (!(var_e8 & 1))
                {
                    var_110 = *var_e8[4];
                    char rax_9;
                    void* rdx_6;
                    rax_9 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(
                        &var_110, 1, 0);
                    
                    if (rax_9 & 1)
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::ha5fa7a96942ad614(&var_110);
                    else
                    {
                        if (rdx_6)
                        {
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::ha5fa7a96942ad614(
                                &var_110);
                            return 0;
                        }
                        
                        var_100 = &var_118;
                        int64_t (* var_f8_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfe3dd68d76795a20;
                        var_e8 = &data_50aee8;
                        int64_t var_e0_2 = 2;
                        int64_t var_c8_2 = 0;
                        void*** var_d8_2 = &var_100;
                        int64_t var_d0_2 = 1;
                        void var_38;
                        core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_38, 0, 
                            &var_e8);
                        std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                            alloc::boxed::Box$LT$T$GT$::new::h8b7f7ad758f1175c(&var_38), 
                            &data_50ad88);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::ha5fa7a96942ad614(&var_110);
                    }
                }
            }
        }
        else
        {
            var_110 = &var_118;
            int64_t (* var_108_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfe3dd68d76795a20;
            var_e8 = &data_50aec8;
            int64_t var_e0_1 = 2;
            int64_t var_c8_1 = 0;
            void*** var_d8_1 = &var_110;
            int64_t var_d0_1 = 1;
            core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_100, 0, &var_e8);
            std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                alloc::boxed::Box$LT$T$GT$::new::h8b7f7ad758f1175c(&var_100), &data_50ad88);
        }
    }
    
    return 1;
}
