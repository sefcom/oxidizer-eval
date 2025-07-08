
  fn uu_unexpand::write_tabs::h8e9e933eb88f89cf(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64, arg5: i64, arg6: i8, arg7: i8, arg8: i8) -> u64

{
    let mut rbp: u64 = arg4;
    let mut result: u64 = arg7;
    
    if result != 0
    {
        arg4 = 1;
        
        if arg6 != 0 || rbp + 1 >= arg5
        {
            goto 'label_4b277b;
        }
        
        goto 'label_4b28c2;
    }
    
    arg4 = arg8;
    let mut result_1: u64;
    let mut var_80: *mut u64;
    let mut var_70: *mut c_void;
    let mut var_40: *mut *mut u64;
    
    if arg4 == 0 || arg6 != 0 || rbp + 1 >= arg5
    {
        'label_4b277b:
        
        if arg5 > rbp
        {
            arg4 &= arg6;
            arg4 |= result;
            
            if arg4 != 0
            {
                goto 'label_4b28c2;
            }
        }
    }
    else
    {
        'label_4b28c2:
        
        loop
        {
            let mut rdx_3: i64;
            result = uu_unexpand::next_tabstop::h948056bd8ee01f21(arg2, arg3, rbp);
            
            if result != 1
            {
                break;
            }
            
            let r13_2: u64 = rdx_3 + rbp;
            
            if r13_2 > arg5
            {
                break;
            }
            
            let rax_3: i64 = arg1[2];
            let mut result_2: u64;
            
            if *arg1 - rax_3 > 1
            {
                arg1[1][rax_3] = 9;
                arg1[2] = rax_3 + 1;
                result_2 = 0;
            }
            else
            {
                result_2 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(arg1, "\t ", 1);
            }
            
            rbp = r13_2;
            
            if result_2 != 0
            {
                result_1 = result_2;
                let mut rax_4: *mut u64;
                let mut rdx_4: i64;
                rax_4 = uucore::util_name::h60d842bf27b05e82();
                var_80 = rax_4;
                let var_78_2: i64 = rdx_4;
                var_40 = &var_80;
                let var_38_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf6a1d2ab1cd5850e;
                var_70 = &data_51d100;
                let var_68_2: i64 = 2;
                let var_50_2: i64 = 0;
                let var_60_2: *mut *mut *mut u64 = &var_40;
                let var_58_2: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
                var_80 = &result_1;
                let var_78_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                var_70 = &data_51d120;
                let var_68_3: i64 = 2;
                let var_50_3: i64 = 0;
                let var_60_3: *mut *mut u64 = &var_80;
                let var_58_3: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
                std::process::exit::hf8c1b9d00a2a86fd(1);
                /* no return */
            }
        }
    }
    
    let mut i_1: i64 = arg5 - rbp;
    
    if arg5 > rbp
    {
        let mut i: i64;
        
        do
        {
            let rax: i64 = arg1[2];
            
            if *arg1 - rax < 2
            {
                result = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(arg1, " ", 1);
                
                if result != 0
                {
                    result_1 = result;
                    let mut rax_1: *mut u64;
                    let mut rdx_1: i64;
                    rax_1 = uucore::util_name::h60d842bf27b05e82();
                    var_80 = rax_1;
                    let var_78: i64 = rdx_1;
                    var_40 = &var_80;
                    let var_38: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf6a1d2ab1cd5850e;
                    var_70 = &data_51d100;
                    let var_68: i64 = 2;
                    let var_50: i64 = 0;
                    let var_60: *mut *mut *mut u64 = &var_40;
                    let var_58: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
                    var_80 = &result_1;
                    let var_78_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    var_70 = &data_51d120;
                    let var_68_1: i64 = 2;
                    let var_50_1: i64 = 0;
                    let var_60_1: *mut *mut u64 = &var_80;
                    let var_58_1: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
                    std::process::exit::hf8c1b9d00a2a86fd(1);
                    /* no return */
                }
            }
            else
            {
                arg1[1][rax] = 0x20;
                result = rax + 1;
                arg1[2] = result;
            }
            
            i = i_1;
            i_1 -= 1;
        } while i != 1;
    }
    
    result
}
