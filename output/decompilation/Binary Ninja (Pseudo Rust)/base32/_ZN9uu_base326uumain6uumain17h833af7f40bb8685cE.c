
  fn uu_base32::uumain::uumain::h833af7f40bb8685c(arg1: i64, arg2: i64) -> *mut i128

{
    let mut var_78: i64;
    uu_base32::base_common::parse_base_cmd_args::h94218dbfb2ea4ba6(&var_78, arg1, arg2, 
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
                uu_base32::base_common::handle_input::h2d10849ec2fe263b(&result_1, 2, &var_78);
            result = result_4;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::ha901095e617d76fc(result_1, r14);
        }
        else
        {
            core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::hac45288a00438e90(
                &var_40);
        }
    }
    
    result
}
