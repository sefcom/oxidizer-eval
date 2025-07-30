void _ZN17backdoorautomater9sanitizer18sanitize_ex_stderr17h2f447f0a04b557e6E(long param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined **ppuStack_1b0;
  undefined auStack_1a8 [24];
  undefined auStack_190 [56];
  undefined auStack_158 [32];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  long local_48;
  undefined *local_40;
  code *local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = param_1;
  cVar2 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h36f93e99507e9f19E
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (cVar2 == '\0') {
    return;
  }
  local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h79b96a6ad6630cecE;
  local_30 = &PTR_DAT_0032a700;
  local_28 = 1;
  local_10 = 0;
  local_20 = &local_40;
  local_18 = 1;
  pppuVar4 = &local_30;
  local_40 = (undefined *)&local_48;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17he7d3af46f65769b3E_003681c0)
            (pppuVar4,&PTR_s_src_sanitizer_rs_0032a710);
  ppuStack_110 = pppuVar4[1];
  ppuStack_108 = pppuVar4[2];
  uStack_120 = "systemctl status Error ! The service already exist on your system !\n";
  uStack_118 = 0x11;
  _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(auStack_1a8,&uStack_120,2,1,0);
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&uStack_120,"sh",2);
  uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&uStack_120,"-c",2);
  uVar3 = _ZN3std7process7Command3arg17h1a6c514e95e1ad22E(uVar3,auStack_1a8);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(auStack_190,uVar3);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (auStack_158,auStack_190,&PTR_s_src_sanitizer_rs_0032a728);
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&uStack_120);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (auStack_190,uStack_138,uStack_130);
  uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (auStack_190);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&uStack_120,uVar3);
  ppuStack_1b0 = ppuStack_110;
  uStack_1c0 = (undefined4)uStack_120;
  uStack_1bc = uStack_120._4_4_;
  uStack_1b8 = (undefined4)uStack_118;
  uStack_1b4 = uStack_118._4_4_;
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(auStack_190);
  if (ppuStack_1b0 != (undefined **)0x0) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&uStack_1c0);
    _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(auStack_158);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(auStack_1a8);
    return;
  }
  uStack_120 = &DAT_0032a740;
  uStack_118 = 1;
  ppuStack_110 = (undefined **)0x8;
  ppuStack_108 = (undefined **)0x0;
  uStack_100 = 0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17he7d3af46f65769b3E_003681c0)
            (&uStack_120,&PTR_s_src_sanitizer_rs_0032a750);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}