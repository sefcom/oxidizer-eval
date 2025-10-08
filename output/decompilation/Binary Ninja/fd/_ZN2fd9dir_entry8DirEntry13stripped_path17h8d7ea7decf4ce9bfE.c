
  int64_t fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(int32_t* arg1, char arg2)

{
    int64_t result;
    int64_t rdx;
    result = fd::dir_entry::DirEntry::path::h16a39562ed47efc5(arg1);
    
    if (!(arg2 & 1))
        return result;
    
    /* tailcall */
    return fd::filesystem::strip_current_dir::hccbc9a783f2543e7(result, rdx);
}
