
  fn fd::filter::time::TimeFilter::after::h806e9649c0de5a90(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> *mut i8

{
    let mut result: *mut i8;
    let mut rdx: i32;
    result = fd::filter::time::TimeFilter::from_str::h9f09e78d43e167d9(arg2, arg3);
    let mut rcx: i64 = 2;
    
    if rdx != 0x3b9aca00
    {
        arg1[1] = result;
        arg1[2] = rdx;
        rcx = 1;
    }
    
    *arg1 = rcx;
    result
}
