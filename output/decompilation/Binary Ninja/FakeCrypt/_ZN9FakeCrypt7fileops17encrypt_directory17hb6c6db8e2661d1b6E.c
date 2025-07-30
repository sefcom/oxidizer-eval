
  int64_t FakeCrypt::fileops::encrypt_directory::hb6c6db8e2661d1b6(int64_t arg1, int64_t arg2, int128_t* arg3, int64_t arg4)

{
    int64_t var_120;
    std::fs::read_dir::ha0facb67eaa83156(&var_120, arg1);
    char var_118;
    
    if (var_118 != 2)
    {
        int64_t rcx = var_120;
        int64_t var_a0 = 0;
        int64_t var_70_1 = 0;
        int64_t var_40_1 = rcx;
        char var_38_1 = var_118;
        
        while (true)
        {
            int64_t var_c8;
            _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h649188f1314bf01a(&var_c8, &var_a0);
            
            if (!var_c8)
                break;
            
            int64_t var_a8;
            int64_t var_d8_1 = var_a8;
            int128_t var_b8;
            int128_t var_e8_1 = var_b8;
            int128_t var_f8 = var_c8;
            void var_110;
            std::fs::DirEntry::path::h0d0e35cdc38feba2(&var_110, &var_f8);
            int64_t var_108;
            uint64_t var_100;
            
            if (!std::path::Path::is_dir::hf801d9cfeb23f5db(var_108, var_100))
                FakeCrypt::fileops::encrypt_file::ha7bc1626977de376(var_108, var_100, arg3, arg4);
            else
                FakeCrypt::fileops::encrypt_directory::hb6c6db8e2661d1b6(var_108, var_100, arg3, 
                    arg4);
            
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff597253ed3a0574(&var_110);
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h51ac40c013d79d1e(&var_f8);
        }
        
        int64_t result = core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::h0f0420560c044b1b(&var_a0);
        
        if (var_118 != 2)
            return result;
    }
    
    return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h798bf9b3fb5da4e8(&var_120);
}
