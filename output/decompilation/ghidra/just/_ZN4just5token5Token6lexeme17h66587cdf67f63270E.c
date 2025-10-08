void _ZN4just5token5Token6lexeme17h66587cdf67f63270E(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x38);
  lVar6 = *(long *)(param_1 + 0x28) + lVar3;
  lVar5 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                    (lVar3,lVar6,uVar1,uVar2);
  if (lVar5 != 0) {
    return;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
            (uVar1,uVar2,lVar3,lVar6,&PTR_DAT_00531738);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}