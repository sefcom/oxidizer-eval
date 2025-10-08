
  int64_t alacritty::renderer::rects::RectShaderProgram::update_uniforms::hd47b20415d4b0768(int32_t* arg1, void* arg2, void* arg3)

{
    uint32_t var_38[0x4] = *(arg3 + 0x10);
    uint128_t var_28 = *(arg3 + 0x14);
    int32_t zmm1 = *(arg2 + 0x1c);
    uint128_t zmm0;
    zmm0 = (*(arg2 + 0x14)) - *(arg2 + 0x24);
    int32_t var_3c = zmm0;
    zmm0 = zmm0 / zmm1;
    int64_t result;
    uint32_t zmm0_1[0x4];
    result = floorf(zmm0);
    uint32_t var_40 = zmm0_1[0];
    
    if (*arg1 != 1)
    {
        if (arg1[2] == 1)
            goto label_863531;
        
        goto label_8634bc;
    }
    
    result = *alacritty::gl::storage::Uniform1f::he912ff9a2d8e282f.0(arg1[1], *(arg2 + 0x18));
    
    if (arg1[2] == 1)
    {
        label_863531:
        result = *alacritty::gl::storage::Uniform1f::he912ff9a2d8e282f.0(arg1[3], zmm1);
        
        if (arg1[6] != 1)
            goto label_8634c2;
        
        goto label_863543;
    }
    
    label_8634bc:
    
    if (arg1[6] != 1)
    {
        label_8634c2:
        
        if (arg1[4] == 1)
            goto label_86356f;
        
        goto label_8634cc;
    }
    
    label_863543:
    uint128_t zmm1_1;
    zmm1_1 = zmm1 * var_40;
    zmm0_1 = var_3c;
    zmm0_1[0] = zmm0_1[0] - zmm1_1;
    result = *alacritty::gl::storage::Uniform1f::he912ff9a2d8e282f.0(arg1[7], zmm0_1);
    
    if (arg1[4] == 1)
    {
        label_86356f:
        result = *alacritty::gl::storage::Uniform1f::he912ff9a2d8e282f.0(arg1[5], *(arg2 + 0x20));
        
        if (arg1[8] != 1)
            goto label_8634d6;
        
        goto label_863584;
    }
    
    label_8634cc:
    
    if (arg1[8] != 1)
    {
        label_8634d6:
        
        if (arg1[0xa] == 1)
            goto label_8635b6;
        
        goto label_8634e0;
    }
    
    label_863584:
    uint32_t zmm2_1[0x4] = data_4e90d0;
    uint32_t temp0_2[0x4] = _mm_and_ps(var_38, zmm2_1);
    zmm1_1 = _mm_and_ps(var_28, zmm2_1);
    temp0_2[0] = temp0_2[0] - zmm1_1;
    result = *alacritty::gl::storage::Uniform1f::he912ff9a2d8e282f.0(arg1[9], temp0_2);
    
    if (arg1[0xa] != 1)
    {
        label_8634e0:
        
        if (arg1[0xc] == 1)
        {
            label_8634ef:
            var_38[0] = var_38[0] * 0.5f;
            __andps_xmmxud_memxud(var_38, data_4e90d0);
            arg1[0xd];
            /* jump -> *alacritty::gl::storage::Uniform1f::he912ff9a2d8e282f.0 */
        }
    }
    else
    {
        label_8635b6:
        result = *alacritty::gl::storage::Uniform1f::he912ff9a2d8e282f.0(arg1[0xb], *(arg3 + 0x18));
        
        if (arg1[0xc] == 1)
            goto label_8634ef;
    }
    
    return result;
}
