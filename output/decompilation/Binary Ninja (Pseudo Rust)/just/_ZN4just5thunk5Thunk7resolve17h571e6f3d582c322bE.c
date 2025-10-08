
  fn just::thunk::Thunk::resolve::h571e6f3d582c322b(arg1: *mut i128, arg2: *mut i128, arg3: *mut i64) -> i64

{
    let mut rax: *mut c_void;
    let mut rdx: u64;
    rax = just::token::Token::lexeme::h66587cdf67f63270(arg2);
    let mut rax_1: i64;
    let mut rdx_1: i64;
    rax_1 = just::function::get::h1bd3e83e3a4bbfd7(rax, rdx);
    let mut rax_2: *mut c_void;
    let mut rdx_2: i64;
    rax_2 = just::token::Token::lexeme::h66587cdf67f63270(arg2);
    let mut var_f0: *mut c_void = rax_2;
    let var_e8: i64 = rdx_2;
    let mut var_f8: i64 = -0x7fffffffffffffbe;
    let mut var_78: i128;
    just::token::Token::error::h986494da066a4455(&var_78, arg2, &var_f8);
    var_f0 = var_78;
    let var_68: i128;
    let var_e0: i128 = var_68;
    let var_58: i128;
    let var_d0: i128 = var_58;
    let var_48: i128;
    let var_c0: i128 = var_48;
    let var_38: i128;
    let var_b0: i128 = var_38;
    var_f8 = 7;
    core::option::Option$LT$T$GT$::map_or::hdffe240cb552c6ef(arg1, rax_1, rdx_1, &var_f8, arg3, 
        arg2);
    /* tailcall */
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..expression..Expression$GT$$GT$::hd865f9e8bf24b460(arg3)
}
