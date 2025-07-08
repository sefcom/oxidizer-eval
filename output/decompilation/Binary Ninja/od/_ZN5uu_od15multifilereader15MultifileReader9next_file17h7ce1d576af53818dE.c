
  void** const uu_od::multifilereader::MultifileReader::next_file::h7ce1d576af53818d(void* arg1)

{
    void** const result;
    
    if (*(arg1 + 0x10))
    {
        while (true)
        {
            int64_t var_98;
            alloc::vec::Vec$LT$T$C$A$GT$::remove::h5ed5aa81710c39da(&var_98, arg1, 0);
            int64_t rax_1 = var_98;
            void* const var_c8;
            int64_t var_90;
            int64_t var_88;
            
            if (rax_1)
            {
                if (rax_1 != 1)
                {
                    result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h57a2b63c3e431407(*(arg1 + 0x18), *(arg1 + 0x20));
                    *(arg1 + 0x18) = var_90;
                    *(arg1 + 0x20) = var_88;
                    return result;
                }
                
                std::io::stdio::stdin::h7215cc131abb55d8();
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hdd333a46d728f0dc(
                    &var_c8, 0x2000, &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
                int128_t* rax_4 = alloc::boxed::Box$LT$T$GT$::new::h76e6865e403783a0(&var_c8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h57a2b63c3e431407(*(arg1 + 0x18), *(arg1 + 0x20));
                *(arg1 + 0x18) = rax_4;
                result = &data_543218;
            }
            else
            {
                int32_t var_80;
                std::fs::File::open::h35a119a0b35fa654(&var_80, var_90);
                
                if (!var_80)
                {
                    int32_t var_7c;
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha0adff11cdf1efa4(&var_c8, 0x2000, var_7c);
                    int128_t* rax_5 = alloc::boxed::Box$LT$T$GT$::new::h22131294aa53784e(&var_c8);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h57a2b63c3e431407(*(arg1 + 0x18), *(arg1 + 0x20));
                    *(arg1 + 0x18) = rax_5;
                    result = &data_5431c0;
                }
                else
                {
                    int64_t var_78;
                    int64_t var_d0 = var_78;
                    int64_t rax_3;
                    int64_t rdx_2;
                    rax_3 = uucore::util_name::h60d842bf27b05e82();
                    int64_t var_70 = rax_3;
                    int64_t var_68_1 = rdx_2;
                    int64_t* var_50 = &var_70;
                    int64_t (* var_48_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                    var_c8 = &data_543158;
                    int64_t var_c0_1 = 2;
                    int64_t var_a8_1 = 0;
                    int64_t** var_b8_1 = &var_50;
                    int64_t var_b0_1 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
                    var_70 = 0;
                    int64_t var_68_2 = var_90;
                    int64_t var_60_1 = var_88;
                    char var_58_1 = 0;
                    var_50 = &var_70;
                    int64_t (* var_48_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    int64_t* var_40_1 = &var_d0;
                    int64_t (* var_38_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    var_c8 = &data_543178;
                    int64_t var_c0_2 = 3;
                    int64_t var_a8_2 = 0;
                    int64_t** var_b8_2 = &var_50;
                    int64_t var_b0_2 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
                    *(arg1 + 0x28) = 1;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::he48ae13975420feb(
                        var_d0);
                    
                    if (!*(arg1 + 0x10))
                        break;
                    
                    continue;
                }
            }
            *(arg1 + 0x20) = result;
            return result;
        }
    }
    
    result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h57a2b63c3e431407(*(arg1 + 0x18), *(arg1 + 0x20));
    *(arg1 + 0x18) = 0;
    return result;
}
