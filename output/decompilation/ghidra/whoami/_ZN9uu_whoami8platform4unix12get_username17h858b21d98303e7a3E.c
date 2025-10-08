void _ZN9uu_whoami8platform4unix12get_username17h858b21d98303e7a3E(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_88 [128];
  
  uVar1 = (*(code *)PTR__ZN6uucore8features7process7geteuid17hd0ed7b4820ed9632E_001deb38)();
  (*(code *)
    PTR__ZN98__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT_u32_GT__GT_6locate17h5d0bb482984d9c00E_001deb40
  )(local_88,uVar1);
  _ZN6uucore8features7entries7uid2usr28__u7b__u7b_closure_u7d__u7d_17h067aed1d574403f7E
            (&local_a0,local_88);
  param_1[2] = local_90;
  param_1[1] = local_98;
  *param_1 = local_a0;
  return;
}