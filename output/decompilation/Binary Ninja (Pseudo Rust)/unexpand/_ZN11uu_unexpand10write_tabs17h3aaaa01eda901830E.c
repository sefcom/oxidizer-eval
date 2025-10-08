
  fn uu_unexpand::write_tabs::h3aaaa01eda901830(arg1: *mut i64, arg2: *mut i64, arg3: u64, arg4: u64, arg5: i64, arg6: i8, arg7: i8, arg8: i8) -> u64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut rbp: u64 = arg4;
    let r15: u64 = arg3;
    
    if arg7 != 0
    {
        arg4 = 1;
        
        if arg6 == 0 && arg5 > rbp + 1
        {
            goto 'label_45cc39;
        }
        
        goto 'label_45cc17;
    }
    
    arg4 = arg8;
    arg3 = arg4 ^ 1;
    arg3 |= arg6;
    
    if arg3 != 0 || arg5 <= rbp + 1
    {
        'label_45cc17:
        arg3 = arg5 > rbp;
        
        if (arg3 & (arg7 | (arg6 & arg4))) != 0
        {
            goto 'label_45cc39;
        }
    }
    else
    {
        'label_45cc39:
        
        loop
        {
            let mut rax_2: i8;
            let mut rdx_1: i64;
            rax_2 = uu_unexpand::next_tabstop::h080f73c87180f742(arg2, r15, rbp);
            
            if (rax_2 & 1) == 0
            {
                break;
            }
            
            let r13_2: u64 = rdx_1 + rbp;
            
            if arg5 < r13_2
            {
                break;
            }
            
            let rax_3: i64 = arg1[2];
            
            if *arg1 - rax_3 <= 1
            {
                rbp = r13_2;
                
                if std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hccae24ef141405a2(arg1, "\t : \ntab size contains invalid…", 1) != 0
                {
                    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
            }
            else
            {
                arg1[1][rax_3] = 9;
                arg1[2] = rax_3 + 1;
                rbp = r13_2;
            }
        }
    }
    
    let mut result: u64 = 0;
    let mut rbx_1: i64 = arg5 - rbp;
    
    if arg5 <= rbp
    {
        return result;
    }
    
    loop
    {
        let rcx_3: i64 = arg1[2];
        
        if *arg1 - rcx_3 <= 1
        {
            result = 0;
            
            if std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hccae24ef141405a2(
                arg1, " : \ntab size contains invalid c…", 1) != 0
            {
                return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            }
        }
        else
        {
            arg1[1][rcx_3] = 0x20;
            arg1[2] = rcx_3 + 1;
        }
        
        let temp1_1: i64 = rbx_1;
        rbx_1 -= 1;
        
        if temp1_1 == 1
        {
            return result;
        }
    }
}
