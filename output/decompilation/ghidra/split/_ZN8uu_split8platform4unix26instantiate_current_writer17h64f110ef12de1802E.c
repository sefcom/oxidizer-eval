undefined8 *
_ZN8uu_split8platform4unix26instantiate_current_writer17h64f110ef12de1802E
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined local_58;
  undefined uStack_57;
  undefined uStack_56;
  undefined uStack_55;
  undefined uStack_54;
  undefined uStack_53;
  undefined2 uStack_52;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c [3];
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_40 = param_3;
  local_38 = param_4;
  if (*param_2 == -0x8000000000000000) {
    if (param_5 == '\0') {
      local_60 = 0x1b600000000;
      local_58 = 0;
      uStack_57 = 0;
      uStack_55 = 0;
      uStack_54 = 0;
      uStack_53 = 0;
      uStack_56 = 1;
      _ZN3std2fs11OpenOptions4open17h4e39116029faf268E(&local_78,&local_60,param_3,param_4);
      if (local_78 == 0) goto LAB_001d606c;
      uVar1 = _ZN8uu_split8platform4unix26instantiate_current_writer28__u7b__u7b_closure_u7d__u7d_17hab48b66e59ddb53bE
                        (&local_40,CONCAT44(uStack_6c,uStack_70));
    }
    else {
      local_60 = 0x1b600000000;
      local_58 = 0;
      uStack_56 = 0;
      uStack_53 = 0;
      uStack_57 = 1;
      uStack_54 = 1;
      uStack_55 = 1;
      _ZN3std2fs11OpenOptions4open17h4e39116029faf268E(&local_78,&local_60,param_3,param_4);
      if (local_78 == 0) {
LAB_001d606c:
        uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8fc4b41669740c9dE(uStack_74);
        ppuVar2 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hc63c21dac960bcdfE_00248d80
        ;
        goto LAB_001d607c;
      }
      uVar1 = _ZN8uu_split8platform4unix26instantiate_current_writer28__u7b__u7b_closure_u7d__u7d_17hbae22fb731dd8eddE
                        (&local_40,CONCAT44(uStack_6c,uStack_70));
    }
LAB_001d6030:
    param_1[1] = uVar1;
    *param_1 = 0x8000000000000000;
  }
  else {
    _ZN8uu_split8platform4unix12FilterWriter3new17h45813eca9ccac0a5E
              (&local_60,param_2[1],param_2[2],param_3,param_4);
    if ((int)local_60 != 0) {
      uVar1 = CONCAT26(uStack_52,
                       CONCAT15(uStack_53,
                                CONCAT14(uStack_54,
                                         CONCAT13(uStack_55,
                                                  CONCAT12(uStack_56,CONCAT11(uStack_57,local_58))))
                               ));
      goto LAB_001d6030;
    }
    local_78 = local_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
    uStack_6c = uStack_44;
    local_2c[0] = local_60._4_4_;
    local_20 = local_50;
    uStack_1c = uStack_4c;
    uStack_18 = uStack_48;
    uStack_14 = uStack_44;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf533c4985f354361E(local_2c);
    ppuVar2 = &
              PTR__ZN4core3ptr59drop_in_place_LT_uu_split__platform__unix__FilterWriter_GT_17h7a9f3cb54b117423E_00248dd0
    ;
LAB_001d607c:
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h1c3d443048ae43d7E
              (param_1,0x2000,uVar1,ppuVar2);
  }
  return param_1;
}