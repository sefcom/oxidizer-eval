
  fn just::error::Error::context::hf9a8390aaa277de3(arg1: *mut i128, arg2: *mut i8) -> u64

{
    let mut rax_1: u64 = *arg2;
    
    if rax_1 <= 0x22
    {
        rax_1 = jump_table_46a5c0[rax_1] + &jump_table_46a5c0;
        let mut rax_2: i64;
        let mut zmm0: i128;
        let mut zmm1: i128;
        let mut zmm2: i128;
        let mut zmm3: i128;
        
        match rax_1
        {
            0x661f39 =>
            {
                rax_2 = *arg2.byte_offset(0x48);
                arg1[4] = rax_2;
                zmm0 = *arg2.byte_offset(8);
                zmm1 = *arg2.byte_offset(0x18);
                zmm2 = *arg2.byte_offset(0x28);
                zmm3 = *arg2.byte_offset(0x38);
                'label_661f51:
                arg1[3] = zmm3;
                arg1[2] = zmm2;
                arg1[1] = zmm1;
                *arg1 = zmm0;
                return rax_2;
            }
            0x661f61 =>
            {
                rax_2 = *arg2.byte_offset(0x50);
                arg1[4] = rax_2;
                zmm0 = *arg2.byte_offset(0x10);
                zmm1 = *arg2.byte_offset(0x20);
                zmm2 = *arg2.byte_offset(0x30);
                zmm3 = *arg2.byte_offset(0x40);
                goto 'label_661f51;
            }
        }
    }
    
    arg1[4] = 0x25;
    rax_1
}
