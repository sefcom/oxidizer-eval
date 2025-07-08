
  fn uu_sort::merge::reader::h11b0cb37fc5cfc3e(arg1: i64, arg2: *mut i32, arg3: i64, arg4: i64, arg5: i8) -> u64

{
    let mut var_208: i64 = arg1;
    let mut var_b0: i64;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&var_b0, &var_208);
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
            
            let r12_1: *mut c_void = rdi_3 * 0x78;
            
            if *arg2.byte_offset(r12_1) == 3
            {
                core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(
                    &var_128);
            }
            else
            {
                let r12_2: *mut c_void = r12_1.byte_offset(arg2);
                let var_220_1: i64 = arg4;
                let var_228_1: u64 = arg5;
                let mut var_209: ();
                let mut result_1: u64;
                uu_sort::chunks::read::hb6526332bacfaf4d(&result_1, r12_2, &i, 0, &var_209, 
                    r12_2.byte_offset(0x60), 
                    _$LT$uu_sort..merge..CompressedTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::as_read::ha0d5386ede3f11a1(r12_2.byte_offset(0x10)), 
                    &var_209);
                let mut result: u64 = result_1;
                
                if result != 0
                {
                    return result;
                }
                
                let mut var_1a0: i64;
                
                if var_1a0 == 0
                {
                    let result_2: u64 = *r12_2;
                    *r12_2 = 3;
                    
                    if result_2 == 3
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    result_1 = result_2;
                    let var_140_1: i128 = *r12_2.byte_offset(0x68);
                    let mut var_150: i128 = *r12_2.byte_offset(0x58);
                    let var_160_1: i128 = *r12_2.byte_offset(0x48);
                    var_1a0 = *r12_2.byte_offset(8);
                    let zmm1_2: i128 = *r12_2.byte_offset(0x18);
                    let zmm2_2: i128 = *r12_2.byte_offset(0x28);
                    let zmm3_2: i128 = *r12_2.byte_offset(0x38);
                    core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&result_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(
                        &*var_150[8]);
                    let var_170_1: i128 = var_160_1;
                    let mut var_198: i128;
                    let zmm0_3: i128 = var_198;
                    let var_180_1: i128 = zmm3_2;
                    let var_190_1: i128 = zmm2_2;
                    var_198 = zmm1_2;
                    result_1 = zmm0_3;
                    result = _$LT$uu_sort..merge..CompressedTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::hd6042182e1cc1daa(&result_1);
                    
                    if result != 0
                    {
                        return result;
                    }
                }
            }
            
            _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&var_b0, &var_208);
        } while i != -0x8000000000000000;
    }
    
    0
}
