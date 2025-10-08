undefined  [16]
_ZN8uu_uname6uumain6uumain17h7aceabc7020779d6E(undefined8 param_1,undefined8 param_2)

{
  undefined uVar1;
  undefined uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined auVar9 [16];
  ulong local_438;
  undefined local_430;
  long local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 *local_3d8;
  code *local_3d0;
  undefined local_3c8 [16];
  undefined *local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined *local_2f8;
  undefined8 local_2f0;
  undefined8 **local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  
  (*(code *)PTR__ZN8uu_uname6uu_app17h498fd26d6b647696E_001e05b0)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h4c779ee413b803e4E
            (&local_3b8,&local_2f8,param_1,param_2);
  local_3f8 = local_388;
  local_408 = local_398;
  uStack_404 = uStack_394;
  uStack_400 = uStack_390;
  uStack_3fc = uStack_38c;
  local_418 = local_3a8;
  uStack_410 = uStack_3a0;
  local_428 = (long)local_3b8;
  local_420 = local_3b0;
                    /* try { // try from 0014f795 to 0014f8e4 has its CatchHandler @ 0014fa4f */
  uVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e05c8
          )(&local_428,*(undefined8 *)PTR__ZN8uu_uname7options3ALL17haabcdd4476d20968E_001e05c0,
            *(undefined8 *)(PTR__ZN8uu_uname7options3ALL17haabcdd4476d20968E_001e05c0 + 8));
  uVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e05c8
          )(&local_428,
            *(undefined8 *)PTR__ZN8uu_uname7options11KERNEL_NAME17h78d334e645184c09E_001e05d0,
            *(undefined8 *)(PTR__ZN8uu_uname7options11KERNEL_NAME17h78d334e645184c09E_001e05d0 + 8))
  ;
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e05c8
          )(&local_428,*(undefined8 *)PTR__ZN8uu_uname7options8NODENAME17h453bacc09e501817E_001e05d8
            ,*(undefined8 *)(PTR__ZN8uu_uname7options8NODENAME17h453bacc09e501817E_001e05d8 + 8));
  uVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e05c8
          )(&local_428,
            *(undefined8 *)PTR__ZN8uu_uname7options14KERNEL_RELEASE17h01c2bfcabb04e2f4E_001e05e0,
            *(undefined8 *)
             (PTR__ZN8uu_uname7options14KERNEL_RELEASE17h01c2bfcabb04e2f4E_001e05e0 + 8));
  iVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e05c8
          )(&local_428,
            *(undefined8 *)PTR__ZN8uu_uname7options14KERNEL_VERSION17h3c7ca358447cda74E_001e05e8,
            *(undefined8 *)
             (PTR__ZN8uu_uname7options14KERNEL_VERSION17h3c7ca358447cda74E_001e05e8 + 8));
  uVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e05c8
          )(&local_428,*(undefined8 *)PTR__ZN8uu_uname7options7MACHINE17h9ff0cb9ef2dc676cE_001e05f0,
            *(undefined8 *)(PTR__ZN8uu_uname7options7MACHINE17h9ff0cb9ef2dc676cE_001e05f0 + 8));
  uVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e05c8
          )(&local_428,
            *(undefined8 *)PTR__ZN8uu_uname7options9PROCESSOR17he2cbef3058cabd62E_001e05f8,
            *(undefined8 *)(PTR__ZN8uu_uname7options9PROCESSOR17he2cbef3058cabd62E_001e05f8 + 8));
  uVar8 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e05c8
          )(&local_428,
            *(undefined8 *)PTR__ZN8uu_uname7options17HARDWARE_PLATFORM17h0a1e55ff84c4c273E_001e0600,
            *(undefined8 *)
             (PTR__ZN8uu_uname7options17HARDWARE_PLATFORM17h0a1e55ff84c4c273E_001e0600 + 8));
  local_430 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e05c8
              )(&local_428,*(undefined8 *)PTR__ZN8uu_uname7options2OS17h85e9c59c89e25749E_001e0608,
                *(undefined8 *)(PTR__ZN8uu_uname7options2OS17h85e9c59c89e25749E_001e0608 + 8));
  local_438 = (ulong)CONCAT24((ushort)((uVar6 & 0xff) << 8) | uVar3 & 0xff,
                              iVar5 << 0x18 | (uVar4 & 0xff) << 0x10 | (uint)CONCAT11(uVar2,uVar1))
              | (ulong)((uVar8 & 0xff) << 8 | uVar7 & 0xff) << 0x30;
  (*(code *)PTR__ZN8uu_uname11UNameOutput3new17h8729604a17648380E_001e0610)(&local_2f8,&local_438);
  if (local_2f8 == (undefined *)0x8000000000000001) {
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h4d1b1d6ae62b9a64E
              (&local_428);
  }
  else {
    (*(code *)PTR_memcpy_001e0568)(&uStack_3a0,&local_2e0,0xa8);
    local_3b8 = local_2f8;
    local_3b0 = local_2f0;
    local_3a8 = local_2e8;
                    /* try { // try from 0014f954 to 0014f966 has its CatchHandler @ 0014fa3d */
    (*(code *)PTR__ZN8uu_uname11UNameOutput7display17hd46e899639185bb3E_001e0618)
              (&local_3f0,&local_3b8);
    local_3c8 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17h6f828d1310d332a9E
                          (local_3e8,local_3e0);
    local_3d8 = (undefined8 *)local_3c8;
    local_3d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h228d75d66c3b9798E;
    local_2f8 = &DAT_001d9788;
    local_2f0 = 2;
    local_2d8 = 0;
    local_2e8 = &local_3d8;
    local_2e0 = 1;
                    /* try { // try from 0014f9e2 to 0014f9ef has its CatchHandler @ 0014fa2b */
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001e0620)(&local_2f8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hef8ab74d1209e6f3E
              (local_3f0,local_3e8);
    _ZN4core3ptr42drop_in_place_LT_uu_uname__UNameOutput_GT_17h0289b97ecf8237feE(&local_3b8);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h4d1b1d6ae62b9a64E
              (&local_428);
    local_2f0 = 0;
    local_2e8 = (undefined8 **)local_3e8;
  }
  auVar9._8_8_ = local_2e8;
  auVar9._0_8_ = local_2f0;
  return auVar9;
}