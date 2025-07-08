
  fn uu_wc::count_fast::count_bytes_fast::h84184728696ecb06(arg1: *mut i64) -> i64

{
    let var_1028: i64 = 0;
    let var_2028: i64 = 0;
    let var_3028: i64 = 0;
    let mut result: i64 = 0;
    let mut var_4028: i32;
    nix::sys::stat::fstat::h5414de4d70a08ddb(&var_4028, 0);
    
    if var_4028 != 0
    {
        goto 'label_4b863b;
    }
    
    let var_4007: i8;
    
    if (var_4007 & 0x10) != 0
    {
        let mut rax_1: i64;
        let mut result_2: i64;
        rax_1 = uu_wc::count_fast::count_bytes_using_splice::h6c4ad4a8ee75a3f4(arg1);
        result = result_2;
        
        if rax_1 != 0
        {
            goto 'label_4b863b;
        }
    }
    else
    {
        result = 0;
        'label_4b863b:
        memset(&var_4028, 0, 0x4000);
        let mut result_1: i64 = result;
        let mut i: i64;
        
        do
        {
            result = result_1;
            
            loop
            {
                let mut rax_2: i64;
                rax_2 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::he60828ebe1a3e725(arg1, &var_4028, 0x4000);
                
                if rax_2 == 0
                {
                    break;
                }
                
                if std::io::error::Error::kind::hb2ff5fa058639b3d(i) != 0x23
                {
                    return result;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd9e364499d096c21(i);
            }
            
            result_1 = result + i;
        } while i != 0;
    }
    
    result
}
