
  int64_t uu_sort::merge::reader::h079221aa5423e007(int64_t arg1, int32_t* arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t var_170 = arg1;
    int64_t var_b0;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&var_b0, &var_170);
    int64_t i;
    
    if (i != -0x8000000000000000)
    {
        do
        {
            int64_t rdi_3 = var_b0;
            int64_t var_38;
            int64_t var_b8_1 = var_38;
            int128_t var_48;
            int128_t var_c8_1 = var_48;
            int128_t var_58;
            int128_t var_d8_1 = var_58;
            int128_t var_68;
            int128_t var_e8_1 = var_68;
            int128_t var_78;
            int128_t var_f8_1 = var_78;
            int128_t var_88;
            int128_t var_108_1 = var_88;
            int128_t var_98;
            int128_t var_118_1 = var_98;
            int128_t var_128 = i;
            
            if (rdi_3 >= arg3)
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_3, arg3);
                /* no return */
            }
            
            void* r14_1 = rdi_3 * 0x38;
            
            if (*(arg2 + r14_1) == 3)
                core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(
                    &var_128);
            else
            {
                void* r14_2 = r14_1 + arg2;
                int64_t var_190_1 = arg4;
                uint64_t var_198_1 = arg5;
                void var_179;
                int64_t result_1;
                uu_sort::chunks::read::h4da7a75b34a6d647(&result_1, r14_2, &i, 0, &var_179, 
                    r14_2 + 0x10, r14_2 + 0x28, &var_179);
                int64_t result = result_1;
                
                if (result)
                    return result;
                
                int64_t var_158;
                
                if (!var_158)
                {
                    int64_t result_2 = *r14_2;
                    *r14_2 = 3;
                    
                    if (result_2 == 3)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    result_1 = result_2;
                    int128_t zmm2_2 = *(r14_2 + 0x28);
                    int128_t var_148_1 = *(r14_2 + 0x18);
                    var_158 = *(r14_2 + 8);
                    core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&result_1);
                    void var_150;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(
                        &var_150);
                    _$LT$uu_sort..merge..PlainMergeInput$LT$R$GT$$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::h0251bbe0508613d8(zmm2_2, *zmm2_2[8]);
                }
            }
            
            _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&var_b0, &var_170);
        } while (i != -0x8000000000000000);
    }
    
    return 0;
}
