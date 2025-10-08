undefined8 _ZN2rg5flags6config4args17h29f19532c97db275E(undefined8 *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 **local_128;
  undefined8 *local_120;
  char **local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 **local_d8;
  undefined8 **ppuStack_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 **local_a8;
  undefined *local_a0;
  undefined8 *local_98;
  code *local_90;
  undefined **local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  _ZN3std3env6var_os17hb4475f8d1a095f3cE(&local_128,"RIPGREP_CONFIG_PATH",0x13);
  if ((undefined8 ***)local_118 == (undefined8 ***)0x0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    uVar3 = _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17ha1b355bbd6f8eb7bE();
  }
  else {
    local_88 = (undefined **)local_128;
    local_80 = local_120;
    uStack_78 = (undefined8 ***)local_118;
                    /* try { // try from 0034401b to 0034402c has its CatchHandler @ 003445a1 */
    _ZN2rg5flags6config5parse17hc02adeccf0fa2bedE(&local_d8,&local_88);
    if (local_d8 == (undefined8 **)&DAT_8000000000000000) {
      local_f8 = ppuStack_d0;
                    /* try { // try from 0034404c to 0034406b has its CatchHandler @ 00344573 */
      cVar2 = _ZN2rg8messages8messages17h9ee4188b23ce53b0E();
      if (cVar2 != '\0') {
        local_128 = (undefined8 **)
                    (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00527058)();
        uVar3 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527060)(&local_128)
        ;
        local_128 = (undefined8 **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_00527068
        ;
                    /* try { // try from 0034407a to 00344082 has its CatchHandler @ 00344548 */
        local_e8 = (undefined8 *)
                   (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527070)
                             (&local_128);
        local_128 = (undefined8 **)&PTR_s_rg__004e99c8;
        local_120 = (undefined8 **)0x1;
        local_118 = (char **)&DAT_00000008;
        local_110 = 0;
        uStack_108 = 0;
                    /* try { // try from 003440b0 to 00344159 has its CatchHandler @ 00344578 */
        local_a8 = (undefined8 **)
                   _ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_e8,&local_128);
        if ((undefined8 ***)local_a8 != (undefined8 ***)0x0) {
          local_128 = local_a8;
          cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_a8);
                    /* try { // try from 00344501 to 00344506 has its CatchHandler @ 00344538 */
          (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)((cVar2 != '\v') * '\x02')
          ;
LAB_00344525:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                  (&local_a8);
        local_a8 = &local_f8;
        local_a0 = 
        PTR__ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17he8862a1212ccbd86E_00526b28
        ;
        local_128 = (undefined8 **)&PTR_s_failed_to_read_the_file_specifie_004e99d8;
        local_120 = (undefined8 **)0x2;
        uStack_108 = 0;
        local_110 = 1;
        local_118 = (char **)&local_a8;
        local_68 = (undefined8 ***)
                   _ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_e8,&local_128);
        if (local_68 != (undefined8 ***)0x0) {
          local_128 = local_68;
          cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_68);
                    /* try { // try from 0034451f to 00344524 has its CatchHandler @ 0034452b */
          (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)((cVar2 != '\v') * '\x02')
          ;
          goto LAB_00344525;
        }
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                  (&local_68);
        _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E(uVar3);
                    /* try { // try from 0034415f to 00344163 has its CatchHandler @ 00344529 */
        _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E(local_e8);
      }
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
                    /* try { // try from 0034417b to 00344184 has its CatchHandler @ 003445a1 */
      _ZN4core3ptr34drop_in_place_LT_anyhow__Error_GT_17h25f51841f1014f37E(&local_f8);
    }
    else {
      local_58 = local_c8;
      local_68 = (undefined8 ***)local_d8;
      uStack_60 = (undefined8 ***)ppuStack_d0;
      local_48 = (undefined4)local_c0;
      uStack_44 = local_c0._4_4_;
      uStack_40 = (undefined4)uStack_b8;
      uStack_3c = uStack_b8._4_4_;
      local_38 = local_b0;
      lVar4 = local_b0;
      if (local_b0 != 0) {
        local_50 = local_b0;
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h1f0bd36aa60f4f7aE
                  (&local_a8,&local_48);
        lVar4 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h86d62b8c222d52fbE
                          (&local_a8);
        if (lVar4 != 0) {
          do {
            local_70 = lVar4;
                    /* try { // try from 00344238 to 00344257 has its CatchHandler @ 003445e2 */
            cVar2 = _ZN2rg8messages8messages17h9ee4188b23ce53b0E();
            if (cVar2 != '\0') {
              local_128 = (undefined8 **)
                          (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00527058)();
              uVar3 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527060)
                                (&local_128);
              local_128 = (undefined8 **)
                          PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_00527068;
                    /* try { // try from 00344266 to 0034426e has its CatchHandler @ 003445c6 */
              local_f0 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527070)
                                   (&local_128);
              local_128 = (undefined8 **)&PTR_s_rg__004e99c8;
              local_120 = (undefined8 **)0x1;
              local_118 = (char **)&DAT_00000008;
              local_110 = 0;
              uStack_108 = 0;
                    /* try { // try from 0034429c to 00344354 has its CatchHandler @ 003445e7 */
              local_d8 = (undefined8 **)
                         _ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_f0,&local_128);
              if ((undefined8 ***)local_d8 != (undefined8 ***)0x0) {
                local_128 = local_d8;
                cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_d8);
                    /* try { // try from 003444e3 to 003444e8 has its CatchHandler @ 003445b9 */
                (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)
                          ((cVar2 != '\v') * '\x02');
                goto LAB_00344525;
              }
              _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                        (&local_d8);
              local_e8 = local_80;
              uStack_e0 = (undefined4)uStack_78;
              uStack_dc = uStack_78._4_4_;
              local_d8 = &local_e8;
              ppuStack_d0 = (undefined8 **)
                            PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00526dd0
              ;
              local_c0 = 
              PTR__ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17he8862a1212ccbd86E_00526b28
              ;
              local_128 = (undefined8 **)&DAT_004e99f8;
              local_120 = (undefined8 **)0x3;
              uStack_108 = 0;
              local_118 = (char **)&local_d8;
              local_110 = 2;
              local_c8 = &local_70;
              local_f8 = (undefined8 **)
                         _ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_f0,&local_128);
              if ((undefined8 ***)local_f8 != (undefined8 ***)0x0) {
                local_128 = local_f8;
                cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_f8);
                    /* try { // try from 003444c5 to 003444ca has its CatchHandler @ 003445cb */
                (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)
                          ((cVar2 != '\v') * '\x02');
                goto LAB_00344525;
              }
              _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                        (&local_f8);
              _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E
                        (uVar3);
                    /* try { // try from 0034435a to 0034435e has its CatchHandler @ 003445db */
              _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E
                        (local_f0);
            }
                    /* try { // try from 0034435f to 00344366 has its CatchHandler @ 003445dd */
            _ZN4core3ptr34drop_in_place_LT_anyhow__Error_GT_17h25f51841f1014f37E(&local_70);
            lVar4 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h86d62b8c222d52fbE
                              (&local_a8);
          } while (lVar4 != 0);
        }
                    /* try { // try from 00344378 to 00344384 has its CatchHandler @ 0034454d */
        _ZN4core3ptr73drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_anyhow__Error_GT__GT_17he21bfa65696d9979E
                  (&local_a8);
        lVar4 = local_50;
      }
                    /* try { // try from 0034438d to 00344466 has its CatchHandler @ 00344555 */
      uVar5 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                        (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
      if (3 < uVar5) {
        local_e8 = local_80;
        uStack_e0 = (undefined4)uStack_78;
        uStack_dc = uStack_78._4_4_;
        local_a8 = &local_e8;
        local_a0 = 
        PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00526dd0
        ;
        local_98 = &local_68;
        local_90 = 
        _ZN65__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__fmt__Debug_GT_3fmt17hecb104d1c315a180E
        ;
        local_128 = (undefined8 **)&DAT_004e9a28;
        local_120 = (undefined8 **)0x2;
        uStack_108 = 0;
        local_118 = (char **)&local_a8;
        local_110 = 2;
        uStack_b8 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                              (&PTR_s_crates_core_flags_config_rs_004e9a48);
        local_d8 = (undefined8 **)0x171ee9;
        ppuStack_d0 = (undefined8 ***)0x11;
        local_c8 = (long *)0x171ee9;
        local_c0 = (undefined *)0x11;
        _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_128,4,&local_d8);
      }
      param_1[2] = local_58;
      *(undefined4 *)param_1 = (undefined4)local_68;
      *(undefined4 *)((long)param_1 + 4) = local_68._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_60._4_4_;
      if (lVar4 == 0) {
                    /* try { // try from 00344483 to 0034448f has its CatchHandler @ 00344527 */
        _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_anyhow__Error_GT__GT_17h0158ef9d20de58a6E
                  (&local_48);
      }
    }
    uVar3 = _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hee77a3799ccd604eE(&local_88);
  }
  return uVar3;
}