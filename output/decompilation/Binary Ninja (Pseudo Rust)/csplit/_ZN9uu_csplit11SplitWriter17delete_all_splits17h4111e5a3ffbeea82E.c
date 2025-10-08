
  fn uu_csplit::SplitWriter::delete_all_splits::h4111e5a3ffbeea82(arg1: *mut c_void) -> *mut *mut c_void

{
    let mut result_2: *mut *mut c_void = nullptr;
    let r13: i64 = *arg1.byte_offset(0x28);
    
    if r13 == 0
    {
        return nullptr;
    }
    
    let rbx_1: *mut c_void = *arg1.byte_offset(0x20);
    let mut r14_1: i64 = 0;
    let mut result: *mut *mut c_void = nullptr;
    
    loop
    {
        let mut var_48: ();
        uu_csplit::split_name::SplitName::get::hecaf47b623a4fc62(&var_48, rbx_1, r14_1);
        let result_1: *mut *mut c_void = std::fs::remove_file::h4addf1ceb4211f90(&var_48);
        let mut result_3: *mut *mut c_void = result_1;
        
        if result_1 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7233fab9261f68f6(&result_3);
            r14_1 += 1;
            
            if r13 == r14_1
            {
                break;
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7233fab9261f68f6(&result_2);
            result_2 = result_1;
            result = result_1;
            r14_1 += 1;
            
            if r13 == r14_1
            {
                break;
            }
        }
    }
    
    result
}
