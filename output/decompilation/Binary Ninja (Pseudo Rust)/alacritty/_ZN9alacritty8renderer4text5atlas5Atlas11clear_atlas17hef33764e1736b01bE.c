
  fn alacritty::renderer::text::atlas::Atlas::clear_atlas::hef33764e1736b01b(arg1: i64, arg2: i64, arg3: *mut i64)

{
    if arg2 != 0
    {
        let mut i: i64 = 0;
        
        do
        {
            *(arg1 + i + 0xc) = 0;
            *(arg1 + i + 0x14) = 0;
            i += 0x1c;
        } while arg2 * 0x1c != i;
    }
    
    *arg3 = 0;
}
