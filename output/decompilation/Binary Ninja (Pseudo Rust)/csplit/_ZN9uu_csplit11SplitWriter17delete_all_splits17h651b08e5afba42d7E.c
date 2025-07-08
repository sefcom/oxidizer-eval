
  fn uu_csplit::SplitWriter::delete_all_splits::h651b08e5afba42d7(arg1: *mut c_void) -> *mut *mut c_void

{
    let mut result_2: *mut *mut c_void = nullptr;
    let r15: i64 = *arg1.byte_offset(0x28);
    
    if r15 == 0
    {
        return nullptr;
    }
    
    let rbx_1: *mut c_void = *arg1.byte_offset(0x20);
    let mut result: *mut *mut c_void = nullptr;
    let mut rbp_1: i64 = 0;
    let mut rax_1: i64;
    
    do
    {
        rax_1 =
            _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(
            rbp_1);
        let mut var_48: ();
        uu_csplit::split_name::SplitName::get::h6978abebafad78db(&var_48, rbx_1, rbp_1);
        let result_1: *mut *mut c_void = std::fs::remove_file::he9a77943a534f5d9(&var_48);
        
        if result_1 != 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h6090d7ef5efdac7e(&result_2);
            result_2 = result_1;
            result = result_1;
        }
        
        rbp_1 = rax_1;
    } while rax_1 < r15;
    result
}
