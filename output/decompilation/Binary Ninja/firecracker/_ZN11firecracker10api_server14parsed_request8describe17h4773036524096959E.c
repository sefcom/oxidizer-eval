
  int64_t firecracker::api_server::parsed_request::describe::h4773036524096959(int64_t* arg1, char arg2, int64_t arg3, uint64_t arg4, void* arg5)

{
    char var_89 = arg2;
    int64_t var_68 = arg3;
    uint64_t var_60 = arg4;
    char rax;
    uint64_t rdx;
    rax = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg3, arg4, "/mmds/cpu-config request on . To…", 5);
    char* var_88;
    void* const var_58;
    
    if (!arg5 || rax)
    {
        var_88 = &var_89;
        int64_t (* var_80)(char* arg1, int64_t* arg2) =
            _$LT$micro_http..common..Method$u20$as$u20$core..fmt..Debug$GT$::fmt::h82e2c33064e74b2c;
        int64_t* var_78 = &var_68;
        int64_t (* var_70)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h9e623ec8df216556;
        var_58 = &data_7a3790;
        int64_t var_50 = 2;
    }
    else
    {
        char rax_1;
        rax_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg3, arg4, "/cpu-config request on . To view…", 0xb);
        
        if (!rax_1)
            /* tailcall */
            return firecracker::api_server::parsed_request::describe_with_body::hf46da4cd4417a7fb(
                arg1, arg2, arg3, arg4, *(arg5 + 8), *(arg5 + 0x10));
        
        if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 4)
        {
            char rax_3;
            rax_3 = log::__private_api::enabled::h13ece3defc83be86();
            
            if (rax_3)
                /* tailcall */
                return
                    firecracker::api_server::parsed_request::describe_with_body::hf46da4cd4417a7fb(
                    arg1, arg2, arg3, arg4, *(arg5 + 8), *(arg5 + 0x10));
        }
        
        var_88 = &var_89;
        int64_t (* var_80_1)(char* arg1, int64_t* arg2) =
            _$LT$micro_http..common..Method$u20$as$u20$core..fmt..Debug$GT$::fmt::h82e2c33064e74b2c;
        int64_t* var_78_1 = &var_68;
        int64_t (* var_70_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h9e623ec8df216556;
        var_58 = &data_7a37b0;
        int64_t var_50_1 = 3;
    }
    
    int64_t var_38 = 0;
    char** var_48 = &var_88;
    int64_t var_40 = 2;
    return core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(arg1, 0, rdx, &var_58);
}
