undefined  [16] _ZN6uu_dir6uumain6uumain17hd52e6a15825b1263E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined auVar6 [16];
  undefined local_5a0 [56];
  long local_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  long local_550;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  long local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  long local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined local_3d8 [221];
  undefined local_2fb;
  undefined local_2f9;
  undefined local_2f8;
  undefined local_2f0 [712];
  
  (*(code *)PTR__ZN6uu_dir6uu_app17he3101ebc7bd9a2bdE_003195b8)(local_2f0);
  _ZN12clap_builder7builder7command7Command16get_matches_from17h6782c68bc326c5e5E
            (local_5a0,local_2f0,param_1,param_2);
                    /* try { // try from 001c4aea to 001c4c43 has its CatchHandler @ 001c4e41 */
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E_003195c8
          )(local_5a0,
            *(undefined8 *)PTR__ZN5uu_ls7options13QUOTING_STYLE17h9bdc8a31bb79b8cdE_003195c0,
            *(undefined8 *)(PTR__ZN5uu_ls7options13QUOTING_STYLE17h9bdc8a31bb79b8cdE_003195c0 + 8));
  if (cVar3 == '\0') {
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195d8
            )(local_5a0,*(undefined8 *)PTR__ZN5uu_ls7options7quoting1C17hc109e26eb7f151f2E_003195d0,
              *(undefined8 *)(PTR__ZN5uu_ls7options7quoting1C17hc109e26eb7f151f2E_003195d0 + 8));
    if (cVar3 != '\0') goto LAB_001c4b35;
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195d8
            )(local_5a0,
              *(undefined8 *)PTR__ZN5uu_ls7options7quoting6ESCAPE17h368215d4cb9bc296E_003195e0,
              *(undefined8 *)(PTR__ZN5uu_ls7options7quoting6ESCAPE17h368215d4cb9bc296E_003195e0 + 8)
             );
    if (cVar3 != '\0') goto LAB_001c4b35;
                    /* try { // try from 001c4df6 to 001c4e23 has its CatchHandler @ 001c4e41 */
    bVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195d8
            )(local_5a0,
              *(undefined8 *)PTR__ZN5uu_ls7options7quoting7LITERAL17h7385bf214193a8a8E_00319640,
              *(undefined8 *)
               (PTR__ZN5uu_ls7options7quoting7LITERAL17h7385bf214193a8a8E_00319640 + 8));
    bVar4 = bVar4 ^ 1;
  }
  else {
LAB_001c4b35:
    bVar4 = 0;
  }
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E_003195c8
          )(local_5a0,*(undefined8 *)PTR__ZN5uu_ls7options6FORMAT17h7274b106b2ba33e5E_003195e8,
            *(undefined8 *)(PTR__ZN5uu_ls7options6FORMAT17h7274b106b2ba33e5E_003195e8 + 8));
  if (cVar3 == '\0') {
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195d8
            )(local_5a0,
              *(undefined8 *)PTR__ZN5uu_ls7options6format6ACROSS17h671846789e2112eaE_003195f0,
              *(undefined8 *)(PTR__ZN5uu_ls7options6format6ACROSS17h671846789e2112eaE_003195f0 + 8))
    ;
    if (cVar3 == '\0') {
      cVar3 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195d8
              )(local_5a0,
                *(undefined8 *)PTR__ZN5uu_ls7options6format7COLUMNS17h4dccf0756e3b7d4fE_003195f8,
                *(undefined8 *)
                 (PTR__ZN5uu_ls7options6format7COLUMNS17h4dccf0756e3b7d4fE_003195f8 + 8));
      if (cVar3 == '\0') {
        cVar3 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195d8
                )(local_5a0,
                  *(undefined8 *)PTR__ZN5uu_ls7options6format6COMMAS17h7feeca4e639ca720E_00319600,
                  *(undefined8 *)
                   (PTR__ZN5uu_ls7options6format6COMMAS17h7feeca4e639ca720E_00319600 + 8));
        if (cVar3 == '\0') {
          cVar3 = (*(code *)
                    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195d8
                  )(local_5a0,
                    *(undefined8 *)PTR__ZN5uu_ls7options6format4LONG17h88813a22b172323aE_00319608,
                    *(undefined8 *)
                     (PTR__ZN5uu_ls7options6format4LONG17h88813a22b172323aE_00319608 + 8));
          if (cVar3 == '\0') {
            cVar3 = (*(code *)
                      PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195d8
                    )(local_5a0,
                      *(undefined8 *)
                       PTR__ZN5uu_ls7options6format13LONG_NO_GROUP17h2e687fcc136dc471E_00319610,
                      *(undefined8 *)
                       (PTR__ZN5uu_ls7options6format13LONG_NO_GROUP17h2e687fcc136dc471E_00319610 + 8
                       ));
            if (cVar3 == '\0') {
              cVar3 = (*(code *)
                        PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195d8
                      )(local_5a0,
                        *(undefined8 *)
                         PTR__ZN5uu_ls7options6format13LONG_NO_OWNER17h5cdbd26e40a124d6E_00319618,
                        *(undefined8 *)
                         (PTR__ZN5uu_ls7options6format13LONG_NO_OWNER17h5cdbd26e40a124d6E_00319618 +
                         8));
              if (cVar3 == '\0') {
                cVar3 = (*(code *)
                          PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195d8
                        )(local_5a0,
                          *(undefined8 *)
                           PTR__ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17he1e52fd646432ed3E_00319620
                          ,*(undefined8 *)
                            (
                            PTR__ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17he1e52fd646432ed3E_00319620
                            + 8));
                if (cVar3 == '\0') {
                  bVar5 = (*(code *)
                            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195d8
                          )(local_5a0,
                            *(undefined8 *)
                             PTR__ZN5uu_ls7options6format8ONE_LINE17hbdf1d5605899220dE_00319648,
                            *(undefined8 *)
                             (PTR__ZN5uu_ls7options6format8ONE_LINE17hbdf1d5605899220dE_00319648 + 8
                             ));
                  bVar5 = bVar5 ^ 1;
                  goto LAB_001c4c31;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar5 = 0;
LAB_001c4c31:
  (*(code *)PTR__ZN5uu_ls6Config4from17h304081f9da8d7174E_00319628)(&local_4f8,local_5a0);
  auVar6._8_8_ = local_4e8;
  auVar6._0_8_ = uStack_4f0;
  if (local_4f8 != -0x8000000000000000) {
    (*(code *)PTR_memcpy_00319548)(local_3d8,&uStack_4e0,0xe8);
    local_3f0 = local_4f8;
    local_3e8 = uStack_4f0;
    local_3e0 = local_4e8;
    if (bVar4 != 0) {
      local_2fb = 0;
      local_2f9 = 2;
    }
    if (bVar5 != 0) {
      local_2f8 = 0;
    }
    uVar1 = *(undefined8 *)PTR__ZN5uu_ls7options5PATHS17hbdf78393493f0f48E_00319630;
    uVar2 = *(undefined8 *)(PTR__ZN5uu_ls7options5PATHS17hbdf78393493f0f48E_00319630 + 8);
                    /* try { // try from 001c4cd1 to 001c4db4 has its CatchHandler @ 001c4e2f */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17ha6c1a7eac38a6eabE
              (&local_4f8,local_5a0,uVar1,uVar2);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h1ab6576cc5f5749aE
              (&local_538,uVar1,uVar2,&local_4f8);
    if (CONCAT44(uStack_534,local_538) == 0) {
      _ZN6uu_dir6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h8478ec9724f4b289E(&local_568);
    }
    else {
      local_4c8 = local_508;
      uStack_4c4 = uStack_504;
      uStack_4c0 = uStack_500;
      uStack_4bc = uStack_4fc;
      local_4d8 = local_518;
      uStack_4d4 = uStack_514;
      uStack_4d0 = uStack_510;
      uStack_4cc = uStack_50c;
      uStack_4e0 = uStack_520;
      uStack_4dc = uStack_51c;
      _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17h80e25043356daf1cE
                (&local_550,&local_4f8);
      local_560 = local_548;
      uStack_55c = uStack_544;
      uStack_558 = uStack_540;
      uStack_554 = uStack_53c;
      local_568 = local_550;
    }
    local_4e8 = CONCAT44(uStack_554,uStack_558);
    local_4f8 = local_568;
    uStack_4f0 = CONCAT44(uStack_55c,local_560);
    auVar6 = (*(code *)PTR__ZN5uu_ls4list17h6ddc1ea5566af8ccE_00319638)(&local_4f8,&local_3f0);
                    /* try { // try from 001c4db5 to 001c4dc7 has its CatchHandler @ 001c4e41 */
    _ZN4core3ptr34drop_in_place_LT_uu_ls__Config_GT_17h037aaa778408e670E(&local_3f0);
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h88cc932e0be994aeE
            (local_5a0);
  return auVar6;
}