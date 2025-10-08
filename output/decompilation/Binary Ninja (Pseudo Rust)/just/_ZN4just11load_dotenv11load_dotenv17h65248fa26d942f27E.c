
  fn just::load_dotenv::load_dotenv::h65248fa26d942f27(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i64, arg4: *mut i8, arg5: u64) -> *mut i8

{
    let mut rbp: u64 = arg5;
    let mut i_1: *mut i8 = arg4;
    let r9: i64 = *arg2.byte_offset(0x90);
    let rax: i64 = *arg2.byte_offset(0xa8);
    let r8: i64 = *arg3;
    let rdi: i64 = arg3[3];
    let mut rbx: *mut i64 = arg3;
    
    if -(r8) == -0x8000000000000000
    {
        rbx = nullptr;
    }
    
    if -(r9) != -0x8000000000000000
    {
        rbx = arg2.byte_offset(0x90);
    }
    
    let mut rcx_1: *mut c_void = &arg3[3];
    
    if -(rdi) == -0x8000000000000000
    {
        rcx_1 = nullptr;
    }
    
    if -(rax) != -0x8000000000000000
    {
        rcx_1 = arg2.byte_offset(0xa8);
    }
    
    let mut result: *mut i8;
    
    if *arg3.byte_offset(0x13a) != 0 || *arg3.byte_offset(0x13b) == 1 || r9 != -0x8000000000000000
        || r8 != -0x8000000000000000 || *arg3.byte_offset(0x13c) != 0
    {
        let mut var_50: ();
        let var_48: i64;
        let var_40: u64;
        
        if ((rax ^ 0x8000000000000000) | (rdi ^ 0x8000000000000000)) != 0
        {
            'label_674d18:
            std::path::Path::join::h509d33a3bbf89c2c(&var_50, i_1, rbp, rcx_1);
            
            if std::path::Path::is_file::h6e28d87ff76ffc41(var_48, var_40) == 0
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_50);
                goto 'label_674d88;
            }
            
            just::load_dotenv::load_from_file::h94978de6d8bd46bb(arg1, var_48, var_40, 
                *arg3.byte_offset(0x13b));
            'label_674e2e:
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_50);
        }
        
        'label_674d88:
        let mut rax_7: i64;
        let mut rdx_2: i64;
        rax_7 = core::option::Option$LT$T$GT$::map_or::hbda13e54d0b493bf(rbx);
        let mut i: *mut i8;
        
        do
        {
            let mut rdx_3: u64;
            i = std::path::Path::parent::hef287f60afa56900(i_1, rbp);
            std::path::Path::join::h1eac0ae5e7efa361(&var_50, i_1, rbp, rax_7);
            
            if std::path::Path::is_file::h6e28d87ff76ffc41(var_48, var_40) != 0
            {
                just::load_dotenv::load_from_file::h94978de6d8bd46bb(arg1, var_48, var_40, 
                    *arg3.byte_offset(0x13b));
                goto 'label_674e2e;
            }
            
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_50);
            i_1 = i;
            rbp = rdx_3;
        } while i != 0;
        
        if *arg3.byte_offset(0x13c) == 0
        {
            goto 'label_674e35;
        }
        
        result = arg1;
        *result = 0x11;
    }
    else
    {
        if ((rax ^ 0x8000000000000000) | (rdi ^ 0x8000000000000000)) != 0
        {
            goto 'label_674d18;
        }
        
        'label_674e35:
        result = arg1;
        *result.byte_offset(8) = 0;
        *result.byte_offset(0x18) = 0;
        *result = 0x38;
    }
    
    result
}
