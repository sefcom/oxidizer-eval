ulong * _ZN4just8function16module_directory17h0cd8c27649f24539E(ulong *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  ulong *puVar3;
  bool bVar4;
  undefined auVar5 [16];
  byte local_30;
  undefined7 uStack_2f;
  ulong local_28;
  ulong uStack_20;
  
  auVar5 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)
                     (*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x50),
                      *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x58));
  lVar2 = auVar5._0_8_;
  if (lVar2 != 0) {
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)(&local_30,lVar2);
    bVar4 = (local_30 & 1) == 0;
    if (bVar4) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (&local_30,local_28,uStack_20);
      param_1[2] = local_28;
      param_1[3] = uStack_20;
      param_1[1] = CONCAT71(uStack_2f,local_30);
    }
    else {
      _ZN4just8function16module_directory28__u7b__u7b_closure_u7d__u7d_17hbe078cf44c80cd1cE
                (param_1 + 1,lVar2,auVar5._8_8_);
    }
    *param_1 = (ulong)!bVar4;
    return param_1;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&DAT_0052ff68);
  pcVar1 = (code *)swi(3);
  puVar3 = (ulong *)(*pcVar1)();
  return puVar3;
}