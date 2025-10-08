
  fn alacritty::display::content::Hint::advance::h8bcb95d1876cc7ab(arg1: *mut c_void, arg2: i32, arg3: i32, arg4: i64, arg5: i32) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut result: i32 = 0x110001;
    
    if alacritty::display::content::HintMatches::advance::hba48573630649a2f(arg1, arg4, arg5) != 0
    {
        let r15_1: i64 = *arg1.byte_offset(0x18);
        
        if r15_1 < *arg1.byte_offset(0x10)
        {
            let rax_2: i64 = *arg1.byte_offset(8);
            let rcx_1: i64 = r15_1 * 5;
            let mut rax_3: i32;
            let mut rdx_2: i32;
            rax_3 = core::cmp::Ord::max::h1677403b4a7cf7f9(*(rax_2 + (rcx_1 << 3)), 
                *(rax_2 + (rcx_1 << 3) + 8), arg2);
            let rbx_2: i32 = arg3 * (arg5 - rdx_2) + arg4 - rax_3;
            let mut rcx_2: u64 = 0;
            
            if rbx_2 > 0
            {
                rcx_2 = rbx_2;
            }
            
            let rax_4: *mut c_void = *arg1.byte_offset(0x20);
            let rsi_2: i64 = *rax_4.byte_offset(0x10);
            
            if r15_1 >= rsi_2
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(r15_1, rsi_2);
                /* no return */
            }
            
            let mut rdx_3: i64 = *rax_4.byte_offset(8);
            let rsi_3: i64 = r15_1 * 3;
            result = 0x110000;
            
            if *(rdx_3 + (rsi_3 << 3) + 0x10) > rcx_2
            {
                result = *(*(rdx_3 + (rsi_3 << 3)).byte_offset(8) + (rcx_2 << 2));
            }
            
            rcx_2 = rbx_2 <= 0;
            rdx_3 = result != 0x110000;
            rdx_3 &= rcx_2;
        }
    }
    
    result
}
