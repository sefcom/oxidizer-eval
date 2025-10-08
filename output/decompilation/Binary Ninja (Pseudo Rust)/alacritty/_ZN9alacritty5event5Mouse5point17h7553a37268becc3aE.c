
  fn alacritty::event::Mouse::point::h7553a37268becc3a(arg1: i64, arg2: i64, arg3: *mut i32, arg4: i32) -> i64

{
    let mut zmm1: i128 = arg3[6];
    let rax: i64 = zmm1;
    let mut zmm0: i128;
    zmm0 = zmm1 - 9.22337204e+18f;
    let mut rcx_2: i64 = 0;
    
    if zmm1 >= 0f
    {
        rcx_2 = (zmm0 & rax >> 0x3f) | rax;
    }
    
    if zmm1 > 1.8446743e+19f
    {
        rcx_2 = -1;
    }
    
    if rcx_2 == 0
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    zmm1 = arg3[7];
    let rdx_3: i64 = zmm1;
    let mut r13: i64 = 0;
    
    if zmm1 >= 0f
    {
        r13 = ((zmm1 - 9.22337204e+18f) & rdx_3 >> 0x3f) | rdx_3;
    }
    
    if zmm1 > 1.8446743e+19f
    {
        r13 = -1;
    }
    
    if r13 == 0
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    zmm0 = arg3[8];
    let rax_1: i64 = zmm0;
    zmm1 = zmm0 - 9.22337204e+18f;
    let mut rsi_4: i64 = (zmm1 & rax_1 >> 0x3f) | rax_1;
    
    if zmm0 < 0f
    {
        rsi_4 = 0;
    }
    
    let mut rdx_6: i64 = -1;
    
    if zmm0 <= 1.8446743e+19f
    {
        rdx_6 = rsi_4;
    }
    
    let mut rdi: i64 = arg1 - rdx_6;
    
    if arg1 < rdx_6
    {
        rdi = 0;
    }
    
    let mut rax_6: u64;
    
    if (rdi | rcx_2) >> 0x20 == 0
    {
        rax_6 = COMBINE(0, rdi) / rcx_2;
    }
    else
    {
        rax_6 = COMBINE(0, rdi) / rcx_2;
    }
    
    let result: i64 = core::cmp::Ord::min::hffab314b5e6491b1(rax_6, *arg3.byte_offset(8) - 1);
    zmm0 = arg3[9];
    let rcx_3: i64 = zmm0;
    zmm1 = zmm0 - 9.22337204e+18f;
    let mut rsi_9: i64 = (zmm1 & rcx_3 >> 0x3f) | rcx_3;
    
    if zmm0 < 0f
    {
        rsi_9 = 0;
    }
    
    let mut rdx_12: i64 = -1;
    
    if zmm0 <= 1.8446743e+19f
    {
        rdx_12 = rsi_9;
    }
    
    let mut r15_1: i64 = arg2 - rdx_12;
    
    if arg2 < rdx_12
    {
        r15_1 = 0;
    }
    
    let mut rax_12: u64;
    
    if (r15_1 | r13) >> 0x20 == 0
    {
        rax_12 = COMBINE(0, r15_1) / r13;
    }
    else
    {
        rax_12 = COMBINE(0, r15_1) / r13;
    }
    
    core::cmp::Ord::min::h7c13e9bfb8ea3862(rax_12, *arg3 - 1);
    result
}
