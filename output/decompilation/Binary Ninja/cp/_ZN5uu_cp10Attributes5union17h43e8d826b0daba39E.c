
  char* uu_cp::Attributes::union::h43e8d826b0daba39(char* arg1, char* arg2, char* arg3)

{
    int64_t rax;
    int64_t var_38 = rax;
    char rax_1;
    char rdx_1;
    rax_1 = core::cmp::Ord::max::h709176b67e6fd13b(*arg2, arg2[1], *arg3, arg3[1]);
    *var_38[5] = rax_1;
    *var_38[7] = rdx_1;
    char rax_2;
    char rdx_3;
    rax_2 = core::cmp::Ord::max::h709176b67e6fd13b(arg2[6], arg2[7], arg3[6], arg3[7]);
    *var_38[4] = rax_2;
    *var_38[6] = rdx_3;
    char rax_3;
    char rdx_5;
    rax_3 = core::cmp::Ord::max::h709176b67e6fd13b(arg2[4], arg2[5], arg3[4], arg3[5]);
    *var_38[3] = rdx_5;
    char rax_4;
    char rdx_7;
    rax_4 = core::cmp::Ord::max::h709176b67e6fd13b(arg2[2], arg2[3], arg3[2], arg3[3]);
    *var_38[2] = rdx_7;
    char rax_5;
    char rdx_9;
    rax_5 = core::cmp::Ord::max::h709176b67e6fd13b(arg2[8], arg2[9], arg3[8], arg3[9]);
    *var_38[1] = rdx_9;
    char rax_6;
    char rdx_11;
    rax_6 = core::cmp::Ord::max::h709176b67e6fd13b(arg2[0xa], arg2[0xb], arg3[0xa], arg3[0xb]);
    *arg1 = *var_38[5] & 1;
    arg1[1] = *var_38[7];
    arg1[2] = rax_4 & 1;
    arg1[3] = *var_38[2];
    arg1[4] = rax_3 & 1;
    arg1[5] = *var_38[3];
    arg1[6] = *var_38[4] & 1;
    arg1[7] = *var_38[6];
    arg1[8] = rax_5 & 1;
    arg1[9] = *var_38[1];
    arg1[0xa] = rax_6 & 1;
    arg1[0xb] = rdx_11;
    return arg1;
}
