
  fn bat::vscreen::AnsiStyle::to_reset_sequence::h34745d2800403749(arg1: *mut i64, arg2: i64, arg3: i64)

{
    if -(arg2) != -0x8000000000000000
    {
        /* tailcall */
        return bat::vscreen::Attributes::to_reset_sequence::h222042b0fc402e3a(arg1, arg3);
    }
    
    *arg1 = 0;
    arg1[1] = 1;
    arg1[2] = 0;
}
