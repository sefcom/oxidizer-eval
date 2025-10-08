
  fn fd::walk::ReceiverBuffer$LT$W$GT$::stop::h953efcef9522a5da(arg1: *mut c_void) -> bool

{
    let mut result: bool;
    
    if *arg1.byte_offset(0x80) == 0
    {
        alloc::slice::stable_sort::h08c83894e6862646(*arg1.byte_offset(0x40), 
            *arg1.byte_offset(0x48));
        result = fd::walk::ReceiverBuffer$LT$W$GT$::stream::hd6ded5132bc549ae(arg1);
    }
    
    if *arg1.byte_offset(0x80) != 0 || result == 6
    {
        result = true;
        
        if *(*arg1.byte_offset(0x60)).byte_offset(0x1e4) != 0
        {
            return *arg1.byte_offset(0x78) != 0;
        }
    }
    
    result
}
