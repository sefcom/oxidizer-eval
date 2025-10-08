
  fn uu_head::is_seekable::h3555132a0bfa349a(arg1: *mut i32) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::stream_position::hea3f1471eccd6c38(arg1);
    let mut var_20: i64 = rax;
    let var_18: i64 = rdx;
    
    if rax == 0
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 =
            _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(arg1, 1, 0);
        let mut var_30: i64 = rax_1;
        let var_28_1: i64 = rdx_1;
        
        if rax_1 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::heb28040cc99787a6(&var_30);
            let mut rax_4: i64;
            let mut rdx_3: i64;
            rax_4 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(arg1, 
                0, core::result::Result$LT$T$C$E$GT$::unwrap::h63829b3fd8911809(0, rdx));
            var_30 = rax_4;
            let var_28_2: i64 = rdx_3;
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::heb28040cc99787a6(&var_30);
            let mut result: i64;
            result = rax_4 == 0;
            return result;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::heb28040cc99787a6(&var_30);
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::heb28040cc99787a6(&var_20);
    0
}
