
  fn uu_sort::merge::reader::h079221aa5423e007(arg1: i64, arg2: *mut i32, arg3: i64, arg4: i64, arg5: i8) -> i64

{
    let mut var_170: i64 = arg1;
    let mut var_b0: i64;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&var_b0, &var_170);
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
            
            let r14_1: *mut c_void = rdi_3 * 0x38;
            
            if *arg2.byte_offset(r14_1) == 3
            {
                core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(
                    &var_128);
            }
            else
            {
                let r14_2: *mut c_void = r14_1.byte_offset(arg2);
                let var_190_1: i64 = arg4;
                let var_198_1: u64 = arg5;
                let mut var_179: ();
                let mut result_1: i64;
                uu_sort::chunks::read::h4da7a75b34a6d647(&result_1, r14_2, &i, 0, &var_179, 
                    r14_2.byte_offset(0x10), r14_2.byte_offset(0x28), &var_179);
                let result: i64 = result_1;
                
                if result != 0
                {
                    return result;
                }
                
                let mut var_158: i64;
                
                if var_158 == 0
                {
                    let result_2: i64 = *r14_2;
                    *r14_2 = 3;
                    
                    if result_2 == 3
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    result_1 = result_2;
                    let zmm2_2: i128 = *r14_2.byte_offset(0x28);
                    let var_148_1: i128 = *r14_2.byte_offset(0x18);
                    var_158 = *r14_2.byte_offset(8);
                    core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&result_1);
                    let mut var_150: ();
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(
                        &var_150);
                    _$LT$uu_sort..merge..PlainMergeInput$LT$R$GT$$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::h0251bbe0508613d8(zmm2_2, *zmm2_2[8]);
                }
            }
            
            _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&var_b0, &var_170);
        } while i != -0x8000000000000000;
    }
    
    0
}
