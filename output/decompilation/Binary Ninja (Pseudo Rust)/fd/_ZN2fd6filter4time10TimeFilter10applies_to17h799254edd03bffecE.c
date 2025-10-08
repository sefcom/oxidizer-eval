
  fn fd::filter::time::TimeFilter::applies_to::h799254edd03bffec(arg1: *mut i32, arg2: i64, arg3: i32) -> u64

{
    let rcx: i64 = *arg1.byte_offset(8);
    let rax: i32 = arg1[4];
    
    if *arg1 == 1
    {
        let mut rdi: i32;
        rdi = arg3 > rax;
        let mut rax_1: u64;
        rax_1 = arg2 > rcx;
        
        if arg2 == rcx
        {
            return rdi;
        }
        
        return rax_1;
    }
    
    let mut rdi_1: i32;
    rdi_1 = arg3 < rax;
    let mut rax_2: u64;
    rax_2 = arg2 < rcx;
    
    if arg2 == rcx
    {
        return rdi_1;
    }
    
    rax_2
}
