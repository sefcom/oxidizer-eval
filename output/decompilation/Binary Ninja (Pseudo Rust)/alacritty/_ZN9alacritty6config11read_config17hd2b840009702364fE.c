
  fn alacritty::config::read_config::hd2b840009702364f(arg1: *mut i64) -> i64

{
    let mut var_8f0: i64 = 0;
    let var_8e8: i64 = 8;
    let var_8e0: i64 = 0;
    let mut var_858: i64;
    let rdx: u64;
    let rsi: i64;
    alacritty::config::parse_config::hb79bebbd33e5efa7(&var_858, rsi, rdx, &var_8f0, 5);
    let rax: i64 = var_858;
    let mut var_850: i128;
    let var_840: i128;
    let var_830: i128;
    let var_820: i128;
    let var_810: i128;
    
    if rax != 7
    {
        *arg1.byte_offset(0x50) = var_810;
        *arg1.byte_offset(0x40) = var_820;
        *arg1.byte_offset(0x30) = var_830;
        *arg1.byte_offset(0x20) = var_840;
        *arg1.byte_offset(0x10) = var_850;
        arg1[1] = rax;
    }
    else
    {
        let mut var_878: i128 = var_850;
        let var_868_1: i128 = var_840;
        _$LT$alacritty..config..ui_config..UiConfig$u20$as$u20$serde..de..Deserialize$GT$::deserialize::h7443b9c7f8df693e(&var_858, &var_878);
        let r14_1: i64 = var_858;
        let var_800: i64;
        
        if r14_1 != 6
        {
            let mut var_7f8: ();
            let mut var_3d8: ();
            memcpy(&var_3d8, &var_7f8, 0x3c0);
            let var_430_1: i128 = var_850;
            let var_420_1: i128 = var_840;
            let var_410_1: i128 = var_830;
            let var_400_1: i128 = var_820;
            let var_3f0_1: i128 = var_810;
            let var_3e0_1: i64 = var_800;
            let mut var_438: i64 = r14_1;
            *var_850[8] = var_8e0;
            var_858 = var_8f0;
            let mut var_1a0: i128;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h246198f168725160(&var_1a0);
            let var_190_1: i64 = *var_850[8];
            var_1a0 = var_858;
            return memcpy(arg1, &var_438, 0x420);
        }
        
        arg1[0xb] = var_800;
        *arg1.byte_offset(0x48) = var_810;
        *arg1.byte_offset(0x38) = var_820;
        *arg1.byte_offset(0x28) = var_830;
        *arg1.byte_offset(0x18) = var_840;
        *arg1.byte_offset(8) = var_850;
    }
    *arg1 = 6;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h246198f168725160(
        &var_8f0)
}
