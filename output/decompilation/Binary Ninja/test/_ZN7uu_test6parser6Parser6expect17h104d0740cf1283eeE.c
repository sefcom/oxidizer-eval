
  int64_t uu_test::parser::Parser::expect::h104d0740cf1283ee(int64_t* arg1)

{
    int64_t var_78;
    void* rsi;
    uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_78, rsi);
    int64_t r15 = var_78;
    int64_t var_70;
    int64_t var_68;
    uint64_t var_60;
    
    if (r15 == 3 &&
        _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$GT$::eq::h08c82ed25b2e05bf(
        var_68, var_60, ")(uutils coreutils) 0.0.30Check …", 1))
    {
        *arg1 = 7;
        /* tailcall */
        return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(
            var_70, var_68);
    }
    
    int64_t var_50 = 0;
    char const* const var_48 = ")(uutils coreutils) 0.0.30Check …";
    int64_t var_40 = 1;
    char var_38 = 1;
    int128_t var_30;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(&var_30, 
        &var_50);
    int64_t var_20;
    arg1[3] = var_20;
    *(arg1 + 8) = var_30;
    *arg1 = 1;
    
    if (r15 != 3)
        return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_78);
    
    return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(var_70, 
        var_68);
}
