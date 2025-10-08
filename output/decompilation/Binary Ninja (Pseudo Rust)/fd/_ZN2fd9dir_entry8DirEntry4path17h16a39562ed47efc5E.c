
  fn fd::dir_entry::DirEntry::path::h16a39562ed47efc5(arg1: *mut i32) -> i64

{
    if *arg1 != 3
    {
        /* tailcall */
        return ignore::walk::DirEntry::path::h3629fdc8bcb2393b(arg1);
    }
    
    *arg1.byte_offset(0x18);
    *arg1.byte_offset(0x10)
}
