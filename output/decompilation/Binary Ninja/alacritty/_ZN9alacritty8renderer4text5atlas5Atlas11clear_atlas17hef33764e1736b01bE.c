
  void alacritty::renderer::text::atlas::Atlas::clear_atlas::hef33764e1736b01b(int64_t arg1, int64_t arg2, int64_t* arg3)

{
    if (arg2)
    {
        int64_t i = 0;
        
        do
        {
            *(arg1 + i + 0xc) = 0;
            *(arg1 + i + 0x14) = 0;
            i += 0x1c;
        } while (arg2 * 0x1c != i);
    }
    
    *arg3 = 0;
}
