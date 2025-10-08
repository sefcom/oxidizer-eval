bool _ZN10uu_install4mode5chmod17hdfca6c9c8a923e56E(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = _ZN3std2fs15set_permissions17h487174ed31211552E();
  if (lVar1 != 0) {
    _ZN10uu_install4mode5chmod28__u7b__u7b_closure_u7d__u7d_17hc6b73c885d269683E
              (param_1,param_2,lVar1);
  }
  return lVar1 != 0;
}