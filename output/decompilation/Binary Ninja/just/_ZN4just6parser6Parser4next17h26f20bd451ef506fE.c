
  int64_t just::parser::Parser::next::h26f20bd451ef506f(int128_t* arg1, void* arg2)

{
    int64_t rax;
    int64_t rdx;
    rax = just::parser::Parser::rest::h006cb6290a6cc038(arg2);
    int64_t var_d0 = rax;
    int64_t var_c8 = rdx;
    int128_t var_c0;
    core::iter::traits::iterator::Iterator::try_fold::hc0d12f79d33f0a11(&var_c0, &var_d0);
    int128_t var_b0;
    int128_t var_a0;
    int128_t var_90;
    char var_80;
    
    if (var_80 != 0x25)
    {
        int128_t zmm0 = var_c0;
        arg1[3] = var_90;
        arg1[2] = var_a0;
        arg1[1] = var_b0;
        *arg1 = zmm0;
        int32_t var_7f;
        *(arg1 + 0x41) = var_7f;
        *(arg1 + 0x44) = var_7f;
        arg1[4] = var_80;
        *(arg1 + 0x48) = 0x25;
        return var_80;
    }
    
    int64_t rax_2 = just::parser::Parser::internal_error::ha5200abb7b463c9f(&var_c0, arg2);
    int128_t var_78;
    int128_t var_28 = var_78;
    int128_t zmm1_1 = var_c0;
    int128_t var_38 = var_90;
    int128_t var_48 = var_a0;
    int128_t var_58 = var_b0;
    int128_t var_68 = zmm1_1;
    arg1[4] = var_78;
    arg1[3] = var_90;
    arg1[2] = var_a0;
    arg1[1] = var_b0;
    *arg1 = zmm1_1;
    return rax_2;
}
