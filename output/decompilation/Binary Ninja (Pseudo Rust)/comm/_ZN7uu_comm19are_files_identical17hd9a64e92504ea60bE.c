
  fn uu_comm::are_files_identical::hd9a64e92504ea60b(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64) -> *mut i8

{
    let var_1030: i64 = 0;
    let mut var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let mut var_4030: i64 = 0;
    std::fs::metadata::h0373c3893bc9c36e(&var_4030, arg2);
    let var_4028: i64;
    
    if var_4030 == 2
    {
        *arg1.byte_offset(8) = var_4028;
        *arg1 = 1;
    }
    else
    {
        std::fs::metadata::h0373c3893bc9c36e(&var_4030, arg4);
        let var_3fe0: i64;
        
        if var_4030 == 2
        {
            *arg1.byte_offset(8) = var_4028;
            *arg1 = 1;
        }
        else if var_3fe0 != var_3fe0
        {
            *arg1 = 0;
        }
        else
        {
            std::fs::File::open::h4d8fb62fce9f1fe2(&var_4030, arg2);
            
            if (var_4030 & 1) != 0
            {
                *arg1.byte_offset(8) = var_4028;
                *arg1 = 1;
            }
            else
            {
                let fd: i32 = *var_4030[4];
                std::fs::File::open::h4d8fb62fce9f1fe2(&var_4030, arg4);
                
                if var_4030 != 1
                {
                    let r14_1: i32 = *var_4030[4];
                    let mut var_4090: ();
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h1ec4c3de20b2cd65(&var_4090, fd);
                    let mut var_4060: ();
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h1ec4c3de20b2cd65(&var_4060, r14_1);
                    memset(&var_2030, 0, 0x2000);
                    memset(&var_4030, 0, 0x2000);
                    let mut rax_4: i8;
                    
                    loop
                    {
                        let mut rdx_2: i64;
                        rax_4 = _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::h7936c168bbd33ba5(&var_4090, &var_2030);
                        
                        if (rax_4 & 1) != 0
                        {
                            *arg1.byte_offset(8) = rdx_2;
                            rax_4 = 1;
                            break;
                        }
                        
                        let mut rdx_3: i64;
                        rax_4 = _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::h7936c168bbd33ba5(&var_4060, &var_4030);
                        
                        if (rax_4 & 1) != 0
                        {
                            *arg1.byte_offset(8) = rdx_3;
                            rax_4 = 1;
                            break;
                        }
                        
                        if rdx_2 != rdx_3
                        {
                            arg1[1] = 0;
                        }
                        else if rdx_2 == 0
                        {
                            arg1[1] = 1;
                        }
                        else
                        {
                            let mut rax_5: i64;
                            let mut rdx_5: u64;
                            rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h6ba8ff5fdf051e41(0, rdx_2, &var_2030, 0x2000);
                            let mut rax_6: i64;
                            let mut rdx_7: i64;
                            rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h6ba8ff5fdf051e41(0, rdx_3, &var_4030, 0x2000);
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5723b3bfa7d363aa(rax_5, rdx_5, rax_6, rdx_7) != 0
                            {
                                continue;
                            }
                            
                            arg1[1] = 0;
                        }
                        
                        rax_4 = 0;
                        break;
                    }
                    
                    *arg1 = rax_4;
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::he5548ef147721afb(&var_4060);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::he5548ef147721afb(&var_4090);
                }
                else
                {
                    *arg1.byte_offset(8) = var_4028;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::he3417a785d7054a0(fd);
                }
            }
        }
    }
    arg1
}
