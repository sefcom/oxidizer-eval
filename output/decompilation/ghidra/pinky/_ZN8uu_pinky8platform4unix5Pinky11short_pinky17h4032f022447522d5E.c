long _ZN8uu_pinky8platform4unix5Pinky11short_pinky17h4032f022447522d5E(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  long lVar6;
  byte extraout_DL;
  undefined8 local_368;
  byte local_360;
  long local_358;
  long local_350;
  long local_348;
  long local_340;
  int local_334;
  undefined local_330 [384];
  undefined local_1b0 [384];
  
  if (*(char *)(param_1 + 0x19) != '\0') {
    _ZN8uu_pinky8platform4unix5Pinky13print_heading17h9e43dbe96a7248f7E(param_1);
  }
  local_368 = (*(code *)
                PTR__ZN6uucore8features5utmpx5Utmpx16iter_all_records17hde307d126e33fb30E_001fff18)
                        ();
  puVar4 = PTR__ZN6uucore8features5utmpx5Utmpx15is_user_process17h30a2442fae430ce7E_001fff28;
  puVar3 = 
  PTR__ZN93__LT_uucore__features__utmpx__UtmpxIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0874e3c7200a2adaE_001fff20
  ;
  puVar2 = PTR_memcpy_001ffc18;
  local_360 = extraout_DL & 1;
  if (*(long *)(param_1 + 0x10) == 0) {
    do {
                    /* try { // try from 00163900 to 00163909 has its CatchHandler @ 0016395e */
      (*(code *)puVar3)(&local_334,&local_368);
      if (local_334 != 1) goto LAB_0016393f;
      (*(code *)puVar2)(local_1b0,local_330,0x180);
                    /* try { // try from 00163921 to 00163934 has its CatchHandler @ 0016395e */
      cVar5 = (*(code *)puVar4)(local_1b0);
    } while ((cVar5 == '\0') ||
            (lVar6 = _ZN8uu_pinky8platform4unix5Pinky11print_entry17h41deaa8dc6a9a73eE
                               (param_1,local_1b0), lVar6 == 0));
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    local_350 = lVar1 + *(long *)(param_1 + 0x10) * 0x18;
    local_358 = param_1;
    do {
      do {
                    /* try { // try from 00163870 to 0016387a has its CatchHandler @ 00163960 */
        (*(code *)puVar3)(&local_334,&local_368);
        if (local_334 != 1) goto LAB_0016393f;
        (*(code *)puVar2)(local_1b0,local_330,0x180);
                    /* try { // try from 00163895 to 001638cb has its CatchHandler @ 00163960 */
        cVar5 = (*(code *)puVar4)(local_1b0);
      } while (cVar5 == '\0');
      local_340 = local_350;
      local_348 = lVar1;
      cVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h87c328f0d4d945fcE
                        (&local_348,local_1b0);
    } while ((cVar5 == '\0') ||
            (lVar6 = _ZN8uu_pinky8platform4unix5Pinky11print_entry17h41deaa8dc6a9a73eE
                               (local_358,local_1b0), lVar6 == 0));
  }
LAB_00163941:
  _ZN4core3ptr55drop_in_place_LT_uucore__features__utmpx__UtmpxIter_GT_17hcbbad6d0fc2eb594E
            (&local_368);
  return lVar6;
LAB_0016393f:
  lVar6 = 0;
  goto LAB_00163941;
}