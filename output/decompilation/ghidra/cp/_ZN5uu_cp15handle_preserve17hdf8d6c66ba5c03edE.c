void _ZN5uu_cp15handle_preserve17hdf8d6c66ba5c03edE
               (long *param_1,char param_2,char param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_2 != '\0') {
    _ZN5uu_cp15copy_attributes28__u7b__u7b_closure_u7d__u7d_17h6173858c63ecfb53E
              (&local_98,param_4,param_5);
    lVar1 = CONCAT44(uStack_94,local_98);
    if (param_3 == '\0') {
      if (lVar1 != 0xd) {
        local_28 = uStack_68;
        uStack_24 = uStack_64;
        uStack_20 = local_60;
        uStack_1c = uStack_5c;
        local_38 = uStack_78;
        uStack_34 = uStack_74;
        uStack_30 = local_70;
        uStack_2c = uStack_6c;
        local_48 = uStack_88;
        uStack_44 = uStack_84;
        uStack_40 = uStack_80;
        uStack_3c = uStack_7c;
        local_58 = local_98;
        uStack_54 = uStack_94;
        uStack_50 = uStack_90;
        uStack_4c = uStack_8c;
                    /* try { // try from 00204f4a to 00204f53 has its CatchHandler @ 00204f6f */
        _ZN5uu_cp20show_error_if_needed17h934143ac50374c6eE(&local_58);
        _ZN4core3ptr33drop_in_place_LT_uu_cp__Error_GT_17h771e7f9a0f8a7901E(&local_58);
      }
    }
    else if (lVar1 != 0xd) {
      param_1[7] = CONCAT44(uStack_5c,local_60);
      param_1[5] = CONCAT44(uStack_6c,local_70);
      param_1[6] = CONCAT44(uStack_64,uStack_68);
      param_1[3] = CONCAT44(uStack_7c,uStack_80);
      param_1[4] = CONCAT44(uStack_74,uStack_78);
      param_1[1] = CONCAT44(uStack_8c,uStack_90);
      param_1[2] = CONCAT44(uStack_84,uStack_88);
      *param_1 = lVar1;
      return;
    }
  }
  *param_1 = 0xd;
  return;
}