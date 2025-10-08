
  fn fd::dir_entry::DirEntry::file_type::ha8777f9a24494ad2(arg1: *mut i64)

{
    match *arg1
    {
        0 =>
        {
            
        }
        1 | 2 =>
        {
            arg1[6];
            
        }
        3 =>
        {
            let var_8: i64 = 0;
            let rax_1: *mut c_void = fd::dir_entry::DirEntry::metadata::hb1432c4a87d609c2(arg1);
            
            if rax_1 == 0
            {
                return;
            }
            
            *rax_1.byte_offset(0x38);
            
        }
    }
}
