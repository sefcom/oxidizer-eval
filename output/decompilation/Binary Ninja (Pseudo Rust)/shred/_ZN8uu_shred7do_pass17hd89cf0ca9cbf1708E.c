
  fn uu_shred::do_pass::hd89cf0ca9cbf1708(arg1: *mut i32, arg2: *mut i8, arg3: i8, arg4: i64) -> *mut *mut [i8; 0xc6]

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
    
    let mut i_1: *mut *mut [i8; 0xc6] = std::io::Seek::rewind::h87bbf0dfa3c74672(arg1);
    
    if i_1 == 0
    {
        uu_shred::BytesWriter::from_pass_type::h9b8f49adafc10293(i.byte_offset(-0x158), arg2);
        let mut r12_2: i64 = 0;
        
        do
        {
            if r12_2 >= arg4 >> 0x10
            {
                let r14_2: i64 = arg4 & 0xffff;
                
                if r14_2 != 0
                {
                    let mut rsi_2: i64 = 0x10000;
                    
                    if arg3 != 0
                    {
                        rsi_2 = r14_2;
                    }
                    
                    let mut rax_2: i64;
                    let mut rdx_1: u64;
                    rax_2 = uu_shred::BytesWriter::bytes_for_pass::h0df75ebf5bedda4a(
                        i.byte_offset(-0x158), rsi_2);
                    i_1 = std::io::Write::write_all::hdb2ef0a1157baf82(arg1, rax_2, rdx_1);
                }
                
                if r14_2 == 0 || i_1 == 0
                {
                    i_1 = std::fs::File::sync_data::hf784af99032c3e35(arg1);
                    
                    if i_1 == 0
                    {
                        i_1 = nullptr;
                    }
                }
                
                break;
            }
            
            r12_2 = _$LT$u64$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h30cfd590689ce002(r12_2);
            let mut rax_1: i64;
            let mut rdx: u64;
            rax_1 = uu_shred::BytesWriter::bytes_for_pass::h0df75ebf5bedda4a(i.byte_offset(-0x158), 
                0x10000);
            i_1 = std::io::Write::write_all::hdb2ef0a1157baf82(arg1, rax_1, rdx);
        } while i_1 == 0;
    }
    
    i[0x2000];
    i[0x2001];
    i[0x2002];
    i[0x2003];
    i[0x2004];
    i[0x2005];
    i_1
}
