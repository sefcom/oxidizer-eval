
  int64_t uu_env::EnvAppData::parse_arguments::hd6f5805c37ad784f(int128_t* arg1, int16_t* arg2, int64_t arg3)

{
    int128_t var_348;
    core::iter::traits::iterator::Iterator::collect::hdefd6c439cea8803(&var_348, arg3);
    int64_t result_1;
    uu_env::EnvAppData::process_all_string_arguments::h37f9f42a31d85940(&result_1, arg2, &var_348);
    int64_t result_2 = result_1;
    int32_t* var_328;
    int32_t* rax = var_328;
    int64_t var_320;
    int64_t rdx_2 = var_320;
    
    if (result_2 != -0x8000000000000000)
    {
        int32_t* var_358_1 = rax;
        void var_2e0;
        uu_env::uu_app::hee268625580a1e1b(&var_2e0);
        int64_t var_2e8_1 = rdx_2;
        int128_t var_2f8 = result_2;
        clap_builder::builder::command::Command::try_get_matches_from::hafb84ba160d1773c(&result_1, 
            &var_2e0, &var_2f8);
        int64_t result = result_1;
        int32_t* rdi_4 = var_328;
        
        if (result != -0x8000000000000000)
        {
            int128_t var_308;
            arg1[4] = var_308;
            int128_t var_318;
            arg1[3] = var_318;
            int64_t var_338;
            arg1[1] = var_338;
            *arg1 = var_348;
            *(arg1 + 0x18) = result;
            arg1[2] = rdi_4;
            *(arg1 + 0x28) = var_320;
            return result;
        }
        
        rax = uu_env::EnvAppData::parse_arguments::_$u7b$$u7b$closure$u7d$$u7d$::h935bf0b1cbb383a4(
            rdi_4);
    }
    
    *(arg1 + 8) = rax;
    arg1[1] = rdx_2;
    *arg1 = -0x8000000000000000;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h7647f138f93ed945(&var_348);
}
