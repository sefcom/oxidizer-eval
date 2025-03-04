void _ZN7uu_expr11syntax_tree6Parser16parse_precedence17h4211b6a5bb39dcd1E
               (undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined extraout_DL;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined local_b8;
  char cStack_b7;
  undefined uStack_b6;
  undefined uStack_b5;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (5 < param_3) {
    _ZN7uu_expr11syntax_tree6Parser23parse_simple_expression17he4185487d50c2ec9E(param_1,param_2);
    return;
  }
  _ZN7uu_expr11syntax_tree6Parser16parse_precedence17h4211b6a5bb39dcd1E
            (&local_98,param_2,param_3 + 1);
  local_a8 = CONCAT44(uStack_7c,uStack_80);
  if (CONCAT44(uStack_94,local_98) == 0) {
    uStack_a0 = uStack_78;
    local_b8 = (undefined)uStack_90;
    cStack_b7 = (char)((uint)uStack_90 >> 8);
    uStack_b6 = (undefined)((uint)uStack_90 >> 0x10);
    uStack_b5 = (undefined)((uint)uStack_90 >> 0x18);
    uStack_b4 = uStack_8c;
    uStack_b0 = CONCAT44(uStack_84,uStack_88);
    local_68 = param_3 + 1;
    local_60 = param_2;
                    /* try { // try from 00230390 to 002303b6 has its CatchHandler @ 002304f8 */
    while (uVar5 = local_60, lVar3 = local_68,
          cVar4 = _ZN7uu_expr11syntax_tree6Parser8parse_op17hcd25fd2e93ef8ca6E(local_60,param_3),
          cVar4 != '\x03') {
      _ZN7uu_expr11syntax_tree6Parser16parse_precedence17h4211b6a5bb39dcd1E(&local_98,uVar5,lVar3);
      uVar5 = CONCAT44(uStack_8c,uStack_90);
      uVar1 = CONCAT44(uStack_84,uStack_88);
      uVar2 = CONCAT44(uStack_7c,uStack_80);
      if (CONCAT44(uStack_94,local_98) != 0) {
        uStack_c0 = (undefined4)uStack_78;
        uStack_bc = (undefined4)((ulong)uStack_78 >> 0x20);
        *(undefined4 *)(param_1 + 3) = uStack_80;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_7c;
        *(undefined4 *)(param_1 + 4) = uStack_c0;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_bc;
        *(undefined4 *)(param_1 + 1) = uStack_90;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_8c;
        *(undefined4 *)(param_1 + 2) = uStack_88;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_84;
        *param_1 = 1;
        _ZN4core3ptr50drop_in_place_LT_uu_expr__syntax_tree__AstNode_GT_17h0f29fe394da86370E
                  (&local_b8);
        return;
      }
      uStack_40 = uStack_78;
      local_98 = CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8)));
      uStack_88 = (undefined4)local_a8;
      uStack_84 = local_a8._4_4_;
      uStack_80 = (undefined4)uStack_a0;
      uStack_7c = uStack_a0._4_4_;
      uStack_94 = uStack_b4;
      uStack_90 = (undefined4)uStack_b0;
      uStack_8c = uStack_b0._4_4_;
      local_58 = uVar5;
      uStack_50 = uVar1;
      local_48 = uVar2;
                    /* try { // try from 00230413 to 0023041a has its CatchHandler @ 002304e6 */
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d53b81a55fa9d0dE(&local_98);
      uStack_88 = (undefined4)local_48;
      uStack_84 = local_48._4_4_;
      uStack_80 = (undefined4)uStack_40;
      uStack_7c = uStack_40._4_4_;
      local_98 = (undefined4)local_58;
      uStack_94 = local_58._4_4_;
      uStack_90 = (undefined4)uStack_50;
      uStack_8c = uStack_50._4_4_;
                    /* try { // try from 0023043d to 00230447 has its CatchHandler @ 002304d7 */
      local_a8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d53b81a55fa9d0dE(&local_98);
      local_b8 = 1;
      cStack_b7 = cVar4;
      uStack_b6 = extraout_DL;
      uStack_b0 = uVar5;
    }
    param_1[3] = local_a8;
    param_1[4] = uStack_a0;
    param_1[1] = CONCAT44(uStack_b4,
                          CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))));
    param_1[2] = uStack_b0;
    *param_1 = 0;
  }
  else {
    param_1[3] = local_a8;
    param_1[4] = uStack_78;
    param_1[1] = CONCAT44(uStack_8c,uStack_90);
    param_1[2] = CONCAT44(uStack_84,uStack_88);
    *param_1 = 1;
  }
  return;
}