void _ZN4just5lexer5Lexer4rest17h4f82959a07fe6144E(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  lVar5 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                    (uVar3,uVar1,uVar2);
  if (lVar5 != 0) {
    return;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
            (uVar1,uVar2,uVar3,uVar2,&PTR_DAT_005303c8);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}