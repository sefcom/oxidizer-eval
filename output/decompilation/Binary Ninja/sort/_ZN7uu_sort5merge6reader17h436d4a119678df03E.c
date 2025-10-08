
  int64_t uu_sort::merge::reader::h436d4a119678df03(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t* r15 = arg2;
    int64_t var_c8;
    int64_t result = _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0bc5d0c600556333(&var_c8, arg1);
    int64_t var_c0;
    
    if (!(0 + -(var_c0)))
    {
        int64_t* var_110_1 = r15;
        
        while (true)
        {
            int64_t rdi_3 = var_c8;
            
            if (rdi_3 >= arg3)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_3, arg3);
                /* no return */
            }
            
            void* r14_1 = rdi_3 * 0x38;
            int64_t rsi_2 = *(r15 + r14_1);
            
            if (rsi_2 == 3)
                core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h1242833000dc0e63(
                    &var_c0);
            else
            {
                int64_t* r14_2 = r14_1 + r15;
                int64_t var_120_1 = arg4;
                int64_t result_1;
                uu_sort::chunks::read::he8360ac327e09de7(&result_1, rsi_2, r14_2[1], &var_c0, 
                    &r14_2[2], &r14_2[5], arg5);
                result = result_1;
                
                if (result)
                    break;
                
                int64_t var_f8;
                
                if (!var_f8)
                {
                    int64_t result_2 = *r14_2;
                    *r14_2 = 3;
                    
                    if (result_2 == 3)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    result_1 = result_2;
                    int128_t zmm2_1 = *(r14_2 + 0x28);
                    int128_t var_e8_1 = *(r14_2 + 0x18);
                    var_f8 = *(r14_2 + 8);
                    core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h11dcc279d58efe5d(&result_1);
                    void var_f0;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf1471b789cf37b11(
                        &var_f0);
                    _$LT$uu_sort..merge..PlainMergeInput$LT$R$GT$$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::h344a5f7361947118(zmm2_1, *zmm2_1[8]);
                    r15 = var_110_1;
                }
            }
            
            _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0bc5d0c600556333(&var_c8, arg1);
            
            if (var_c0 == -0x8000000000000000)
                return 0;
        }
    }
    
    return result;
}
