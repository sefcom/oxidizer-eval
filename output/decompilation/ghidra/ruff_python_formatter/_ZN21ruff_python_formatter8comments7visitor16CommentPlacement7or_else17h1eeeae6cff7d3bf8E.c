void _ZN21ruff_python_formatter8comments7visitor16CommentPlacement7or_else17h1eeeae6cff7d3bf8E
               (undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*param_2 < 0x5e) {
    _ZN21ruff_python_formatter8comments9placement35handle_own_line_comment_around_body28__u7b__u7b_closure_u7d__u7d_17h485e9d6a5f0dc71aE
              (param_1,param_3,param_4,param_2);
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x12);
  param_1[8] = *(undefined8 *)(param_2 + 0x10);
  param_1[9] = uVar1;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 2);
  uVar3 = *(undefined8 *)(param_2 + 4);
  uVar4 = *(undefined8 *)(param_2 + 6);
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 10);
  uVar7 = *(undefined8 *)(param_2 + 0xe);
  param_1[6] = *(undefined8 *)(param_2 + 0xc);
  param_1[7] = uVar7;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}