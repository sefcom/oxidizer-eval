void _ZN8uu_split8platform4unix26instantiate_current_writer17hfd480ac8732375abE
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,char param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 local_88;
  undefined local_80;
  undefined uStack_7f;
  undefined uStack_7e;
  undefined uStack_7d;
  undefined uStack_7c;
  undefined uStack_7b;
  undefined2 uStack_7a;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  byte local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  byte local_48 [4];
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_34 [3];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_68 = param_4;
  local_60 = param_5;
  if (param_2 == 0) {
    if (param_6 == '\0') {
      local_88 = 0x1b600000000;
      local_80 = 0;
      uStack_7f = 0;
      uStack_7d = 0;
      uStack_7c = 0;
      uStack_7b = 0;
      uStack_7e = 1;
      _ZN3std2fs11OpenOptions4open17h877762cc5a70e8f6E(local_48,&local_88,param_4,param_5);
      if ((local_48[0] & 1) != 0) {
        uVar1 = _ZN8uu_split8platform4unix26instantiate_current_writer28__u7b__u7b_closure_u7d__u7d_17he16f9ec94d6e13bfE
                          (&local_68,local_40);
        goto LAB_0016c25b;
      }
    }
    else {
      local_88 = 0x1b600000000;
      local_80 = 0;
      uStack_7e = 0;
      uStack_7b = 0;
      uStack_7f = 1;
      uStack_7c = 1;
      uStack_7d = 1;
      _ZN3std2fs11OpenOptions4open17h877762cc5a70e8f6E(local_58,&local_88,param_4,param_5);
      local_44 = local_54;
      if ((local_58[0] & 1) != 0) {
        uVar1 = _ZN8uu_split8platform4unix26instantiate_current_writer28__u7b__u7b_closure_u7d__u7d_17hd3990820a478799bE
                          (&local_68,local_50);
LAB_0016c25b:
        param_1[1] = uVar1;
        *param_1 = 0x8000000000000000;
        return;
      }
    }
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hd30cfe1806b276bfE(local_44);
    ppuVar2 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17ha5fa7a96942ad614E_0020aca8;
  }
  else {
    _ZN8uu_split8platform4unix12FilterWriter3new17h6a73b6eeafac1893E(&local_88);
    if ((local_88 & 1) != 0) {
      uVar1 = CONCAT26(uStack_7a,
                       CONCAT15(uStack_7b,
                                CONCAT14(uStack_7c,
                                         CONCAT13(uStack_7d,
                                                  CONCAT12(uStack_7e,CONCAT11(uStack_7f,local_80))))
                               ));
      goto LAB_0016c25b;
    }
    local_18 = local_78;
    uStack_14 = uStack_74;
    uStack_10 = uStack_70;
    uStack_c = uStack_6c;
    local_34[0] = local_88._4_4_;
    local_28 = local_78;
    uStack_24 = uStack_74;
    uStack_20 = uStack_70;
    uStack_1c = uStack_6c;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h455f44b746626628E(local_34);
    ppuVar2 = &
              PTR__ZN4core3ptr59drop_in_place_LT_uu_split__platform__unix__FilterWriter_GT_17hf62af46e93f74795E_0020acf8
    ;
  }
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17ha515876637d6ec21E
            (param_1,uVar1,ppuVar2);
  return;
}