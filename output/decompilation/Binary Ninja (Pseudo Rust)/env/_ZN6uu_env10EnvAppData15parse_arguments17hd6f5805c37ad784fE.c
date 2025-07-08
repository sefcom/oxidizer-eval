
  fn uu_env::EnvAppData::parse_arguments::hd6f5805c37ad784f(arg1: *mut i128, arg2: *mut i16, arg3: i64) -> i64

{
    let mut var_348: i128;
    core::iter::traits::iterator::Iterator::collect::hdefd6c439cea8803(&var_348, arg3);
    let mut result_1: i64;
    uu_env::EnvAppData::process_all_string_arguments::h37f9f42a31d85940(&result_1, arg2, &var_348);
    let result_2: i64 = result_1;
    let var_328: *mut i32;
    let mut rax: *mut i32 = var_328;
    let var_320: i64;
    let mut rdx_2: i64 = var_320;
    
    if result_2 != -0x8000000000000000
    {
        let var_358_1: *mut i32 = rax;
        let mut var_2e0: ();
        uu_env::uu_app::hee268625580a1e1b(&var_2e0);
        let var_2e8_1: i64 = rdx_2;
        let mut var_2f8: i128 = result_2;
        clap_builder::builder::command::Command::try_get_matches_from::hafb84ba160d1773c(&result_1, 
            &var_2e0, &var_2f8);
        let result: i64 = result_1;
        let rdi_4: *mut i32 = var_328;
        
        if result != -0x8000000000000000
        {
            let var_308: i128;
            arg1[4] = var_308;
            let var_318: i128;
            arg1[3] = var_318;
            let var_338: i64;
            arg1[1] = var_338;
            *arg1 = var_348;
            *arg1.byte_offset(0x18) = result;
            arg1[2] = rdi_4;
            *arg1.byte_offset(0x28) = var_320;
            return result;
        }
        
        rax = uu_env::EnvAppData::parse_arguments::_$u7b$$u7b$closure$u7d$$u7d$::h935bf0b1cbb383a4(
            rdi_4);
    }
    
    *arg1.byte_offset(8) = rax;
    arg1[1] = rdx_2;
    *arg1 = -0x8000000000000000;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h7647f138f93ed945(&var_348)
}
