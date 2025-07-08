
  int64_t uu_wc::count_fast::count_bytes_fast::h84184728696ecb06(int64_t* arg1)

{
    int64_t var_1028 = 0;
    int64_t var_2028 = 0;
    int64_t var_3028 = 0;
    int64_t result = 0;
    int32_t var_4028;
    nix::sys::stat::fstat::h5414de4d70a08ddb(&var_4028, 0);
    
    if (var_4028)
        goto label_4b863b;
    
    char var_4007;
    
    if (var_4007 & 0x10)
    {
        int64_t rax_1;
        int64_t result_2;
        rax_1 = uu_wc::count_fast::count_bytes_using_splice::h6c4ad4a8ee75a3f4(arg1);
        result = result_2;
        
        if (rax_1)
            goto label_4b863b;
    }
    else
    {
        result = 0;
        label_4b863b:
        memset(&var_4028, 0, 0x4000);
        int64_t result_1 = result;
        int64_t i;
        
        do
        {
            result = result_1;
            
            while (true)
            {
                int64_t rax_2;
                rax_2 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::he60828ebe1a3e725(arg1, &var_4028, 0x4000);
                
                if (!rax_2)
                    break;
                
                if (std::io::error::Error::kind::hb2ff5fa058639b3d(i) != 0x23)
                    return result;
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd9e364499d096c21(i);
            }
            
            result_1 = result + i;
        } while (i);
    }
    
    return result;
}
