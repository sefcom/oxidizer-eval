
  uint64_t zoxide::util::FzfChild::write::h5751cfe08cd05641(int64_t* arg1, int32_t* arg2)

{
    if (arg2[4] == 0xffffffff)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int64_t var_38 = 1;
    int64_t rcx;
    int64_t var_30 = rcx;
    int64_t rdx;
    int64_t var_28 = rdx;
    int32_t var_20 = 9;
    int64_t* var_48 = &var_38;
    int64_t (* var_40)(char* arg1, int64_t* arg2) =
        _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
    void* const var_78 = &data_5348e0;
    int64_t var_70 = 2;
    int64_t var_58 = 0;
    int64_t** var_68 = &var_48;
    int64_t var_60 = 1;
    uint64_t result = std::io::Write::write_fmt::hfcb550c4a28e0f86(&arg2[4], &var_78);
    
    if (!result)
    {
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    if (std::io::error::Error::kind::h135fe00c4e7365f3(result) != 0xb)
    {
        uint64_t result_2 = result;
        var_78 = -0x8000000000000001;
        return anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h0b576dad6fa188d6(arg1, &var_78);
    }
    
    uint64_t result_1 = result;
    zoxide::util::FzfChild::wait::h58b549ee022416b6(&var_78, arg2);
    
    if (!(0 + -(var_78)))
    {
        arg1[2] = var_68;
        *arg1 = var_78;
    }
    else
    {
        arg1[1] = var_70;
        *arg1 = -0x7fffffffffffffff;
    }
    
    return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0a90eb9fb31b0c2(&result_1);
}
