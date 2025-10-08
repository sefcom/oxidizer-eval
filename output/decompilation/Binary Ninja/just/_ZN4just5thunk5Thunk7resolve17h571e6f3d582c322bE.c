
  int64_t just::thunk::Thunk::resolve::h571e6f3d582c322b(int128_t* arg1, int128_t* arg2, int64_t* arg3)

{
    void* rax;
    uint64_t rdx;
    rax = just::token::Token::lexeme::h66587cdf67f63270(arg2);
    int64_t rax_1;
    int64_t rdx_1;
    rax_1 = just::function::get::h1bd3e83e3a4bbfd7(rax, rdx);
    void* rax_2;
    int64_t rdx_2;
    rax_2 = just::token::Token::lexeme::h66587cdf67f63270(arg2);
    void* var_f0 = rax_2;
    int64_t var_e8 = rdx_2;
    int64_t var_f8 = -0x7fffffffffffffbe;
    int128_t var_78;
    just::token::Token::error::h986494da066a4455(&var_78, arg2, &var_f8);
    var_f0 = var_78;
    int128_t var_68;
    int128_t var_e0 = var_68;
    int128_t var_58;
    int128_t var_d0 = var_58;
    int128_t var_48;
    int128_t var_c0 = var_48;
    int128_t var_38;
    int128_t var_b0 = var_38;
    var_f8 = 7;
    core::option::Option$LT$T$GT$::map_or::hdffe240cb552c6ef(arg1, rax_1, rdx_1, &var_f8, arg3, 
        arg2);
    /* tailcall */
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..expression..Expression$GT$$GT$::hd865f9e8bf24b460(arg3);
}
