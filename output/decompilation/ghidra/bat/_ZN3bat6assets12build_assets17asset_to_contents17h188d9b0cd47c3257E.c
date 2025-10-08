void _ZN3bat6assets12build_assets17asset_to_contents17h188d9b0cd47c3257E
               (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_48 = 0;
  uStack_40 = 1;
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_4;
                    /* try { // try from 0053448c to 005344aa has its CatchHandler @ 005344ee */
  lVar1 = _ZN7bincode8internal14serialize_into17hb363b965fbda8e80E(&local_48);
  if (lVar1 != 0) {
    _ZN3bat6assets12build_assets17asset_to_contents28__u7b__u7b_closure_u7d__u7d_17h0b2a00e838b9d5b1E
              (&local_20,&local_30,lVar1);
    *(undefined4 *)(param_1 + 0x10) = local_18;
    *(undefined4 *)(param_1 + 0x14) = uStack_14;
    *(undefined4 *)(param_1 + 0x18) = uStack_10;
    *(undefined4 *)(param_1 + 0x1c) = uStack_c;
    *param_1 = 0xb;
    *(undefined8 *)(param_1 + 8) = local_20;
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1e41457799ed3462E
              (local_48,uStack_40);
    return;
  }
  *(undefined8 *)(param_1 + 0x18) = local_38;
  *(undefined8 *)(param_1 + 8) = local_48;
  *(undefined8 *)(param_1 + 0x10) = uStack_40;
  *param_1 = 0xd;
  return;
}