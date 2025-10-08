
  fn rg::flags::config::parse_reader::h27fe71aea4262a25(arg1: *mut i64, arg2: i32) -> i64

{
    let mut var_40: ();
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h50b9b4beb83c152b(&var_40, 
        arg2);
    let mut var_a8: i64 = 0;
    let var_a0: i64 = 8;
    let var_98: i64 = 0;
    let mut var_90: i64 = 0;
    let var_88: i64 = 8;
    let var_80: i64 = 0;
    let mut var_ac: i32 = 0;
    let rax: i64 = bstr::io::BufReadExt::for_byte_record_with_terminator::h66145550a49db0e8(
        &var_40, &var_ac, &var_a8);
    
    if rax == 0
    {
        let zmm0_1: i128 = var_a8;
        let var_78_1: i128 = zmm0_1;
        let zmm1_1: i128 = var_90;
        *arg1 = zmm0_1;
        arg1[4] = *zmm1_1[8];
        arg1[5] = var_80;
        arg1[2] = var_98;
        arg1[3] = zmm1_1;
    }
    else
    {
        arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h93265d5384100ee9(rax);
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::h0158ef9d20de58a6(
            &var_90);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hdf4ecb22c21181e2(&var_a8);
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::hcaeffd1f8d924e0a(&var_40)
}
