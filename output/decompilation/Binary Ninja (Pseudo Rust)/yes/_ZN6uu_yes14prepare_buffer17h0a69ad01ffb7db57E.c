
  fn uu_yes::prepare_buffer::h0a69ad01ffb7db57(arg1: *mut i64) -> u64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut i: i64 = arg1[2];
    let mut result: u64 = i * 2;
    
    if result <= 0x4000
    {
        if i == 0
        {
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: !buf.is_empty(…");
            /* no return */
        }
        
        let mut rdx_1: u64 = 0x4000;
        
        if i <= 0x4000
        {
            let temp2_1: i32 = i;
            result = COMBINE(0, 0x4000) / temp2_1;
            rdx_1 = COMBINE(0, 0x4000) % temp2_1;
        }
        
        for ; i < 0x4000 - rdx_1; i = arg1[2]
        {
            result = alloc::vec::Vec$LT$T$C$A$GT$::extend_from_within::h41055947fdb33520(arg1, 
                core::cmp::min_by::hd689102d52ee7212(0x4000 - rdx_1 - i, i));
        }
    }
    
    result
}
