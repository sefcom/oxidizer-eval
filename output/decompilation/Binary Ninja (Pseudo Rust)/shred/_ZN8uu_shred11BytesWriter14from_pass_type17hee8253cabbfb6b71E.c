
  fn uu_shred::BytesWriter::from_pass_type::hee8253cabbfb6b71(arg1: *mut i8, arg2: *mut i8) -> i64

{
    let mut rbp: i64;
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
    let mut var_20030: ();
    
    do
    {
        i -= 0x1000;
        *i = 0;
    } while i != &var_20030;
    
    let rax: i8 = *arg2;
    let mut result: i64;
    
    if rax != 2
    {
        if (rax & 1) == 0
        {
            memset(i.byte_offset(-4), arg2[1], 0x10002);
        }
        else
        {
            memset(i.byte_offset(0xfffe), 0, 0x10002);
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact_mut::hc65588b0192ca83c(
                i.byte_offset(-0x30), i.byte_offset(0xfffe), 0x10002, 3);
            let mut r13_1: i64 = *i.byte_offset(-0x18);
            let r15_2: u64 = *i.byte_offset(-0x10);
            
            if r13_1 >= r15_2
            {
                let mut rdi_4: i64 = *i.byte_offset(-0x20);
                
                do
                {
                    r13_1 -= r15_2;
                    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h0641c419a2aac1ad(
                        rdi_4, r15_2, &arg2[1], 3);
                    rdi_4 += r15_2;
                } while r13_1 >= r15_2;
            }
            
            memcpy(i.byte_offset(-4), i.byte_offset(0xfffe), 0x10002);
        }
        
        *arg1.byte_offset(0x10008) = 0;
        result = memcpy(&arg1[1], i.byte_offset(-4), 0x10002);
        rbp = 1;
    }
    else
    {
        rand_core::SeedableRng::from_os_rng::hd386da512c6ef0d4(&arg1[0x10]);
        rbp = 0;
        result = memset(&arg1[0x150], 0, 0x10000);
    }
    
    *arg1 = rbp;
    i[0x4000];
    i[0x4001];
    i[0x4002];
    i[0x4003];
    i[0x4004];
    i[0x4005];
    result
}
