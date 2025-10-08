
  uint64_t uu_pr::trailer_content::hfb8d3a6ef2744922(int64_t* arg1, char arg2, char arg3)

{
    uint64_t result = 8;
    int64_t rcx;
    
    if (!(arg2 & 1) || arg3 & 1)
        rcx = 0;
    else
    {
        result = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x78);
        
        if (!result)
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        *result = 0;
        *(result + 8) = 1;
        *(result + 0x10) = {0};
        *(result + 0x20) = 1;
        *(result + 0x28) = {0};
        *(result + 0x38) = 1;
        *(result + 0x40) = {0};
        *(result + 0x50) = 1;
        *(result + 0x58) = {0};
        *(result + 0x68) = 1;
        *(result + 0x70) = 0;
        rcx = 5;
    }
    
    *arg1 = rcx;
    arg1[1] = result;
    arg1[2] = rcx;
    return result;
}
