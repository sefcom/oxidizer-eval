
  fn uu_ls::get_system_time::haabab7985650bb67(arg1: *mut i32, arg2: i8) -> *mut *mut [i8; 0xa5]

{
    let mut result_1: *mut *mut [i8; 0xa5];
    let var_18: i32;
    let mut result: *mut *mut [i8; 0xa5];
    
    match arg2
    {
        0 =>
        {
            std::fs::Metadata::modified::he3c19aa683c05d81(&result_1, arg1);
            result = result_1;
            
            if var_18 != 0x3b9aca00
            {
                return result;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..time..SystemTime$C$std..io..error..Error$GT$$GT$::hcabb8f1ce6cde3d2(&result_1);
            result
        }
        1 =>
        {
            std::fs::Metadata::accessed::he9d0f32bdb438e2a(&result_1, arg1);
            result = result_1;
            
            if var_18 != 0x3b9aca00
            {
                return result;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..time..SystemTime$C$std..io..error..Error$GT$$GT$::hcabb8f1ce6cde3d2(&result_1);
            result
        }
        2 =>
        {
            let mut rax_1: i64;
            let mut rdx: i32;
            rax_1 =
                core::time::Duration::new::h61e6c1810c6155c1(*arg1.byte_offset(0x88), arg1[0x24]);
            /* tailcall */
            _$LT$std..time..SystemTime$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::ha7d73b33c4ccffeb(0, 0, rax_1, rdx)
        }
        3 =>
        {
            std::fs::Metadata::created::hedfca1c6312fe34e(&result_1, arg1);
            result = result_1;
            
            if var_18 != 0x3b9aca00
            {
                return result;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..time..SystemTime$C$std..io..error..Error$GT$$GT$::hcabb8f1ce6cde3d2(&result_1);
            result
        }
    }
}
