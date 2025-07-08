
  fn uu_ls::get_metadata_with_deref_opt::h471baa3ff4b7ae17(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i32) -> *mut i64

{
    if arg4 == 0
    {
        std::fs::symlink_metadata::haff3ff196e1dc22b(arg1, arg2);
    }
    else
    {
        std::fs::metadata::h459aac21f85cb4df(arg1, arg2);
    }
    
    arg1
}
