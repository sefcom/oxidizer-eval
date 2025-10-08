
  uint32_t alacritty::display::content::RenderableCell::is_empty::h61aad462a89bdf85(void* arg1)

{
    float zmm0 = *(arg1 + 0x18);
    uint32_t result = 0;
    zmm0 - 0f;
    
    if (!(zmm0 != 0f) && !FCMP_UO(zmm0, 0f) && *(arg1 + 0x1c) == 0x20 && !*(arg1 + 0x10))
        result = !(*(arg1 + 0x20) & 0x7a08);
    
    return result;
}
