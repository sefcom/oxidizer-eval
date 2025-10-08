
  fn alacritty::display::content::HintMatches::advance::hba48573630649a2f(arg1: *mut c_void, arg2: i64, arg3: i32) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let r12: i64 = *arg1.byte_offset(0x10);
    let r13: i64 = *arg1.byte_offset(0x18);
    
    if r13 < r12
    {
        let mut r13_1: i64 = r13 + 1;
        let mut rbp_2: *mut c_void = (*arg1.byte_offset(8) + r13 * 0x28).byte_offset(0x18);
        let mut i: i64;
        
        do
        {
            if _$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h2b413278cc536aee(*rbp_2.byte_offset(-0x18), *rbp_2.byte_offset(-0x10), arg2, arg3) > 0
            {
                break;
            }
            
            if _$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h2b413278cc536aee(*rbp_2.byte_offset(-8), *rbp_2, arg2, arg3) >= 0
            {
                return 1;
            }
            
            *arg1.byte_offset(0x18) = r13_1;
            i = -(r12) + r13_1 + 1;
            r13_1 += 1;
            rbp_2 += 0x28;
        } while i != 1;
    }
    
    0
}
