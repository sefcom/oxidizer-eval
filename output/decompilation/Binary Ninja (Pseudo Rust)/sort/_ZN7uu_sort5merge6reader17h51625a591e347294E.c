
  fn uu_sort::merge::reader::h51625a591e347294(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i8) -> i64

{
    let mut var_1a8: i64 = arg1;
    let mut var_b0: i64;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&var_b0, &var_1a8);
    let mut i: i64;
    
    if i != -0x8000000000000000
    {
        do
        {
            let rdi_3: i64 = var_b0;
            let var_38: i64;
            let var_b8_1: i64 = var_38;
            let var_48: i128;
            let var_c8_1: i128 = var_48;
            let var_58: i128;
            let var_d8_1: i128 = var_58;
            let var_68: i128;
            let var_e8_1: i128 = var_68;
            let var_78: i128;
            let var_f8_1: i128 = var_78;
            let var_88: i128;
            let var_108_1: i128 = var_88;
            let var_98: i128;
            let var_118_1: i128 = var_98;
            let mut var_128: i128 = i;
            
            if rdi_3 >= arg3
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_3, arg3);
                /* no return */
            }
            
            let rax_2: i64 = rdi_3 * 9;
            
            if *(arg2 + (rax_2 << 3)) == 3
            {
                core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(
                    &var_128);
            }
            else
            {
                let r12_1: *mut i64 = arg2 + (rax_2 << 3);
                let var_1c0_1: i64 = arg4;
                let var_1c8_1: u64 = arg5;
                let mut var_1a9: ();
                let mut result_1: i64;
                uu_sort::chunks::read::h83fa724a03d73d23(&result_1, r12_1, &i, 0, &var_1a9, 
                    &r12_1[6], 
                    _$LT$uu_sort..merge..PlainTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::as_read::hc6f60a099c87a3aa(&r12_1[2]), 
                    &var_1a9);
                let result: i64 = result_1;
                
                if result != 0
                {
                    return result;
                }
                
                let mut var_190: i64;
                
                if var_190 == 0
                {
                    let result_2: i64 = *r12_1;
                    *r12_1 = 3;
                    
                    if result_2 == 3
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    result_1 = result_2;
                    let zmm0_2: i128 = *r12_1.byte_offset(8);
                    let zmm1_2: i128 = *r12_1.byte_offset(0x18);
                    let var_160_1: i128 = *r12_1.byte_offset(0x38);
                    let mut var_170: i128 = *r12_1.byte_offset(0x28);
                    var_190 = zmm0_2;
                    core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&result_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(
                        &*var_170[8]);
                    let mut var_188: i128;
                    let zmm0_3: i128 = var_188;
                    var_188 = zmm1_2;
                    result_1 = zmm0_3;
                    _$LT$uu_sort..merge..PlainTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::h15f37bc70ab25a56(&result_1);
                }
            }
            
            _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&var_b0, &var_1a8);
        } while i != -0x8000000000000000;
    }
    
    0
}
