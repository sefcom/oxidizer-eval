void _ZN7uu_sort18make_sort_mode_arg17ha1a076c92d3e898bE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  char cVar2;
  undefined local_7b0 [640];
  undefined local_530 [640];
  undefined local_2b0 [640];
  
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(local_2b0);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(local_530,local_2b0,param_4);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(local_2b0,local_530,param_2,param_3);
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE(local_530,local_2b0,param_5,param_6);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(local_7b0,local_530,2);
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf24dc1420a1402d1E
                    ("general-numeric-sort",0x14,param_2,param_3);
  puVar1 = PTR_memcpy_00296e48;
  if (cVar2 == '\0') {
    (*(code *)PTR_memcpy_00296e48)(local_2b0,local_7b0,0x280);
    _ZN12clap_builder7builder3arg3Arg14conflicts_with17h64605f66e4fd67eeE
              (local_530,local_2b0,"general-numeric-sort",0x14);
    (*(code *)puVar1)(local_7b0,local_530,0x280);
  }
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf24dc1420a1402d1E
                    ("human-numeric-sort",0x12,param_2,param_3);
  puVar1 = PTR_memcpy_00296e48;
  if (cVar2 == '\0') {
    (*(code *)PTR_memcpy_00296e48)(local_2b0,local_7b0,0x280);
    _ZN12clap_builder7builder3arg3Arg14conflicts_with17h64605f66e4fd67eeE
              (local_530,local_2b0,"human-numeric-sort",0x12);
    (*(code *)puVar1)(local_7b0,local_530,0x280);
  }
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf24dc1420a1402d1E
                    ("month-sort",10,param_2,param_3);
  puVar1 = PTR_memcpy_00296e48;
  if (cVar2 == '\0') {
    (*(code *)PTR_memcpy_00296e48)(local_2b0,local_7b0,0x280);
    _ZN12clap_builder7builder3arg3Arg14conflicts_with17h64605f66e4fd67eeE
              (local_530,local_2b0,"month-sort",10);
    (*(code *)puVar1)(local_7b0,local_530,0x280);
  }
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf24dc1420a1402d1E
                    ("numeric-sort",0xc,param_2,param_3);
  puVar1 = PTR_memcpy_00296e48;
  if (cVar2 == '\0') {
    (*(code *)PTR_memcpy_00296e48)(local_2b0,local_7b0,0x280);
    _ZN12clap_builder7builder3arg3Arg14conflicts_with17h64605f66e4fd67eeE
              (local_530,local_2b0,"numeric-sort",0xc);
    (*(code *)puVar1)(local_7b0,local_530,0x280);
  }
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf24dc1420a1402d1E
                    ("version-sort",0xc,param_2,param_3);
  puVar1 = PTR_memcpy_00296e48;
  if (cVar2 == '\0') {
    (*(code *)PTR_memcpy_00296e48)(local_2b0,local_7b0,0x280);
    _ZN12clap_builder7builder3arg3Arg14conflicts_with17h64605f66e4fd67eeE
              (local_530,local_2b0,"version-sort",0xc);
    (*(code *)puVar1)(local_7b0,local_530,0x280);
  }
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf24dc1420a1402d1E
                    ("random-sort",0xb,param_2,param_3);
  puVar1 = PTR_memcpy_00296e48;
  if (cVar2 == '\0') {
    (*(code *)PTR_memcpy_00296e48)(local_2b0,local_7b0,0x280);
    _ZN12clap_builder7builder3arg3Arg14conflicts_with17h64605f66e4fd67eeE
              (local_530,local_2b0,"random-sort",0xb);
    (*(code *)puVar1)(local_7b0,local_530,0x280);
  }
  (*(code *)PTR_memcpy_00296e48)(param_1,local_7b0,0x280);
  return;
}