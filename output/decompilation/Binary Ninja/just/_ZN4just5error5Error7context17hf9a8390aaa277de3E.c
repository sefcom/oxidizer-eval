
  uint64_t just::error::Error::context::hf9a8390aaa277de3(int128_t* arg1, char* arg2)

{
    uint64_t rax_1 = *arg2;
    
    if (rax_1 <= 0x22)
    {
        rax_1 = jump_table_46a5c0[rax_1] + &jump_table_46a5c0;
        int64_t rax_2;
        int128_t zmm0;
        int128_t zmm1;
        int128_t zmm2;
        int128_t zmm3;
        
        switch (rax_1)
        {
            case 0x661f39:
            {
                rax_2 = *(arg2 + 0x48);
                arg1[4] = rax_2;
                zmm0 = *(arg2 + 8);
                zmm1 = *(arg2 + 0x18);
                zmm2 = *(arg2 + 0x28);
                zmm3 = *(arg2 + 0x38);
                label_661f51:
                arg1[3] = zmm3;
                arg1[2] = zmm2;
                arg1[1] = zmm1;
                *arg1 = zmm0;
                return rax_2;
                break;
            }
            case 0x661f61:
            {
                rax_2 = *(arg2 + 0x50);
                arg1[4] = rax_2;
                zmm0 = *(arg2 + 0x10);
                zmm1 = *(arg2 + 0x20);
                zmm2 = *(arg2 + 0x30);
                zmm3 = *(arg2 + 0x40);
                goto label_661f51;
            }
        }
    }
    
    arg1[4] = 0x25;
    return rax_1;
}
