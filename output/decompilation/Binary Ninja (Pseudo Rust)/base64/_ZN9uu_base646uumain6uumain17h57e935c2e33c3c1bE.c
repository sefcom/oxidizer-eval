
  fn uu_base64::uumain::uumain::h57e935c2e33c3c1b(arg1: i64, arg2: i64) -> *mut i128

{
    let mut var_78: i64;
    uu_base32::base_common::parse_base_cmd_args::hebf5c3bfe7660b5f(&var_78, arg1, arg2, 
        "encode/decode data and print to …", 0x177, "{} [OPTION]... [FILE]", 0x15);
    let rax: i64 = var_78;
    let result_2: *mut i128;
    let mut result: *mut i128 = result_2;
    
    if rax != 2
    {
        let var_50: i64;
        let var_18_1: i64 = var_50;
        let mut var_40: i64 = rax;
        let result_3: *mut i128 = result;
        uu_base32::base_common::get_input::h0f77b7573e033d64(&var_78, &var_40);
        result = result_2;
        let mut var_68: *mut i64;
        let r14: *mut i64 = var_68;
        
        if var_78 == 0
        {
            let mut result_1: *mut i128 = result;
            var_68 = var_68;
            var_78 = var_40;
            let mut result_4: *mut i128;
            let mut rdx_2: *mut i64;
            result_4 =
                uu_base32::base_common::handle_input::h3e33950ee952075b(&result_1, 0, &var_78);
            result = result_4;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h7155bfd3c4b56ec3(result_1, r14);
        }
        else
        {
            core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::h99d51649836290b4(
                &var_40);
        }
    }
    
    result
}
