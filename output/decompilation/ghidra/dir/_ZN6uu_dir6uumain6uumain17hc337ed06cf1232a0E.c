undefined  [16] _ZN6uu_dir6uumain6uumain17hc337ed06cf1232a0E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  undefined auVar7 [16];
  undefined auStack_598 [56];
  undefined8 local_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined local_530 [248];
  long local_438 [8];
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined local_3e0 [228];
  undefined2 local_2fc;
  undefined local_2f8;
  undefined local_2f0 [712];
  
  (*(code *)PTR__ZN6uu_dir6uu_app17h86e6a124718e5635E_0048b7a0)(local_2f0);
  _ZN12clap_builder7builder7command7Command16get_matches_from17h6d0400961aaa8a70E
            (auStack_598,local_2f0,param_1,param_2);
                    /* try { // try from 00272dd8 to 00272f18 has its CatchHandler @ 002730ac */
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_0048b7b0
          )(auStack_598,
            *(undefined8 *)PTR__ZN5uu_ls7options13QUOTING_STYLE17h16f26274bec2219cE_0048b7a8,
            *(undefined8 *)(PTR__ZN5uu_ls7options13QUOTING_STYLE17h16f26274bec2219cE_0048b7a8 + 8));
  if (((cVar4 == '\0') &&
      (cVar4 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048b7c0
               )(auStack_598,
                 *(undefined8 *)PTR__ZN5uu_ls7options7quoting1C17hd587cbb08c1af7d0E_0048b7b8,
                 *(undefined8 *)(PTR__ZN5uu_ls7options7quoting1C17hd587cbb08c1af7d0E_0048b7b8 + 8)),
      cVar4 == '\0')) &&
     (cVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048b7c0
              )(auStack_598,
                *(undefined8 *)PTR__ZN5uu_ls7options7quoting6ESCAPE17he30ec2e55b9bdfacE_0048b7c8,
                *(undefined8 *)
                 (PTR__ZN5uu_ls7options7quoting6ESCAPE17he30ec2e55b9bdfacE_0048b7c8 + 8)),
     cVar4 == '\0')) {
                    /* try { // try from 00273065 to 0027308e has its CatchHandler @ 002730ac */
    bVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048b7c0
            )(auStack_598,
              *(undefined8 *)PTR__ZN5uu_ls7options7quoting7LITERAL17h567c390bbb33a38fE_0048b828,
              *(undefined8 *)
               (PTR__ZN5uu_ls7options7quoting7LITERAL17h567c390bbb33a38fE_0048b828 + 8));
    bVar5 = bVar5 ^ 1;
  }
  else {
    bVar5 = 0;
  }
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_0048b7b0
          )(auStack_598,*(undefined8 *)PTR__ZN5uu_ls7options6FORMAT17h41818ba09e12d5b4E_0048b7d0,
            *(undefined8 *)(PTR__ZN5uu_ls7options6FORMAT17h41818ba09e12d5b4E_0048b7d0 + 8));
  if (((((cVar4 == '\0') &&
        (cVar4 = (*(code *)
                   PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048b7c0
                 )(auStack_598,
                   *(undefined8 *)PTR__ZN5uu_ls7options6format6ACROSS17h570ef376038bfa19E_0048b7d8,
                   *(undefined8 *)
                    (PTR__ZN5uu_ls7options6format6ACROSS17h570ef376038bfa19E_0048b7d8 + 8)),
        cVar4 == '\0')) &&
       ((cVar4 = (*(code *)
                   PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048b7c0
                 )(auStack_598,
                   *(undefined8 *)PTR__ZN5uu_ls7options6format7COLUMNS17hbf207e8365dce655E_0048b7e0,
                   *(undefined8 *)
                    (PTR__ZN5uu_ls7options6format7COLUMNS17hbf207e8365dce655E_0048b7e0 + 8)),
        cVar4 == '\0' &&
        ((cVar4 = (*(code *)
                    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048b7c0
                  )(auStack_598,
                    *(undefined8 *)PTR__ZN5uu_ls7options6format6COMMAS17h4a9843686f3e3fe2E_0048b7e8,
                    *(undefined8 *)
                     (PTR__ZN5uu_ls7options6format6COMMAS17h4a9843686f3e3fe2E_0048b7e8 + 8)),
         cVar4 == '\0' &&
         (cVar4 = (*(code *)
                    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048b7c0
                  )(auStack_598,
                    *(undefined8 *)PTR__ZN5uu_ls7options6format4LONG17hb0ee7ed3f258c1fcE_0048b7f0,
                    *(undefined8 *)
                     (PTR__ZN5uu_ls7options6format4LONG17hb0ee7ed3f258c1fcE_0048b7f0 + 8)),
         cVar4 == '\0')))))) &&
      (cVar4 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048b7c0
               )(auStack_598,
                 *(undefined8 *)
                  PTR__ZN5uu_ls7options6format13LONG_NO_GROUP17h5b339f6fa29a5d21E_0048b7f8,
                 *(undefined8 *)
                  (PTR__ZN5uu_ls7options6format13LONG_NO_GROUP17h5b339f6fa29a5d21E_0048b7f8 + 8)),
      cVar4 == '\0')) &&
     ((cVar4 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048b7c0
               )(auStack_598,
                 *(undefined8 *)
                  PTR__ZN5uu_ls7options6format13LONG_NO_OWNER17ha86266a3188cca4cE_0048b800,
                 *(undefined8 *)
                  (PTR__ZN5uu_ls7options6format13LONG_NO_OWNER17ha86266a3188cca4cE_0048b800 + 8)),
      cVar4 == '\0' &&
      (cVar4 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048b7c0
               )(auStack_598,
                 *(undefined8 *)
                  PTR__ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17h28a041cb006d8268E_0048b808,
                 *(undefined8 *)
                  (PTR__ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17h28a041cb006d8268E_0048b808 +
                  8)), cVar4 == '\0')))) {
    bVar6 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048b7c0
            )(auStack_598,
              *(undefined8 *)PTR__ZN5uu_ls7options6format8ONE_LINE17h3ac9917a7db01231E_0048b830,
              *(undefined8 *)
               (PTR__ZN5uu_ls7options6format8ONE_LINE17h3ac9917a7db01231E_0048b830 + 8));
    bVar6 = bVar6 ^ 1;
  }
  else {
    bVar6 = 0;
  }
  (*(code *)PTR__ZN5uu_ls6Config4from17h82af185516eb5913E_0048b810)(&local_548,auStack_598);
  uVar3 = uStack_538;
  uVar2 = local_540;
  uVar1 = local_548;
  (*(code *)PTR_memcpy_0048b6e8)(local_3e0,local_530,0xf0);
  local_3f8 = uVar1;
  local_3f0 = uVar2;
  local_3e8 = uVar3;
  if (bVar5 != 0) {
    local_2fc = 2;
  }
  if (bVar6 != 0) {
    local_2f8 = 0;
  }
  uVar1 = *(undefined8 *)PTR__ZN5uu_ls7options5PATHS17h978caca964396fddE_0048b818;
  uVar2 = *(undefined8 *)(PTR__ZN5uu_ls7options5PATHS17h978caca964396fddE_0048b818 + 8);
                    /* try { // try from 00272f8d to 00273025 has its CatchHandler @ 0027309a */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hb94bcc347e2ab74fE
            (&local_548,auStack_598,uVar1,uVar2);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h504aa377127d19acE
            (local_438,uVar1,uVar2,&local_548);
  if (local_438[0] == 0) {
    _ZN6uu_dir6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17he0cf39fca549366aE(&local_560);
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h5654be82f1690a47E(&local_548,local_438);
    local_558 = (undefined4)local_540;
    uStack_554 = local_540._4_4_;
    uStack_550 = (undefined4)uStack_538;
    uStack_54c = uStack_538._4_4_;
    local_560 = local_548;
  }
  uStack_538 = CONCAT44(uStack_54c,uStack_550);
  local_548 = local_560;
  local_540 = CONCAT44(uStack_554,local_558);
  auVar7 = (*(code *)PTR__ZN5uu_ls4list17hbc04f019ee17b84aE_0048b820)(&local_548,&local_3f8);
                    /* try { // try from 00273026 to 00273038 has its CatchHandler @ 002730ac */
  _ZN4core3ptr34drop_in_place_LT_uu_ls__Config_GT_17h5689a6b3bc42293aE(&local_3f8);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h626df2bee537cf83E
            (auStack_598);
  return auVar7;
}