
  fn uu_od::inputdecoder::MemoryDecoder::zero_out_buffer::hff85fdbe658f0d31(arg1: *mut i64, arg2: i64, arg3: i64)

{
    if arg2 < arg3
    {
        let rcx_1: *mut c_void = *arg1;
        
        do
        {
            let rax_1: i64 = *rcx_1.byte_offset(0x10);
            
            if arg2 >= rax_1
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(arg2, rax_1);
                /* no return */
            }
            
            (*rcx_1.byte_offset(8))[arg2] = 0;
            arg2 += 1;
        } while arg3 != arg2;
    }
}
