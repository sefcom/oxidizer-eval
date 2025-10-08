
  fn uu_dd::flush_caches_full_length::h2d347dd9f2f16b2f(arg1: *mut i32, arg2: *mut i32) -> off64_t

{
    let r15: *mut c_void = *arg1.byte_offset(8);
    
    if *r15.byte_offset(0x45) == 0
    {
        goto 'label_490f8f;
    }
    
    let mut rax_1: i8;
    let mut rdx_1: off64_t;
    rax_1 = uu_dd::Source::len::h6b19960d89696b06(arg1);
    
    if (rax_1 & 1) != 0
    {
        return rdx_1;
    }
    
    uu_dd::Input::discard_cache::h505abcb6f4256ec2(*arg1, arg1[1], 0, rdx_1);
    'label_490f8f:
    
    if *r15.byte_offset(0x9c) != 0
    {
        let mut rax_3: i8;
        let mut rdx_2: off64_t;
        rax_3 = uu_dd::Dest::len::h4b4a69914304b5d1(arg2);
        
        if (rax_3 & 1) != 0
        {
            return rdx_2;
        }
        
        uu_dd::Output::discard_cache::h1b6c721cbbbead38(*arg2, arg2[1], 0, rdx_2);
    }
    
    0
}
