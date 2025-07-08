
  uint64_t uu_sort::merge::reader::h11b0cb37fc5cfc3e(int64_t arg1, int32_t* arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t var_208 = arg1;
    int64_t var_b0;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&var_b0, &var_208);
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
            
            void* r12_1 = rdi_3 * 0x78;
            
            if (*(arg2 + r12_1) == 3)
                core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(
                    &var_128);
            else
            {
                void* r12_2 = r12_1 + arg2;
                int64_t var_220_1 = arg4;
                uint64_t var_228_1 = arg5;
                void var_209;
                uint64_t result_1;
                uu_sort::chunks::read::hb6526332bacfaf4d(&result_1, r12_2, &i, 0, &var_209, 
                    r12_2 + 0x60, 
                    _$LT$uu_sort..merge..CompressedTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::as_read::ha0d5386ede3f11a1(r12_2 + 0x10), 
                    &var_209);
                uint64_t result = result_1;
                
                if (result)
                    return result;
                
                int64_t var_1a0;
                
                if (!var_1a0)
                {
                    uint64_t result_2 = *r12_2;
                    *r12_2 = 3;
                    
                    if (result_2 == 3)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    result_1 = result_2;
                    int128_t var_140_1 = *(r12_2 + 0x68);
                    int128_t var_150 = *(r12_2 + 0x58);
                    int128_t var_160_1 = *(r12_2 + 0x48);
                    var_1a0 = *(r12_2 + 8);
                    int128_t zmm1_2 = *(r12_2 + 0x18);
                    int128_t zmm2_2 = *(r12_2 + 0x28);
                    int128_t zmm3_2 = *(r12_2 + 0x38);
                    core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&result_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(
                        &*var_150[8]);
                    int128_t var_170_1 = var_160_1;
                    int128_t var_198;
                    int128_t zmm0_3 = var_198;
                    int128_t var_180_1 = zmm3_2;
                    int128_t var_190_1 = zmm2_2;
                    var_198 = zmm1_2;
                    result_1 = zmm0_3;
                    result = _$LT$uu_sort..merge..CompressedTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::hd6042182e1cc1daa(&result_1);
                    
                    if (result)
                        return result;
                }
            }
            
            _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&var_b0, &var_208);
        } while (i != -0x8000000000000000);
    }
    
    return 0;
}
