
  int64_t* forc_tx::_$LT$impl$u20$core..convert..TryFrom$LT$forc_tx..Transaction$GT$$u20$for$u20$fuel_tx..transaction..Transaction$GT$::try_from::h92e9152201130caa(int64_t* arg1, int32_t* arg2)

{
    int128_t var_6e8_1;
    int128_t var_6d8_1;
    int64_t var_6c8_1;
    int64_t var_678;
    int64_t var_670;
    int128_t var_668;
    int128_t var_658;
    void var_648;
    void var_320;
    int64_t r12_1;
    int64_t r14;
    
    if (*arg2 != 1)
    {
        void var_1e0;
        memcpy(&var_1e0, &arg2[2], 0xe0);
        forc_tx::_$LT$impl$u20$core..convert..TryFrom$LT$forc_tx..Create$GT$$u20$for$u20$fuel_tx..transaction..types..chargeable_transaction..ChargeableTransaction$LT$fuel_tx..transaction..types..create..CreateBody$C$fuel_tx..transaction..types..create..CreateMetadata$GT$$GT$::try_from::ha74a3ddd59378717(&var_678, &var_1e0);
        r12_1 = var_678;
        r14 = var_670;
        
        if (r12_1 != -0x8000000000000000)
        {
            int64_t var_4a8;
            memcpy(&var_4a8, &var_648, 0x180);
            int128_t var_4c8_1 = var_668;
            int128_t var_4b8_1 = var_658;
            var_6e8_1 = var_668;
            var_6d8_1 = var_658;
            var_6c8_1 = var_4a8;
            void var_4a0;
            memcpy(&var_320, &var_4a0, 0x140);
            int128_t var_360;
            int128_t var_6b8 = var_360;
            int128_t var_350;
            int128_t var_6a8 = var_350;
            int128_t var_340;
            int128_t var_698 = var_340;
            int64_t var_330;
            int64_t var_688 = var_330;
            label_5297bc:
            *arg1 = r12_1;
            arg1[1] = r14;
            *(arg1 + 0x10) = var_6e8_1;
            *(arg1 + 0x20) = var_6d8_1;
            arg1[6] = var_6c8_1;
            memcpy(&arg1[7], &var_320, 0x140);
            *(arg1 + 0x178) = var_6b8;
            *(arg1 + 0x188) = var_6a8;
            *(arg1 + 0x198) = var_698;
            arg1[0x35] = var_688;
        }
        else
        {
            *(arg1 + 0x28) = var_658;
            *(arg1 + 0x18) = var_668;
            arg1[1] = 0;
            arg1[2] = r14;
            *arg1 = -0x7ffffffffffffffa;
        }
    }
    else
    {
        void var_100;
        memcpy(&var_100, &arg2[2], 0xe0);
        forc_tx::_$LT$impl$u20$core..convert..TryFrom$LT$forc_tx..Script$GT$$u20$for$u20$fuel_tx..transaction..types..chargeable_transaction..ChargeableTransaction$LT$fuel_tx..transaction..types..script..ScriptBody$C$fuel_tx..transaction..types..script..ScriptMetadata$GT$$GT$::try_from::h1de0990abe3fd0da(&var_678, &var_100);
        r14 = var_678;
        int128_t var_718 = var_670;
        int64_t rax_1 = *var_658[8];
        
        if (r14 != -0x8000000000000000)
        {
            memcpy(&var_320, &var_648, 0x140);
            var_6e8_1 = var_718;
            var_6d8_1 = var_668;
            var_6c8_1 = rax_1;
            r12_1 = -0x8000000000000000;
            goto label_5297bc;
        }
        
        arg1[6] = rax_1;
        *(arg1 + 0x20) = var_668;
        *(arg1 + 0x10) = var_718;
        arg1[1] = 1;
        *arg1 = -0x7ffffffffffffffa;
    }
    return arg1;
}
