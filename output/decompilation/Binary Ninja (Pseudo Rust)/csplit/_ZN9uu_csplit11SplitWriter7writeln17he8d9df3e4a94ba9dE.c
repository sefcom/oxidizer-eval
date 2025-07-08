
  fn uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut *mut c_void

{
    if arg1[7] == 0
    {
        let rax_1: i64 = *arg1;
        
        if rax_1 == -0x8000000000000000
        {
            let mut var_48: *mut *mut [i8; 0xf8] = &data_6e1dd0;
            let var_40: i64 = 1;
            let var_38: i64 = 8;
            let var_30: i128 = {0};
            core::panicking::panic_fmt::he12d0d7468628bb4(&var_48);
            /* no return */
        }
        
        let r15_1: i64 = arg1[2];
        let mut result: *mut *mut c_void;
        let mut r15_2: i64;
        
        if rax_1 - r15_1 <= arg3
        {
            result =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h97889b217ec5f319(
                arg1, arg2, arg3);
            
            if result != 0
            {
                return result;
            }
            
            r15_2 = arg1[2];
            goto 'label_5bd318;
        }
        
        memcpy(arg1[1] + r15_1, arg2, arg3);
        r15_2 = r15_1 + arg3;
        arg1[2] = r15_2;
        'label_5bd318:
        
        if *arg1 - r15_2 < 2
        {
            result =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h97889b217ec5f319(
                arg1, "\nkeep-filesquietelide-empty-fil…", 1);
            
            if result != 0
            {
                return result;
            }
        }
        else
        {
            arg1[1][r15_2] = 0xa;
            arg1[2] = r15_2 + 1;
        }
        
        arg1[6] = arg1[6] + arg3 + 1;
    }
    
    nullptr
}
