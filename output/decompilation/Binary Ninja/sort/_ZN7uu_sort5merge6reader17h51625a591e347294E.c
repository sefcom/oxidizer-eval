
  int64_t uu_sort::merge::reader::h51625a591e347294(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t var_1a8 = arg1;
    int64_t var_b0;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&var_b0, &var_1a8);
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
            
            int64_t rax_2 = rdi_3 * 9;
            
            if (*(arg2 + (rax_2 << 3)) == 3)
                core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(
                    &var_128);
            else
            {
                int64_t* r12_1 = arg2 + (rax_2 << 3);
                int64_t var_1c0_1 = arg4;
                uint64_t var_1c8_1 = arg5;
                void var_1a9;
                int64_t result_1;
                uu_sort::chunks::read::h83fa724a03d73d23(&result_1, r12_1, &i, 0, &var_1a9, 
                    &r12_1[6], 
                    _$LT$uu_sort..merge..PlainTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::as_read::hc6f60a099c87a3aa(&r12_1[2]), 
                    &var_1a9);
                int64_t result = result_1;
                
                if (result)
                    return result;
                
                int64_t var_190;
                
                if (!var_190)
                {
                    int64_t result_2 = *r12_1;
                    *r12_1 = 3;
                    
                    if (result_2 == 3)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    result_1 = result_2;
                    int128_t zmm0_2 = *(r12_1 + 8);
                    int128_t zmm1_2 = *(r12_1 + 0x18);
                    int128_t var_160_1 = *(r12_1 + 0x38);
                    int128_t var_170 = *(r12_1 + 0x28);
                    var_190 = zmm0_2;
                    core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&result_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(
                        &*var_170[8]);
                    int128_t var_188;
                    int128_t zmm0_3 = var_188;
                    var_188 = zmm1_2;
                    result_1 = zmm0_3;
                    _$LT$uu_sort..merge..PlainTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::h15f37bc70ab25a56(&result_1);
                }
            }
            
            _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&var_b0, &var_1a8);
        } while (i != -0x8000000000000000);
    }
    
    return 0;
}
