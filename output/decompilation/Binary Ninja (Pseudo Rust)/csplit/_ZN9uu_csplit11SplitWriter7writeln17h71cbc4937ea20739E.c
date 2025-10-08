
  fn uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut *mut c_void

{
    if arg1[7] == 0
    {
        let rax_1: i64 = *arg1;
        
        if -(rax_1) == -0x8000000000000000
        {
            let mut var_48: *mut *mut [i8; 0xd8] = &data_642c60;
            let var_40: i64 = 1;
            let var_38: i64 = 8;
            let var_30: i128 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_48);
            /* no return */
        }
        
        let r15_1: i64 = arg1[2];
        
        if arg3 >= rax_1 - r15_1
        {
            let result: *mut *mut c_void =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h3751b38b456845cf(
                arg1, arg2, arg3);
            
            if result != 0
            {
                return result;
            }
        }
        else
        {
            memcpy(arg1[1] + r15_1, arg2, arg3);
            arg1[2] = r15_1 + arg3;
        }
        
        arg1[6] += arg3;
    }
    
    nullptr
}
