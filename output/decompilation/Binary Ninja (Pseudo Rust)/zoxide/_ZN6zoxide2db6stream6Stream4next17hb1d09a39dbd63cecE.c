
  fn zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg1: *mut c_void) -> i64

{
    let mut rbx: i64 = *arg1.byte_offset(0x70);
    
    if *arg1.byte_offset(0x68) >= rbx
    {
        return 0;
    }
    
    let mut rsi_2: i64;
    
    loop
    {
        *arg1.byte_offset(0x70) = rbx - 1;
        let rax_1: *mut c_void = *arg1.byte_offset(0x60);
        rsi_2 = *rax_1.byte_offset(0x10);
        
        if rbx - 1 >= rsi_2
        {
            break;
        }
        
        let r13_1: i64 = *rax_1.byte_offset(8);
        let r12_1: i64 = (rbx - 1) * 5;
        *(r13_1 + (r12_1 << 3) + 0x10);
        let mut rax_2: i8;
        let mut zmm0: [u32; 0x4];
        let mut zmm1: [i8; 0x10];
        let mut zmm2: u128;
        rax_2 = zoxide::db::stream::Stream::filter_by_keywords::hfa6dd4ec6611dd54(
            *arg1.byte_offset(8), *arg1.byte_offset(0x10), *(r13_1 + (r12_1 << 3) + 8), zmm0, zmm1, 
            zmm2);
        
        if rax_2 != 0
        {
            let r13_2: *mut c_void = r13_1 + (r12_1 << 3);
            let mut rax_3: i8;
            rax_3 = zoxide::db::stream::Stream::filter_by_base_dir::h40436340d7146c85(arg1, 
                *r13_2.byte_offset(8), *r13_2.byte_offset(0x10));
            
            if rax_3 != 0
            {
                if zoxide::db::stream::Stream::filter_by_exclude::h56276cfa98379766(
                    *arg1.byte_offset(0x20), *arg1.byte_offset(0x28), *r13_2.byte_offset(8), 
                    *r13_2.byte_offset(0x10)) == 0
                {
                    zmm0 = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::swap_remove::h9faf7a74dd04c2f3(*arg1.byte_offset(0x60), rbx - 1);
                }
                else
                {
                    let mut rax_5: i8;
                    rax_5 = zoxide::db::stream::Stream::filter_by_exists::h7f6b4e7bfdd84ce2(
                        *arg1.byte_offset(0x58), *arg1.byte_offset(0x59), *r13_2.byte_offset(8), 
                        *r13_2.byte_offset(0x10));
                    
                    if rax_5 != 0
                    {
                        let rax_8: *mut c_void = *arg1.byte_offset(0x60);
                        let rsi_7: i64 = *rax_8.byte_offset(0x10);
                        
                        if rbx - 1 < rsi_7
                        {
                            return (r12_1 << 3) + *rax_8.byte_offset(8);
                        }
                        
                        core::panicking::panic_bounds_check::h025cadc56a971af7(rbx - 1, rsi_7);
                        /* no return */
                    }
                    
                    if *r13_2.byte_offset(0x20) < *arg1.byte_offset(0x50)
                    {
                        zmm0 = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::swap_remove::h9faf7a74dd04c2f3(*arg1.byte_offset(0x60), rbx - 1);
                    }
                }
            }
        }
        
        rbx = *arg1.byte_offset(0x70);
        
        if *arg1.byte_offset(0x68) >= rbx
        {
            return 0;
        }
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx - 1, rsi_2);
    /* no return */
}
