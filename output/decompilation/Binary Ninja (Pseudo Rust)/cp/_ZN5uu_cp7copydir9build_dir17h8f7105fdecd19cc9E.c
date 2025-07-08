
  fn uu_cp::copydir::build_dir::h8f7105fdecd19cc9(arg1: *mut i64, arg2: i8, arg3: i8, arg4: *mut c_void) -> i64

{
    let r8: i8;
    let var_1c: i8 = r8;
    let mut rcx: i32 = 0x12;
    
    if arg3 == 0
    {
        rcx = 0;
    }
    
    let mut rbp: i32 = 0x3f;
    
    if arg2 == 0
    {
        rbp = rcx;
    }
    
    let mut var_20: i32 =
        ((uucore::features::mode::get_umask::hd2aa58752ad993fa() & 0x1ff) | rbp) ^ 0x1ff;
    let rax_4: i64 = std::fs::DirBuilder::create::hd1163c4ef941f4c8(&var_20, arg4);
    let mut result: i64;
    
    if rax_4 == 0
    {
        result = 0xd;
    }
    else
    {
        arg1[1] = rax_4;
        result = 2;
    }
    
    *arg1 = result;
    result
}
