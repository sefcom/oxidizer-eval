
  int64_t uu_env::EnvAppData::parse_arguments::h6f93681d78fa23cd(int128_t* arg1, int16_t* arg2, int64_t arg3)

{
    int128_t var_348;
    core::iter::traits::iterator::Iterator::collect::h1d474555779248d3(&var_348, arg3);
    int64_t result_1;
    uu_env::EnvAppData::process_all_string_arguments::h432dc834c161e0b0(&result_1, arg2, &var_348);
    int64_t result_2 = result_1;
    uint64_t var_310;
    uint64_t rax = var_310;
    int64_t var_308;
    int64_t rdx_3 = var_308;
    
    if (-(result_2) != -0x8000000000000000)
    {
        int64_t result_3 = result_2;
        uint64_t var_328_1 = rax;
        int64_t var_320_1 = rdx_3;
        void var_2e0;
        uu_env::uu_app::hb6fa1a6ab550063b(&var_2e0);
        clap_builder::builder::command::Command::try_get_matches_from::hcbad7fd535816d96(&result_1, 
            &var_2e0, &result_3);
        int64_t result = result_1;
        int32_t* rdi_4 = var_310;
        
        if (result != -0x8000000000000000)
        {
            int128_t var_2f0;
            arg1[4] = var_2f0;
            int128_t var_300;
            arg1[3] = var_300;
            int64_t var_338;
            arg1[1] = var_338;
            *arg1 = var_348;
            *(arg1 + 0x18) = result;
            arg1[2] = rdi_4;
            *(arg1 + 0x28) = var_308;
            return result;
        }
        
        rax = uu_env::EnvAppData::parse_arguments::_$u7b$$u7b$closure$u7d$$u7d$::h52e3249ef2aa2f4f(
            rdi_4);
    }
    
    *(arg1 + 8) = rax;
    arg1[1] = rdx_3;
    *arg1 = -0x8000000000000000;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h80dccb4ef18d8427(&var_348);
}
