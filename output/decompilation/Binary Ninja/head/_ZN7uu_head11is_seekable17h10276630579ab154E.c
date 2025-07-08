
  uint64_t uu_head::is_seekable::h10276630579ab154(int32_t* arg1)

{
    int64_t rax;
    int64_t rdx;
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg1, 2, 0);
    int64_t var_20 = rax;
    int64_t var_18 = rdx;
    int32_t* rbx;
    
    if (rax)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&var_20);
        rbx = nullptr;
    }
    else
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 =
            _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg1, 1, 0);
        int64_t var_30 = rax_1;
        int64_t var_28_1 = rdx_1;
        
        if (!rax_1)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&var_30);
            int64_t rax_4;
            int64_t rdx_3;
            rax_4 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg1, 
                0, core::result::Result$LT$T$C$E$GT$::unwrap::h241df4b67d3ddb4e(rdx));
            var_30 = rax_4;
            int64_t var_28_2 = rdx_3;
            rbx = !rax_4;
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&var_30);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&var_30);
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&var_20);
            rbx = nullptr;
        }
    }
    
    return rbx;
}
