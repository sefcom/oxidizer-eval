void _ZN3bat6assets18HighlightingAssets10get_syntax17hae1062e96f01c264E
               (char *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
               undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_e8;
  undefined uStack_e4;
  undefined2 uStack_e3;
  undefined uStack_e1;
  undefined4 uStack_e0;
  undefined uStack_dc;
  undefined2 uStack_db;
  char cStack_d9;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined7 uStack_d0;
  undefined uStack_c9;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  char local_98;
  undefined7 uStack_97;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined local_48 [24];
  
  if (param_3 == 0) {
    _ZN8path_abs3abs7PathAbs3new17hf633db794d4335f6E(&local_e8,param_5 + 0x10);
    _ZN4core6result19Result_LT_T_C_E_GT_11map_or_else17h4d7d3b5126eadf34E
              (local_48,&local_e8,*(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_5 + 0x20));
    _ZN3bat6assets18HighlightingAssets19get_syntax_for_path17h81a93406f6b01928E
              (&local_98,param_2,local_48,param_6);
    if (local_98 == '\a') {
                    /* try { // try from 00536059 to 00536063 has its CatchHandler @ 00536158 */
      _ZN3bat6assets18HighlightingAssets21get_first_line_syntax17h6c56271b9f5531afE
                (&local_e8,param_2,*(undefined8 *)(param_5 + 0x30),*(undefined8 *)(param_5 + 0x38));
      if ((char)local_e8 == '\r') {
        lVar2 = CONCAT17(cStack_d9,CONCAT25(uStack_db,CONCAT14(uStack_dc,uStack_e0)));
        uVar1 = CONCAT44(uStack_d4,uStack_d8);
        uStack_d0 = (undefined7)uStack_80;
        uStack_c9 = (undefined)((ulong)uStack_80 >> 0x38);
        uStack_e0 = uStack_90;
        uStack_dc = (undefined)uStack_8c;
        uStack_db = (undefined2)((uint)uStack_8c >> 8);
        cStack_d9 = (char)((uint)uStack_8c >> 0x18);
        uStack_d8 = local_88;
        uStack_d4 = uStack_84;
        local_e8 = CONCAT31(local_e8._1_3_,7);
        if (lVar2 == 0) {
          *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_a4,local_a8);
          *(undefined8 *)(param_1 + 0x48) = uStack_a0;
          uStack_e0._0_1_ = (undefined)uStack_90;
          uStack_e0._1_3_ = (undefined3)((uint)uStack_90 >> 8);
          *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_b4,local_b8);
          *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_ac,uStack_b0);
          *(undefined8 *)(param_1 + 0x20) = uStack_c8;
          *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_bc,uStack_c0);
          *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_84,local_88);
          *(undefined8 *)(param_1 + 0x18) = uStack_80;
          *param_1 = '\a';
          *(ulong *)(param_1 + 1) =
               CONCAT17((undefined)uStack_e0,
                        CONCAT16(uStack_e1,CONCAT24(uStack_e3,CONCAT13(uStack_e4,local_e8._1_3_))));
          *(uint *)(param_1 + 9) = CONCAT13(uStack_dc,uStack_e0._1_3_);
          *(undefined2 *)(param_1 + 0xd) = uStack_db;
          param_1[0xf] = cStack_d9;
        }
        else {
          *(long *)(param_1 + 8) = lVar2;
          *(undefined8 *)(param_1 + 0x10) = uVar1;
          *param_1 = '\r';
          _ZN4core3ptr38drop_in_place_LT_bat__error__Error_GT_17head773e43869367fE(&local_e8);
        }
      }
      else {
        *(uint *)(param_1 + 4) = CONCAT13(uStack_e1,CONCAT21(uStack_e3,uStack_e4));
        *(uint *)(param_1 + 1) = CONCAT13(uStack_e4,local_e8._1_3_);
        *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_c9,uStack_d0);
        *(undefined8 *)(param_1 + 0x20) = uStack_c8;
        *(undefined4 *)(param_1 + 0x28) = uStack_c0;
        *(undefined4 *)(param_1 + 0x2c) = uStack_bc;
        *(undefined4 *)(param_1 + 0x30) = local_b8;
        *(undefined4 *)(param_1 + 0x34) = uStack_b4;
        *(undefined4 *)(param_1 + 0x38) = uStack_b0;
        *(undefined4 *)(param_1 + 0x3c) = uStack_ac;
        *(undefined4 *)(param_1 + 0x40) = local_a8;
        *(undefined4 *)(param_1 + 0x44) = uStack_a4;
        *(undefined8 *)(param_1 + 0x48) = uStack_a0;
        *param_1 = (char)local_e8;
        *(undefined4 *)(param_1 + 8) = uStack_e0;
        *(uint *)(param_1 + 0xc) = CONCAT13(cStack_d9,CONCAT21(uStack_db,uStack_dc));
        *(undefined4 *)(param_1 + 0x10) = uStack_d8;
        *(undefined4 *)(param_1 + 0x14) = uStack_d4;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E();
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = local_58;
      *(undefined8 *)(param_1 + 0x48) = uStack_50;
      *(undefined8 *)(param_1 + 0x30) = local_68;
      *(undefined8 *)(param_1 + 0x38) = uStack_60;
      *(undefined8 *)(param_1 + 0x20) = local_78;
      *(undefined8 *)(param_1 + 0x28) = uStack_70;
      *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_84,local_88);
      *(undefined8 *)(param_1 + 0x18) = uStack_80;
      *(ulong *)param_1 = CONCAT71(uStack_97,local_98);
      *(ulong *)(param_1 + 8) = CONCAT44(uStack_8c,uStack_90);
    }
  }
  else {
    (*(code *)PTR__ZN3bat6assets18HighlightingAssets14get_syntax_set17h9a5acb7c2790c837E_008087d0)
              (&local_e8);
    if ((char)local_e8 == '\r') {
      uVar1 = CONCAT17(cStack_d9,CONCAT25(uStack_db,CONCAT14(uStack_dc,uStack_e0)));
      lVar2 = (*(code *)
                PTR__ZN7syntect7parsing10syntax_set9SyntaxSet20find_syntax_by_token17hd2ebbb585b2e3395E_008087e0
              )(uVar1,param_3,param_4);
      if (lVar2 == 0) {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6553538e39c64234E
                  (&local_98,param_3,param_4);
        uStack_d0 = (undefined7)(CONCAT44(uStack_84,local_88) >> 8);
        cStack_d9 = (char)uStack_90;
        uStack_d8 = (undefined4)(CONCAT44(uStack_8c,uStack_90) >> 8);
        uStack_d4._0_3_ = (undefined3)((uint)uStack_8c >> 8);
        *param_1 = '\b';
        *(ulong *)(param_1 + 1) =
             CONCAT17(local_98,CONCAT25(uStack_e3,CONCAT14(uStack_e4,local_e8)));
        *(ulong *)(param_1 + 9) = CONCAT17(cStack_d9,uStack_97);
        *(ulong *)(param_1 + 0x10) = CONCAT35((undefined3)uStack_d4,CONCAT41(uStack_d8,cStack_d9));
        *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_d0,(char)local_88);
      }
      else {
        *(long *)(param_1 + 8) = lVar2;
        *(undefined8 *)(param_1 + 0x10) = uVar1;
        *param_1 = '\r';
      }
    }
    else {
      *(uint *)(param_1 + 4) = CONCAT13(uStack_e1,CONCAT21(uStack_e3,uStack_e4));
      *(uint *)(param_1 + 1) = CONCAT13(uStack_e4,local_e8._1_3_);
      *(undefined8 *)(param_1 + 0x20) = uStack_c8;
      *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_bc,uStack_c0);
      *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_b4,local_b8);
      *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_ac,uStack_b0);
      *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_a4,local_a8);
      *(undefined8 *)(param_1 + 0x48) = uStack_a0;
      *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_d4,uStack_d8);
      *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_c9,uStack_d0);
      *param_1 = (char)local_e8;
      *(ulong *)(param_1 + 8) =
           CONCAT17(cStack_d9,CONCAT25(uStack_db,CONCAT14(uStack_dc,uStack_e0)));
    }
  }
  return;
}