
  fn uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(arg1: *mut c_void, arg2: *mut i8, arg3: size_t, arg4: i64, arg5: u64, arg6: i8) -> *mut i128

{
    let mut result: *mut i128 = nullptr;
    
    if *arg1.byte_offset(0x8c) == 0
    {
        return 0;
    }
    
    let var_18: ();
    let mut rdx: i64;
    
    if *arg1.byte_offset(0x8e) != 2
    {
        result = uu_tail::follow::watch::Observer::add_path::h2539e8b9bde14502(arg1, arg2, arg3, 
            arg4, arg5, 0, var_18, arg6);
    }
    result
}
