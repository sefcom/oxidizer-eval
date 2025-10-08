
  fn uu_env::EnvAppData::parse_arguments::h6f93681d78fa23cd(arg1: *mut i128, arg2: *mut i16, arg3: i64) -> i64

{
    let mut var_348: i128;
    core::iter::traits::iterator::Iterator::collect::h1d474555779248d3(&var_348, arg3);
    let mut result_1: i64;
    uu_env::EnvAppData::process_all_string_arguments::h432dc834c161e0b0(&result_1, arg2, &var_348);
    let result_2: i64 = result_1;
    let var_310: u64;
    let mut rax: u64 = var_310;
    let var_308: i64;
    let mut rdx_3: i64 = var_308;
    
    if -(result_2) != -0x8000000000000000
    {
        let mut result_3: i64 = result_2;
        let var_328_1: u64 = rax;
        let var_320_1: i64 = rdx_3;
        let mut var_2e0: ();
        uu_env::uu_app::hb6fa1a6ab550063b(&var_2e0);
        clap_builder::builder::command::Command::try_get_matches_from::hcbad7fd535816d96(&result_1, 
            &var_2e0, &result_3);
        let result: i64 = result_1;
        let rdi_4: *mut i32 = var_310;
        
        if result != -0x8000000000000000
        {
            let var_2f0: i128;
            arg1[4] = var_2f0;
            let var_300: i128;
            arg1[3] = var_300;
            let var_338: i64;
            arg1[1] = var_338;
            *arg1 = var_348;
            *arg1.byte_offset(0x18) = result;
            arg1[2] = rdi_4;
            *arg1.byte_offset(0x28) = var_308;
            return result;
        }
        
        rax = uu_env::EnvAppData::parse_arguments::_$u7b$$u7b$closure$u7d$$u7d$::h52e3249ef2aa2f4f(
            rdi_4);
    }
    
    *arg1.byte_offset(8) = rax;
    arg1[1] = rdx_3;
    *arg1 = -0x8000000000000000;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h80dccb4ef18d8427(&var_348)
}
