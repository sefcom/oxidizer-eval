
  fn uu_head::take::TakeAllBuffer::fill_buffer::hf61126089cbcf29e(arg1: *mut i64, arg2: *mut i32) -> i64

{
    let rax: i64;
    let mut var_28: i64 = rax;
    alloc::vec::Vec$LT$T$C$A$GT$::resize::hea7f1ffdc36e02a4(arg1);
    arg1[3] = 0;
    let mut rax_1: i8;
    let mut rdx_1: i64;
    rax_1 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$$RF$mut$u20$R$GT$::read::hd7e2da240be216a5(arg2, arg1[1], arg1[2]);
    let mut r15: i64 = rdx_1;
    
    if (rax_1 & 1) != 0
    {
        let mut rax_3: i8;
        
        do
        {
            if std::io::error::Error::kind::h135fe00c4e7365f3(r15) != 0x23
            {
                return 1;
            }
            
            var_28 = r15;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hcee48fbfcf3aefed(&var_28);
            let mut rdx_3: i64;
            rax_3 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$$RF$mut$u20$R$GT$::read::hd7e2da240be216a5(arg2, arg1[1], arg1[2]);
            r15 = rdx_3;
        } while (rax_3 & 1) != 0;
    }
    
    if arg1[2] >= r15
    {
        arg1[2] = r15;
    }
    
    0
}
