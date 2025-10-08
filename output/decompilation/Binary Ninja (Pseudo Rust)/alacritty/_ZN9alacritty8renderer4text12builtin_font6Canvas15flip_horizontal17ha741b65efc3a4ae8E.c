
  fn alacritty::renderer::text::builtin_font::Canvas::flip_horizontal::ha741b65efc3a4ae8(arg1: *mut c_void) -> i64

{
    let mut result: i64 = *arg1.byte_offset(0x20);
    let result_2: i64 = result;
    
    if result != 0
    {
        result = *arg1.byte_offset(0x18);
        let result_1: i64 = result;
        
        if result >= 2
        {
            let mut r12_1: *mut c_void = *arg1.byte_offset(8);
            let rbx_1: i64 = *arg1.byte_offset(0x10);
            let mut r15_1: i64 = result_1 - 1;
            let rax_1: i64 = result_1 * 3;
            let mut r13_2: *mut i16 = r12_1.byte_offset(rax_1).byte_offset(-3);
            let mut r14_1: i64 = 0;
            result = 0;
            
            do
            {
                let mut i_1: u64 = result_1 >> 1;
                let var_38_1: *mut c_void = r12_1;
                let var_50_1: i64 = r14_1;
                let var_48_1: *mut i16 = r13_2;
                let var_40_1: i64 = r15_1;
                let mut i: u64;
                
                do
                {
                    if r14_1 >= rbx_1
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(r14_1, rbx_1);
                        /* no return */
                    }
                    
                    if r15_1 >= rbx_1
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(r15_1, rbx_1);
                        /* no return */
                    }
                    
                    core::ptr::swap::he5bebdc076cfabf5(r12_1, r13_2);
                    r15_1 -= 1;
                    r13_2 -= 3;
                    r14_1 += 1;
                    r12_1 += 3;
                    i = i_1;
                    i_1 -= 1;
                } while i != 1;
                r15_1 = var_40_1 + result_1;
                r13_2 = var_48_1.byte_offset(rax_1);
                r14_1 = var_50_1 + result_1;
                r12_1 = var_38_1.byte_offset(rax_1);
                result += 1;
            } while result != result_2;
        }
    }
    
    result
}
