void _ZN4just6recipe6Recipe11module_path17h2114682f44294136E(void)

{
  code *pcVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar5;
  
  uVar4 = _ZN4just6recipe6Recipe8namepath17haa1c710e3a0b6f26E();
  bVar3 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17h11352625ba47f292E(uVar4,extraout_RDX);
  uVar5 = extraout_RDX_00;
  if ((bVar3 & 1) == 0) {
    uVar5 = 0;
  }
  lVar2 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                    (0,uVar5,uVar4,extraout_RDX);
  if (lVar2 != 0) {
    return;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
            (uVar4,extraout_RDX,0,uVar5,&PTR_DAT_00530b20);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}