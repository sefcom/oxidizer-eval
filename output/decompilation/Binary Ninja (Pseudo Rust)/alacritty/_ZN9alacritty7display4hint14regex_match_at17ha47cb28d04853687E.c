
  fn alacritty::display::hint::regex_match_at::ha47cb28d04853687(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i32, arg5: i64, arg6: i8) -> u64

{
    let mut var_100: i64 = arg3;
    let var_f8: i32 = arg4;
    let mut var_c8: i128;
    alacritty::display::hint::visible_regex_match_iter::h3b713c9c9910fb82(&var_c8, arg2, arg5);
    let mut var_f0: i128;
    _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h288438aa2b24bb8a(&var_f0, &var_c8);
    let result_1: i8;
    let mut result: u64 = result_1;
    
    if result != 2
    {
        let mut var_128: i128 = var_f0;
        let var_cf: i32;
        let mut var_107_1: i32 = var_cf;
        var_107_1 = var_cf;
        let var_e0: i128;
        let mut zmm0_1: i128;
        
        if arg6 == 0
        {
            result = result;
            arg1[2] = result;
            zmm0_1 = var_128;
            arg1[1] = var_e0;
            *arg1 = zmm0_1;
        }
        else
        {
            let var_60_1: i64 = arg5;
            let var_58_1: *mut c_void = arg2;
            let var_30_1: i8 = 2;
            let var_70_1: i64 = var_e0;
            let var_68_1: i32 = *var_e0[8];
            let mut var_80: ();
            alacritty::display::hint::HintPostProcessor$LT$T$GT$::next_processed_match::h1e39a4cf74b51fc6(&var_80, &var_128);
            result = core::iter::traits::iterator::Iterator::try_fold::hcf229d928bc8cb4e(&var_c8, 
                &var_80, &var_100);
            let var_a8: i8;
            
            if var_a8 == 2
            {
                arg1[2] = 2;
            }
            else
            {
                result = var_a8;
                arg1[2] = result;
                zmm0_1 = var_c8;
                let var_b8: i128;
                arg1[1] = var_b8;
                *arg1 = zmm0_1;
            }
        }
    }
    else
    {
        arg1[2] = 2;
    }
    
    result
}
