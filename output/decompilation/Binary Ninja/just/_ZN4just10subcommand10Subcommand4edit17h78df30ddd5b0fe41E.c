
  uint64_t just::subcommand::Subcommand::edit::h78df30ddd5b0fe41(char* arg1, void* arg2)

{
    void var_f8;
    std::env::var_os::h1049275d85070725(&var_f8, "VISUALvimEDIT");
    int64_t var_110;
    core::option::Option$LT$T$GT$::or_else::he3544969cbfbc8cf(&var_110, &var_f8);
    int128_t var_128;
    int64_t var_118;
    
    if (!(0 + -(var_110)))
    {
        int64_t var_100;
        var_118 = var_100;
        var_128 = var_110;
    }
    else
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_128, "vimEDIT", 3);
    
    std::process::Command::new::h8c26813fa7e2543d(&var_f8, &var_128);
    std::process::Command::current_dir::hfb203bdc96bba19b(&var_f8, arg2 + 0x18);
    std::process::Command::arg::hdfbbb0c642d6ac00(&var_f8, arg2);
    std::process::Command::status::h6e1e3c5811681da5(&var_110);
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h68c11017a1ebd395(&var_f8);
    uint64_t result;
    
    if (var_110 != 1)
    {
        result = *var_110[4];
        
        if (!result)
        {
            *arg1 = 0x38;
            return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                &var_128);
        }
        
        *(arg1 + 0x18) = var_118;
        *(arg1 + 8) = var_128;
        *arg1 = 0x14;
        *(arg1 + 4) = result;
    }
    else
    {
        uint64_t result_1;
        result = result_1;
        *(arg1 + 0x20) = var_118;
        *(arg1 + 0x10) = var_128;
        *arg1 = 0x13;
        *(arg1 + 8) = result;
    }
    
    return result;
}
