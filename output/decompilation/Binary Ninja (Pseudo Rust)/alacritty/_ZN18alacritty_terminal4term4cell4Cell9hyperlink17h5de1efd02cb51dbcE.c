
  fn alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(arg1: *mut c_void) -> i64

{
    if arg1 != 0
    {
        let rax_1: *mut i64 = *arg1.byte_offset(0x28);
        
        if rax_1 != 0
        {
            let temp0: i64 = *rax_1;
            *rax_1 += 1;
            
            if temp0 <= -1
            {
                trap(6);
            }
            
            return *arg1.byte_offset(0x28);
        }
    }
    
    0
}
