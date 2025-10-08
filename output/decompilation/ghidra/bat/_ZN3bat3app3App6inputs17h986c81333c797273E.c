void _ZN3bat3app3App6inputs17h986c81333c797273E(undefined4 *param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  long local_208;
  long local_200;
  long local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  long local_128;
  undefined8 local_120;
  undefined4 *local_118;
  int local_110 [2];
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined local_e8 [56];
  long local_b0 [8];
  long local_70 [8];
  
  puVar12 = (undefined4 *)&DAT_00185489;
  puVar13 = &local_1c8;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17ha33ae1f620f2d9ebE
            (puVar13,param_2,&DAT_00185489,9);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hda9461ab8f9a8888E
            (local_b0,&DAT_00185489,9,puVar13);
  if (local_b0[0] == 0) {
    local_208 = -0x8000000000000000;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h630ea7239f535835E(&local_1c8,local_b0);
    local_208 = CONCAT44(uStack_1c4,local_1c8);
    local_1f0 = CONCAT44(uStack_1bc,uStack_1c0);
    puVar12 = (undefined4 *)CONCAT44(uStack_1b4,local_1b8);
  }
                    /* try { // try from 004a7f42 to 004a7f9a has its CatchHandler @ 004a837d */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17ha33ae1f620f2d9ebE
            (&local_1c8,param_2,&DAT_00181438,4);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hda9461ab8f9a8888E
            (local_70,&DAT_00181438,4,&local_1c8);
  if (local_70[0] == 0) {
    bVar14 = true;
    local_200 = -0x8000000000000000;
    if (local_208 != -0x8000000000000000) goto LAB_004a81c2;
LAB_004a8005:
                    /* try { // try from 004a800b to 004a800f has its CatchHandler @ 004a8378 */
    uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb0b512753cc67665E();
    bVar3 = true;
    ppuVar9 = (undefined **)&DAT_007c83f0;
    bVar2 = true;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h630ea7239f535835E(&local_1c8,local_70);
    local_200 = CONCAT44(uStack_1c4,local_1c8);
    local_1f8 = CONCAT44(uStack_1bc,uStack_1c0);
    puVar13 = (undefined4 *)CONCAT44(uStack_1b4,local_1b8);
    bVar14 = local_200 == -0x8000000000000000;
    if (local_208 == -0x8000000000000000 || bVar14) {
      if (local_208 == -0x8000000000000000) goto LAB_004a8005;
    }
    else if (puVar12 != puVar13) {
      (*(code *)
        PTR__ZN72__LT_bat__error__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h8ad35b8946c9894bE_008079a8
      )(&local_1c8,&DAT_00185464,0x25);
      *(undefined8 *)(param_1 + 0x10) = local_188;
      *(undefined8 *)(param_1 + 0x12) = uStack_180;
      param_1[0xc] = local_198;
      param_1[0xd] = uStack_194;
      param_1[0xe] = uStack_190;
      param_1[0xf] = uStack_18c;
      param_1[8] = local_1a8;
      param_1[9] = uStack_1a4;
      param_1[10] = uStack_1a0;
      param_1[0xb] = uStack_19c;
      param_1[4] = local_1b8;
      param_1[5] = uStack_1b4;
      param_1[6] = uStack_1b0;
      param_1[7] = uStack_1ac;
      *param_1 = local_1c8;
      param_1[1] = uStack_1c4;
      param_1[2] = uStack_1c0;
      param_1[3] = uStack_1bc;
      _ZN4core3ptr91drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT__RF_std__path__Path_GT__GT__GT_17hefbd4e8c9620bbdfE
                (local_200,local_1f8);
      goto LAB_004a8334;
    }
LAB_004a81c2:
    local_128 = local_208;
    local_120 = local_1f0;
    local_118 = puVar12;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hbcb5dc5d4efdabe2E
              (&local_1c8,&local_128);
                    /* try { // try from 004a81fc to 004a8203 has its CatchHandler @ 004a8378 */
    uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h818cf8d1bc96670bE(&local_1c8);
    ppuVar9 = &
              PTR__ZN4core3ptr173drop_in_place_LT_core__iter__adapters__map__Map_LT_alloc__vec__into_iter__IntoIter_LT__RF_std__path__Path_GT__C_core__option__Option_LT__RF_std__path__Path_GT___Some_GT__GT_17h719506a9b28eecdcE_007c8428
    ;
    bVar3 = false;
    bVar2 = false;
  }
  if (!bVar14) {
                    /* try { // try from 004a8038 to 004a803f has its CatchHandler @ 004a83a0 */
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6027369fa272cb20E
                      (local_1f8,(long)puVar13 * 0x10 + local_1f8);
    local_1e0 = 0;
    uStack_1d8 = 8;
    local_1d0 = 0;
    _ZN4core4iter6traits8iterator8Iterator3zip17h11df4a8393c6cbc2E
              (local_e8,uVar6,&DAT_007c8460,uVar7,ppuVar9);
                    /* try { // try from 004a8090 to 004a8167 has its CatchHandler @ 004a8384 */
    while (_ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17h4762d0fb8b5b7d97E
                     (local_110,local_e8), uVar4 = local_f0, uVar6 = local_f8, uVar7 = local_100,
          lVar8 = local_108, local_110[0] == 1) {
      if (local_108 != 0) {
        (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00807588)
                  (&local_1c8,local_108,local_100);
        uVar10 = CONCAT44(uStack_1b4,local_1b8);
        if ((char)local_1c8 != '\0') {
          uVar10 = 0;
        }
        uVar11 = CONCAT44(uStack_1bc,uStack_1c0);
        if ((char)local_1c8 != '\0') {
          uVar11 = 1;
        }
        cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h023f2f6694194809E
                          (uVar11,uVar10,&DAT_00185492,1);
        if (cVar5 == '\0') {
          _ZN3bat5input14new_file_input17h6b300303a93fad8cE(&local_1c8,lVar8,uVar7,uVar6,uVar4);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hb1f08851061528ceE
                    (&local_1e0,&local_1c8,&PTR_DAT_007c8498);
        }
        else {
          _ZN3bat5input15new_stdin_input17h2ae7c09cd685a9f4E(&local_1c8,uVar6,uVar4);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hb1f08851061528ceE
                    (&local_1e0,&local_1c8,&PTR_DAT_007c84b0);
        }
      }
    }
                    /* try { // try from 004a816d to 004a8179 has its CatchHandler @ 004a8366 */
    _ZN4core3ptr346drop_in_place_LT_core__iter__adapters__zip__Zip_LT_alloc__boxed__Box_LT_dyn_u20_core__iter__traits__iterator__Iterator_u2b_Item_u20__u3d__u20_core__option__Option_LT__RF_std__path__Path_GT__GT__C_alloc__boxed__Box_LT_dyn_u20_core__iter__traits__iterator__Iterator_u2b_Item_u20__u3d__u20_core__option__Option_LT__RF_std__path__Path_GT__GT__GT__GT_17hc0cf50eea9912096E
              (local_e8);
    *(undefined8 *)(param_1 + 6) = local_1d0;
    param_1[2] = (undefined4)local_1e0;
    param_1[3] = local_1e0._4_4_;
    param_1[4] = (undefined4)uStack_1d8;
    param_1[5] = uStack_1d8._4_4_;
    *(undefined *)param_1 = 0xd;
    _ZN4core3ptr91drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT__RF_std__path__Path_GT__GT__GT_17hefbd4e8c9620bbdfE
              (local_200,local_1f8);
    return;
  }
  lVar8 = _ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0xa0);
  if (lVar8 == 0) {
                    /* try { // try from 004a8354 to 004a8363 has its CatchHandler @ 004a83a0 */
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00807840)(8,0xa0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* try { // try from 004a823d to 004a8269 has its CatchHandler @ 004a836b */
  (*(code *)ppuVar9[3])(&local_1c8,uVar7);
  if ((char)local_1c8 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = CONCAT44(uStack_1bc,uStack_1c0);
  }
  _ZN3bat5input15new_stdin_input17h2ae7c09cd685a9f4E
            (&local_1c8,uVar6,CONCAT44(uStack_1b4,local_1b8));
  (*(code *)PTR_memcpy_008074c0)(lVar8,&local_1c8,0xa0);
  *(undefined8 *)(param_1 + 2) = 1;
  *(long *)(param_1 + 4) = lVar8;
  *(undefined8 *)(param_1 + 6) = 1;
  *(undefined *)param_1 = 0xd;
                    /* try { // try from 004a8299 to 004a82ed has its CatchHandler @ 004a8378 */
  _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h1f9b5db2161339beE
            (uVar7,ppuVar9);
  _ZN4core3ptr91drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT__RF_std__path__Path_GT__GT__GT_17hefbd4e8c9620bbdfE
            (local_200,local_1f8);
  if ((bVar2) || (!bVar3)) {
    return;
  }
LAB_004a8334:
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17he862375b69ea6ca7E
            (local_208,local_1f0);
  return;
}