void _ZN6zoxide4util12to_lowercase17h601373cb57afac0cE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  
  uVar2 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h4cd980ea14f59bb6E
                    (param_2,param_3);
  cVar1 = _ZN4core5slice5ascii8is_ascii17hcb3cbfd8f29d869fE(uVar2,extraout_RDX);
  if (cVar1 != '\0') {
    _ZN5alloc3str21__LT_impl_u20_str_GT_18to_ascii_lowercase17hf95169cb6b5516b7E();
    return;
  }
  (*(code *)PTR__ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17hb778be1bb3f3f772E_0023b9d0)
            (param_1,uVar2,extraout_RDX);
  return;
}