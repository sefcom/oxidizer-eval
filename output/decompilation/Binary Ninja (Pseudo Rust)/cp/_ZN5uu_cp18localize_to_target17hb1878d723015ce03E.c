
  fn uu_cp::localize_to_target::hb1878d723015ce03(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: u64) -> *mut i64

{
    let mut r15: i64 = -0x7ffffffffffffffa;
    let mut rax_1: i64;
    let mut rdx_1: i64;
    rax_1 = std::path::Path::strip_prefix::hf232be0ca9110327(arg4, arg5, arg2);
    
    if rax_1 != 0
    {
        std::path::Path::join::h10fbe6df042abede(&arg1[1], arg6, arg7, rax_1);
        r15 = -0x7ffffffffffffff4;
    }
    
    *arg1 = r15;
    arg1
}
