
  int128_t* uu_chcon::process_files::h906a9b3bc232c0fe(int128_t* arg1, void* arg2, int32_t* arg3, int32_t* arg4)

{
    int64_t rsi = *(arg2 + 8);
    int32_t var_108;
    uu_chcon::fts::FTS::new::h1ba0cd59aadc0d7f(&var_108, rsi, rsi + *(arg2 + 0x10) * 0x18, 
        *(&data_419bd0 + (*(arg2 + 0x7b) << 2)));
    int128_t var_100;
    
    if (var_108 != 0x12)
    {
        uint64_t rax_3 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x48);
        
        if (!rax_3)
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        int128_t zmm0_2 = var_108;
        int64_t var_c8;
        *(rax_3 + 0x40) = var_c8;
        int128_t var_d8;
        *(rax_3 + 0x30) = var_d8;
        int128_t var_e8;
        *(rax_3 + 0x20) = var_e8;
        *(rax_3 + 0x10) = var_100;
        *rax_3 = zmm0_2;
        *arg1 = 1;
        *(arg1 + 8) = rax_3;
        arg1[1] = 1;
        return arg1;
    }
    
    int128_t var_118 = var_100;
    int64_t var_130 = 0;
    int64_t var_128_1 = 8;
    int64_t var_120_1 = 0;
    
    while (true)
    {
        int32_t var_c0;
        uu_chcon::fts::FTS::read_next_entry::h61830a73507cb09a(&var_c0, &var_118);
        
        if (var_c0 != 0x12)
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h394a0ecf89d44a6f(&var_130, &var_c0);
            label_46442c:
            arg1[1] = var_120_1;
            *arg1 = var_130;
            core::ptr::drop_in_place$LT$uu_chcon..fts..FTS$GT$::hf3c3ebc386ffa52d(&var_118);
            return arg1;
        }
        
        char var_bc;
        
        if (!var_bc)
            goto label_46442c;
        
        int32_t var_78;
        uu_chcon::process_file::h1368cd6f12435f91(&var_78, arg2, arg3, &var_118, arg4);
        
        if (var_78 != 0x12)
            alloc::vec::Vec$LT$T$C$A$GT$::push::h394a0ecf89d44a6f(&var_130, &var_78);
        else
            core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_78);
    }
}
