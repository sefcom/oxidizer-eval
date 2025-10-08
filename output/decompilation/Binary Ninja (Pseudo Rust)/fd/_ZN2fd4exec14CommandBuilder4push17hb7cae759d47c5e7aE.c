
  fn fd::exec::CommandBuilder::push::hb7cae759d47c5e7a(arg1: *mut i32, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    if *arg1.byte_offset(0x140) - 1 < *arg1.byte_offset(0x138)
    {
        let rax_2: i64 = fd::exec::CommandBuilder::finish::hfc49bcefb3885af8(arg1);
        
        if rax_2 != 0
        {
            return rax_2;
        }
    }
    
    let mut var_70: i128;
    fd::fmt::FormatTemplate::generate::hfff854f5585a67ff(&var_70, arg1, arg2, arg3, arg4, arg5);
    let mut var_58: i128;
    core::iter::traits::iterator::Iterator::chain::h22a73fcc39e834cf(&var_58, &var_70, 
        *arg1.byte_offset(0x40), *arg1.byte_offset(0x48));
    
    if argmax::Command::args_would_fit::h98dcd836a2a2d367(*arg1.byte_offset(0x130)) == 0
    {
        let rax_4: i64 = fd::exec::CommandBuilder::finish::hfc49bcefb3885af8(arg1);
        
        if rax_4 != 0
        {
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h7308b79749514aee(var_70, 
                *var_70[8]);
            return rax_4;
        }
    }
    
    let var_60: i64;
    let var_48_1: i64 = var_60;
    var_58 = var_70;
    let mut rax_6: i8;
    let mut rdx_2: i64;
    rax_6 = argmax::Command::try_arg::ha49bcf2cb4dd0994(&arg1[0x14], &var_58);
    
    if (rax_6 & 1) != 0
    {
        return rdx_2;
    }
    
    *arg1.byte_offset(0x138) += 1;
    0
}
