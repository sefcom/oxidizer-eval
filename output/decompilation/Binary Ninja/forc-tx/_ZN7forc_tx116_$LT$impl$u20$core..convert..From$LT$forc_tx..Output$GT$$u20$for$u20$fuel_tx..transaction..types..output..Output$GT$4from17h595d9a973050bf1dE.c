
  void* forc_tx::_$LT$impl$u20$core..convert..From$LT$forc_tx..Output$GT$$u20$for$u20$fuel_tx..transaction..types..output..Output$GT$::from::h595d9a973050bf1d(char* arg1, char* arg2)

{
    void* rax_1 = jump_table_4aa6f4[*arg2] + &jump_table_4aa6f4;
    int128_t zmm0;
    int128_t zmm1;
    
    switch (rax_1)
    {
        case 0x52b283:
        {
            zmm0 = *(arg2 + 8);
            *(arg1 + 0x20) = *(arg2 + 0x18);
            *(arg1 + 0x10) = zmm0;
            int64_t rax_2 = *(arg2 + 0x48);
            zmm1 = *(arg2 + 0x38);
            *(arg1 + 0x30) = *(arg2 + 0x28);
            *(arg1 + 0x40) = zmm1;
            *(arg1 + 8) = rax_2;
            *arg1 = 0;
            return rax_2;
            break;
        }
        case 0x52b2af:
        {
            zmm0 = *(arg2 + 1);
            *(arg1 + 0x11) = *(arg2 + 0x11);
            *(arg1 + 1) = zmm0;
            zmm1 = *(arg2 + 0x31);
            *(arg1 + 0x21) = *(arg2 + 0x21);
            *(arg1 + 0x31) = zmm1;
            *arg1 = 4;
            return rax_1;
            break;
        }
        case 0x52b2d3:
        {
            zmm0 = *(arg2 + 8);
            *(arg1 + 0x20) = *(arg2 + 0x18);
            *(arg1 + 0x10) = zmm0;
            int64_t rax_3 = *(arg2 + 0x48);
            zmm1 = *(arg2 + 0x38);
            *(arg1 + 0x30) = *(arg2 + 0x28);
            *(arg1 + 0x40) = zmm1;
            *(arg1 + 8) = rax_3;
            *arg1 = 2;
            return rax_3;
            break;
        }
        case 0x52b2ff:
        {
            zmm0 = *(arg2 + 8);
            *(arg1 + 0x20) = *(arg2 + 0x18);
            *(arg1 + 0x10) = zmm0;
            int64_t rax_4 = *(arg2 + 0x48);
            zmm1 = *(arg2 + 0x38);
            *(arg1 + 0x30) = *(arg2 + 0x28);
            *(arg1 + 0x40) = zmm1;
            *(arg1 + 8) = rax_4;
            *arg1 = 3;
            return rax_4;
            break;
        }
        case 0x52b32b:
        {
            int16_t rax_5 = *(arg2 + 0x42);
            zmm0 = *(arg2 + 2);
            zmm1 = *(arg2 + 0x12);
            int128_t var_38 = zmm1;
            int128_t var_48 = zmm0;
            int128_t zmm2 = *(arg2 + 0x22);
            int128_t zmm3 = *(arg2 + 0x32);
            int128_t var_28 = zmm2;
            int128_t var_18 = zmm3;
            *(arg1 + 0x32) = zmm3;
            *(arg1 + 0x22) = zmm2;
            *(arg1 + 0x12) = zmm1;
            *(arg1 + 2) = zmm0;
            *(arg1 + 0x42) = rax_5;
            *arg1 = 1;
            return rax_5;
            break;
        }
    }
}
