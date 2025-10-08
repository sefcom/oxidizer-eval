
  int64_t alacritty::renderer::Renderer::draw_string::he0cf7f189aeb0195(int32_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4, int32_t arg5, int128_t* arg6, void* arg7, int64_t arg8)

{
    int64_t var_90 = arg2;
    int64_t var_88 = arg3;
    int16_t var_98 = arg4;
    uint8_t var_96 = arg4 >> 0x10;
    int16_t var_94 = arg5;
    uint8_t var_92 = arg5 >> 0x10;
    char var_99 = 0;
    void var_58;
    core::iter::traits::iterator::Iterator::enumerate::hef2cc85779210b7b(&var_58, arg6);
    char* var_80 = &var_99;
    int64_t* var_78 = &var_90;
    int64_t* var_70 = &var_88;
    int16_t* var_68 = &var_98;
    int16_t* var_60 = &var_94;
    return alacritty::renderer::Renderer::draw_cells::hf2a27e7b194b280c(arg1, arg7, arg8, &var_80);
}
