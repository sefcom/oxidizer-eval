
  fn uu_ls::colors::StyleManager::apply_normal::h404909a10cb94e2b(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let rax: *mut i128 = uu_ls::colors::StyleManager::get_normal_style::hc92a465b83f2ab18(arg2);
    
    if rax == 0
    {
        *arg1 = 0;
        *arg1.byte_offset(8) = 1;
        arg1[1] = 0;
    }
    else
    {
        let var_1b_1: i64 = *rax.byte_offset(0xd);
        let mut var_28: i128 = *rax;
        uu_ls::colors::StyleManager::get_style_code::h3f5da10be94133b8(arg1, arg2, &var_28);
    }
    
    arg1
}
