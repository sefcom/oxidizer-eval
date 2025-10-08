
  fn fd::dir_entry::DirEntry::into_path::h5b05848c102c5466(arg1: *mut i128, arg2: *mut i32) -> *mut i128

{
    if *arg2 == 3
    {
        let result: i64 = *arg2.byte_offset(0x18);
        arg1[1] = result;
        *arg1 = *arg2.byte_offset(8);
        return result;
    }
    
    let var_18: i128 = *arg2.byte_offset(0x60);
    let var_28: i128 = *arg2.byte_offset(0x50);
    let var_38: i128 = *arg2.byte_offset(0x40);
    let var_48: i128 = *arg2.byte_offset(0x30);
    let var_58: i128 = *arg2.byte_offset(0x20);
    let var_68: i128 = *arg2.byte_offset(0x10);
    let mut var_78: i128 = *arg2;
    ignore::walk::DirEntry::into_path::hd772e5e3e847583e(arg1, &var_78)
}
