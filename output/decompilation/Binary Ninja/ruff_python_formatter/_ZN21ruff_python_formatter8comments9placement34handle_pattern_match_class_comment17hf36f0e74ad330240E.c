
  int64_t ruff_python_formatter::comments::placement::handle_pattern_match_class_comment::hf36f0e74ad330240(int64_t* arg1, int128_t* arg2, void* arg3)

{
    int32_t rdx = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*(arg3 + 0x40));
    int32_t result = arg2[4];
    
    if (rdx < result)
    {
        int32_t rcx_1 = *(arg2 + 0x44);
        
        if (rcx_1 < *(arg3 + 0x30))
        {
            char rdx_1 = *(arg2 + 0x48);
            *(arg1 + 8) = *arg2;
            arg1[3] = result;
            *(arg1 + 0x1c) = rcx_1;
            arg1[4] = 0;
            *(arg1 + 0x21) = rdx_1;
            *arg1 = 0x60;
            return result;
        }
    }
    
    *(arg1 + 0x40) = arg2[4];
    int128_t zmm0 = *arg2;
    int128_t zmm1 = arg2[1];
    int128_t zmm2 = arg2[2];
    *(arg1 + 0x30) = arg2[3];
    *(arg1 + 0x20) = zmm2;
    *(arg1 + 0x10) = zmm1;
    *arg1 = zmm0;
    return result;
}
