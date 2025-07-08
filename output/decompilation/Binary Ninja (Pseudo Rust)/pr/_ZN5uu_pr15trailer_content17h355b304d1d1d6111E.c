
  fn uu_pr::trailer_content::h355b304d1d1d6111(arg1: *mut i64, arg2: i8, arg3: i8)

{
    if arg2 == 0 || arg3 != 0
    {
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        return;
    }
    
    let rax: *mut i64 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 0x78);
    
    if rax == 0
    {
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
        /* no return */
    }
    
    *rax = 0;
    rax[1] = 1;
    *rax.byte_offset(0x10) = {0};
    rax[4] = 1;
    *rax.byte_offset(0x28) = {0};
    rax[7] = 1;
    *rax.byte_offset(0x40) = {0};
    rax[0xa] = 1;
    *rax.byte_offset(0x58) = {0};
    rax[0xd] = 1;
    rax[0xe] = 0;
    /* tailcall */
    alloc::slice::hack::into_vec::h00e2e55fcd83f713(arg1, rax, 5)
}
