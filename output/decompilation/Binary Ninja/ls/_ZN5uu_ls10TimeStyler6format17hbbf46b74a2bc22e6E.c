
  int64_t uu_ls::TimeStyler::format::hbbf46b74a2bc22e6(int128_t* arg1, int64_t* arg2, int32_t* arg3)

{
    int32_t var_58;
    int64_t rax;
    int64_t rcx;
    
    if (!(0 + -(arg2[3])))
    {
        int32_t rax_1 = arg2[6];
        
        if (!rax_1)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        var_58 = rax_1;
        int64_t var_54_1 = *(arg2 + 0x34);
        int32_t var_4c_1 = *(arg2 + 0x3c);
        char rax_4 = _$LT$chrono..naive..datetime..NaiveDateTime$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::had3cc123e5b71e62(arg3, &var_58);
        rax = 0x20;
        
        if (rax_4 <= 0)
            rax = 8;
        
        rcx = 0x28;
        
        if (rax_4 <= 0)
            rcx = 0x10;
    }
    else
    {
        rcx = 0x10;
        rax = 8;
    }
    
    int64_t rdx = *(arg2 + rax);
    chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::hf434d3eacd276ff5(&var_58, arg3, rdx, 
        rdx + *(arg2 + rcx) * 0x18);
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h6c5b53b2ff865619(arg1, 
        &var_58);
    return core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$core..slice..iter..Iter$LT$chrono..format..Item$GT$$GT$$GT$::h44deda9718cd4b84(&var_58);
}
