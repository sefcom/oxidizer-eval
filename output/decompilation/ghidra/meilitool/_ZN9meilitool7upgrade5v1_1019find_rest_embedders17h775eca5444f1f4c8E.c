void _ZN9meilitool7upgrade5v1_1019find_rest_embedders17h775eca5444f1f4c8E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined local_190 [32];
  ulong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined local_e8 [24];
  uint local_d0 [2];
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined local_48 [24];
  
  local_1a0 = param_2;
  local_198 = param_3;
  _ZN9meilitool25try_opening_poly_database17h4a7551578c1a0ea7E(local_d0,param_4,param_5,"main",4);
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h912099a6e9bde62bE
            (&local_170,local_d0,&local_1a0);
  if ((int)local_170 == 1) {
    param_1[1] = CONCAT44(uStack_164,local_168);
    *param_1 = 0x8000000000000000;
  }
  else {
    local_1d8 = 0;
    uStack_1d0 = 8;
    local_1c8 = 0;
                    /* try { // try from 00455f5e to 00456030 has its CatchHandler @ 004560d7 */
    _ZN4heed9databases8database34Database_LT_KC_C_DC_C_C_C_CDUP_GT_3get17h8e07c5765d6e7078E
              (local_d0,CONCAT44(uStack_164,local_168),uStack_160,param_5);
    local_170 = (ulong)local_c8;
    local_1b8 = uStack_c0;
    uStack_1b4 = uStack_bc;
    uStack_1b0 = uStack_b8;
    uStack_1ac = uStack_b4;
    if (local_d0[0] == 1) {
      local_c8 = uStack_c0;
      uStack_c4 = uStack_bc;
      uStack_c0 = uStack_b8;
      uStack_bc = uStack_b4;
      uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                        (local_d0);
      param_1[1] = uVar2;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hdbd05ce596ece69bE
                (&local_1d8);
    }
    else {
      local_168 = uStack_c0;
      uStack_164 = uStack_bc;
      uStack_160 = uStack_b8;
      uStack_15c = uStack_b4;
      local_1c0 = param_1;
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h38f0b3fed7e8b6a3E
                (local_190,&local_170,extraout_RDX,&local_168);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hec3273f41359d26cE
                (&local_170,local_190);
      puVar1 = PTR_memcpy_0063bdc0;
      if ((int)local_170 != 6) {
        do {
          (*(code *)puVar1)(local_d0,&local_170,0xa0);
          if (local_d0[0] < 2) {
                    /* try { // try from 004560c2 to 004560d4 has its CatchHandler @ 004560ea */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h83f519c870057bf4E
                      (&local_1d8,local_e8,&PTR_s_crates_meilitool_src_upgrade_v1__00625fc0);
          }
          else {
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h564483ca8896ba07E(local_48);
          }
          _ZN4core3ptr62drop_in_place_LT_meilitool__upgrade__v1_9__EmbeddingConfig_GT_17h229e820aec78f1ebE
                    (&local_170);
          _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hec3273f41359d26cE
                    (&local_170,local_190);
        } while ((int)local_170 != 6);
      }
      _ZN4core3ptr106drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_meilitool__upgrade__v1_9__IndexEmbeddingConfig_GT__GT_17hcb98c8f6fa9152c4E
                (local_190);
      local_1c0[2] = local_1c8;
      *local_1c0 = local_1d8;
      local_1c0[1] = uStack_1d0;
    }
  }
  return;
}