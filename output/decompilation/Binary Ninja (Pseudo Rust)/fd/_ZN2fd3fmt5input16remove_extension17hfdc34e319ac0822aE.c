
  fn fd::fmt::input::remove_extension::hfdc34e319ac0822a(arg1: *mut i128, arg2: *mut i16, arg3: u64) -> i64

{
    let mut r14: *mut i16 = arg2;
    let mut var_68: i64;
    fd::fmt::input::dirname::h900660a28c19a669(&var_68, arg2, arg3);
    let mut rax: *mut i16;
    let mut rdx: i64;
    rax = std::path::Path::file_stem::hc69c2d2c61933548(r14, arg3);
    
    if rax != 0
    {
        r14 = rax;
    }
    
    let r12: i64 = var_68;
    let var_60: i64;
    let var_58: u64;
    let mut var_50: i64;
    std::path::Path::join::h1476eb6a0e8f28c9(&var_50, var_60, var_58, r14);
    core::mem::drop::h3eb21fab0c0d11e6(r12, var_60);
    let var_48: i64;
    let var_40: i64;
    let mut rax_1: i64;
    let mut rdx_2: u64;
    rax_1 = fd::filesystem::strip_current_dir::hccbc9a783f2543e7(var_48, var_40);
    let mut var_38: i128;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_38, rax_1, rdx_2);
    let var_28: i64;
    arg1[1] = var_28;
    *arg1 = var_38;
    /* tailcall */
    core::mem::drop::h3eb21fab0c0d11e6(var_50, var_48)
}
