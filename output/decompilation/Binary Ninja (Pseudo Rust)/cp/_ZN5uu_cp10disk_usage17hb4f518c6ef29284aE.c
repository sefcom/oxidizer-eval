
  fn uu_cp::disk_usage::hb4f518c6ef29284a(arg1: *mut c_void, arg2: i64, arg3: i8) -> i64

{
    if arg2 == 0
    {
        return 0;
    }
    
    let mut r14_1: *mut c_void = arg1;
    let mut r13_1: i64 = arg2 * 0x18;
    let result: i64 = 0;
    let mut r15: i64 = 0;
    let mut var_e0: i32;
    let var_a8: i32;
    let var_90: i64;
    
    if arg3 == 0
    {
        loop
        {
            std::fs::metadata::hfc8772c33100161d(&var_e0, r14_1);
            
            if var_e0 == 2
            {
                break;
            }
            
            let mut rax_1: i64 = 0;
            
            if (var_a8 & 0xf000) != 0x4000
            {
                rax_1 = var_90;
            }
            
            r15 += rax_1;
            r14_1 += 0x18;
            let temp2_1: i64 = r13_1;
            r13_1 -= 0x18;
            
            if temp2_1 == 0x18
            {
                return result;
            }
        }
        
        return 1;
    }
    
    loop
    {
        std::fs::metadata::hfc8772c33100161d(&var_e0, r14_1);
        
        if var_e0 == 2
        {
            return 1;
        }
        
        if (var_a8 & 0xf000) != 0x4000
        {
            r15 += var_90;
            r14_1 += 0x18;
            let temp0_1: i64 = r13_1;
            r13_1 -= 0x18;
            
            if temp0_1 == 0x18
            {
                return result;
            }
        }
        else
        {
            *r14_1.byte_offset(0x10);
            let mut rax_4: i8;
            let mut rdx: i64;
            rax_4 = uu_cp::disk_usage_directory::h3351dc16d0087e4c(*r14_1.byte_offset(8));
            
            if (rax_4 & 1) != 0
            {
                return 1;
            }
            
            r15 += rdx;
            r14_1 += 0x18;
            let temp1_1: i64 = r13_1;
            r13_1 -= 0x18;
            
            if temp1_1 == 0x18
            {
                return result;
            }
        }
    }
}
