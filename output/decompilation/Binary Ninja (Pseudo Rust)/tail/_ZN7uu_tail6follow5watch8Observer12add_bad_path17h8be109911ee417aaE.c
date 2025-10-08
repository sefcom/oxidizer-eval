
  fn uu_tail::follow::watch::Observer::add_bad_path::h8be109911ee417aa(arg1: *mut c_void, arg2: *mut i8) -> u64

{
    let mut result: u64 = 0;
    
    if *arg1.byte_offset(0x8c) != 1
    {
        return 0;
    }
    
    let var_18: ();
    let rcx: i64;
    let rdx: u64;
    let mut rdx_1: i64;
    let r8: u64;
    
    if *arg1.byte_offset(0x8e) != 2
    {
        result = uu_tail::follow::watch::Observer::add_path::h2513ec520b230a37(arg1, arg2, rdx, 
            rcx, r8, 0, var_18, 0);
    }
    result
}
