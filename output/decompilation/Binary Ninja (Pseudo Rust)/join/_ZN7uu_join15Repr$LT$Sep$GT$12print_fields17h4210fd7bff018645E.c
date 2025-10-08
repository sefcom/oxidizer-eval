
  fn uu_join::Repr$LT$Sep$GT$::print_fields::h4210fd7bff018645(arg1: i64, arg2: i64, arg3: *mut i64, arg4: *mut c_void, arg5: i64) -> i64

{
    let __saved_rsi_1: i64;
    let __saved_rsi: i64 = __saved_rsi_1;
    let r13: i64 = *arg4.byte_offset(0x10);
    
    if r13 != 0
    {
        let mut rbx_1: i64 = 0;
        
        do
        {
            if arg5 != rbx_1
            {
                let mut rax: i64;
                let mut rdx: u64;
                rax = std::ffi::os_str::_$LT$impl$u20$core..convert..AsRef$LT$std..ffi..os_str..OsStr$GT$$u20$for$u20$alloc..string..String$GT$::as_ref::h5eb4ca0e0b17e13d(arg1);
                let mut result: i64 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg3, rax, rdx);
                
                if result != 0
                {
                    return result;
                }
                
                let mut rax_1: i64;
                let mut rdx_1: u64;
                rax_1 = uu_join::Line::get_field::h5172ba7928bd7492(arg4, rbx_1);
                
                if rax_1 == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg3, rax_1, rdx_1);
                
                if result != 0
                {
                    return result;
                }
            }
            
            rbx_1 += 1;
        } while r13 != rbx_1;
    }
    
    0
}
