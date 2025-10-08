
  fn uu_tail::forwards_thru_file::hb6f3f61b3da7cbd0(arg1: *mut i32, arg2: i64, arg3: i32) -> i64

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
    let mut var_8030: ();
    
    do
    {
        i -= 0x1000;
        *i = 0;
    } while i != &var_8030;
    
    *i.byte_offset(-0x3c) = arg3;
    let mut r15_1: *mut i32 = arg1;
    let i_1: *mut c_void = i;
    memset(i_1, 0, 0x8000);
    let mut rbp_1: i64 = 0;
    *i.byte_offset(-0x48) = 0;
    *i.byte_offset(-0x28) = r15_1;
    'label_4a75a4:
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h614ade6d36e62b0e(r15_1, i_1, 
        0x8000);
    
    loop
    {
        *i.byte_offset(-0x38) = rax_1;
        *i.byte_offset(-0x30) = rdx;
        let mut result: i64;
        
        if (rax_1 & 1) == 0
        {
            if rdx == 0
            {
                result = 0;
                *i.byte_offset(-0x48);
            }
            else
            {
                let mut rax_4: i64;
                let mut rdx_2: i64;
                rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hdb1cc250d47cebe0(0, rdx, i_1, 0x8000);
                *i.byte_offset(-0x20) = rax_4;
                *i.byte_offset(-0x18) = rax_4;
                *i.byte_offset(-0x10) = rdx_2 + rax_4;
                *i.byte_offset(-8) = *i.byte_offset(-0x3c);
                
                do
                {
                    let mut rax_6: i8;
                    let mut rdx_4: i64;
                    rax_6 = memchr::arch::generic::memchr::Iter::next::haf3629eb4700264f(
                        i.byte_offset(-0x20), i.byte_offset(-8));
                    
                    if (rax_6 & 1) == 0
                    {
                        *i.byte_offset(-0x48) += rdx;
                        r15_1 = *i.byte_offset(-0x28);
                        goto 'label_4a75a4;
                    }
                    
                    rbp_1 += 1;
                } while arg2 != rbp_1;
                
                *i.byte_offset(-0x48);
                result = 0;
            }
            
            goto 'label_4a7697;
        }
        
        if std::io::error::Error::kind::h135fe00c4e7365f3(rdx) != 0x23
        {
            *i.byte_offset(-0x30);
            result = 1;
            'label_4a7697:
            i[0x1000];
            i[0x1001];
            i[0x1002];
            i[0x1003];
            i[0x1004];
            i[0x1005];
            return result;
        }
        
        *i.byte_offset(-0x20) = *i.byte_offset(-0x30);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf9bb92bdb8e06921(i.
            byte_offset(-0x20));
        rax_1 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h614ade6d36e62b0e(
            *i.byte_offset(-0x28), i_1, 0x8000);
    }
}
