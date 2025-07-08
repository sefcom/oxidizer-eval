
  fn uu_head::find_nth_line_from_end::h5c4d4ddf46229ebf(arg1: *mut i32, arg2: i64, arg3: i32) -> u64

{
    let rbp: i64;
    let var_8: i64 = rbp;
    let r15: i64;
    let var_10: i64 = r15;
    let r14: i64;
    let var_18: i64 = r14;
    let r13: i64;
    let var_20: i64 = r13;
    let r12: i64;
    let var_28: i64 = r12;
    let rbx: i64;
    let mut var_30: i64 = rbx;
    let mut i: *mut i64 = &var_30;
    let mut var_10030: ();
    
    do
    {
        i -= 0x1000;
        *i = 0;
    } while i != &var_10030;
    
    let mut result: u64 = 1;
    let mut rax: i64;
    let mut rdx: *mut *mut [i8; 0x8b];
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg1, 1, 0);
    let mut rbx_1: *mut *mut [i8; 0x8b] = rdx;
    
    if rax == 0
    {
        *i.byte_offset(-0x34) = arg3;
        *i.byte_offset(-0x40) = arg1;
        let mut r13_1: i64 = 0;
        memset(i, 0, 0x10000);
        let mut rax_2: i64;
        let mut rdx_1: u64;
        rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::hd5561b86696466f7(core::cmp::min_by::h2078b6bb6ba69746(rbx_1), i);
        let mut r12_2: u64 = rdx_1;
        *i.byte_offset(-0x18) = rax_2;
        *i.byte_offset(-0x28) = rax_2 + rdx_1;
        let mut r14_2: i64 = 0;
        *i.byte_offset(-0x20) = rbx_1;
        *i.byte_offset(-0x30) = rdx_1;
        let mut result_1: bool;
        
        loop
        {
            let rax_5: i64 =
                -(core::cmp::min_by::hae32659e1ae087e7(r12_2, rbx_1.byte_offset(-r13_1)));
            let rbx_3: *mut i32 = *i.byte_offset(-0x40);
            let mut rax_6: i64;
            let mut rdx_3: *mut *mut [i8; 0x8b];
            rax_6 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(rbx_3, 
                2, rax_5);
            
            if rax_6 != 0
            {
                result_1 = true;
                break;
            }
            
            let rbx_4: i64 = *i.byte_offset(-0x18);
            
            if std::io::Read::read_exact::h4f03c53f641b4de7(rbx_3, rbx_4, r12_2) != 0
            {
                result_1 = true;
                break;
            }
            
            *i.byte_offset(-0x10) = rbx_4;
            *i.byte_offset(-8) = *i.byte_offset(-0x28);
            let mut rax_9: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hbe5502fe4b8ea8e6(i.byte_offset(-0x10));
            rbx_1 = *i.byte_offset(-0x20);
            let rbp_2: i8 = *i.byte_offset(-0x34);
            
            if rax_9 != 0
            {
                loop
                {
                    let mut r14_3: i64;
                    r14_3 = *rax_9 == rbp_2;
                    r14_2 += r14_3;
                    
                    if r14_2 == arg2 + 1
                    {
                        result_1 =
                            std::io::Seek::rewind::hc8a3d0d593dc2463(*i.byte_offset(-0x40)) != 0;
                        break;
                    }
                    
                    r13_1 += 1;
                    rax_9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hbe5502fe4b8ea8e6(i.byte_offset(-0x10));
                    
                    if rax_9 == 0
                    {
                        goto 'label_4b9d43;
                    }
                }
                
                break;
            }
            
            'label_4b9d43:
            r12_2 = *i.byte_offset(-0x30);
            
            if r13_1 == rbx_1
            {
                result_1 = std::io::Seek::rewind::hc8a3d0d593dc2463(*i.byte_offset(-0x40)) != 0;
                break;
            }
        }
        
        result = result_1;
    }
    
    i[0x2000];
    i[0x2001];
    i[0x2002];
    i[0x2003];
    i[0x2004];
    i[0x2005];
    result
}
