
  fn uu_chcon::fts::EntryRef::path::h98d370586f8004df(arg1: *mut c_void) -> i64

{
    let rdx_3: u64 = *arg1.byte_offset(0x40);
    
    if rdx_3 != 0
    {
        let rsi_1: *mut i8 = *arg1.byte_offset(0x30);
        
        if rsi_1 != 0
        {
            let mut var_18: i32;
            core::ffi::c_str::CStr::from_bytes_with_nul::ha2d537a2ffe4f9f2(&var_18, rsi_1, 
                rdx_3 + 1);
            let result: i64;
            
            if var_18 != 1
            {
                return result;
            }
        }
    }
    
    0
}
