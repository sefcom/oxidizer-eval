
  fn uu_wc::count_fast::count_bytes_fast::h1b572bf67c4143c1(arg1: *mut i64) -> i64

{
    let var_1030: i64 = 0;
    let var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let mut var_4030: i64 = 0;
    let rax: i64;
    let var_4038: i64 = rax;
    let mut result: i64 = 0;
    nix::sys::stat::fstat::h932ea0f7705da4a5(&var_4030, 0);
    
    if (var_4030 & 1) != 0
    {
        goto 'label_4634b6;
    }
    
    let var_400f: i8;
    
    if (var_400f & 0x10) != 0
    {
        let mut rax_1: i8;
        let mut result_2: i64;
        rax_1 = uu_wc::count_fast::count_bytes_using_splice::h131ffe0d704d0ba2();
        result = result_2;
        
        if (rax_1 & 1) != 0
        {
            goto 'label_4634b6;
        }
    }
    else
    {
        result = 0;
        'label_4634b6:
        memset(&var_4030, 0, 0x4000);
        let mut result_1: i64 = result;
        let mut i: i64;
        
        do
        {
            result = result_1;
            
            loop
            {
                let mut rax_2: i64;
                rax_2 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::ha94ed9861f25a8f0(arg1, &var_4030, 0x4000);
                
                if (rax_2 & 1) == 0
                {
                    break;
                }
                
                if std::io::error::Error::kind::h135fe00c4e7365f3(i) != 0x23
                {
                    return result;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h06d3f45961b15e39(rax_2, i);
            }
            
            result_1 = result + i;
        } while i != 0;
    }
    
    result
}
