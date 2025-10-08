void _ZN4just6search6Search5clean17hd91959d13e0c6030E(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 local_118;
  long local_110;
  long local_108;
  undefined local_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_68 [56];
  
  _ZN3std4path4Path4join17h1eac0ae5e7efa361E(local_100);
  local_118 = 0;
  local_110 = 8;
  local_108 = 0;
                    /* try { // try from 00389392 to 0038939c has its CatchHandler @ 0038948b */
  (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_00566660)
            (&local_a8,local_f8,local_f0);
  puVar1 = 
  PTR__ZN80__LT_std__path__Components_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h73ed8dd6f02f5cb4E_00566578
  ;
  local_b8 = local_78;
  uStack_b0 = uStack_70;
  local_c8 = local_88;
  uStack_c0 = uStack_80;
  local_d8 = local_98;
  uStack_d0 = uStack_90;
  local_e8 = local_a8;
  uStack_e4 = uStack_a4;
  uStack_e0 = uStack_a0;
  uStack_dc = uStack_9c;
  while( true ) {
    (*(code *)puVar1)(local_68,&local_e8);
    if (local_68[0] == '\n') break;
    cVar2 = _ZN61__LT_std__path__Component_u20_as_u20_core__cmp__PartialEq_GT_2eq17hfa2fa96020c6cc4bE
                      (local_68,&DAT_00171728);
    if (cVar2 == '\0') {
                    /* try { // try from 003893f0 to 00389402 has its CatchHandler @ 00389497 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf0e1448068b63a5dE(&local_118,local_68);
    }
    else if (local_108 != 0) {
      if (*(char *)(local_110 + (local_108 + -1) * 0x38) == '\t') {
        local_108 = local_108 + -1;
      }
    }
  }
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hc695da30dbf516c4E
            (&local_e8,&local_118);
                    /* try { // try from 0038944f to 00389459 has its CatchHandler @ 00389476 */
  _ZN4core4iter6traits8iterator8Iterator7collect17h5ec721f06ebe2405E(param_1,&local_e8);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_100);
  return;
}