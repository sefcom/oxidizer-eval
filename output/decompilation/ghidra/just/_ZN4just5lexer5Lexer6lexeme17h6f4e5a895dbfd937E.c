void _ZN4just5lexer5Lexer6lexeme17h6f4e5a895dbfd937E(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  lVar6 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                    (uVar3,uVar4,uVar1,uVar2);
  if (lVar6 != 0) {
    return;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
            (uVar1,uVar2,uVar3,uVar4,&PTR_DAT_00530390);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}