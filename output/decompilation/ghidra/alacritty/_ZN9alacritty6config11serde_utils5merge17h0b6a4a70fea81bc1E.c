void _ZN9alacritty6config11serde_utils5merge17h0b6a4a70fea81bc1E
               (undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
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
  
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  local_b8 = param_2[2];
  uVar8 = param_2[3];
  puVar10 = &local_a8;
  local_a8 = *param_3;
  uStack_a0 = param_3[1];
  local_98 = *(undefined4 *)(param_3 + 2);
  uStack_94 = *(undefined4 *)((long)param_3 + 0x14);
  uVar1 = *(undefined4 *)(param_3 + 3);
  uStack_8c = *(undefined4 *)((long)param_3 + 0x1c);
  uStack_b0._2_1_ = (char)((ulong)uVar8 >> 0x10);
  bVar9 = 6;
  if ((byte)(uStack_b0._2_1_ - 2U) < 6) {
    bVar9 = uStack_b0._2_1_ - 2U;
  }
  uStack_90._2_1_ = (byte)((uint)uVar1 >> 0x10);
  uStack_b0 = uVar8;
  uStack_90 = uVar1;
  if (bVar9 == 5) {
    if (uStack_90._2_1_ != 7) {
      uVar1 = *(undefined4 *)param_3;
      uVar2 = *(undefined4 *)((long)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((long)param_3 + 0xc);
      uVar5 = *(undefined4 *)((long)param_3 + 0x14);
      uVar6 = *(undefined4 *)(param_3 + 3);
      uVar7 = *(undefined4 *)((long)param_3 + 0x1c);
      param_1[4] = *(undefined4 *)(param_3 + 2);
      param_1[5] = uVar5;
      param_1[6] = uVar6;
      param_1[7] = uVar7;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_toml__value__Value_GT__GT_17h03c7773122835213E
                (&local_c8);
      return;
    }
    local_78 = param_2[2];
    local_88 = *param_2;
    uStack_80 = param_2[1];
    local_68 = *(undefined4 *)param_3;
    uStack_64 = *(undefined4 *)((long)param_3 + 4);
    uStack_60 = *(undefined4 *)(param_3 + 1);
    uStack_5c = *(undefined4 *)((long)param_3 + 0xc);
    local_58 = param_3[2];
                    /* try { // try from 005363a8 to 005363b1 has its CatchHandler @ 00536486 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h6bb287e271a114cdE(&local_88,param_3[1]);
    local_58 = 0;
    *(undefined8 *)(param_1 + 4) = local_78;
    *param_1 = (undefined4)local_88;
    param_1[1] = local_88._4_4_;
    param_1[2] = (undefined4)uStack_80;
    param_1[3] = uStack_80._4_4_;
    *(undefined *)((long)param_1 + 0x1a) = 7;
                    /* try { // try from 005363d2 to 005363db has its CatchHandler @ 00536484 */
    _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_toml__value__Value_GT__GT_17h03c7773122835213E
              (&local_68);
    bVar9 = 6;
    if ((byte)(uStack_b0._2_1_ - 2U) < 6) {
      bVar9 = uStack_b0._2_1_ - 2U;
    }
    if (bVar9 != 5) {
      if (bVar9 == 6) {
                    /* try { // try from 005363fd to 00536404 has its CatchHandler @ 005364e5 */
        _ZN4core3ptr85drop_in_place_LT_toml__map__Map_LT_alloc__string__String_C_toml__value__Value_GT__GT_17h77749c849d56b1e5E
                  (&local_c8);
      }
      else {
LAB_0053644a:
                    /* try { // try from 0053644a to 00536451 has its CatchHandler @ 005364e5 */
        _ZN4core3ptr39drop_in_place_LT_toml__value__Value_GT_17h7761fefc14a7cec1E(&local_c8);
      }
    }
  }
  else {
    if (bVar9 != 6) {
      uVar1 = *(undefined4 *)param_3;
      uVar2 = *(undefined4 *)((long)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((long)param_3 + 0xc);
      uVar8 = param_3[3];
      *(undefined8 *)(param_1 + 4) = param_3[2];
      *(undefined8 *)(param_1 + 6) = uVar8;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      puVar10 = &local_c8;
      goto LAB_00536471;
    }
    if (0xf9 < (uStack_90._2_1_ | 0xf8)) {
      uVar1 = *(undefined4 *)param_3;
      uVar2 = *(undefined4 *)((long)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((long)param_3 + 0xc);
      uVar5 = *(undefined4 *)((long)param_3 + 0x14);
      uVar6 = *(undefined4 *)(param_3 + 3);
      uVar7 = *(undefined4 *)((long)param_3 + 0x1c);
      param_1[4] = *(undefined4 *)(param_3 + 2);
      param_1[5] = uVar5;
      param_1[6] = uVar6;
      param_1[7] = uVar7;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      _ZN4core3ptr85drop_in_place_LT_toml__map__Map_LT_alloc__string__String_C_toml__value__Value_GT__GT_17h77749c849d56b1e5E
                (&local_c8);
      return;
    }
    local_48 = *(undefined4 *)param_2;
    uStack_44 = *(undefined4 *)((long)param_2 + 4);
    uStack_40 = *(undefined4 *)(param_2 + 1);
    uStack_3c = *(undefined4 *)((long)param_2 + 0xc);
    local_38 = *(undefined4 *)(param_2 + 2);
    uStack_34 = *(undefined4 *)((long)param_2 + 0x14);
    uStack_30 = *(undefined4 *)(param_2 + 3);
    uStack_2c = *(undefined4 *)((long)param_2 + 0x1c);
                    /* try { // try from 00536315 to 00536326 has its CatchHandler @ 0053649d */
    _ZN9alacritty6config11serde_utils12merge_tables17h62792841f9a2f486E(&local_68,&local_48);
    param_1[4] = (undefined4)local_58;
    param_1[5] = local_58._4_4_;
    param_1[6] = uStack_50;
    param_1[7] = uStack_4c;
    *param_1 = local_68;
    param_1[1] = uStack_64;
    param_1[2] = uStack_60;
    param_1[3] = uStack_5c;
    bVar9 = 6;
    if ((byte)(uStack_b0._2_1_ - 2U) < 6) {
      bVar9 = uStack_b0._2_1_ - 2U;
    }
    if (bVar9 != 6) {
      if (bVar9 != 5) goto LAB_0053644a;
                    /* try { // try from 00536363 to 0053636a has its CatchHandler @ 005364e5 */
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_toml__value__Value_GT__GT_17h03c7773122835213E
                (&local_c8);
    }
  }
  bVar9 = 6;
  if ((byte)(uStack_90._2_1_ - 2) < 6) {
    bVar9 = uStack_90._2_1_ - 2;
  }
  if ((byte)(bVar9 - 5) < 2) {
    return;
  }
LAB_00536471:
  _ZN4core3ptr39drop_in_place_LT_toml__value__Value_GT_17h7761fefc14a7cec1E(puVar10);
  return;
}