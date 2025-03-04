undefined8
_ZN9uu_mktemp8dry_exec17h0a7898737835babcE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
          long param_6,long param_7,long param_8)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined auVar5 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined local_48 [24];
  
  local_78 = param_2;
  local_70 = param_3;
  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17he204a1af3f1eb867E
            (&local_a0,param_6 + param_5 + param_8,0);
  if (local_a0 == 0) {
    local_b8 = local_98;
    uStack_b0 = local_90;
    local_a8 = 0;
                    /* try { // try from 001c0071 to 001c00c9 has its CatchHandler @ 001c01ce */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8d008c8d94641a94E
              (&local_b8,param_4,param_4 + param_5);
    _ZN97__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_I_GT__GT_11spec_extend17h4c607371e1e29218E
              (&local_b8,param_6,0x58);
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8d008c8d94641a94E
              (&local_b8,param_7,param_8 + param_7);
    auVar5 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17ha3c98ad8690eec67E
                       (param_5,param_6 + param_5,uStack_b0,local_a8,
                        &PTR_s_src_uu_mktemp_src_mktemp_rs_00236a88);
    lVar1 = auVar5._0_8_;
    local_a0 = _ZN4rand4rngs6thread10thread_rng17hb51ef0c041e68525E();
                    /* try { // try from 001c00cf to 001c00de has its CatchHandler @ 001c01bf */
    _ZN4rand3rng3Rng4fill17h79ce3d99f0d48795E(&local_a0,lVar1,auVar5._8_8_);
                    /* try { // try from 001c00df to 001c00e8 has its CatchHandler @ 001c01ce */
    _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17hd7d8697e44513e9bE(&local_a0);
    local_98 = lVar1 + auVar5._8_8_;
    local_a0 = lVar1;
    pbVar2 = (byte *)_ZN94__LT_core__slice__iter__IterMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7c90eff0bcfd7e5bE
                               (&local_a0);
    if (pbVar2 != (byte *)0x0) {
      do {
        bVar4 = *pbVar2 % 0x3e;
        if (bVar4 < 10) {
          bVar4 = bVar4 | 0x30;
        }
        else if (bVar4 < 0x24) {
          bVar4 = bVar4 + 0x57;
        }
        else {
          bVar4 = bVar4 + 0x1d;
        }
        *pbVar2 = bVar4;
        pbVar2 = (byte *)_ZN94__LT_core__slice__iter__IterMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7c90eff0bcfd7e5bE
                                   (&local_a0);
      } while (pbVar2 != (byte *)0x0);
    }
    local_58 = local_a8;
    local_68 = (undefined4)local_b8;
    uStack_64 = local_b8._4_4_;
    uStack_60 = (undefined4)uStack_b0;
    uStack_5c = uStack_b0._4_4_;
    _ZN5alloc6string6String9from_utf817hacb364918987915aE(&local_a0,&local_68);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h66f1ec1b8c34f280E(local_48,&local_a0);
    _ZN3std4path4Path4join17h5103fbfd94f4eefaE(param_1,local_78,local_70,local_48);
    return param_1;
  }
  uVar3 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE(local_98,local_90);
                    /* catch() { ... } // from try @ 001c00cf with catch @ 001c01bf */
                    /* try { // try from 001c01c2 to 001c01d8 has its CatchHandler @ 001c01e1 */
  _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17hd7d8697e44513e9bE(&local_a0);
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc3d3e3dce46707afE(&local_b8);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar3);
}