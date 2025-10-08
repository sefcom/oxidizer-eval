void _ZN9alacritty6config7imports17he228980ef6034b5fE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_a8 = param_3;
  local_a0 = param_4;
  uVar2 = _ZN4toml5value5Value3get17hdb566b349a2e1877E(param_2,&DAT_00201ee9,6);
  lVar3 = _ZN4core6option15Option_LT_T_GT_7or_else17hbd14aba21ff2822dE(uVar2,param_2);
  if (lVar3 == 0) {
    param_1[2] = 8;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*(char *)(lVar3 + 0x1a) == '\a') {
      lVar1 = *(long *)(lVar3 + 0x10);
      if (param_5 != 0 || lVar1 == 0) {
        local_c0 = 0;
        local_b8 = 8;
        local_b0 = 0;
        if (lVar1 != 0) {
          lVar3 = *(long *)(lVar3 + 8);
          lVar5 = 0;
          do {
            if (*(char *)(lVar3 + 0x1a + lVar5) == '\x02') {
                    /* try { // try from 00543edf to 00543f9d has its CatchHandler @ 00543fd7 */
              _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4cfefc754dbf8feeE
                        (&local_98,*(undefined8 *)(lVar3 + 8 + lVar5),
                         *(undefined8 *)(lVar3 + 0x10 + lVar5));
              local_68 = CONCAT44(uStack_84,local_88);
              local_78 = (undefined4)local_98;
              uStack_74 = local_98._4_4_;
              uStack_70 = uStack_90;
              uStack_6c = uStack_8c;
              _ZN9alacritty6config16normalize_import17he46573190aa32594E
                        (&local_60,local_a8,local_a0,&local_78);
              local_80 = local_50;
              uStack_90 = local_60;
              uStack_8c = uStack_5c;
              local_88 = uStack_58;
              uStack_84 = uStack_54;
              local_98 = 0;
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he6dbae5d4f9d6ea0E
                        (&local_c0,&local_98,&PTR_DAT_00981f30);
            }
            else {
              _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4cfefc754dbf8feeE
                        (&local_48,&DAT_00201eb8,0x31);
              local_80 = local_38;
              uStack_90 = local_48;
              uStack_8c = uStack_44;
              local_88 = uStack_40;
              uStack_84 = uStack_3c;
              local_98 = 1;
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he6dbae5d4f9d6ea0E
                        (&local_c0,&local_98,&PTR_DAT_00981f48);
            }
            lVar5 = lVar5 + 0x20;
          } while (lVar1 << 5 != lVar5);
        }
        param_1[3] = local_b0;
        param_1[1] = local_c0;
        param_1[2] = local_b8;
        *param_1 = 0;
        return;
      }
      puVar4 = &DAT_00201e8d;
      uVar2 = 0x2b;
    }
    else {
      puVar4 = &DAT_00201e65;
      uVar2 = 0x28;
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4cfefc754dbf8feeE
              (param_1 + 1,puVar4,uVar2);
    *param_1 = 1;
  }
  return;
}