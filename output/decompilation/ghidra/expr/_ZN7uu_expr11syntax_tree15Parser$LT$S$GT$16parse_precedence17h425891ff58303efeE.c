void _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_16parse_precedence17h425891ff58303efeE
               (ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined extraout_DL;
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong uStack_b8;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_50;
  undefined8 local_48;
  ulong local_40;
  long local_38;
  
  if (5 < param_3) {
    _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_23parse_simple_expression17h48250ee92a4d841bE
              (param_1,param_2);
    return;
  }
  local_38 = param_3 + 1;
  _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_16parse_precedence17h425891ff58303efeE(&local_d8,param_2)
  ;
  local_a8 = CONCAT44(uStack_cc,uStack_d0);
  uStack_a0 = CONCAT44(uStack_c4,uStack_c8);
  uStack_e8 = CONCAT44(uStack_bc,uStack_c0);
  uStack_90 = uStack_b8;
  if (local_d8 == 0x8000000000000005) {
    param_1[3] = uStack_e8;
    param_1[4] = uStack_b8;
    param_1[1] = local_a8;
    param_1[2] = uStack_a0;
    *param_1 = 0x8000000000000005;
  }
  else {
    uStack_e0 = uStack_b8;
    uStack_f8 = CONCAT44(uStack_cc,uStack_d0);
    uStack_f0 = CONCAT44(uStack_c4,uStack_c8);
    local_100 = local_d8;
    local_50 = 0x8000000000000002;
    local_98 = uStack_e8;
    local_48 = param_2;
    local_40 = param_3;
                    /* try { // try from 0019b485 to 0019b4b0 has its CatchHandler @ 0019b632 */
    while (uVar1 = local_48, local_d8 = local_40,
          cVar2 = _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_6accept17h4b5ad55db2b3a3a4E
                            (local_48,&local_d8), cVar2 != '\x03') {
      _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_16parse_precedence17h425891ff58303efeE
                (&local_d8,uVar1,local_38);
      local_78 = CONCAT44(uStack_cc,uStack_d0);
      uStack_70 = CONCAT44(uStack_c4,uStack_c8);
      local_68 = CONCAT44(uStack_bc,uStack_c0);
      uStack_60 = uStack_b8;
      uVar4 = uStack_60;
      uStack_60._0_4_ = (undefined4)uStack_b8;
      uStack_60._4_4_ = (undefined4)(uStack_b8 >> 0x20);
      uStack_60 = uVar4;
      if (local_d8 == 0x8000000000000005) {
        *(undefined4 *)(param_1 + 3) = uStack_c0;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_bc;
        *(undefined4 *)(param_1 + 4) = (undefined4)uStack_60;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_60._4_4_;
        *(undefined4 *)(param_1 + 1) = uStack_d0;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_cc;
        *(undefined4 *)(param_1 + 2) = uStack_c8;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_c4;
        *param_1 = 0x8000000000000005;
        _ZN4core3ptr50drop_in_place_LT_uu_expr__syntax_tree__AstNode_GT_17h702ff2a2ff59954aE
                  (&local_100);
        return;
      }
      uStack_90 = CONCAT44(uStack_bc,uStack_c0);
      local_88 = (undefined4)uStack_60;
      uStack_84 = uStack_60._4_4_;
      uStack_a0 = CONCAT44(uStack_cc,uStack_d0);
      local_98 = CONCAT44(uStack_c4,uStack_c8);
      local_a8 = local_d8;
                    /* try { // try from 0019b502 to 0019b532 has its CatchHandler @ 0019b61e */
      uVar3 = (*(code *)PTR__ZN7uu_expr11syntax_tree11get_next_id17hf082ef3e5b1b606fE_002518c0)();
      uStack_b8 = uStack_e0;
      uStack_c8 = (undefined4)uStack_f0;
      uStack_c4 = uStack_f0._4_4_;
      uStack_c0 = (undefined4)uStack_e8;
      uStack_bc = uStack_e8._4_4_;
      local_d8 = local_100;
      uStack_d0 = (undefined4)uStack_f8;
      uStack_cc = uStack_f8._4_4_;
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h112af27c2373377fE(&local_d8);
      uStack_b8 = CONCAT44(uStack_84,local_88);
      uStack_c8 = (undefined4)local_98;
      uStack_c4 = local_98._4_4_;
      uStack_c0 = (undefined4)uStack_90;
      uStack_bc = uStack_90._4_4_;
      local_d8 = local_a8;
      uStack_d0 = (undefined4)uStack_a0;
      uStack_cc = uStack_a0._4_4_;
      local_78 = uVar4;
                    /* try { // try from 0019b55f to 0019b569 has its CatchHandler @ 0019b60c */
      uStack_f0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h112af27c2373377fE(&local_d8);
      local_100 = local_50;
      uStack_e8._0_2_ = CONCAT11(extraout_DL,cVar2);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar3);
      uStack_f8 = uVar4;
    }
    param_1[4] = uStack_e0;
    param_1[2] = uStack_f0;
    param_1[3] = uStack_e8;
    *param_1 = local_100;
    param_1[1] = uStack_f8;
  }
  return;
}