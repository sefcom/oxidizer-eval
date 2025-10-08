
  fn uu_shred::do_pass::h5f3b51dd2439eeba(arg1: *mut i32, arg2: *mut i8, arg3: i8, arg4: i64) -> *mut *mut c_void

{
    let rbp: i64;
    let var_8: i64 = rbp;
    let r15: i64;
    let var_10: i64 = r15;
    let r14: i64;
    let var_18: i64 = r14;
    let r12: i64;
    let var_20: i64 = r12;
    let rbx: i64;
    let mut var_28: i64 = rbx;
    let mut i: *mut i64 = &var_28;
    let mut var_10028: ();
    
    do
    {
        i -= 0x1000;
        *i = 0;
    } while i != &var_10028;
    
    let mut r14_1: i64 = arg4;
    let mut i_1: *mut *mut c_void = std::io::Seek::rewind::h2f4d22a4a492d7bb(arg1);
    
    if i_1 == 0
    {
        uu_shred::BytesWriter::from_pass_type::hee8253cabbfb6b71(i.byte_offset(-0x150), arg2);
        
        if arg3 == 0
        {
            let mut rax: i32;
            rax = (r14_1 & 0xfff) != 0;
            r14_1 = ((rax << 0xc) + r14_1) & 0xfffffffffffff000;
        }
        
        let mut r12_3: i64 = (r14_1 >> 0x10) + 1;
        
        do
        {
            let temp0_1: i64 = r12_3;
            r12_3 -= 1;
            
            if temp0_1 == 1
            {
                let mut rax_5: i64;
                let mut rdx_1: u64;
                rax_5 = uu_shred::BytesWriter::bytes_for_pass::hdca822ed44bdc744(
                    i.byte_offset(-0x150), r14_1);
                i_1 = std::io::Write::write_all::h0b38a243f4c38c2f(arg1, rax_5, rdx_1);
                
                if i_1 == 0
                {
                    i_1 = std::fs::File::sync_data::h8645e777bbe562fa(arg1);
                }
                
                break;
            }
            
            let mut rax_4: i64;
            let mut rdx: u64;
            rax_4 = uu_shred::BytesWriter::bytes_for_pass::hdca822ed44bdc744(i.byte_offset(-0x150), 
                0x10000);
            i_1 = std::io::Write::write_all::h0b38a243f4c38c2f(arg1, rax_4, rdx);
        } while i_1 == 0;
    }
    
    i[0x2000];
    i[0x2001];
    i[0x2002];
    i[0x2003];
    i[0x2004];
    i_1
}
