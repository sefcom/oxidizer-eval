
  fn uu_truncate::truncate::h52f8d6c8d64891bb(arg1: i8, arg2: i64, arg3: *mut i64, arg4: *mut i64, arg5: *mut c_void, arg6: i64) -> u64

{
    let rax: i8;
    let var_38: i8 = rax;
    arg1 ^= 1;
    let rbx: i64 = *arg3;
    let r15: i64 = *arg4;
    let mut rsi_3: i64;
    let mut rdi_1: i64;
    let mut result: u64;
    
    if -(rbx) != -0x8000000000000000
    {
        let r14_1: i64 = arg3[1];
        let rsi_4: i64 = arg3[2];
        
        if r15 != -0x8000000000000000
        {
            let rbp_1: i64 = arg4[1];
            let mut result_3: u64;
            let mut rdx_5: i64;
            result_3 = uu_truncate::truncate_reference_and_size::h51f53258c03351bb(r14_1, rsi_4, 
                rbp_1, arg4[2], arg5, arg6, arg1);
            result = result_3;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e1035533d42b527(r15, rbp_1);
        }
        else
        {
            let mut result_2: u64;
            let mut rdx_3: i64;
            result_2 = uu_truncate::truncate_reference_file_only::h81d650944660fde8(r14_1, rsi_4, 
                arg5, arg6, arg1);
            result = result_2;
        }
        
        rdi_1 = rbx;
        rsi_3 = r14_1;
    }
    else
    {
        if r15 == -0x8000000000000000
        {
            core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
            /* no return */
        }
        
        let rbx_1: i64 = arg4[1];
        let mut result_1: u64;
        let mut rdx_1: i64;
        result_1 =
            uu_truncate::truncate_size_only::h1f53334980ddb1bc(rbx_1, arg4[2], arg5, arg6, arg1);
        result = result_1;
        rdi_1 = r15;
        rsi_3 = rbx_1;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e1035533d42b527(rdi_1, rsi_3);
    result
}
