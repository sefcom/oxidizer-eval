
  int64_t just::evaluator::Evaluator::run_backtick::h68d1c4adb40306f8(char* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int128_t* arg5)

{
    int64_t var_80;
    just::evaluator::Evaluator::run_command::h86d0b2f36f29e5c6(&var_80, arg2, arg3, arg4, 8, 0);
    int64_t result;
    
    if (!(0 + -(var_80)))
    {
        int64_t var_70;
        *(arg1 + 0x18) = var_70;
        *(arg1 + 8) = var_80;
        result = 0x38;
    }
    else
    {
        int128_t var_78;
        *(arg1 + 0x50) = var_78;
        int64_t rax = arg5[4];
        int128_t zmm1_1 = arg5[1];
        int128_t zmm2_1 = arg5[2];
        int128_t var_60_1 = *arg5;
        *(arg1 + 0x40) = *arg5[3][8];
        *(arg1 + 0x48) = rax;
        *(arg1 + 0x31) = zmm2_1;
        *(arg1 + 0x21) = zmm1_1;
        *(arg1 + 0x11) = var_60_1;
        int128_t var_67;
        *(arg1 + 1) = var_67;
        result = 3;
    }
    
    *arg1 = result;
    return result;
}
