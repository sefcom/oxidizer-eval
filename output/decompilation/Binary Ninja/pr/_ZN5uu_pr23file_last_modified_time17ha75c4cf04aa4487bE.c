
  int64_t uu_pr::file_last_modified_time::ha75c4cf04aa4487b(int64_t* arg1, int64_t arg2)

{
    int32_t var_b8;
    std::fs::metadata::hd60c15ad96e2cad2(&var_b8, arg2);
    int64_t var_d0;
    
    if (var_b8 != 2)
        uu_pr::file_last_modified_time::_$u7b$$u7b$closure$u7d$$u7d$::h9ec467e0ee2775af(&var_d0);
    else
    {
        int64_t var_b0;
        int64_t var_c8_1 = var_b0;
        var_d0 = -0x8000000000000000;
    }
    
    return core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h0934fd5d80f5f406(arg1, &var_d0);
}
