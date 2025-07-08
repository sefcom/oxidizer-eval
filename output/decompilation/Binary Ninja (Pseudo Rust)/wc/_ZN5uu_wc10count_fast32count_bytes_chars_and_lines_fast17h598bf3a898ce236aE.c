
  fn uu_wc::count_fast::count_bytes_chars_and_lines_fast::h598bf3a898ce236a(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let var_1030: i64 = 0;
    let var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let mut var_4030: i64 = 0;
    let rax: i64;
    let var_4038: i64 = rax;
    let mut rbp: i64 = 0;
    memset(&var_4030, 0, 0x4000);
    
    loop
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 =
            _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::he60828ebe1a3e725(
            arg2, &var_4030, 0x4000);
        
        if rax_1 == 0
        {
            if rdx_1 == 0
            {
                *arg1 = {0};
                arg1[1] = rbp;
                __builtin_memset(arg1.byte_offset(0x18), 0, 0x18);
                break;
            }
            
            let mut rax_3: *mut i8;
            let mut rdx_3: *mut c_void;
            rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(rdx_1, &var_4030);
            rbp += bytecount::count::h11a8399421fb62fe(rax_3, rdx_3, 0xa);
        }
        else
        {
            if std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_1) != 0x23
            {
                *arg1 = {0};
                arg1[1] = rbp;
                *arg1.byte_offset(0x18) = {0};
                *arg1.byte_offset(0x28) = rdx_1;
                break;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd9e364499d096c21(rdx_1);
        }
    }
    
    arg1
}
