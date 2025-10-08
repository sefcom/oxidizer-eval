
  int64_t just::parser::Parser::accepted::h762a87b5f98dff30(bool* arg1, void* arg2, char arg3)

{
    int128_t var_98;
    just::parser::Parser::accept::hbdbbefbcb8377711(&var_98, arg2, arg3);
    char var_58;
    char result;
    
    if (result == 0x25)
    {
        *arg1 = var_58 != 0x25;
        arg1[0x48] = result;
        return result;
    }
    
    int128_t zmm0 = var_98;
    int32_t var_57;
    int32_t var_a0 = var_57;
    int32_t var_4c;
    *(arg1 + 0x4c) = var_4c;
    int32_t var_4f;
    *(arg1 + 0x49) = var_4f;
    int128_t var_68;
    *(arg1 + 0x30) = var_68;
    int128_t var_78;
    *(arg1 + 0x20) = var_78;
    int128_t var_88;
    *(arg1 + 0x10) = var_88;
    *arg1 = zmm0;
    *(arg1 + 0x41) = var_57;
    *(arg1 + 0x44) = var_57;
    arg1[0x40] = var_58;
    arg1[0x48] = result;
    return result;
}
