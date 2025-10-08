
  fn uu_sort::merge::reader::h436d4a119678df03(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i8) -> i64

{
    let mut r15: *mut i64 = arg2;
    let mut var_c8: i64;
    let mut result: i64 = _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0bc5d0c600556333(&var_c8, arg1);
    let mut var_c0: i64;
    
    if !(0 + -(var_c0))
    {
        let var_110_1: *mut i64 = r15;
        
        loop
        {
            let rdi_3: i64 = var_c8;
            
            if rdi_3 >= arg3
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_3, arg3);
                /* no return */
            }
            
            let r14_1: *mut c_void = rdi_3 * 0x38;
            let rsi_2: i64 = *r15.byte_offset(r14_1);
            
            if rsi_2 == 3
            {
                core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h1242833000dc0e63(
                    &var_c0);
            }
            else
            {
                let r14_2: *mut i64 = r14_1.byte_offset(r15);
                let var_120_1: i64 = arg4;
                let mut result_1: i64;
                uu_sort::chunks::read::he8360ac327e09de7(&result_1, rsi_2, r14_2[1], &var_c0, 
                    &r14_2[2], &r14_2[5], arg5);
                result = result_1;
                
                if result != 0
                {
                    break;
                }
                
                let mut var_f8: i64;
                
                if var_f8 == 0
                {
                    let result_2: i64 = *r14_2;
                    *r14_2 = 3;
                    
                    if result_2 == 3
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    result_1 = result_2;
                    let zmm2_1: i128 = *r14_2.byte_offset(0x28);
                    let var_e8_1: i128 = *r14_2.byte_offset(0x18);
                    var_f8 = *r14_2.byte_offset(8);
                    core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h11dcc279d58efe5d(&result_1);
                    let mut var_f0: ();
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf1471b789cf37b11(
                        &var_f0);
                    _$LT$uu_sort..merge..PlainMergeInput$LT$R$GT$$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::h344a5f7361947118(zmm2_1, *zmm2_1[8]);
                    r15 = var_110_1;
                }
            }
            
            _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0bc5d0c600556333(&var_c8, arg1);
            
            if var_c0 == -0x8000000000000000
            {
                return 0;
            }
        }
    }
    
    result
}
