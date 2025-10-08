undefined _ZN2rg4main17h7e0f93392abea4faE(void)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined *local_420;
  undefined8 local_418;
  char local_410;
  undefined local_40f;
  undefined *local_408;
  undefined **local_400;
  undefined **local_3f8;
  undefined *local_3f0;
  undefined local_3e8 [16];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined **local_3c8;
  undefined8 uStack_3c0;
  undefined ***local_3b8;
  undefined8 uStack_3b0;
  undefined *local_3a8;
  undefined8 local_3a0;
  
  _ZN2rg5flags5parse5parse17hfff2c8ca8bc39d55E(&local_3c8);
  _ZN2rg3run17h4fa263ea092112c0E(&local_410,&local_3c8);
  if (local_410 == '\x01') {
    local_420 = local_408;
                    /* try { // try from 0035989f to 003598b1 has its CatchHandler @ 00359aa6 */
    (*(code *)
      PTR__ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_5chain17h309703631ff77b15E_005272a8)
              (local_3e8,&local_420);
    puVar2 = 
    PTR__ZN6anyhow5chain82__LT_impl_u20_core__iter__traits__iterator__Iterator_u20_for_u20_anyhow__Chain_GT_4next17hdbe11d3f3550117eE_005272b0
    ;
    local_3b8 = (undefined ***)local_3d8;
    uStack_3b0 = uStack_3d0;
    do {
                    /* try { // try from 003598d2 to 003598eb has its CatchHandler @ 00359ac7 */
      auVar6 = (*(code *)puVar2)(&local_3c8);
      puVar4 = auVar6._0_8_;
      if (puVar4 == (undefined8 *)0x0) {
                    /* try { // try from 00359917 to 00359936 has its CatchHandler @ 00359aa6 */
        _ZN4core3ptr34drop_in_place_LT_anyhow__Chain_GT_17h5d69fa9296ba90a7E(&local_3c8);
        local_3c8 = (undefined **)
                    (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00527058)();
        uVar5 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527060)(&local_3c8)
        ;
        local_3c8 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_00527068;
                    /* try { // try from 00359946 to 00359950 has its CatchHandler @ 00359aa1 */
        local_418 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527070)
                              (&local_3c8);
        local_3c8 = &PTR_s_rg__004e99c8;
        uStack_3c0 = 1;
        local_3b8 = (undefined ***)&DAT_00000008;
        uStack_3b0 = 0;
        local_3a8 = (undefined *)0x0;
                    /* try { // try from 0035997f to 00359a24 has its CatchHandler @ 00359aab */
        local_3f8 = (undefined **)
                    _ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_418,&local_3c8);
        if (local_3f8 == (undefined **)0x0) {
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                    (&local_3f8);
          local_3f0 = 
          PTR__ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17he8862a1212ccbd86E_00526b28
          ;
          local_3c8 = (undefined **)&DAT_004ea800;
          uStack_3c0 = 2;
          local_3a8 = &DAT_00187ff8;
          local_3a0 = 1;
          uStack_3b0 = 1;
          local_3f8 = &local_420;
          local_3b8 = &local_3f8;
          local_400 = (undefined **)
                      _ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_418,&local_3c8);
          if (local_400 == (undefined **)0x0) {
            _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                      (&local_400);
            _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E(uVar5)
            ;
                    /* try { // try from 00359a2a to 00359a2e has its CatchHandler @ 00359a7e */
            _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E
                      (local_418);
            _ZN4core3ptr34drop_in_place_LT_anyhow__Error_GT_17h25f51841f1014f37E(&local_420);
            return 2;
          }
          local_3c8 = local_400;
          cVar3 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_400);
                    /* try { // try from 00359a76 to 00359a7b has its CatchHandler @ 00359a80 */
          (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)((cVar3 != '\v') * '\x02')
          ;
        }
        else {
          local_3c8 = local_3f8;
          cVar3 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_3f8);
                    /* try { // try from 00359a57 to 00359a5c has its CatchHandler @ 00359a8f */
          (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)((cVar3 != '\v') * '\x02')
          ;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      cVar3 = _ZN35__LT_dyn_u20_core__error__Error_GT_2is17hce57dda328083154E
                        (puVar4,*(undefined8 *)(auVar6._8_8_ + 0x38));
    } while ((cVar3 == '\0') ||
            (cVar3 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(*puVar4), cVar3 != '\v'));
                    /* try { // try from 003598fc to 00359905 has its CatchHandler @ 00359aa6 */
    _ZN4core3ptr34drop_in_place_LT_anyhow__Chain_GT_17h5d69fa9296ba90a7E(&local_3c8);
    _ZN4core3ptr34drop_in_place_LT_anyhow__Error_GT_17h25f51841f1014f37E(&local_420);
    local_40f = 0;
  }
  return local_40f;
}