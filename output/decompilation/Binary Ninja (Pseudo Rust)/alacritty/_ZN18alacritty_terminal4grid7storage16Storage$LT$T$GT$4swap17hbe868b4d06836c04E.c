
  fn alacritty_terminal::grid::storage::Storage$LT$T$GT$::swap::hbe868b4d06836c04(arg1: *mut c_void, arg2: i32, arg3: i32) -> i64

{
    let rcx_6: i32 = *arg1.byte_offset(0x20);
    let rsi: i64 = *arg1.byte_offset(0x18);
    let mut r8: i64 = *arg1.byte_offset(0x10);
    let mut r10: i64 = r8;
    
    if rcx_6 - arg2 + rsi - 1 < r8
    {
        r10 = 0;
    }
    
    if rcx_6 - arg3 + rsi - 1 < r8
    {
        r8 = 0;
    }
    
    let rdx: *mut i128 = *arg1.byte_offset(8);
    let mut zmm0: i128 = rdx[(rcx_6 - arg2 + rsi - 1 - r10) * 2];
    rdx[(rcx_6 - arg2 + rsi - 1 - r10) * 2] = rdx[(rcx_6 - arg3 + rsi - 1 - r8) * 2];
    rdx[(rcx_6 - arg3 + rsi - 1 - r8) * 2] = zmm0;
    zmm0 = rdx[(rcx_6 - arg2 + rsi - 1 - r10) * 2 + 1];
    rdx[(rcx_6 - arg2 + rsi - 1 - r10) * 2 + 1] = rdx[(rcx_6 - arg3 + rsi - 1 - r8) * 2 + 1];
    rdx[(rcx_6 - arg3 + rsi - 1 - r8) * 2 + 1] = zmm0;
    (rcx_6 - arg2 + rsi - 1 - r10) << 5
}
