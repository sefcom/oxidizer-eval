undefined  [16] _ZN7uu_echo6uumain6uumain17h0a7e780663d83ed5E(undefined8 param_1,undefined8 param_2)

{
  undefined uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined8 local_370;
  undefined local_368 [56];
  long local_330 [8];
  undefined8 local_2f0 [89];
  
  (*(code *)PTR__ZN7uu_echo6uu_app17hac082564844c1592E_002091a8)(local_2f0);
  _ZN12clap_builder7builder7command7Command16get_matches_from17hc64b423ca8b1bc86E
            (local_368,local_2f0,param_1,param_2);
                    /* try { // try from 0015d6bc to 0015d707 has its CatchHandler @ 0015d7e6 */
  uVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002091b0
          )(local_368,"no_newline",10);
  uVar4 = (ulong)uVar2;
  uVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002091b0
          )(local_368,"enable_backslash_escape",0x17);
  local_2f0[0] = (*(code *)PTR__ZN3std2io5stdio6stdout17h077da66234850927E_002091b8)();
  local_370 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E_002091c0)(local_2f0);
                    /* try { // try from 0015d70d to 0015d78e has its CatchHandler @ 0015d7d7 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h12533fceda9f49bdE
            (local_2f0,local_368,"STRING",6);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hb3371b5fc2ddc015E(local_330,local_2f0);
  if (local_330[0] == 0) {
    if (((char)uVar2 == '\0') &&
       (lVar3 = (*(code *)
                  PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E_002091d0
                )(&local_370,"\n",1), lVar3 != 0)) {
      auVar5 = (*(code *)
                 PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE_002091d8
               )(lVar3);
      goto LAB_0015d78f;
    }
  }
  else {
    uVar4 = (ulong)uVar2 ^ 1;
    auVar5 = (*(code *)PTR__ZN7uu_echo7execute17h70a095d897960844E_002091c8)
                       (&local_370,uVar4 & 0xff,uVar1,local_330);
    if (auVar5._0_8_ != 0) {
LAB_0015d78f:
                    /* try { // try from 0015d79a to 0015d79e has its CatchHandler @ 0015d7e6 */
      _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17ha220d356cfc00f60E(local_370);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hb403a57a7b833e43E
                (local_368);
      return auVar5;
    }
  }
                    /* try { // try from 0015d7b3 to 0015d7b7 has its CatchHandler @ 0015d7e6 */
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17ha220d356cfc00f60E(local_370);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hb403a57a7b833e43E
            (local_368);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar4;
  return auVar5 << 0x40;
}