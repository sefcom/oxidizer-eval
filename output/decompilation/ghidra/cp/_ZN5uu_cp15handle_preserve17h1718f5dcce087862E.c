void _ZN5uu_cp15handle_preserve17h1718f5dcce087862E
               (long *param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  long lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long local_28;
  
  if ((param_2 & 1) != 0) {
    _ZN5uu_cp15copy_attributes28__u7b__u7b_closure_u7d__u7d_17hb6503ed0832a970eE(&local_90,param_4);
    lVar1 = CONCAT44(uStack_8c,local_90);
    if ((param_3 & 1) == 0) {
      if (lVar1 != -0x7ffffffffffffff4) {
        local_28 = lStack_60;
        local_38 = uStack_70;
        uStack_34 = uStack_6c;
        uStack_30 = local_68;
        uStack_2c = uStack_64;
        local_48 = uStack_80;
        uStack_44 = uStack_7c;
        uStack_40 = uStack_78;
        uStack_3c = uStack_74;
        local_58 = local_90;
        uStack_54 = uStack_8c;
        uStack_50 = uStack_88;
        uStack_4c = uStack_84;
                    /* try { // try from 001a19be to 001a19c7 has its CatchHandler @ 001a19e1 */
        _ZN5uu_cp20show_error_if_needed17h37308d2f7c80265fE(&local_58);
        _ZN4core3ptr33drop_in_place_LT_uu_cp__Error_GT_17h9ee7df58e7d9e41eE(&local_90);
      }
    }
    else if (lVar1 != -0x7ffffffffffffff4) {
      param_1[5] = CONCAT44(uStack_64,local_68);
      param_1[6] = lStack_60;
      param_1[3] = CONCAT44(uStack_74,uStack_78);
      param_1[4] = CONCAT44(uStack_6c,uStack_70);
      param_1[1] = CONCAT44(uStack_84,uStack_88);
      param_1[2] = CONCAT44(uStack_7c,uStack_80);
      *param_1 = lVar1;
      return;
    }
  }
  *param_1 = -0x7ffffffffffffff4;
  return;
}