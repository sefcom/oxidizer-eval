
  fn forc_crypto::address::dump_address::h61c0e54a2abc32fc(arg1: *mut i8, arg2: *mut i64) -> i64

{
    arg2[2];
    let mut rax: *mut i128;
    let mut rdx: i64;
    rax = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$$u5b$u8$u5d$$GT$$GT$::as_ref::h6c2a555f71a2b08a(arg2[1]);
    let mut result: i64;
    let mut var_f0: i8;
    let result_1: i64;
    let mut var_e0: i128;
    let mut var_c8: i128;
    
    if rdx != 0x20
    {
        forc_crypto::address::handle_string_conversion::h63cc450610a58430(&var_f0, arg2);
        
        if var_f0 == 0
        {
            let var_ef: i32;
            *var_c8[3] = var_ef;
            var_c8 = var_ef;
            var_c8 = var_e0;
            let var_d0: i8;
            let mut var_b8: i128;
            *var_b8[0xf] = var_d0;
            *var_c8[7] = result_1;
            goto 'label_7c356e;
        }
        
        result = result_1;
        *arg1.byte_offset(8) = result;
        *arg1 = 6;
    }
    else
    {
        let zmm0: i128 = *rax;
        let zmm1: i128 = rax[1];
        let var_28_1: i128 = zmm1;
        let var_38_1: i128 = zmm0;
        let var_b8_1: i128 = zmm1;
        var_c8 = zmm0;
        'label_7c356e:
        let mut var_a0: i64 = 0;
        let var_90_1: i64 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6e3ee4122896b801(&var_f0, "Address/home/34r7hm4n/dev/oxidiz…", 7);
        let var_78_1: i64 = var_e0;
        let mut var_88: i128 = var_f0;
        let mut var_70: ();
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hcc18dbcfd952224a(
            &var_70, &var_c8);
        serde_json::value::to_value::hbca4fdadd9c88b9d(&var_f0, &var_70);
        let mut var_58: ();
        core::result::Result$LT$T$C$E$GT$::unwrap::h0e8745fea5c699d4(&var_58, &var_f0);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hf474682998bbc6ca(
            &var_f0, &var_a0, &var_88, &var_58);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::h9a2e9c5503f64a6b(&var_f0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(&var_70);
        let var_48_1: i64 = var_90_1;
        let var_e9_1: i128 = var_a0;
        *var_e0[7] = var_90_1;
        *arg1 = 5;
        *arg1.byte_offset(1) = var_f0;
        *arg1.byte_offset(0x10) = result_1;
        result = *var_e0[7];
        *arg1.byte_offset(0x18) = result;
        
        if rdx == 0x20
        {
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(arg2);
        }
    }
    result
}
