
  fn bat::printer::InteractivePrinter::highlight_regions_for_line::ha23065aa3979fcb0(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i8, arg4: i64) -> u64

{
    let mut result: u64;
    let mut var_78: i64;
    
    if !(0 + -(*arg2.byte_offset(0x128)))
    {
        let mut rdx: *const i8 = "\nWriting metadata to folder  ..…";
        
        if arg4 < 0x4001
        {
            rdx = arg3;
        }
        
        let mut rcx: i64 = 1;
        
        if arg4 < 0x4001
        {
            rcx = arg4;
        }
        
        syntect::easy::HighlightLines::highlight_line::he5ec32671249364a(&var_78, 
            arg2.byte_offset(0x128), rdx, rcx, *arg2.byte_offset(0x1f8));
        let rcx_1: i64 = var_78;
        let var_70: i8;
        let r12_1: i64 = var_70;
        let result_1: u64;
        result = result_1;
        let var_68: *mut c_void;
        
        if rcx_1 != -0x7ffffffffffffff6
        {
            let var_38: i64;
            *arg1.byte_offset(0x48) = var_38;
            let var_48: i128;
            *arg1.byte_offset(0x38) = var_48;
            let var_58: i128;
            *arg1.byte_offset(0x28) = var_58;
            *arg1 = 2;
            *arg1.byte_offset(8) = rcx_1;
            *arg1.byte_offset(0x10) = r12_1;
            *arg1.byte_offset(0x18) = var_68;
            *arg1.byte_offset(0x20) = result;
        }
        else
        {
            if arg4 > 0x4000
            {
                if result == 0
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
                    /* no return */
                }
                
                *var_68.byte_offset(0x10) = arg3;
                *var_68.byte_offset(0x18) = arg4;
            }
            
            *arg1.byte_offset(8) = r12_1;
            *arg1.byte_offset(0x10) = var_68;
            *arg1.byte_offset(0x18) = result;
            *arg1 = 0xd;
        }
    }
    else
    {
        result = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x20, 0);
        
        if result == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        var_78 = -0x80808000808081;
        let var_70_1: i8 = 0;
        *result = var_78;
        *(result + 0x10) = arg3;
        *(result + 0x18) = arg4;
        *arg1.byte_offset(8) = 1;
        *arg1.byte_offset(0x10) = result;
        *arg1.byte_offset(0x18) = 1;
        *arg1 = 0xd;
    }
    result
}
