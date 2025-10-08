
  void* const uu_sort::ext_sort::reader_writer::h849ad3f081ba95be(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int128_t* arg5, int64_t* arg6, int64_t* arg7, void* arg8)

{
    int64_t rax;
    int64_t rdx;
    rdx = HIGHQ(-0x3333333333333333 * *(arg2 + 0x68));
    rax = LOWQ(-0x3333333333333333 * *(arg2 + 0x68));
    int64_t var_110;
    uu_sort::ext_sort::read_write_loop::h130c0126f6a2bd68(&var_110, arg1, arg8, *(arg2 + 0x99), 
        rdx >> 3, arg2, arg3, arg4, arg5, arg6);
    int64_t rcx_1 = var_110;
    void* result_3;
    void* const result = result_3;
    
    if (rcx_1 != -0x7ffffffffffffffd)
    {
        int64_t var_98 = rcx_1;
        void* const result_4 = result;
        int64_t rax_1 = -0x8000000000000000 ^ rcx_1;
        int64_t rcx_2 = 3;
        
        if (rax_1 < 3)
            rcx_2 = rax_1;
        
        void** var_100;
        void** const var_88_1 = var_100;
        void* const result_2;
        
        switch (rcx_2)
        {
            case 0:
            {
                core::ptr::drop_in_place$LT$uu_sort..Output$GT$::h7def0b71731a8447(arg7);
                return nullptr;
                break;
            }
            case 1:
            {
                result_2 = result;
                void* result_7;
                
                if (!*(arg2 + 0x84))
                {
                    int64_t rdi_11 = *(result + 0x20);
                    result_7 = uu_sort::print_sorted::hf96f077461fc8daa(rdi_11, 
                        rdi_11 + *(result + 0x28) * 0x18, arg2, arg7);
                }
                else
                {
                    int64_t rax_4 = *(result + 0x20);
                    int64_t var_100_2 = rax_4;
                    int128_t var_f8;
                    var_f8 = rax_4 + *(result + 0x28) * 0x18;
                    var_110 = 0;
                    *var_f8[8] = arg2;
                    int128_t var_e8;
                    var_e8 = &result_2;
                    result_7 = uu_sort::print_sorted::h10a88dada5bd82d9(&var_110, arg2, arg7);
                }
                
                result = result_7;
                
                if (!result_7)
                {
                    core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(
                        &result_2);
                    return nullptr;
                }
                
                core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(
                    &result_2);
                break;
            }
            case 2:
            {
                void* const result_1 = result;
                void** const var_130 = var_100;
                void* result_8 = *(result + 0x20);
                int64_t rcx_5 = *(result + 0x28);
                result_2 = result_8;
                void* var_120_1 = result_8 + rcx_5 * 0x18;
                void** var_118_1 = &result_1;
                int64_t rax_2 = var_100[4];
                int64_t rcx_8 = var_100[5];
                var_110 = rax_2;
                int64_t var_108 = rax_2 + rcx_8 * 0x18;
                void** const* var_100_1 = &var_130;
                int128_t var_80;
                itertools::merge_join::merge_by_new::h1d4b470930e6d24a(&var_80, &result_2, 
                    &var_110, arg2);
                void* result_5;
                
                if (!*(arg2 + 0x84))
                    result_5 = uu_sort::print_sorted::ha55b1dbd27657341(&var_80, arg2, arg7);
                else
                {
                    int64_t var_30;
                    int64_t var_a8_1 = var_30;
                    int128_t var_40;
                    int128_t var_b8_1 = var_40;
                    int128_t var_50;
                    int128_t var_c8_1 = var_50;
                    int128_t var_60;
                    int128_t var_d8_1 = var_60;
                    int128_t var_70;
                    int128_t var_e8_1 = var_70;
                    int128_t var_f8_1 = var_80;
                    var_110 = 0;
                    void* var_a0_1 = arg2;
                    result_5 = uu_sort::print_sorted::h9511b61c395e85fc(&var_110, arg2, arg7);
                }
                
                result = result_5;
                
                if (!result_5)
                {
                    core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(
                        &var_130);
                    core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(
                        &result_1);
                    return nullptr;
                }
                
                core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(&var_130);
                core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(
                    &result_1);
                break;
            }
            case 3:
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hf75d9570fff832c0(&var_110, &var_98);
                void* result_6;
                void** rdx_5;
                result_6 = uu_sort::merge::merge_with_file_limit::hbbb83f2c216a5f5f(&var_110, arg2, 
                    arg7, arg8);
                
                if (!result_6)
                    return nullptr;
                
                result = result_6;
                break;
            }
        }
    }
    else
        core::ptr::drop_in_place$LT$uu_sort..Output$GT$::h7def0b71731a8447(arg7);
    
    return result;
}
