
  fn uu_tail::chunks::LinesChunkBuffer::print::h3123f31996031d80(arg1: *mut i64, arg2: *mut i64) -> u64

{
    let mut var_50: *mut c_void;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h5656e42254df2b37(&var_50, arg1);
    let mut r15: *mut c_void = var_50;
    let var_48: *mut c_void;
    let mut r12: *mut c_void = var_48;
    let var_40: *mut i64;
    let mut rcx: *mut i64 = var_40;
    let var_38: *mut c_void;
    let mut rsi_1: *mut c_void = var_38;
    let mut i: u64;
    
    do
    {
        let mut rbp_1: *mut c_void;
        let mut r13_1: *mut i64;
        
        if r15 != r12
        {
            r13_1 = rcx;
            rbp_1 = rsi_1;
            rsi_1 = r12;
            rcx = r15;
        }
        else
        {
            r13_1 = r15;
            rbp_1 = r15;
            
            if rcx == rsi_1
            {
                return 0;
            }
        }
        
        r12 = rsi_1;
        r15 = &rcx[1];
        i = uu_tail::chunks::LinesChunk::print_bytes::hf07a2c81279428be(*rcx, arg2);
        rcx = r13_1;
        rsi_1 = rbp_1;
    } while i == 0;
    
    i
}
