void _ZN3bat5style15ComponentAction16extract_from_str17h8933be029b90204cE
               (undefined *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined uVar4;
  long lVar5;
  ulong extraout_RDX;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined auVar10 [12];
  undefined4 local_2c;
  long local_28;
  long local_20;
  
  auVar9._8_8_ = param_3;
  auVar9._0_8_ = param_2;
  local_20 = param_2 + param_3;
  local_28 = param_2;
  auVar10 = _ZN4core3str11validations15next_code_point17hb422a2ff18694dd5E(&local_28);
  if ((auVar10 & (undefined  [12])0x1) != (undefined  [12])0x0) {
    if (auVar10._8_4_ == 0x2b) {
      local_2c = 0;
      auVar9 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2b,&local_2c,4);
      uVar6 = auVar9._8_8_;
      auVar9 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                         (auVar9._0_8_,uVar6,param_2,param_3);
      if (auVar9._0_8_ == 0) {
LAB_00542d33:
        ppuVar7 = &PTR_DAT_007cec90;
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_008074d0)();
        puVar3 = PTR__ZN3bat5style14StyleComponent10components17h6c8afe9a5a433675E_008075d8;
        if (ppuVar7[2] != (undefined *)0x0) {
          puVar1 = ppuVar7[1];
          lVar2 = (long)ppuVar7[2] * 2;
          lVar8 = 0;
          do {
            while( true ) {
              auVar9 = (*(code *)puVar3)(puVar1[lVar8 + 1],extraout_RDX & 0xff);
              lVar5 = auVar9._0_8_;
              if ((byte)puVar1[lVar8] < 2) break;
              _ZN9hashbrown3set24HashSet_LT_T_C_S_C_A_GT_6retain17h7bbc9710847830e6E(uVar6,lVar5);
              lVar8 = lVar8 + 2;
              if (lVar2 == lVar8) {
                return;
              }
            }
            _ZN105__LT_hashbrown__set__HashSet_LT_T_C_S_C_A_GT__u20_as_u20_core__iter__traits__collect__Extend_LT_T_GT__GT_6extend17h03e28ec7a347abedE
                      (uVar6,lVar5,lVar5 + auVar9._8_8_);
            lVar8 = lVar8 + 2;
          } while (lVar2 != lVar8);
        }
        return;
      }
      uVar4 = 1;
      goto LAB_00542cd6;
    }
    if (auVar10._8_4_ == 0x2d) {
      local_2c = 0;
      auVar9 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2d,&local_2c,4);
      uVar6 = auVar9._8_8_;
      auVar9 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                         (auVar9._0_8_,uVar6,param_2,param_3);
      if (auVar9._0_8_ == 0) {
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_008074d0)
                  (&PTR_DAT_007cec78);
        goto LAB_00542d33;
      }
      uVar4 = 2;
      goto LAB_00542cd6;
    }
  }
  uVar4 = 0;
LAB_00542cd6:
  *param_1 = uVar4;
  *(undefined (*) [16])(param_1 + 8) = auVar9;
  return;
}