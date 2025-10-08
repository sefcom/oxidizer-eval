
  fn alacritty::display::hint::HintPostProcessor$LT$T$GT$::next_processed_match::h1e39a4cf74b51fc6(arg1: *mut i64, arg2: *mut i64) -> u64

{
    let r14: *mut c_void = arg1[5];
    let mut var_80: i128;
    alacritty::display::hint::HintPostProcessor$LT$T$GT$::hint_post_processing::h91382b8c2efba66c(
        &var_80, r14, arg2);
    let i: i8;
    let mut result: u64;
    
    if i == 2
    {
        let rax_1: i64 = arg1[2];
        let rax_2: i32 = arg1[3];
        let rax_3: i64 = arg1[4];
        
        do
        {
            let mut rax_4: i64;
            let mut rdx_2: i32;
            rax_4 =
                alacritty_terminal::index::Point::add::h870632f29f948f48(*arg2, arg2[1], r14, 1, 1);
            *arg1 = rax_4;
            arg1[1] = rdx_2;
            result = _$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h2b413278cc536aee(rax_4, rdx_2, rax_1, rax_2);
            
            if result > 0
            {
                return result;
            }
            
            let var_a8_1: i32 = rax_2;
            let mut var_58: i128;
            result = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search_right::hdca176f2ea14268c(&var_58, r14, rax_3, rax_4, rdx_2, rax_1);
            let var_38: i8;
            
            if var_38 == 2
            {
                return result;
            }
            
            arg2[4] = var_38;
            let zmm0: i128 = var_58;
            let var_48: i128;
            *arg2.byte_offset(0x10) = var_48;
            *arg2 = zmm0;
            alacritty::display::hint::HintPostProcessor$LT$T$GT$::hint_post_processing::h91382b8c2efba66c(&var_80, r14, arg2);
        } while i == 2;
    }
    
    let var_70: i64;
    let var_68: i32;
    let mut rax_7: i64;
    let mut rdx_7: i32;
    rax_7 = alacritty_terminal::index::Point::add::h870632f29f948f48(var_70, var_68, r14, 1, 1);
    *arg1 = rax_7;
    arg1[1] = rdx_7;
    *arg1.byte_offset(0x30) = var_80;
    *arg1.byte_offset(0x40) = var_70;
    result = i;
    arg1[0xa] = result;
    result
}
