
  fn uvx::get_uvx_suffix::h9d58d2b7efa33399() -> i64

{
    let mut rax: *mut i8;
    let mut rdx: i64;
    let rsi: i64;
    let rdi: i64;
    rax = std::path::Path::file_name::h6d40d88bf3fb287a(rdi, rsi);
    
    if rax != 0
    {
        let mut var_18: i8;
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_18, rax, rdx);
        let var_10: i64;
        let var_8: i64;
        
        if (var_18 & 1) == 0
        {
            return _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(var_10, var_8);
        }
    }
    
    0
}
