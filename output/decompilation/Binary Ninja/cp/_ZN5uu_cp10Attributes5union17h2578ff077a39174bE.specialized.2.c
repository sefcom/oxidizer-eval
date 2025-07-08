
  char* uu_cp::Attributes::union::h2578ff077a39174b.specialized.2()

{
    int64_t rax;
    int64_t var_38 = rax;
    char rax_1;
    char rdx;
    char* rsi;
    rax_1 = core::cmp::max_by::ha65c10ec7dc7bcb0(*rsi, rsi[1], 1, 1);
    *var_38[6] = rdx;
    char rax_2;
    char rdx_1;
    rax_2 = core::cmp::max_by::ha65c10ec7dc7bcb0(rsi[6], rsi[7], 0, 0);
    *var_38[5] = rax_2;
    *var_38[7] = rdx_1;
    char rax_3;
    char rdx_2;
    rax_3 = core::cmp::max_by::ha65c10ec7dc7bcb0(rsi[4], rsi[5], 1, 1);
    *var_38[4] = rdx_2;
    char rax_4;
    char rdx_3;
    rax_4 = core::cmp::max_by::ha65c10ec7dc7bcb0(rsi[2], rsi[3], 1, 1);
    *var_38[2] = rdx_3;
    char rax_5;
    char rdx_4;
    rax_5 = core::cmp::max_by::ha65c10ec7dc7bcb0(rsi[8], rsi[9], 0, 0);
    *var_38[3] = rdx_4;
    char rax_6;
    char rdx_5;
    rax_6 = core::cmp::max_by::ha65c10ec7dc7bcb0(rsi[0xa], rsi[0xb], 1, 1);
    char* result;
    *result = rax_1 & 1;
    result[1] = *var_38[6];
    result[2] = rax_4 & 1;
    result[3] = *var_38[2];
    result[4] = rax_3 & 1;
    result[5] = *var_38[4];
    result[6] = *var_38[5] & 1;
    result[7] = *var_38[7];
    result[8] = rax_5 & 1;
    result[9] = *var_38[3];
    result[0xa] = rax_6 & 1;
    result[0xb] = rdx_5;
    return result;
}
