undefined4 *
_ZN13turborepo_lsp14convert_ranges17h39b7e0288b6c6720E
          (undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *param_2;
  uVar5 = _ZN4crop4rope4rope4Rope12line_of_byte17h6a166202f318cfd2E(uVar2,param_3,&PTR_DAT_00a2f668)
  ;
  uVar6 = _ZN4crop4rope4rope4Rope12line_of_byte17h6a166202f318cfd2E(uVar2,param_4,&PTR_DAT_00a2f680)
  ;
  uVar1 = *(undefined4 *)(param_2 + 1);
  iVar3 = _ZN4crop4rope4rope4Rope12byte_of_line17h39602d31b3edc455E
                    (uVar2,uVar1,uVar5,&PTR_DAT_00a2f698);
  iVar4 = _ZN4crop4rope4rope4Rope12byte_of_line17h39602d31b3edc455E
                    (uVar2,uVar1,uVar6,&PTR_DAT_00a2f6b0);
  *param_1 = (int)uVar5;
  param_1[1] = (int)param_3 - iVar3;
  param_1[2] = (int)uVar6;
  param_1[3] = (int)param_4 - iVar4;
  return param_1;
}