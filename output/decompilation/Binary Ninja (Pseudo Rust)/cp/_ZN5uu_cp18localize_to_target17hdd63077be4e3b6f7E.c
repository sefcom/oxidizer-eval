
  fn uu_cp::localize_to_target::hdd63077be4e3b6f7(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: u64) -> *mut i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut rax_2: i64;
    let mut rdx_1: i64;
    rax_2 = std::path::Path::strip_prefix::h5d7e53b0b6c79402(arg4, arg5, arg2);
    let mut rax_3: i64;
    
    if rax_2 == 0
    {
        rax_3 = 7;
    }
    else
    {
        std::path::Path::join::hb28666e9f3e91503(&arg1[1], arg6, arg7, rax_2);
        rax_3 = 0xd;
    }
    
    *arg1 = rax_3;
    arg1
}
