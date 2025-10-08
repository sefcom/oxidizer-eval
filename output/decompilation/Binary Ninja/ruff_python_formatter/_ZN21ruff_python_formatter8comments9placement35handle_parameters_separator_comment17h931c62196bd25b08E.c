
  int64_t ruff_python_formatter::comments::placement::handle_parameters_separator_comment::h931c62196bd25b08(int128_t* arg1, int128_t* arg2, uint64_t arg3, char* arg4, uint64_t arg5, int32_t arg6)

{
    uint64_t rbp;
    uint64_t var_8 = rbp;
    uint64_t r15;
    uint64_t var_10 = r15;
    int128_t var_48;
    uint64_t r12;
    ruff_python_formatter::other::parameters::find_parameter_separators::h04892e8d923259e9(&var_48, 
        arg4, arg5, arg3, arg5, arg6, rbp, r12, r15);
    int32_t var_38;
    int32_t var_78 = var_38;
    int128_t var_88 = var_48;
    int32_t var_24;
    int32_t var_58 = var_24;
    void* rdi_1 = &*var_88[4];
    
    if (!var_88)
        rdi_1 = nullptr;
    
    int128_t var_34;
    int128_t var_68 = var_34;
    int32_t* rsi_1 = &*var_68[4];
    
    if (!var_68)
        rsi_1 = nullptr;
    
    int32_t rbp_1 = arg2[4];
    char r15_1 = *(arg2 + 0x48);
    int32_t result = ruff_python_formatter::other::parameters::assign_argument_separator_comment_placement::h5db81c074307048e(rdi_1, rsi_1, rbp_1, r15_1);
    
    if (result != 4)
    {
        result = *(arg2 + 0x44);
        *(arg1 + 8) = *arg2;
        *(arg1 + 0x18) = rbp_1;
        *(arg1 + 0x1c) = result;
        arg1[2] = 0;
        *(arg1 + 0x21) = r15_1;
        *arg1 = 0x60;
    }
    else
    {
        arg1[4] = arg2[4];
        int128_t zmm0 = *arg2;
        int128_t zmm1_1 = arg2[1];
        int128_t zmm2_1 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2_1;
        arg1[1] = zmm1_1;
        *arg1 = zmm0;
    }
    
    return result;
}
