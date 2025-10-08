
  char const (** const )[0x9a] alacritty::config::deserialize_config::h5c79ebe9ac2f1598(int64_t* arg1, int64_t arg2, int64_t arg3, char arg4)

{
    int64_t var_78 = arg2;
    int64_t var_70 = arg3;
    char const (** const result_2)[0x9a];
    std::fs::read_to_string::h99a142b6408e88d3(&result_2, arg2);
    char const (** const result)[0x9a] = result_2;
    int64_t var_138;
    
    if (-(result) == -0x8000000000000000)
    {
        *arg1 = 3;
        arg1[1] = var_138;
        return result;
    }
    
    char const (** const result_1)[0x9a] = result;
    int64_t var_150_1 = var_138;
    int64_t** var_130;
    int64_t** var_148_1 = var_130;
    result_2 = 0;
    char* rax;
    uint64_t rdx;
    rax = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0xfeff, &result_2);
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h44e6b8f4b9615064(var_138, 
        var_130, rax, rdx))
    {
        alloc::string::String::split_off::hb414f7fc7cd130c9(&result_2, &result_1, 3);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&result_1);
        var_148_1 = var_130;
        result_1 = result_2;
    }
    
    void* rax_3;
    void* rdx_2;
    rax_3 = std::path::Path::extension::h0018158968ea260f(arg2, arg3);
    void* r14_1 = rdx_2;
    void* r15_1 = 1;
    
    if (rax_3)
        r15_1 = rax_3;
    
    if (!rax_3)
        r14_1 = rax_3;
    
    char rax_4 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(r15_1, r14_1, &data_4ed608, 4);
    char rax_5;
    
    if (!rax_4)
        rax_5 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(r15_1, r14_1, "ymlNo config file found; using d…", 3);
    
    if (!rax_4 && !rax_5)
        goto label_8435d6;
    
    if (!core::str::_$LT$impl$u20$str$GT$::trim_matches::he66bed476250953d(var_150_1, var_148_1))
        goto label_8435d6;
    
    int128_t var_128;
    int128_t var_e8;
    int64_t var_c8;
    int64_t* var_68;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 2)
    {
        var_68 = &var_78;
        int64_t (* var_60_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h3a6a9966801425ec;
        result_2 = &data_c81e68;
        var_138 = 2;
        *var_128[8] = 0;
        var_130 = &var_68;
        var_128 = 1;
        int64_t rax_7 = log::__private_api::loc::h250021ea1f26630a(&data_c81e88);
        var_e8 = "alacritty::configReloading confi…";
        *var_e8[8] = 0x11;
        int128_t var_d8;
        var_d8 = "alacritty::configReloading confi…";
        *var_d8[8] = 0x11;
        var_c8 = rax_7;
        log::__private_api::log::h0b6680b994d742b1(&result_2, 2, &var_e8);
    }
    
    var_68 = -0x8000000000000000;
    int64_t var_60_2 = var_150_1;
    int64_t** var_58_1 = var_148_1;
    serde_yaml::de::Deserializer::de::h64ea0f102abe5b7e(&result_2, &var_68);
    char const (** const result_4)[0x9a] = result_2;
    
    if (result_4 != -0x7ffffffffffffff9)
    {
        int128_t var_108;
        int64_t var_a8_1 = *var_108[8];
        int128_t var_118;
        int128_t var_b8_1 = var_118;
        var_c8 = var_128;
        int128_t var_d8_1 = var_130;
        var_e8 = result_4;
        *var_e8[8] = var_138;
        alacritty::config::prune_yaml_nulls::h5299bbbffe0ec2b5(&var_e8);
        toml::ser::to_string::h904b6bc7c841546e(&result_2, &var_e8);
        int128_t zmm0_3 = var_138;
        int64_t** rcx_3 = var_128;
        
        if (result_2 != 1)
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&result_1);
            var_148_1 = rcx_3;
            result_1 = zmm0_3;
            core::ptr::drop_in_place$LT$serde_yaml..value..Value$GT$::h9fe2f02f8bf51b64(&var_e8);
            label_8435d6:
            toml::de::from_str::hb249a18d92861147(&result_2, var_150_1, var_148_1);
            char const (** const result_3)[0x9a] = result_2;
            var_e8 = var_138;
            int128_t zmm0_5;
            
            if (result_3 != 2)
            {
                int128_t var_f8;
                *(arg1 + 0x48) = var_f8;
                *(arg1 + 0x38) = var_108;
                *(arg1 + 0x28) = var_118;
                zmm0_5 = var_e8;
                *(arg1 + 0x18) = var_128;
                *(arg1 + 8) = zmm0_5;
                *arg1 = result_3;
            }
            else
            {
                zmm0_5 = var_e8;
                *(arg1 + 0x18) = var_128;
                *(arg1 + 8) = zmm0_5;
                *arg1 = 7;
            }
        }
        else
        {
            arg1[3] = rcx_3;
            *(arg1 + 8) = zmm0_3;
            *arg1 = 5;
            core::ptr::drop_in_place$LT$serde_yaml..value..Value$GT$::h9fe2f02f8bf51b64(&var_e8);
        }
    }
    else
    {
        *arg1 = 6;
        arg1[1] = var_138;
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&result_1);
}
