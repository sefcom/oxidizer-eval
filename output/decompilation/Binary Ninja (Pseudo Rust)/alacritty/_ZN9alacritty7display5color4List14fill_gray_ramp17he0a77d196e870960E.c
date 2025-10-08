
  fn alacritty::display::color::List::fill_gray_ramp::he0a77d196e870960(arg1: *mut c_void, arg2: i64, arg3: i64) -> u64

{
    let mut r14_1: *mut i8 = arg1.byte_offset(0x2b8);
    let mut rbp: i64;
    rbp = 8;
    let mut r15: i64;
    r15 = 0xe8;
    let mut result: u64;
    
    loop
    {
        let mut var_41: i8 = r15;
        let mut var_40: i64 = arg2;
        let var_38_1: i64 = arg2 + (arg3 << 2);
        result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h215505a183a9d6f4(&var_40, &var_41);
        
        if result != 0
        {
            r14_1[2] = *(result + 2);
            result = *result;
            *r14_1 = result;
            r14_1 = &r14_1[3];
            rbp += 0xa;
            let temp0_1: i8 = r15;
            r15 += 1;
            
            if temp0_1 == 0xff
            {
                break;
            }
        }
        else
        {
            *r14_1 = rbp;
            r14_1[1] = rbp;
            r14_1[2] = rbp;
            r14_1 = &r14_1[3];
            rbp += 0xa;
            let temp1_1: i8 = r15;
            r15 += 1;
            
            if temp1_1 == 0xff
            {
                break;
            }
        }
    }
    
    result
}
