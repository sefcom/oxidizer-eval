
  fn alacritty_terminal::selection::Selection::include_all::h7c6fde09d9c3054d(arg1: *mut i64) -> bool

{
    let rdi: i64 = *arg1;
    let rsi: i32 = arg1[1];
    let rdx: i64 = arg1[3];
    let mut rcx: i32 = arg1[4];
    
    if arg1[6] != 1
    {
        let mut rax_1: bool = _$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h96fd75b64b1be1c4(rdi, rsi, rdx, rcx);
        let cond:0: bool = rax_1 <= 0;
        rax_1 = rax_1 > 0;
        arg1[2] = rax_1;
        arg1[5] = cond:0;
        return rax_1;
    }
    
    let cond:1: bool = rdi == rdx;
    
    if rdi <= rdx
    {
        rcx = rsi > rcx;
        
        if (cond:1 & rcx) == 0
        {
            arg1[2] = 0;
            arg1[5] = 1;
            return cond:1;
        }
    }
    
    arg1[2] = 1;
    arg1[5] = 0;
    true
}
