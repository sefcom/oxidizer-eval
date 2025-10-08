
  fn forc_tx::_$LT$impl$u20$core..convert..TryFrom$LT$forc_tx..Transaction$GT$$u20$for$u20$fuel_tx..transaction..Transaction$GT$::try_from::h92e9152201130caa(arg1: *mut i64, arg2: *mut i32) -> *mut i64

{
    let mut var_6e8_1: i128;
    let mut var_6d8_1: i128;
    let mut var_6c8_1: i64;
    let mut var_678: i64;
    let var_670: i64;
    let var_668: i128;
    let var_658: i128;
    let mut var_648: ();
    let mut var_320: ();
    let mut r12_1: i64;
    let mut r14: i64;
    
    if *arg2 != 1
    {
        let mut var_1e0: ();
        memcpy(&var_1e0, &arg2[2], 0xe0);
        forc_tx::_$LT$impl$u20$core..convert..TryFrom$LT$forc_tx..Create$GT$$u20$for$u20$fuel_tx..transaction..types..chargeable_transaction..ChargeableTransaction$LT$fuel_tx..transaction..types..create..CreateBody$C$fuel_tx..transaction..types..create..CreateMetadata$GT$$GT$::try_from::ha74a3ddd59378717(&var_678, &var_1e0);
        r12_1 = var_678;
        r14 = var_670;
        
        if r12_1 != -0x8000000000000000
        {
            let mut var_4a8: i64;
            memcpy(&var_4a8, &var_648, 0x180);
            let var_4c8_1: i128 = var_668;
            let var_4b8_1: i128 = var_658;
            var_6e8_1 = var_668;
            var_6d8_1 = var_658;
            var_6c8_1 = var_4a8;
            let mut var_4a0: ();
            memcpy(&var_320, &var_4a0, 0x140);
            let var_360: i128;
            let var_6b8: i128 = var_360;
            let var_350: i128;
            let var_6a8: i128 = var_350;
            let var_340: i128;
            let var_698: i128 = var_340;
            let var_330: i64;
            let var_688: i64 = var_330;
            'label_5297bc:
            *arg1 = r12_1;
            arg1[1] = r14;
            *arg1.byte_offset(0x10) = var_6e8_1;
            *arg1.byte_offset(0x20) = var_6d8_1;
            arg1[6] = var_6c8_1;
            memcpy(&arg1[7], &var_320, 0x140);
            *arg1.byte_offset(0x178) = var_6b8;
            *arg1.byte_offset(0x188) = var_6a8;
            *arg1.byte_offset(0x198) = var_698;
            arg1[0x35] = var_688;
        }
        else
        {
            *arg1.byte_offset(0x28) = var_658;
            *arg1.byte_offset(0x18) = var_668;
            arg1[1] = 0;
            arg1[2] = r14;
            *arg1 = -0x7ffffffffffffffa;
        }
    }
    else
    {
        let mut var_100: ();
        memcpy(&var_100, &arg2[2], 0xe0);
        forc_tx::_$LT$impl$u20$core..convert..TryFrom$LT$forc_tx..Script$GT$$u20$for$u20$fuel_tx..transaction..types..chargeable_transaction..ChargeableTransaction$LT$fuel_tx..transaction..types..script..ScriptBody$C$fuel_tx..transaction..types..script..ScriptMetadata$GT$$GT$::try_from::h1de0990abe3fd0da(&var_678, &var_100);
        r14 = var_678;
        let var_718: i128 = var_670;
        let rax_1: i64 = *var_658[8];
        
        if r14 != -0x8000000000000000
        {
            memcpy(&var_320, &var_648, 0x140);
            var_6e8_1 = var_718;
            var_6d8_1 = var_668;
            var_6c8_1 = rax_1;
            r12_1 = -0x8000000000000000;
            goto 'label_5297bc;
        }
        
        arg1[6] = rax_1;
        *arg1.byte_offset(0x20) = var_668;
        *arg1.byte_offset(0x10) = var_718;
        arg1[1] = 1;
        *arg1 = -0x7ffffffffffffffa;
    }
    arg1
}
