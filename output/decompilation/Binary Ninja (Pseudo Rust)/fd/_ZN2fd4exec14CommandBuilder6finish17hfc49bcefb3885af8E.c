
  fn fd::exec::CommandBuilder::finish::hfc49bcefb3885af8(arg1: *mut c_void) -> i64

{
    if *arg1.byte_offset(0x138) != 0
    {
        let mut rax_1: i8;
        let mut rdx_2: i64;
        rax_1 = argmax::Command::try_args::hece235fc07ad1533(arg1.byte_offset(0x50), 
            *arg1.byte_offset(0x40), *arg1.byte_offset(0x48));
        
        if (rax_1 & 1) != 0
        {
            return rdx_2;
        }
        
        let mut var_1e0: i32;
        argmax::Command::status::h7e65af637f3ed111(&var_1e0);
        let var_1d8: i64;
        
        if var_1e0 == 1
        {
            return var_1d8;
        }
        
        let var_1dc: i32;
        
        if var_1dc != 0
        {
            *arg1.byte_offset(0x148) = 4;
        }
        
        fd::exec::CommandBuilder::new_command::hd2fd042878a0df86(&var_1e0, *arg1.byte_offset(0x28), 
            *arg1.byte_offset(0x30));
        let r15_1: i64 = var_1e0;
        
        if -(r15_1) == -0x8000000000000000
        {
            return var_1d8;
        }
        
        let mut var_1d0: ();
        let mut var_f8: ();
        memcpy(&var_f8, &var_1d0, 0xd8);
        core::ptr::drop_in_place$LT$argmax..Command$GT$::hca65ebb0b5b23438(arg1.byte_offset(0x50));
        *arg1.byte_offset(0x50) = r15_1;
        *arg1.byte_offset(0x58) = var_1d8;
        memcpy(arg1.byte_offset(0x60), &var_f8, 0xd8);
        *arg1.byte_offset(0x138) = 0;
    }
    
    0
}
