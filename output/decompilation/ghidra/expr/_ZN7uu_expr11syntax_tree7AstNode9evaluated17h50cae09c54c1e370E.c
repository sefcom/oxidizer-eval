undefined8 *
_ZN7uu_expr11syntax_tree7AstNode9evaluated17h50cae09c54c1e370E
          (undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_40 [10];
  
                    /* try { // try from 001a561e to 001a5633 has its CatchHandler @ 001a569c */
  uVar1 = (*(code *)PTR__ZN7uu_expr11syntax_tree11get_next_id17hf082ef3e5b1b606fE_002518c0)();
  (*(code *)PTR__ZN7uu_expr11syntax_tree7AstNode4eval17h7294554a61514edeE_00251918)
            (local_40,param_2);
  local_68 = (undefined4)local_40._8_8_;
  uStack_64 = SUB84(local_40._8_8_,4);
  uStack_60 = (undefined4)local_40._16_8_;
  uStack_5c = SUB84(local_40._16_8_,4);
  local_58 = (undefined4)local_40._24_8_;
  uStack_54 = SUB84(local_40._24_8_,4);
  uStack_50 = (undefined4)local_40._32_8_;
  uStack_4c = SUB84(local_40._32_8_,4);
  if (local_40[0] == 1) {
    *(undefined4 *)(param_1 + 3) = local_58;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_54;
    *(undefined4 *)(param_1 + 4) = uStack_50;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_4c;
    *(undefined4 *)(param_1 + 1) = local_68;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_64;
    *(undefined4 *)(param_1 + 2) = uStack_60;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_5c;
    *param_1 = 0x8000000000000005;
  }
  else {
    *(undefined4 *)(param_1 + 2) = local_58;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_54;
    *(undefined4 *)(param_1 + 3) = uStack_50;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_4c;
    *(undefined4 *)param_1 = local_68;
    *(undefined4 *)((long)param_1 + 4) = uStack_64;
    *(undefined4 *)(param_1 + 1) = uStack_60;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_5c;
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  _ZN4core3ptr50drop_in_place_LT_uu_expr__syntax_tree__AstNode_GT_17h2611257ee6ccabb2E(param_2);
  return param_1;
}