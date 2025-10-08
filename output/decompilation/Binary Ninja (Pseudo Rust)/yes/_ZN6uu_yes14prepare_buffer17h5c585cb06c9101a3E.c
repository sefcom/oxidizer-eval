
  fn uu_yes::prepare_buffer::h5c585cb06c9101a3(arg1: *mut i64)

{
    let mut rax: i64;
    let var_18: i64 = rax;
    let mut rsi: i64 = arg1[2];
    
    if rsi <= 0x2000
    {
        if rsi == 0
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: !buf.is_empty(…");
            /* no return */
        }
        
        rax = 0x4000;
        let temp2_1: i16 = rsi;
        rax = COMBINE(0, 0x4000) / temp2_1;
        let r14_1: u64 = 0x4000 - COMBINE(0, 0x4000) % temp2_1;
        
        do
        {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_within::h6cd1031674c11119(arg1, 
                core::cmp::Ord::min::h5f0d19bf62851fe4(r14_1 - rsi, rsi));
            rsi = arg1[2];
        } while rsi < r14_1;
    }
}
