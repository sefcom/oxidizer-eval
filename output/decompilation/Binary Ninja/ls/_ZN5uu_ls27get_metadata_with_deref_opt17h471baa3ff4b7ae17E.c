
  int64_t* uu_ls::get_metadata_with_deref_opt::h471baa3ff4b7ae17(int64_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    if (!arg4)
        std::fs::symlink_metadata::haff3ff196e1dc22b(arg1, arg2);
    else
        std::fs::metadata::h459aac21f85cb4df(arg1, arg2);
    
    return arg1;
}
