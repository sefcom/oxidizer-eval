
  int64_t uu_chcon::fts::EntryRef::path::h98d370586f8004df(void* arg1)

{
    uint64_t rdx_3 = *(arg1 + 0x40);
    
    if (rdx_3)
    {
        char* rsi_1 = *(arg1 + 0x30);
        
        if (rsi_1)
        {
            int32_t var_18;
            core::ffi::c_str::CStr::from_bytes_with_nul::ha2d537a2ffe4f9f2(&var_18, rsi_1, 
                rdx_3 + 1);
            int64_t result;
            
            if (var_18 != 1)
                return result;
        }
    }
    
    return 0;
}
