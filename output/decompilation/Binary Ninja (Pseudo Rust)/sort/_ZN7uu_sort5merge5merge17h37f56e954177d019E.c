
  fn uu_sort::merge::merge::h37f56e954177d019(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: *mut c_void, arg5: i64, arg6: i64, arg7: *mut c_void) -> *mut i64

{
    let mut rax: u64;
    let mut rdx_1: i64;
    rax = uu_sort::merge::replace_output_file_in_input_files::h1d16a350d57fc5e2(arg2, arg3, arg5, 
        arg6, arg7);
    
    if rax == 0
    {
        let rdx_2: *mut c_void = &arg2[arg3 * 3];
        
        if *arg4.byte_offset(0x30) != -0x8000000000000000
        {
            uu_sort::merge::merge_with_file_limit::hd33eb504f21b1692(arg1, arg2, rdx_2, arg4, arg7);
        }
        else
        {
            uu_sort::merge::merge_with_file_limit::h68734aa550059387(arg1, arg2, rdx_2, arg4, arg7);
        }
    }
    else
    {
        arg1[1] = rax;
        arg1[2] = rdx_1;
        *arg1 = 3;
    }
    
    arg1
}
