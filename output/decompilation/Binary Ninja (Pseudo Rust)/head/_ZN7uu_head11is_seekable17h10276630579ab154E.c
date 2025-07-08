
  fn uu_head::is_seekable::h10276630579ab154(arg1: *mut i32) -> u64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg1, 2, 0);
    let mut var_20: i64 = rax;
    let var_18: i64 = rdx;
    let mut rbx: *mut i32;
    
    if rax != 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&var_20);
        rbx = nullptr;
    }
    else
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 =
            _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg1, 1, 0);
        let mut var_30: i64 = rax_1;
        let var_28_1: i64 = rdx_1;
        
        if rax_1 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&var_30);
            let mut rax_4: i64;
            let mut rdx_3: i64;
            rax_4 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg1, 
                0, core::result::Result$LT$T$C$E$GT$::unwrap::h241df4b67d3ddb4e(rdx));
            var_30 = rax_4;
            let var_28_2: i64 = rdx_3;
            rbx = rax_4 == 0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&var_30);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&var_30);
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hc645c62f33fc39cf(&var_20);
            rbx = nullptr;
        }
    }
    
    rbx
}
