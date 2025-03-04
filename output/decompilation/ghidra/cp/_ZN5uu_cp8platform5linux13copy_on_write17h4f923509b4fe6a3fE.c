undefined8 *
_ZN5uu_cp8platform5linux13copy_on_write17h4f923509b4fe6a3fE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
          undefined8 param_5,char param_6,char param_7,undefined8 param_8,undefined8 param_9,
          char param_10)

{
  long lVar1;
  undefined uVar2;
  ulong uVar3;
  undefined uVar4;
  undefined uVar5;
  bool bVar6;
  undefined auVar7 [16];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  ulong local_38;
  
  if (param_6 == '\0') {
    if (param_7 != '\x01') {
      _ZN67__LT_uu_cp__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h3a818a2f4f98d944E
                (param_1,"`--reflink=always` can be used only with --sparse=auto",0x36);
      return param_1;
    }
    uVar2 = 0;
    lVar1 = _ZN5uu_cp8platform5linux5clone17hdce2a0051aad38c1E(param_2,param_3,param_4,param_5,0);
    uVar4 = 2;
    uVar5 = 1;
  }
  else {
    if (param_6 == '\x01') {
      if (param_7 == '\0') {
        if (param_10 != '\0') {
          auVar7 = _ZN5uu_cp8platform5linux18copy_fifo_contents17he2d8ed4668670194E
                             (param_2,param_3,param_4,param_5);
          lVar1 = auVar7._8_8_;
          if (auVar7._0_8_ != 0) goto LAB_00213b41;
          uVar2 = 3;
          uVar4 = 4;
          uVar5 = 2;
          goto LAB_00213b8d;
        }
        _ZN5uu_cp8platform5linux33handle_reflink_auto_sparse_always17h5f3f09720d2fa6c3E(&local_50);
        local_38 = CONCAT71(local_38._1_7_,(char)local_50);
        if ((char)local_50 == '\0') {
          uVar5 = local_50._3_1_;
          uVar4 = local_50._2_1_;
          uVar2 = local_50._1_1_;
          if (local_50._4_1_ == '\x01') {
                    /* try { // try from 00213a25 to 00213a5f has its CatchHandler @ 00213c0b */
            lVar1 = _ZN5uu_cp8platform5linux5clone17hdce2a0051aad38c1E
                              (param_2,param_3,param_4,param_5,1);
            goto LAB_00213b2a;
          }
        }
        else {
          uVar5 = 2;
          uVar4 = 4;
          uVar2 = 0;
        }
        lVar1 = _ZN5uu_cp8platform5linux5clone17hdce2a0051aad38c1E
                          (param_2,param_3,param_4,param_5,2);
      }
      else {
        if (param_7 != '\x01') {
          if (param_10 != '\0') goto LAB_00213864;
          _ZN5uu_cp8platform5linux32handle_reflink_auto_sparse_never17hbf2c8fb4c904c675E(&local_50);
          local_38 = CONCAT71(local_38._1_7_,local_50._2_1_);
                    /* try { // try from 002137db to 002137f1 has its CatchHandler @ 00213bf7 */
          lVar1 = _ZN5uu_cp8platform5linux5clone17hdce2a0051aad38c1E
                            (param_2,param_3,param_4,param_5,1);
          uVar2 = local_50._1_1_;
          if ((char)local_50 != '\0') {
            uVar2 = 0;
          }
          uVar5 = local_50._3_1_;
          uVar4 = (undefined)local_38;
          if ((char)local_50 != '\0') {
            uVar4 = 1;
            uVar5 = 1;
          }
          _ZN4core3ptr89drop_in_place_LT_core__result__Result_LT_uu_cp__CopyDebug_C_std__io__error__Error_GT__GT_17h667acd789a27d2afE
                    ((char)local_50,local_48);
          goto LAB_00213b3c;
        }
        if (param_10 != '\0') {
          auVar7 = _ZN5uu_cp8platform5linux18copy_fifo_contents17he2d8ed4668670194E
                             (param_2,param_3,param_4,param_5);
          lVar1 = auVar7._8_8_;
          if (auVar7._0_8_ != 0) goto LAB_00213b41;
          uVar4 = 4;
          uVar5 = 1;
          uVar2 = 4;
          goto LAB_00213b8d;
        }
        _ZN5uu_cp8platform5linux31handle_reflink_auto_sparse_auto17h1e687e1533235ec7E(&local_50);
        local_38 = CONCAT71(local_38._1_7_,(char)local_50);
        if ((char)local_50 == '\0') {
          uVar5 = local_50._3_1_;
          uVar4 = local_50._2_1_;
          uVar2 = local_50._1_1_;
          if (local_50._4_1_ == '\x03') {
                    /* try { // try from 002139cd to 00213a07 has its CatchHandler @ 00213c1f */
            lVar1 = _ZN5uu_cp8platform5linux5clone17hdce2a0051aad38c1E
                              (param_2,param_3,param_4,param_5,3);
            goto LAB_00213b2a;
          }
        }
        else {
          uVar5 = 1;
          uVar4 = 4;
          uVar2 = 0;
        }
        lVar1 = _ZN5uu_cp8platform5linux5clone17hdce2a0051aad38c1E
                          (param_2,param_3,param_4,param_5,1);
      }
LAB_00213b2a:
      uVar3 = local_38 & 0xff;
    }
    else {
      if (param_7 == '\0') {
        if (param_10 != '\0') {
          auVar7 = _ZN5uu_cp8platform5linux18copy_fifo_contents17he2d8ed4668670194E
                             (param_2,param_3,param_4,param_5);
          lVar1 = auVar7._8_8_;
          if (auVar7._0_8_ == 0) {
            uVar2 = 3;
            uVar4 = 1;
            uVar5 = 2;
            goto LAB_00213b8d;
          }
          goto LAB_00213b41;
        }
        _ZN5uu_cp8platform5linux34handle_reflink_never_sparse_always17hfd312c6ed6d0a8eaE(&local_50);
        local_38 = CONCAT71(local_38._1_7_,(char)local_50);
        if ((char)local_50 == '\0') {
          uVar5 = local_50._3_1_;
          uVar4 = local_50._2_1_;
          uVar2 = local_50._1_1_;
          if (local_50._4_1_ == '\x01') {
                    /* try { // try from 00213aeb to 00213b29 has its CatchHandler @ 00213bcf */
            auVar7 = _ZN3std2fs4copy17h82e95226cca79e6aE(param_2,param_3,param_4,param_5);
            lVar1 = auVar7._8_8_;
            if (auVar7._0_8_ != 0) {
              uVar3 = 0;
              goto LAB_00213acc;
            }
            uVar3 = 0;
            goto LAB_00213b88;
          }
        }
        else {
          uVar5 = 2;
          uVar4 = 1;
          uVar2 = 0;
        }
        lVar1 = _ZN5uu_cp8platform5linux11sparse_copy17ha5f85eebd4c718f5E
                          (param_2,param_3,param_4,param_5);
        goto LAB_00213b2a;
      }
      if (param_7 != '\x01') {
        if (param_10 == '\0') {
          local_38 = param_4;
          _ZN5uu_cp8platform5linux33handle_reflink_never_sparse_never17h95a3d86a0846d4cdE(&local_50)
          ;
          bVar6 = (char)local_50 != '\0';
          uVar5 = local_50._3_1_;
          if (bVar6) {
            uVar5 = 1;
          }
          uVar4 = local_50._2_1_;
          if (bVar6) {
            uVar4 = 1;
          }
          uVar2 = local_50._1_1_;
          if (bVar6) {
            uVar2 = 0;
          }
                    /* try { // try from 00213980 to 00213994 has its CatchHandler @ 00213bbb */
          auVar7 = _ZN3std2fs4copy17h82e95226cca79e6aE(param_2,param_3,local_38,param_5);
          lVar1 = auVar7._8_8_;
          if (auVar7._0_8_ != 0) {
            _ZN4core3ptr89drop_in_place_LT_core__result__Result_LT_uu_cp__CopyDebug_C_std__io__error__Error_GT__GT_17h667acd789a27d2afE
                      (local_50 & 0xff,local_48);
            goto LAB_00213b41;
          }
          _ZN4core3ptr89drop_in_place_LT_core__result__Result_LT_uu_cp__CopyDebug_C_std__io__error__Error_GT__GT_17h667acd789a27d2afE
                    (local_50 & 0xff,local_48);
          goto LAB_00213b8d;
        }
LAB_00213864:
        auVar7 = _ZN5uu_cp8platform5linux18copy_fifo_contents17he2d8ed4668670194E
                           (param_2,param_3,param_4,param_5);
        lVar1 = auVar7._8_8_;
        if (auVar7._0_8_ != 0) goto LAB_00213b41;
        uVar2 = 3;
        uVar5 = 1;
        uVar4 = 1;
        goto LAB_00213b8d;
      }
      if (param_10 != '\0') goto LAB_00213864;
      _ZN5uu_cp8platform5linux32handle_reflink_never_sparse_auto17h6d31da0e17b67b00E(&local_50);
      local_38 = CONCAT71(local_38._1_7_,(char)local_50);
      if ((char)local_50 != '\0') {
        uVar5 = 1;
        uVar4 = 1;
        uVar2 = 0;
LAB_00213aa1:
        auVar7 = _ZN3std2fs4copy17h82e95226cca79e6aE(param_2,param_3,param_4,param_5);
        lVar1 = auVar7._8_8_;
        if (auVar7._0_8_ != 0) {
          uVar3 = local_38 & 0xff;
LAB_00213acc:
          _ZN4core3ptr134drop_in_place_LT_core__result__Result_LT__LP_uu_cp__CopyDebug_C_uu_cp__platform__linux__CopyMethod_RP__C_std__io__error__Error_GT__GT_17ha7a49f29e481f844E
                    (uVar3,local_48);
          goto LAB_00213b41;
        }
        uVar3 = local_38 & 0xff;
LAB_00213b88:
        _ZN4core3ptr134drop_in_place_LT_core__result__Result_LT__LP_uu_cp__CopyDebug_C_uu_cp__platform__linux__CopyMethod_RP__C_std__io__error__Error_GT__GT_17ha7a49f29e481f844E
                  (uVar3,local_48);
        goto LAB_00213b8d;
      }
      uVar5 = local_50._3_1_;
      uVar4 = local_50._2_1_;
      uVar2 = local_50._1_1_;
      if (local_50._4_1_ != '\x03') goto LAB_00213aa1;
                    /* try { // try from 00213a7d to 00213ab5 has its CatchHandler @ 00213be3 */
      lVar1 = _ZN5uu_cp8platform5linux24sparse_copy_without_hole17h5128473705372174E
                        (param_2,param_3,param_4,param_5);
      uVar3 = 0;
    }
    _ZN4core3ptr134drop_in_place_LT_core__result__Result_LT__LP_uu_cp__CopyDebug_C_uu_cp__platform__linux__CopyMethod_RP__C_std__io__error__Error_GT__GT_17ha7a49f29e481f844E
              (uVar3,local_48);
  }
LAB_00213b3c:
  if (lVar1 != 0) {
LAB_00213b41:
    local_50 = param_8;
    local_48 = param_9;
    local_40 = lVar1;
    _ZN119__LT_uu_cp__Error_u20_as_u20_core__convert__From_LT_quick_error__Context_LT__RF_str_C_std__io__error__Error_GT__GT__GT_4from17h54c083f413b93682E
              (param_1,&local_50);
    return param_1;
  }
LAB_00213b8d:
  *(undefined *)(param_1 + 1) = uVar2;
  *(undefined *)((long)param_1 + 9) = uVar4;
  *(undefined *)((long)param_1 + 10) = uVar5;
  *param_1 = 0xd;
  return param_1;
}