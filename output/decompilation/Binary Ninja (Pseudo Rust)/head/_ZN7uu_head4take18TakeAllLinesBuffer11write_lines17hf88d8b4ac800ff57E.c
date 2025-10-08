
  fn uu_head::take::TakeAllLinesBuffer::write_lines::hf88d8b4ac800ff57(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64, arg4: i64, arg5: i8) -> i64

{
    let mut var_58: *mut *mut [i8; 0xb0];
    let mut var_40: i128;
    
    if arg4 == 0
    {
        var_58 = &data_4f7bc0;
        let var_50_2: i64 = 1;
        let var_48_2: i64 = 8;
        var_40 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_58);
        /* no return */
    }
    
    let mut r15: i64 = arg4;
    let mut result: i64;
    let mut rax_5: i64;
    let mut rdx: i64;
    
    if arg4 <= *arg2.byte_offset(0x20)
    {
        let mut rax_1: *mut *mut [i8; 0xb0];
        let mut rdx_1: *mut c_void;
        rax_1 = uu_head::take::TakeAllBuffer::remaining_buffer::he80dcc941e66ef3a(arg2);
        var_40 = arg5;
        var_58 = rax_1;
        let var_50_1: *mut *mut [i8; 0xb0] = rax_1;
        let var_48_1: *mut c_void = rdx_1.byte_offset(rax_1);
        let rax_2: i64 =
            core::iter::traits::iterator::Iterator::advance_by::hf31ce2368e9ab065(&var_58, r15 - 1);
        let mut rax_3: i64;
        let mut rdx_3: i64;
        
        if rax_2 == 0
        {
            rax_3 = memchr::arch::generic::memchr::Iter::next::hfac8768f323c3893(&var_58, &var_40);
        }
        
        if rax_2 != 0 || rax_3 != 1
        {
            var_58 = &data_4f7bd0;
            let var_50_3: i64 = 1;
            let var_48_3: i64 = 8;
            var_40 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_58);
            /* no return */
        }
        
        let rax_4: ssize_t = uu_head::take::TakeAllBuffer::write_bytes_exact::he1c2e4ce273b5219(
            arg2, arg3, rdx_3 + 1);
        
        if rax_4 == 0
        {
            rax_5 = *arg2.byte_offset(0x20) - r15;
            rdx = rdx_3 + 1;
            goto 'label_4660cc;
        }
        
        arg1[1] = rax_4;
        result = 1;
    }
    else
    {
        let mut rax: i8;
        rax = uu_head::take::TakeAllBuffer::write_all::hd9faf813f411a40e(arg2, arg3);
        
        if (rax & 1) == 0
        {
            r15 = *arg2.byte_offset(0x20);
            rax_5 = 0;
            'label_4660cc:
            *arg2.byte_offset(0x20) = rax_5;
            arg1[1] = rdx;
            arg1[2] = r15;
            result = 0;
        }
        else
        {
            arg1[1] = rdx;
            result = 1;
        }
    }
    *arg1 = result;
    result
}
