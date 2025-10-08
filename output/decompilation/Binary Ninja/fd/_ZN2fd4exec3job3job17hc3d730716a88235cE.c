
  uint64_t fd::exec::job::job::hc3d730716a88235c(int128_t* arg1, int64_t arg2, int64_t arg3, char arg4, void* arg5)

{
    int64_t rax = *(arg5 + 0x1a0);
    void var_308;
    _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he05ad75fcea55ffb(
        &var_308, arg1);
    int64_t var_380 = 0;
    
    if (!(0 + -(*(arg5 + 0x168))))
        var_380 = *(arg5 + 0x170);
    
    char rax_2 = *(arg5 + 0x1e7);
    int64_t rdx = *(arg5 + 0x178);
    uint64_t rbp;
    rbp = 2;
    int128_t var_348;
    int64_t var_2a0;
    int128_t var_298;
    void var_260;
    int64_t var_168;
    int128_t var_160;
    int128_t var_150;
    int128_t var_140;
    int64_t var_130;
    void var_128;
    
    if (!(*(arg5 + 0x1e6) & 1))
    {
        while (true)
        {
            _$LT$core..iter..adapters..flatten..Flatten$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc38c5685e7f50b75(&var_168, &var_308);
            int64_t rax_12 = var_168;
            
            if (rax_12 == 5)
                break;
            
            if (rax_12 != 4)
            {
                var_2a0 = rax_12;
                int64_t var_268_2 = var_130;
                int128_t var_278_2 = var_140;
                int128_t var_288_2 = var_150;
                var_298 = var_160;
                memcpy(&var_260, &var_128, 0xf8);
                int64_t rax_15;
                int64_t rdx_3;
                rax_15 = fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(&var_2a0, rax_2);
                int64_t r10_2;
                r10_2 = rax >= 2;
                int64_t var_390_2 = r10_2;
                rbp = fd::exit_codes::merge_exitcodes::h93e1d44106fac795(rbp |
                    fd::exec::CommandSet::execute::haf020f5cb9b7fb2f(arg2, arg3, rax_15, rdx_3, 
                    var_380, rdx, arg4) << 8);
                core::ptr::drop_in_place$LT$fd..dir_entry..DirEntry$GT$::h394f0ee2b950b509(
                    &var_2a0);
            }
            else
            {
                int64_t var_318_2 = var_130;
                int128_t var_328_2 = var_140;
                int128_t var_338_2 = var_150;
                var_348 = var_160;
                core::ptr::drop_in_place$LT$ignore..Error$GT$::hba255aab589c455f(&var_348);
            }
        }
    }
    else
    {
        while (true)
        {
            _$LT$core..iter..adapters..flatten..Flatten$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc38c5685e7f50b75(&var_168, &var_308);
            int64_t rax_4 = var_168;
            
            if (rax_4 == 5)
                break;
            
            if (rax_4 != 4)
            {
                var_2a0 = rax_4;
                int64_t var_268_1 = var_130;
                int128_t var_278_1 = var_140;
                int128_t var_288_1 = var_150;
                var_298 = var_160;
                memcpy(&var_260, &var_128, 0xf8);
                int64_t rax_7;
                int64_t rdx_1;
                rax_7 = fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(&var_2a0, rax_2);
                int64_t r10_1;
                r10_1 = rax >= 2;
                int64_t var_390_1 = r10_1;
                rbp = fd::exit_codes::merge_exitcodes::h93e1d44106fac795(rbp |
                    fd::exec::CommandSet::execute::haf020f5cb9b7fb2f(arg2, arg3, rax_7, rdx_1, 
                    var_380, rdx, arg4) << 8);
                core::ptr::drop_in_place$LT$fd..dir_entry..DirEntry$GT$::h394f0ee2b950b509(
                    &var_2a0);
            }
            else
            {
                int64_t var_318_1 = var_130;
                int128_t var_328_1 = var_140;
                int128_t var_338_1 = var_150;
                var_348 = var_160;
                void var_2b8;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h7dbe7d6fc55b9016(&var_2b8, &var_348);
                fd::error::print_error::h653511955bf98e50(&var_2b8);
                core::ptr::drop_in_place$LT$ignore..Error$GT$::hba255aab589c455f(&var_348);
            }
        }
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$crossbeam_channel..channel..IntoIter$LT$fd..walk..Batch$GT$$GT$$GT$::hdb508d9cf42bcfa6(&var_308);
    return rbp;
}
