ulong _ZN10uu_pathchk16check_searchable17h0902f70b6adfdabeE(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  undefined8 local_110;
  undefined *local_108;
  undefined8 *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 **local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c0 [2];
  undefined8 local_b8;
  undefined7 uVar4;
  
  _ZN3std2fs16symlink_metadata17h5a680290b0bc4f9bE(local_c0,param_1,param_2);
  uVar4 = (undefined7)((ulong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (local_c0[0] == 2) {
    local_110 = local_b8;
    cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_b8);
    uVar3 = CONCAT71(uVar4,cVar1 == '\0');
    if (cVar1 != '\0') {
      local_108 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001e50e0;
      local_100 = &local_110;
      local_f8 = 
      PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001e5088
      ;
      local_f0 = &DAT_001deae8;
      local_e8 = 2;
      local_d0 = 0;
      local_e0 = &local_100;
      local_d8 = 1;
                    /* try { // try from 00156653 to 0015666a has its CatchHandler @ 00156685 */
      uVar2 = (*(code *)
                PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_001e50f0
              )(&local_108,&local_f0);
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h7a4400e9f2ab9568E
                (uVar2);
      local_b8 = local_110;
    }
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3c82bf2075f98b13E(local_b8);
  }
  return uVar3 & 0xffffffff;
}