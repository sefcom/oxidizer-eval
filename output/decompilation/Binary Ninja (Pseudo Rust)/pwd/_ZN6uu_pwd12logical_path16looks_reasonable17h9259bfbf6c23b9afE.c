
  fn uu_pwd::logical_path::looks_reasonable::h9259bfbf6c23b9af(arg1: i64, arg2: u64) -> u64

{
    let mut var_2f0: i64;
    std::path::Path::components::hd0346d362206f2e9(&var_2f0, arg1, arg2);
    let mut var_2e0: i8;
    let var_2b6: i8;
    let mut rbx_1: i32;
    
    if var_2b6 != 0 || var_2e0 - 5 >= 2
    {
        let mut var_190: i64;
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_190, arg1, arg2);
        let r15_1: i64 = var_190;
        let var_188: i64;
        let var_180: i64;
        _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h26c300b68eedf97d(&var_2e0, var_188, var_180);
        var_2f0 = 0;
        let var_2e8_1: i64 = var_180;
        let var_2b8_1: i16 = 1;
        let rax_3: i8 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h855e5aab04e03f8d(core::iter::traits::iterator::Iterator::try_fold::hfc10f82a18e5ade8(
            &var_2f0));
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h743e7f0088788be4(r15_1, 
            var_188);
        
        if rax_3 == 0
        {
            let mut var_e0: ();
            std::fs::metadata::h8375f386a13ea4e6(&var_e0, arg1);
            std::fs::metadata::he8cf75f09f9f2f0c(&var_190);
            memcpy(&var_2f0, &var_e0, 0xb0);
            let mut var_240: i64;
            memcpy(&var_240, &var_190, 0xb0);
            rbx_1 = 0;
            let var_2d0: i64;
            let var_2c8: i64;
            let var_220: i64;
            let var_218: i64;
            
            if var_2f0 != 2 && var_240 != 2
            {
                rbx_1 = ((var_218 ^ var_2c8) | (var_2d0 ^ var_220)) == 0;
            }
            core::ptr::drop_in_place$LT$$LP$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$C$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$RP$$GT$::h70f10cd4fa1bcba5(&var_2f0);
        }
        else
        {
            rbx_1 = 0;
        }
    }
    else
    {
        rbx_1 = 0;
    }
    
    rbx_1
}
