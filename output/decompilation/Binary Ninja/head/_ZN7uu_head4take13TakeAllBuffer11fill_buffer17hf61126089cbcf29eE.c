
  int64_t uu_head::take::TakeAllBuffer::fill_buffer::hf61126089cbcf29e(int64_t* arg1, int32_t* arg2)

{
    int64_t rax;
    int64_t var_28 = rax;
    alloc::vec::Vec$LT$T$C$A$GT$::resize::hea7f1ffdc36e02a4(arg1);
    arg1[3] = 0;
    char rax_1;
    int64_t rdx_1;
    rax_1 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$$RF$mut$u20$R$GT$::read::hd7e2da240be216a5(arg2, arg1[1], arg1[2]);
    int64_t r15 = rdx_1;
    
    if (rax_1 & 1)
    {
        char rax_3;
        
        do
        {
            if (std::io::error::Error::kind::h135fe00c4e7365f3(r15) != 0x23)
                return 1;
            
            var_28 = r15;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hcee48fbfcf3aefed(&var_28);
            int64_t rdx_3;
            rax_3 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$$RF$mut$u20$R$GT$::read::hd7e2da240be216a5(arg2, arg1[1], arg1[2]);
            r15 = rdx_3;
        } while (rax_3 & 1);
    }
    
    if (arg1[2] >= r15)
        arg1[2] = r15;
    
    return 0;
}
