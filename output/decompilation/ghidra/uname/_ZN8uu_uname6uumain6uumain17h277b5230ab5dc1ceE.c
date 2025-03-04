undefined  [16]
_ZN8uu_uname6uumain6uumain17h277b5230ab5dc1ceE(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined8 **ppuVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined auVar11 [16];
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
  undefined local_3f0 [8];
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 *local_3d8;
  code *local_3d0;
  undefined local_3c8 [16];
  undefined *local_3b8;
  undefined8 local_3b0;
  ulong local_3a8;
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
  
  (*(code *)PTR__ZN8uu_uname6uu_app17hbc99068917c28964E_0020e830)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h4d40ba92b41b639eE
            (&local_3b8,&local_2f8,param_1,param_2);
  if (local_3b8 == (undefined *)0x8000000000000000) {
    auVar11 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0020e838
              )();
  }
  else {
    local_3f8 = local_388;
    local_408 = local_398;
    uStack_404 = uStack_394;
    uStack_400 = uStack_390;
    uStack_3fc = uStack_38c;
    local_418 = local_3a8;
    uStack_410 = uStack_3a0;
    local_428 = (long)local_3b8;
    local_420 = local_3b0;
                    /* try { // try from 0015f5ec to 0015f73d has its CatchHandler @ 0015f895 */
    uVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0020e848
            )(&local_428,*(undefined8 *)PTR__ZN8uu_uname7options3ALL17h054e7ec081e21667E_0020e840,
              *(undefined8 *)(PTR__ZN8uu_uname7options3ALL17h054e7ec081e21667E_0020e840 + 8));
    uVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0020e848
            )(&local_428,
              *(undefined8 *)PTR__ZN8uu_uname7options11KERNEL_NAME17h8e29a552d042f066E_0020e850,
              *(undefined8 *)
               (PTR__ZN8uu_uname7options11KERNEL_NAME17h8e29a552d042f066E_0020e850 + 8));
    uVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0020e848
            )(&local_428,
              *(undefined8 *)PTR__ZN8uu_uname7options8NODENAME17h030955f770e48e1bE_0020e858,
              *(undefined8 *)(PTR__ZN8uu_uname7options8NODENAME17h030955f770e48e1bE_0020e858 + 8));
    uVar6 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0020e848
            )(&local_428,
              *(undefined8 *)PTR__ZN8uu_uname7options14KERNEL_RELEASE17h6c8cdfacbe3ebb06E_0020e860,
              *(undefined8 *)
               (PTR__ZN8uu_uname7options14KERNEL_RELEASE17h6c8cdfacbe3ebb06E_0020e860 + 8));
    iVar7 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0020e848
            )(&local_428,
              *(undefined8 *)PTR__ZN8uu_uname7options14KERNEL_VERSION17h386a14a0fc5a7bbdE_0020e868,
              *(undefined8 *)
               (PTR__ZN8uu_uname7options14KERNEL_VERSION17h386a14a0fc5a7bbdE_0020e868 + 8));
    uVar8 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0020e848
            )(&local_428,
              *(undefined8 *)PTR__ZN8uu_uname7options7MACHINE17h2642e1b53ab636dcE_0020e870,
              *(undefined8 *)(PTR__ZN8uu_uname7options7MACHINE17h2642e1b53ab636dcE_0020e870 + 8));
    uVar9 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0020e848
            )(&local_428,
              *(undefined8 *)PTR__ZN8uu_uname7options9PROCESSOR17h85b80fd217463c16E_0020e878,
              *(undefined8 *)(PTR__ZN8uu_uname7options9PROCESSOR17h85b80fd217463c16E_0020e878 + 8));
    uVar10 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0020e848
             )(&local_428,
               *(undefined8 *)
                PTR__ZN8uu_uname7options17HARDWARE_PLATFORM17h46d1d76756312c03E_0020e880,
               *(undefined8 *)
                (PTR__ZN8uu_uname7options17HARDWARE_PLATFORM17h46d1d76756312c03E_0020e880 + 8));
    local_430 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0020e848
                )(&local_428,*(undefined8 *)PTR__ZN8uu_uname7options2OS17h4892fc38c9982147E_0020e888
                  ,*(undefined8 *)(PTR__ZN8uu_uname7options2OS17h4892fc38c9982147E_0020e888 + 8));
    local_438 = (ulong)CONCAT24((ushort)((uVar8 & 0xff) << 8) | uVar6 & 0xff,
                                iVar7 << 0x18 | (uint)CONCAT12(uVar5,CONCAT11(uVar4,uVar3))) |
                (ulong)((uVar10 & 0xff) << 8 | uVar9 & 0xff) << 0x30;
    (*(code *)PTR__ZN8uu_uname11UNameOutput3new17h351ea691cfe1026cE_0020e890)(&local_2f8,&local_438)
    ;
    ppuVar2 = local_2e8;
    auVar11._8_8_ = local_2e8;
    auVar11._0_8_ = local_2f0;
    if (local_2f8 == (undefined *)0x8000000000000001) {
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h38dda6f74d1bca23E
                (&local_428);
    }
    else {
      (*(code *)PTR_memcpy_0020e7d0)(&uStack_3a0,&local_2e0,0xa8);
      local_3b8 = local_2f8;
      local_3b0 = local_2f0;
      local_3a8 = (ulong)local_2e8;
                    /* try { // try from 0015f7a3 to 0015f7b5 has its CatchHandler @ 0015f883 */
      (*(code *)PTR__ZN8uu_uname11UNameOutput7display17hd0fb8855ff2e124dE_0020e898)
                (local_3f0,&local_3b8);
      local_3c8 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17hc9564037a709315fE
                            (local_3e8,local_3e0);
      local_3d8 = (undefined8 *)local_3c8;
      local_3d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h415ff689f5083721E;
      local_2f8 = &DAT_00208900;
      local_2f0 = 2;
      local_2d8 = 0;
      local_2e8 = &local_3d8;
      local_2e0 = 1;
                    /* try { // try from 0015f82e to 0015f83b has its CatchHandler @ 0015f874 */
      (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_0020e8a0)(&local_2f8);
                    /* try { // try from 0015f83c to 0015f845 has its CatchHandler @ 0015f883 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3725b2c42a3d5976E(local_3f0);
                    /* try { // try from 0015f846 to 0015f852 has its CatchHandler @ 0015f895 */
      _ZN4core3ptr42drop_in_place_LT_uu_uname__UNameOutput_GT_17hf72124b3c6314761E(&local_3b8);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h38dda6f74d1bca23E
                (&local_428);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = ppuVar2;
      auVar11 = auVar1 << 0x40;
    }
  }
  return auVar11;
}