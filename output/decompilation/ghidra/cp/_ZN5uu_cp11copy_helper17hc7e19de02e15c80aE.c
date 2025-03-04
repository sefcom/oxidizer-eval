void _ZN5uu_cp11copy_helper17hc7e19de02e15c80aE
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
               long param_6,undefined8 param_7,undefined8 param_8,char param_9,char param_10,
               undefined8 param_11)

{
  undefined auVar1 [16];
  char cVar2;
  long lVar3;
  undefined auVar4 [16];
  int local_b8;
  undefined4 uStack_b4;
  undefined2 uStack_b0;
  undefined uStack_ae;
  undefined uStack_ad;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined3 uStack_a0;
  undefined5 uStack_9d;
  undefined3 local_98;
  undefined5 uStack_95;
  undefined3 uStack_90;
  undefined5 uStack_8d;
  undefined3 local_88;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined5 uStack_7d;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_40;
  int local_3c;
  long local_38;
  
  auVar1._8_8_ = param_5;
  auVar1._0_8_ = param_4;
  if (*(char *)(param_6 + 0x44) != '\0') {
    auVar4 = _ZN3std4path4Path6parent17h65c9a340a6266f2dE(param_4,param_5);
    if (auVar4._0_8_ == 0) {
      auVar4 = auVar1;
    }
    lVar3 = _ZN3std2fs14create_dir_all17h4110e3e76e14203bE(auVar4._0_8_,auVar4._8_8_);
    if (lVar3 != 0) {
      *param_1 = 2;
      param_1[1] = lVar3;
      return;
    }
  }
  cVar2 = _ZN6uucore8features2fs25path_ends_with_terminator17h30fe62ab1cf88eeeE(param_4,param_5);
  if ((cVar2 != '\0') &&
     (cVar2 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(param_4,param_5), cVar2 == '\0')) {
    _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E
              (param_1 + 1,param_4,param_5);
    *param_1 = 0xc;
    return;
  }
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha9fb26a3ee82846dE
                    (param_2,param_3,"/dev/null",9);
  if (cVar2 == '\0') {
    if (((param_10 == '\0') || (*(char *)(param_6 + 0x46) == '\0')) ||
       (*(char *)(param_6 + 0x3f) != '\0')) {
      if (param_9 == '\0') {
        _ZN5uu_cp8platform5linux13copy_on_write17h4f923509b4fe6a3fE
                  (&local_b8,param_2,param_3,param_4,param_5,*(undefined *)(param_6 + 0x4b),
                   *(undefined *)(param_6 + 0x4a),param_7,param_8,param_10);
        local_78._0_3_ = CONCAT12(uStack_ae,uStack_b0);
        if (CONCAT44(uStack_b4,local_b8) != 0xd) {
          param_1[7] = CONCAT53(uStack_7d,uStack_80);
          *(ulong *)((long)param_1 + 0x2b) = CONCAT35(local_88,uStack_8d);
          *(ulong *)((long)param_1 + 0x33) = CONCAT35(uStack_80,uStack_85);
          *(ulong *)((long)param_1 + 0x1b) = CONCAT35(local_98,uStack_9d);
          *(ulong *)((long)param_1 + 0x23) = CONCAT35(uStack_90,uStack_95);
          *(ulong *)((long)param_1 + 0xb) =
               CONCAT35((undefined3)uStack_a8,CONCAT41(uStack_ac,uStack_ad));
          *(ulong *)((long)param_1 + 0x13) = CONCAT35(uStack_a0,CONCAT41(uStack_a4,uStack_a8._3_1_))
          ;
          *(undefined *)((long)param_1 + 10) = uStack_ae;
          *(undefined2 *)(param_1 + 1) = uStack_b0;
          *param_1 = CONCAT44(uStack_b4,local_b8);
          return;
        }
        local_60 = CONCAT53(local_60._3_5_,(undefined3)local_78);
        if ((*(char *)(param_6 + 0x3e) == '\0') && (*(char *)(param_6 + 0x47) != '\0')) {
          _ZN5uu_cp10show_debug17hb7db704407dbf64fE(&local_60);
        }
        goto LAB_0020842c;
      }
      _ZN5uu_cp9copy_link17h3110b816ad64228eE(&local_b8,param_2,param_3,param_4,param_5,param_11);
    }
    else {
      _ZN5uu_cp9copy_fifo17h6a16af34214a700eE
                (&local_b8,param_4,param_5,*(undefined4 *)(param_6 + 0x3c),
                 *(undefined *)(param_6 + 0x47));
    }
    if (local_b8 != 0xd) {
      param_1[6] = CONCAT53(uStack_85,local_88);
      param_1[7] = CONCAT53(uStack_7d,uStack_80);
      param_1[4] = CONCAT53(uStack_95,local_98);
      param_1[5] = CONCAT53(uStack_8d,uStack_90);
      param_1[2] = CONCAT44(uStack_a4,uStack_a8);
      param_1[3] = CONCAT53(uStack_9d,uStack_a0);
      *param_1 = CONCAT44(uStack_b4,local_b8);
      param_1[1] = CONCAT44(uStack_ac,CONCAT13(uStack_ad,CONCAT12(uStack_ae,uStack_b0)));
      return;
    }
  }
  else {
    _ZN3std2fs4File6create17h63900868be62ed17E(&local_40,param_4,param_5);
                    /* try { // try from 002082ee to 002082fc has its CatchHandler @ 0020850d */
    local_60 = param_4;
    local_58 = param_5;
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h0383ffa9f5ca7973E
              (&local_78,&local_60);
    uStack_a8 = (undefined4)local_68;
    uStack_a4 = (undefined4)((ulong)local_68 >> 0x20);
    local_b8 = local_78;
    uStack_b4 = uStack_74;
    uStack_b0 = (undefined2)iStack_70;
    uStack_ae = (undefined)((uint)iStack_70 >> 0x10);
    uStack_ad = (undefined)((uint)iStack_70 >> 0x18);
    uStack_ac = uStack_6c;
    if (local_40 == 0) {
      _ZN4core3ptr240drop_in_place_LT__LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__u20_as_u20_quick_error__ResultExt_LT_std__fs__File_C_std__io__error__Error_GT__GT___context_LT_alloc__string__String_GT____u7b__u7b_closure_u7d__u7d__GT_17h31ac547e1a80ac38E
                (&local_b8);
      iStack_70 = local_3c;
    }
    else {
      local_50 = CONCAT44(uStack_a8,uStack_6c);
      local_48 = uStack_a4;
      if (CONCAT44(uStack_74,local_78) != -0x8000000000000000) {
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_a4;
        *(undefined8 *)((long)param_1 + 0x14) = local_50;
        *param_1 = 3;
        param_1[1] = CONCAT44(uStack_74,local_78);
        *(int *)(param_1 + 2) = iStack_70;
        param_1[4] = local_38;
        return;
      }
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(iStack_70);
  }
LAB_0020842c:
  *param_1 = 0xd;
  return;
}