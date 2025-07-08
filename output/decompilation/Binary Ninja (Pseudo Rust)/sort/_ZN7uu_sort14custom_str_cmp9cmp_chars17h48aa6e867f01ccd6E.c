
  fn uu_sort::custom_str_cmp::cmp_chars::h48aa6e867f01ccd6(arg1: i32, arg2: i32, arg3: i32) -> u64

{
    let mut rcx: i32;
    let mut c: bool;
    let mut z: bool;
    
    if arg3 == 0
    {
        c = arg1 < arg2;
        z = arg1 == arg2;
    }
    else
    {
        rcx = arg1 & 0x5f;
        
        if arg1 - 0x61 >= 0x1a
        {
            rcx = arg1;
        }
        
        let mut rdx_1: i32 = arg2 & 0x5f;
        
        if arg2 - 0x61 >= 0x1a
        {
            rdx_1 = arg2;
        }
        
        c = rcx < rdx_1;
        z = rcx == rdx_1;
    }
    
    let mut rax: i32;
    rax = c;
    rcx = !z;
    
    if rax == 0
    {
        return rcx;
    }
    
    0xff
}
