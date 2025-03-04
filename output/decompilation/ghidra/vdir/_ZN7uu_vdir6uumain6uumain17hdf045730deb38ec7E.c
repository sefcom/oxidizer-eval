undefined  [16] _ZN7uu_vdir6uumain6uumain17hdf045730deb38ec7E(undefined8 param_1,undefined8 param_2)

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
  
  (*(code *)PTR__ZN7uu_vdir6uu_app17h6da77666f02c6fa6E_003195c8)(local_2f0);
  _ZN12clap_builder7builder7command7Command16get_matches_from17hb66e60ee26842220E
            (local_5a0,local_2f0,param_1,param_2);
                    /* try { // try from 001c4c6a to 001c4dc3 has its CatchHandler @ 001c4fc1 */
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E_003195d8
          )(local_5a0,
            *(undefined8 *)PTR__ZN5uu_ls7options13QUOTING_STYLE17h9bdc8a31bb79b8cdE_003195d0,
            *(undefined8 *)(PTR__ZN5uu_ls7options13QUOTING_STYLE17h9bdc8a31bb79b8cdE_003195d0 + 8));
  if (cVar3 == '\0') {
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195e8
            )(local_5a0,*(undefined8 *)PTR__ZN5uu_ls7options7quoting1C17hc109e26eb7f151f2E_003195e0,
              *(undefined8 *)(PTR__ZN5uu_ls7options7quoting1C17hc109e26eb7f151f2E_003195e0 + 8));
    if (cVar3 != '\0') goto LAB_001c4cb5;
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195e8
            )(local_5a0,
              *(undefined8 *)PTR__ZN5uu_ls7options7quoting6ESCAPE17h368215d4cb9bc296E_003195f0,
              *(undefined8 *)(PTR__ZN5uu_ls7options7quoting6ESCAPE17h368215d4cb9bc296E_003195f0 + 8)
             );
    if (cVar3 != '\0') goto LAB_001c4cb5;
                    /* try { // try from 001c4f76 to 001c4fa3 has its CatchHandler @ 001c4fc1 */
    bVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195e8
            )(local_5a0,
              *(undefined8 *)PTR__ZN5uu_ls7options7quoting7LITERAL17h7385bf214193a8a8E_00319650,
              *(undefined8 *)
               (PTR__ZN5uu_ls7options7quoting7LITERAL17h7385bf214193a8a8E_00319650 + 8));
    bVar4 = bVar4 ^ 1;
  }
  else {
LAB_001c4cb5:
    bVar4 = 0;
  }
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E_003195d8
          )(local_5a0,*(undefined8 *)PTR__ZN5uu_ls7options6FORMAT17h7274b106b2ba33e5E_003195f8,
            *(undefined8 *)(PTR__ZN5uu_ls7options6FORMAT17h7274b106b2ba33e5E_003195f8 + 8));
  if (cVar3 == '\0') {
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195e8
            )(local_5a0,
              *(undefined8 *)PTR__ZN5uu_ls7options6format6ACROSS17h671846789e2112eaE_00319600,
              *(undefined8 *)(PTR__ZN5uu_ls7options6format6ACROSS17h671846789e2112eaE_00319600 + 8))
    ;
    if (cVar3 == '\0') {
      cVar3 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195e8
              )(local_5a0,
                *(undefined8 *)PTR__ZN5uu_ls7options6format7COLUMNS17h4dccf0756e3b7d4fE_00319608,
                *(undefined8 *)
                 (PTR__ZN5uu_ls7options6format7COLUMNS17h4dccf0756e3b7d4fE_00319608 + 8));
      if (cVar3 == '\0') {
        cVar3 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195e8
                )(local_5a0,
                  *(undefined8 *)PTR__ZN5uu_ls7options6format6COMMAS17h7feeca4e639ca720E_00319610,
                  *(undefined8 *)
                   (PTR__ZN5uu_ls7options6format6COMMAS17h7feeca4e639ca720E_00319610 + 8));
        if (cVar3 == '\0') {
          cVar3 = (*(code *)
                    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195e8
                  )(local_5a0,
                    *(undefined8 *)PTR__ZN5uu_ls7options6format4LONG17h88813a22b172323aE_00319618,
                    *(undefined8 *)
                     (PTR__ZN5uu_ls7options6format4LONG17h88813a22b172323aE_00319618 + 8));
          if (cVar3 == '\0') {
            cVar3 = (*(code *)
                      PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195e8
                    )(local_5a0,
                      *(undefined8 *)
                       PTR__ZN5uu_ls7options6format13LONG_NO_GROUP17h2e687fcc136dc471E_00319620,
                      *(undefined8 *)
                       (PTR__ZN5uu_ls7options6format13LONG_NO_GROUP17h2e687fcc136dc471E_00319620 + 8
                       ));
            if (cVar3 == '\0') {
              cVar3 = (*(code *)
                        PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195e8
                      )(local_5a0,
                        *(undefined8 *)
                         PTR__ZN5uu_ls7options6format13LONG_NO_OWNER17h5cdbd26e40a124d6E_00319628,
                        *(undefined8 *)
                         (PTR__ZN5uu_ls7options6format13LONG_NO_OWNER17h5cdbd26e40a124d6E_00319628 +
                         8));
              if (cVar3 == '\0') {
                cVar3 = (*(code *)
                          PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195e8
                        )(local_5a0,
                          *(undefined8 *)
                           PTR__ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17he1e52fd646432ed3E_00319630
                          ,*(undefined8 *)
                            (
                            PTR__ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17he1e52fd646432ed3E_00319630
                            + 8));
                if (cVar3 == '\0') {
                  bVar5 = (*(code *)
                            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_003195e8
                          )(local_5a0,
                            *(undefined8 *)
                             PTR__ZN5uu_ls7options6format8ONE_LINE17hbdf1d5605899220dE_00319658,
                            *(undefined8 *)
                             (PTR__ZN5uu_ls7options6format8ONE_LINE17hbdf1d5605899220dE_00319658 + 8
                             ));
                  bVar5 = bVar5 ^ 1;
                  goto LAB_001c4db1;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar5 = 0;
LAB_001c4db1:
  (*(code *)PTR__ZN5uu_ls6Config4from17h304081f9da8d7174E_00319638)(&local_4f8,local_5a0);
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
      local_2f8 = 1;
    }
    uVar1 = *(undefined8 *)PTR__ZN5uu_ls7options5PATHS17hbdf78393493f0f48E_00319640;
    uVar2 = *(undefined8 *)(PTR__ZN5uu_ls7options5PATHS17hbdf78393493f0f48E_00319640 + 8);
                    /* try { // try from 001c4e51 to 001c4f34 has its CatchHandler @ 001c4faf */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h68f93de5f4174f94E
              (&local_4f8,local_5a0,uVar1,uVar2);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17hac80e085b8972775E
              (&local_538,uVar1,uVar2,&local_4f8);
    if (CONCAT44(uStack_534,local_538) == 0) {
      _ZN7uu_vdir6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h0d6d4d4f8b23538aE(&local_568);
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
      _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17hc94dea1372631127E
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
    auVar6 = (*(code *)PTR__ZN5uu_ls4list17h6ddc1ea5566af8ccE_00319648)(&local_4f8,&local_3f0);
                    /* try { // try from 001c4f35 to 001c4f47 has its CatchHandler @ 001c4fc1 */
    _ZN4core3ptr34drop_in_place_LT_uu_ls__Config_GT_17hd4404c6f8c794faaE(&local_3f0);
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hecf564f07f4c5e01E
            (local_5a0);
  return auVar6;
}