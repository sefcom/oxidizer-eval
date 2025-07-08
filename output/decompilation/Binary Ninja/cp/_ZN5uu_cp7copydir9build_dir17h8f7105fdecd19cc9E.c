
  int64_t uu_cp::copydir::build_dir::h8f7105fdecd19cc9(int64_t* arg1, char arg2, char arg3, void* arg4)

{
    char r8;
    char var_1c = r8;
    int32_t rcx = 0x12;
    
    if (!arg3)
        rcx = 0;
    
    int32_t rbp = 0x3f;
    
    if (!arg2)
        rbp = rcx;
    
    int32_t var_20 =
        ((uucore::features::mode::get_umask::hd2aa58752ad993fa() & 0x1ff) | rbp) ^ 0x1ff;
    int64_t rax_4 = std::fs::DirBuilder::create::hd1163c4ef941f4c8(&var_20, arg4);
    int64_t result;
    
    if (!rax_4)
        result = 0xd;
    else
    {
        arg1[1] = rax_4;
        result = 2;
    }
    
    *arg1 = result;
    return result;
}
