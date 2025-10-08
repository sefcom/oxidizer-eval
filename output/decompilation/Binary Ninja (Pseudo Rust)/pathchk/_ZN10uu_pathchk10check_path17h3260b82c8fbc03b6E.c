
  fn uu_pathchk::check_path::h3260b82c8fbc03b6(arg1: *mut i8, arg2: *mut c_void, arg3: i64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    
    match jump_table_418538[*arg1]
    {
        0x3d8f5 =>
        {
            /* tailcall */
            uu_pathchk::check_default::hab06eef46e470948(arg2, arg3)
        }
        0x3d907 =>
        {
            if uu_pathchk::check_default::hab06eef46e470948(arg2, arg3) == 0
            {
                return 0;
            }
            
            /* tailcall */
            uu_pathchk::check_extra::h08af7cafa8f69b56(arg2, arg3)
        }
        0x3d928 =>
        {
            if uu_pathchk::check_basic::h0fc1234dee308fd2(arg2, arg3) != 0
            {
                /* tailcall */
                return uu_pathchk::check_extra::h08af7cafa8f69b56(arg2, arg3);
            }
            
            0
        }
        0x3d941 =>
        {
            /* tailcall */
            uu_pathchk::check_basic::h0fc1234dee308fd2(arg2, arg3)
        }
    }
}
