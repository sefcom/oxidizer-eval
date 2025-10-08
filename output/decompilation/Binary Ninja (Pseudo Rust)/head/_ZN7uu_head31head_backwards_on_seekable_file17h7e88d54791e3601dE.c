
  fn uu_head::head_backwards_on_seekable_file::h7e88d54791e3601d(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let rax: i64 = *arg2;
    let mut result: i64;
    
    if rax == 1
    {
        let mut rax_2: i8;
        let mut rdx_2: i64;
        rax_2 = uu_head::find_nth_line_from_end::h2ab1c0c6df65cb6b(arg1, arg2[1], 
            *arg2.byte_offset(0x2b));
        result = 1;
        
        if (rax_2 & 1) == 0
        {
            return uu_head::read_n_bytes::haa0958494279c1b2(arg1, rdx_2);
        }
    }
    else
    {
        if rax != 3
        {
            core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
            /* no return */
        }
        
        let r14_1: i64 = arg2[1];
        let mut var_c0: i32;
        std::fs::File::metadata::h5e84e533705f8c98(&var_c0, arg1);
        
        if var_c0 == 2
        {
            return 1;
        }
        
        result = 0;
        let var_70: i64;
        
        if var_70 > r14_1
        {
            return uu_head::read_n_bytes::haa0958494279c1b2(arg1, var_70 - r14_1);
        }
    }
    
    result
}
