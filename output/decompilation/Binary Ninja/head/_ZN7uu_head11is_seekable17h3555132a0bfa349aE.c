
  int64_t uu_head::is_seekable::h3555132a0bfa349a(int32_t* arg1)

{
    int64_t rax;
    int64_t rdx;
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::stream_position::hea3f1471eccd6c38(arg1);
    int64_t var_20 = rax;
    int64_t var_18 = rdx;
    
    if (!rax)
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 =
            _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(arg1, 1, 0);
        int64_t var_30 = rax_1;
        int64_t var_28_1 = rdx_1;
        
        if (!rax_1)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::heb28040cc99787a6(&var_30);
            int64_t rax_4;
            int64_t rdx_3;
            rax_4 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(arg1, 
                0, core::result::Result$LT$T$C$E$GT$::unwrap::h63829b3fd8911809(0, rdx));
            var_30 = rax_4;
            int64_t var_28_2 = rdx_3;
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::heb28040cc99787a6(&var_30);
            int64_t result;
            result = !rax_4;
            return result;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::heb28040cc99787a6(&var_30);
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::heb28040cc99787a6(&var_20);
    return 0;
}
