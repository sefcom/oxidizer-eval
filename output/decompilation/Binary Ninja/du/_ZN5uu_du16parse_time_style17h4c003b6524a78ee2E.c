
  int64_t* uu_du::parse_time_style::h4c003b6524a78ee2(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t rax_3;
    
    if (!arg2)
    {
        label_4f3f99:
        arg1[1] = "%Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.…";
        arg1[2] = 0xe;
        rax_3 = 0;
    }
    else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb35b18b4f111dc4a(arg2, arg3, "full-isoENOTSO", 8))
    {
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb35b18b4f111dc4a(arg2, arg3, "long-isoDateTime", 8))
            goto label_4f3f99;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb35b18b4f111dc4a(arg2, arg3, "iso%Y-%m-%d %H:%M%Y-%m-%d %H:%M:…", 3))
        {
            void var_30;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1383527df360b9cf(
                &var_30, arg2, arg3);
            int64_t var_38 = 2;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h19aedf1648b3dc3b(&var_38);
            arg1[2] = &data_584558;
            rax_3 = 1;
        }
        else
        {
            arg1[1] = "%Y-%m-%dENETDOWNThursday\n      …";
            arg1[2] = 8;
            rax_3 = 0;
        }
    }
    else
    {
        arg1[1] = "%Y-%m-%d %H:%M:%S.%f %zatimectim…";
        arg1[2] = 0x17;
        rax_3 = 0;
    }
    
    *arg1 = rax_3;
    return arg1;
}
