
  uint128_t* ruff_python_formatter::string::normalize::QuoteMetadata::merge_interpolated_string_elements::h354cb7889e5fa776(uint128_t* arg1, int128_t* arg2, void* arg3, bool arg4, int64_t* arg5, char arg6)

{
    uint128_t zmm0 = *arg2;
    uint128_t var_88 = zmm0;
    int64_t rax = *(arg3 + 0x10);
    
    if (rax)
    {
        int64_t* rbx_1 = *(arg3 + 8);
        char* rdi = *arg5;
        int64_t rdx_1 = arg5[1];
        int64_t i = 0;
        
        do
        {
            int64_t rax_5 = *(rbx_1 + i);
            uint128_t var_40;
            
            if (rax_5 != -0x7fffffffffffffff)
            {
                rax_5 = rax_5 != -0x8000000000000000;
                rax_5 |= !*(rbx_1 + i + 0x40);
                
                if (!rax_5)
                {
                    ruff_python_formatter::string::normalize::QuoteMetadata::merge_interpolated_string_elements::h354cb7889e5fa776(&var_40, &var_88);
                    zmm0 = var_40;
                    var_88 = zmm0;
                }
            }
            else
            {
                void* rax_4;
                int64_t rdx_4;
                rax_4 = _$LT$str$u20$as$u20$ruff_text_size..traits..TextSlice$GT$::slice::h2d697908481a106a(rdi, rdx_1, &rbx_1[1] + i);
                ruff_python_formatter::string::normalize::QuoteMetadata::from_str::h18c8ad1316633cd8(&var_40, rax_4, rdx_4, arg4, arg6);
                uint128_t var_50;
                ruff_python_formatter::string::normalize::QuoteMetadata::merge::h66c204295fe4e704(
                    &var_50, &var_88, &var_40, zmm0);
                char var_44;
                
                if (var_44 == 2)
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "Merge to succeed because all par…");
                    /* no return */
                }
                
                zmm0 = var_50;
                var_88 = zmm0;
            }
            i += 0x50;
        } while (rax * 0x50 != i);
    }
    
    *arg1 = var_88;
    return arg1;
}
