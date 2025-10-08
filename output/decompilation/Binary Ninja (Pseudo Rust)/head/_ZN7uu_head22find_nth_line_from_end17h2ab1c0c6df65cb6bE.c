
  fn uu_head::find_nth_line_from_end::h2ab1c0c6df65cb6b(arg1: *mut i32, arg2: i64, arg3: i32) -> u64

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
    let mut rax: i8;
    let mut rdx: i64;
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(arg1, 1, 0);
    
    if (rax & 1) == 0
    {
        *i.byte_offset(-0x30) = arg1;
        let mut r13_1: i64 = 0;
        let mut rbx_1: i64 = rdx;
        memset(i, 0, 0x10000);
        let mut rbp_3: i64 = 0;
        *i.byte_offset(-0x20) = rbx_1;
        *i.byte_offset(-0x24) = arg3;
        *i.byte_offset(-0x18) = arg2 + 1;
        let mut result_1: bool;
        
        loop
        {
            let rbx_2: i64 = rbx_1 - rbp_3;
            let rax_1: i64 = core::cmp::Ord::min::h08a96a0a44b5e327(rbx_2, 0x10000);
            let mut rax_2: i64;
            let mut rdx_1: u64;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::hafeb32239145e8d7(rax_1, i, 0x10000);
            let r15_2: *mut i32 = *i.byte_offset(-0x30);
            
            if (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(r15_2, 0, 
                rbx_2 - rax_1) & 1) != 0
            {
                result_1 = true;
                break;
            }
            
            if std::io::Read::read_exact::hc1cd067067766de9(r15_2, rax_2, rdx_1) != 0
            {
                result_1 = true;
                break;
            }
            
            *i.byte_offset(-0x10) = rax_2;
            *i.byte_offset(-8) = rax_2 + rdx_1;
            let mut rax_7: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h1cf0d536d1ebcd32(i.byte_offset(-0x10));
            
            if rax_7 != 0
            {
                let r15_3: i8 = *i.byte_offset(-0x24);
                let r14_3: i64 = *i.byte_offset(-0x18);
                
                loop
                {
                    let mut r13_2: i64;
                    r13_2 = *rax_7 == r15_3;
                    r13_1 += r13_2;
                    
                    if r13_1 == r14_3
                    {
                        let rax_8: i64 =
                            std::io::Seek::rewind::h5a487aea7136159b(*i.byte_offset(-0x30));
                        *i.byte_offset(-0x20);
                        result_1 = rax_8 != 0;
                        break;
                    }
                    
                    rbp_3 += 1;
                    rax_7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h1cf0d536d1ebcd32(i.byte_offset(-0x10));
                    
                    if rax_7 == 0
                    {
                        goto 'label_4675b0;
                    }
                }
                
                break;
            }
            
            'label_4675b0:
            rbx_1 = *i.byte_offset(-0x20);
            
            if rbp_3 == rbx_1
            {
                result_1 = std::io::Seek::rewind::h5a487aea7136159b(*i.byte_offset(-0x30)) != 0;
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
