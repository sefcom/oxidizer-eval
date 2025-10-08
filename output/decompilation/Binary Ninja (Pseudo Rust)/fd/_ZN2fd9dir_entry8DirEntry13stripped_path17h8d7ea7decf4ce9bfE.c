
  fn fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(arg1: *mut i32, arg2: i8) -> i64

{
    let mut result: i64;
    let mut rdx: i64;
    result = fd::dir_entry::DirEntry::path::h16a39562ed47efc5(arg1);
    
    if (arg2 & 1) == 0
    {
        return result;
    }
    
    /* tailcall */
    fd::filesystem::strip_current_dir::hccbc9a783f2543e7(result, rdx)
}
