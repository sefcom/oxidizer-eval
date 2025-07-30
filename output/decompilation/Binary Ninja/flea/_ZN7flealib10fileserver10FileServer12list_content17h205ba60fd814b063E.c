
  int64_t* flealib::fileserver::FileServer::list_content::h205ba60fd814b063(int64_t* arg1, void* arg2)

{
    int64_t* result = arg1;
    int64_t var_148 = 0;
    int64_t var_140 = 8;
    int64_t var_138 = 0;
    void* const var_178;
    int64_t rdx = std::fs::read_dir::h30d54cbcfb526b2b(&var_178, arg2);
    char var_170;
    int128_t var_1a8;
    int64_t var_198;
    void* const var_a8;
    
    if (var_170 != 2)
    {
        void* const r14_1 = var_178;
        void* const var_b8_1 = r14_1;
        char var_b0_1 = var_170;
        var_178 = 0;
        char* rax_2;
        uint64_t rdx_1;
        rax_2 = core::char::methods::encode_utf8_raw::hdf17d5a6360402f0(0x2f, &var_178);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_1a8, 
            rax_2, rdx_1);
        int64_t var_d8_1 = var_198;
        int128_t var_e8 = var_1a8;
        void* const var_130 = r14_1;
        char var_128_1 = var_170;
        
        while (true)
        {
            _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd1fca99f815234c7(&var_a8, &var_130);
            
            if (!(var_a8 & 1))
                break;
            
            void var_a0;
            core::result::Result$LT$T$C$E$GT$::unwrap::hba970de74e19c7dd(&var_1a8, &var_a0);
            void var_48;
            std::fs::DirEntry::file_name::h4f3d172d3b241ae5(&var_48, &var_1a8);
            std::sys::os_str::bytes::Buf::into_string::hf77169149873388a(&var_178, &var_48);
            int64_t (* var_160)(void* arg1, int64_t* arg2);
            int64_t (* var_f0_1)(void* arg1, int64_t* arg2) = var_160;
            char* var_100_1 = var_170;
            void* const var_108 = var_178;
            int128_t var_120;
            core::result::Result$LT$T$C$E$GT$::unwrap::h3006b5d3fd273ad5(&var_120, &var_108);
            int64_t* result_1 = result;
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h77988a4d3811dfe3(&var_1a8);
            void* var_c0 = arg2;
            var_1a8 = &var_c0;
            *var_1a8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49740bff2e11fb82;
            int128_t* var_198_1 = &var_e8;
            int64_t (* var_190_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            int128_t* var_188_1 = &var_120;
            int64_t (* var_180_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_178 = &data_46b258;
            var_170 = 3;
            int64_t var_158_1 = 0;
            int128_t* var_168_1 = &var_1a8;
            var_160 = 3;
            int128_t var_78;
            core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_78, &var_178);
            var_108 = var_78;
            uint64_t var_68;
            var_100_1 = var_68;
            result = 1;
            
            if (!std::path::Path::is_dir::hfde9fd88058448dc(var_100_1, var_68))
            {
                if (std::path::Path::is_file::hc0b8b22daf7f62b5(var_100_1, var_68))
                {
                    int64_t var_110;
                    int64_t var_198_3 = var_110;
                    var_1a8 = var_120;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hfb5dc137b94b4742(&var_148, &var_1a8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                        &var_108);
                    result = result_1;
                    continue;
                }
            }
            else
            {
                var_178 = &var_e8;
                var_170 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                int128_t* var_168_2 = &var_120;
                var_160 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                var_1a8 = &data_450610;
                *var_1a8[8] = 2;
                int64_t var_188_2 = 0;
                void* const* var_198_2 = &var_178;
                int64_t var_190_2 = 2;
                void var_60;
                core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_60, &var_1a8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hfb5dc137b94b4742(&var_148, &var_60);
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_108);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_120);
            result = result_1;
        }
        
        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::he13ccf2b86a03b58(&var_130);
        result[3] = var_138;
        *(result + 8) = var_148;
        *result = 0;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_e8);
    }
    else
    {
        var_a8 = var_178;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(
            &var_1a8, &var_a8, rdx);
        result[3] = var_198;
        *(result + 8) = var_1a8;
        *result = 1;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_a8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h361f2a090008fd41(&var_148);
    }
    return result;
}
