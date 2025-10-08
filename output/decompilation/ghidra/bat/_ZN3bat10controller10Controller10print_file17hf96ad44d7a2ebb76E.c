undefined8 *
_ZN3bat10controller10Controller10print_file17hf96ad44d7a2ebb76E
          (undefined8 *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long param_6,undefined param_7)

{
  long lVar1;
  char cVar2;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  if ((*(long *)(param_6 + 0x38) != 0) ||
     (cVar2 = (*(code *)PTR__ZN3bat5style15StyleComponents6header17hf7c3a1f0ba3f090bE_00808828)
                        (*param_2 + 0xc0), cVar2 != '\0')) {
    (**(code **)(param_4 + 0x18))(&local_f0,param_3,param_5,param_6,param_7);
    if ((char)local_f0 != '\r') goto LAB_00538209;
  }
  if (*(long *)(param_6 + 0x38) != 0) {
    lVar1 = *param_2;
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hc377ab5fa0151b10E
              (&local_80,*(undefined8 *)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa0));
    local_58 = *(undefined8 *)(lVar1 + 0xb8);
    local_68 = *(undefined4 *)(lVar1 + 0xa8);
    uStack_64 = *(undefined4 *)(lVar1 + 0xac);
    uStack_60 = *(undefined4 *)(lVar1 + 0xb0);
    uStack_5c = *(undefined4 *)(lVar1 + 0xb4);
                    /* try { // try from 005381ad to 005381ce has its CatchHandler @ 0053828d */
    _ZN3bat10controller10Controller17print_file_ranges17h7b39e9e16e4bf9c7E
              (&local_f0,lVar1,param_3,*(undefined8 *)(param_4 + 0x28),
               *(undefined8 *)(param_4 + 0x30),param_5,param_6 + 0x28,&local_80);
    if ((char)local_f0 != '\r') {
      param_1[8] = local_b0;
      param_1[9] = uStack_a8;
      *(undefined4 *)(param_1 + 6) = local_c0;
      *(undefined4 *)((long)param_1 + 0x34) = uStack_bc;
      *(undefined4 *)(param_1 + 7) = uStack_b8;
      *(undefined4 *)((long)param_1 + 0x3c) = uStack_b4;
      *(undefined4 *)(param_1 + 4) = local_d0;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_cc;
      *(undefined4 *)(param_1 + 5) = uStack_c8;
      *(undefined4 *)((long)param_1 + 0x2c) = uStack_c4;
      *(undefined4 *)(param_1 + 2) = local_e0;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_dc;
      *(undefined4 *)(param_1 + 3) = uStack_d8;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_d4;
      *(undefined4 *)param_1 = local_f0;
      *(undefined4 *)((long)param_1 + 4) = uStack_ec;
      *(undefined4 *)(param_1 + 1) = uStack_e8;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_e4;
      _ZN4core3ptr48drop_in_place_LT_bat__line_range__LineRanges_GT_17h7115aa6cfb62384cE
                (local_80,local_78);
      return param_1;
    }
    _ZN4core3ptr48drop_in_place_LT_bat__line_range__LineRanges_GT_17h7115aa6cfb62384cE
              (local_80,local_78);
  }
  (**(code **)(param_4 + 0x20))(&local_f0,param_3,param_5,param_6);
  if ((char)local_f0 == '\r') {
    *(undefined *)param_1 = 0xd;
    return param_1;
  }
LAB_00538209:
  param_1[8] = local_b0;
  param_1[9] = uStack_a8;
  param_1[6] = CONCAT44(uStack_bc,local_c0);
  param_1[7] = CONCAT44(uStack_b4,uStack_b8);
  param_1[4] = CONCAT44(uStack_cc,local_d0);
  param_1[5] = CONCAT44(uStack_c4,uStack_c8);
  param_1[2] = CONCAT44(uStack_dc,local_e0);
  param_1[3] = CONCAT44(uStack_d4,uStack_d8);
  *param_1 = CONCAT44(uStack_ec,local_f0);
  param_1[1] = CONCAT44(uStack_e4,uStack_e8);
  return param_1;
}