
  void bat::vscreen::AnsiStyle::to_reset_sequence::h34745d2800403749(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    if (-(arg2) != -0x8000000000000000)
        /* tailcall */
        return bat::vscreen::Attributes::to_reset_sequence::h222042b0fc402e3a(arg1, arg3);
    
    *arg1 = 0;
    arg1[1] = 1;
    arg1[2] = 0;
}
