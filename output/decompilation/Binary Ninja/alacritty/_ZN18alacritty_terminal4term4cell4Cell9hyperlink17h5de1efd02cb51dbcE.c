
  int64_t alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(void* arg1)

{
    if (arg1)
    {
        int64_t* rax_1 = *(arg1 + 0x28);
        
        if (rax_1)
        {
            int64_t temp0 = *rax_1;
            *rax_1 += 1;
            
            if (temp0 <= -1)
                trap(6);
            
            return *(arg1 + 0x28);
        }
    }
    
    return 0;
}
