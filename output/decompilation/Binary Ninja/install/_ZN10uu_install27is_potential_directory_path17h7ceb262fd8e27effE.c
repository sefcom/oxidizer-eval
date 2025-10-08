
  char* uu_install::is_potential_directory_path::h7ceb262fd8e27eff(int64_t arg1, uint64_t arg2)

{
    int64_t rax = arg1 + arg2;
    
    if (rax == 1 | !arg2 || *(rax - 1) != 0x2f)
        /* tailcall */
        return std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2);
    
    char* result;
    result = 1;
    return result;
}
