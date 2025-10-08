
  int64_t alacritty::renderer::text::builtin_font::Canvas::flip_horizontal::ha741b65efc3a4ae8(void* arg1)

{
    int64_t result = *(arg1 + 0x20);
    int64_t result_2 = result;
    
    if (result)
    {
        result = *(arg1 + 0x18);
        int64_t result_1 = result;
        
        if (result >= 2)
        {
            void* r12_1 = *(arg1 + 8);
            int64_t rbx_1 = *(arg1 + 0x10);
            int64_t r15_1 = result_1 - 1;
            int64_t rax_1 = result_1 * 3;
            int16_t* r13_2 = r12_1 + rax_1 - 3;
            int64_t r14_1 = 0;
            result = 0;
            
            do
            {
                uint64_t i_1 = result_1 >> 1;
                void* var_38_1 = r12_1;
                int64_t var_50_1 = r14_1;
                int16_t* var_48_1 = r13_2;
                int64_t var_40_1 = r15_1;
                uint64_t i;
                
                do
                {
                    if (r14_1 >= rbx_1)
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(r14_1, rbx_1);
                        /* no return */
                    }
                    
                    if (r15_1 >= rbx_1)
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(r15_1, rbx_1);
                        /* no return */
                    }
                    
                    core::ptr::swap::he5bebdc076cfabf5(r12_1, r13_2);
                    r15_1 -= 1;
                    r13_2 -= 3;
                    r14_1 += 1;
                    r12_1 += 3;
                    i = i_1;
                    i_1 -= 1;
                } while (i != 1);
                r15_1 = var_40_1 + result_1;
                r13_2 = var_48_1 + rax_1;
                r14_1 = var_50_1 + result_1;
                r12_1 = var_38_1 + rax_1;
                result += 1;
            } while (result != result_2);
        }
    }
    
    return result;
}
