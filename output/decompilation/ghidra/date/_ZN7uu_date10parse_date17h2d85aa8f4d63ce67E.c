void _ZN7uu_date10parse_date17h2d85aa8f4d63ce67E(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = _ZN73__LT_alloc__string__String_u20_as_u20_core__convert__AsRef_LT_str_GT__GT_6as_ref17h0a9eb36fc0b98c5fE
                    (uVar1,uVar2);
                    /* try { // try from 00301ae4 to 00301b24 has its CatchHandler @ 00301b55 */
  _ZN14parse_datetime14parse_datetime17hb5f5dc534e334c2fE(&local_68,uVar3);
  if (local_68 == -0x7ffffffffffffffe) {
    *(undefined4 *)(param_1 + 1) = local_60;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_5c;
    *(undefined4 *)(param_1 + 2) = uStack_58;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_54;
    *param_1 = 0x8000000000000000;
  }
  else {
    _ZN7uu_date10parse_date28__u7b__u7b_closure_u7d__u7d_17h9ac90a1b49ad5773E
              (&local_50,uVar1,uVar2,&local_68);
    param_1[4] = local_30;
    param_1[5] = uStack_28;
    param_1[2] = local_40;
    param_1[3] = uStack_38;
    *(undefined4 *)param_1 = local_50;
    *(undefined4 *)((long)param_1 + 4) = uStack_4c;
    *(undefined4 *)(param_1 + 1) = uStack_48;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hca9b678a5ae7a7e7E(param_2);
  return;
}