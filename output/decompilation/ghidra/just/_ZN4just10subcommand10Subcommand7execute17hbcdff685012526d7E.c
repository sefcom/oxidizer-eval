char * _ZN4just10subcommand10Subcommand7execute17hbcdff685012526d7E
                 (char *param_1,ulong *param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined7 uVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  undefined8 uVar7;
  undefined5 uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 local_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined local_7a8;
  undefined7 uStack_7a7;
  undefined uStack_7a0;
  undefined7 uStack_79f;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined local_788;
  undefined7 uStack_787;
  undefined8 local_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined8 local_750;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 local_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  char local_6f0;
  undefined4 uStack_6ef;
  undefined2 uStack_6eb;
  undefined uStack_6e9;
  undefined uStack_6e8;
  undefined4 uStack_6e7;
  undefined2 uStack_6e3;
  undefined uStack_6e1;
  undefined uStack_6e0;
  undefined4 uStack_6df;
  undefined2 uStack_6db;
  undefined uStack_6d9;
  undefined uStack_6d8;
  undefined4 uStack_6d7;
  undefined2 uStack_6d3;
  undefined uStack_6d1;
  undefined uStack_6d0;
  undefined4 uStack_6cf;
  undefined2 uStack_6cb;
  undefined uStack_6c9;
  undefined local_6c8;
  undefined4 uStack_6c7;
  undefined4 uStack_6c3;
  undefined4 uStack_6bf;
  undefined4 uStack_6bb;
  undefined4 uStack_6b7;
  undefined4 uStack_6b3;
  undefined7 uStack_6af;
  undefined local_6a8;
  undefined7 uStack_6a7;
  undefined uStack_6a0;
  undefined7 uStack_69f;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined8 local_688;
  undefined local_680 [752];
  undefined local_390 [8];
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined local_320 [752];
  
  uVar12 = *param_2;
  if ((uVar12 ^ 0x8000000000000000) < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x0038bcfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar9 = (char *)(*(code *)((long)&UINT_0016ad18 + (long)(int)(&UINT_0016ad18)[uVar12]))
                               ((code *)((long)&UINT_0016ad18 + (long)(int)(&UINT_0016ad18)[uVar12])
                               );
    return pcVar9;
  }
  if (*(long *)(param_3 + 0x78) == -0x8000000000000000) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_3 + 0x80);
  }
  _ZN4just6search6Search4find17h1e33858e96fbd947E
            (&local_6f0,uVar11,*(undefined8 *)(param_3 + 0x88),*(undefined8 *)(param_3 + 0x20),
             *(undefined8 *)(param_3 + 0x28),param_3 + 0x108);
  local_778 = CONCAT17(uStack_6e9,CONCAT25(uStack_6eb,CONCAT41(uStack_6ef,local_6f0)));
  uVar2 = CONCAT25(uStack_6e3,CONCAT41(uStack_6e7,uStack_6e8));
  uVar11 = CONCAT17(uStack_6e1,uVar2);
  uVar4 = CONCAT25(uStack_6db,CONCAT41(uStack_6df,uStack_6e0));
  uVar3 = CONCAT17(uStack_6d9,uVar4);
  uVar6 = CONCAT25(uStack_6d3,CONCAT41(uStack_6d7,uStack_6d8));
  uVar5 = CONCAT17(uStack_6d1,uVar6);
  uVar8 = CONCAT41(uStack_6cf,uStack_6d0);
  uVar7 = CONCAT17(uStack_6c9,CONCAT25(uStack_6cb,uVar8));
  if (local_778 == -0x8000000000000000) {
    uStack_6d3 = (undefined2)((ulong)uVar5 >> 0x30);
    uStack_6cf = (undefined4)(CONCAT25(uStack_6cb,uVar8) >> 0x10);
    uStack_6cb = (undefined2)((ulong)uVar7 >> 0x30);
    uStack_6e3 = (undefined2)((ulong)uVar11 >> 0x30);
    uStack_6db = (undefined2)((ulong)uVar3 >> 0x30);
    *param_1 = '*';
    *(ulong *)(param_1 + 1) =
         CONCAT17(uStack_6e8,CONCAT25(uStack_6eb,CONCAT41(uStack_6ef,local_6f0)));
    *(ulong *)(param_1 + 9) = CONCAT17(uStack_6e0,CONCAT25(uStack_6e3,(int5)((uint7)uVar2 >> 8)));
    *(ulong *)(param_1 + 0x11) = CONCAT17(uStack_6d8,CONCAT25(uStack_6db,(int5)((uint7)uVar4 >> 8)))
    ;
    *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_6d0,CONCAT25(uStack_6d3,(int5)((uint7)uVar6 >> 8)))
    ;
    *(ulong *)(param_1 + 0x20) = CONCAT26(uStack_6cb,CONCAT42(uStack_6cf,(short)uVar8));
    return param_1;
  }
  local_750 = CONCAT35((undefined3)uStack_6c3,CONCAT41(uStack_6c7,local_6c8));
  local_748 = (undefined4)CONCAT41(uStack_6e7,uStack_6e8);
  uStack_744 = (undefined4)((ulong)uVar11 >> 0x20);
  uStack_740 = (undefined4)CONCAT41(uStack_6df,uStack_6e0);
  uStack_73c = (undefined4)((ulong)uVar3 >> 0x20);
  local_738 = (undefined4)CONCAT41(uStack_6d7,uStack_6d8);
  uStack_734 = (undefined4)((ulong)uVar5 >> 0x20);
  uStack_730 = (undefined4)uVar8;
  uStack_72c = (undefined4)((ulong)uVar7 >> 0x20);
  uStack_770 = local_748;
  uStack_76c = uStack_744;
  uStack_768 = uStack_740;
  uStack_764 = uStack_73c;
  uStack_760 = local_738;
  uStack_75c = uStack_734;
  uStack_758 = uStack_730;
  uStack_754 = uStack_72c;
  if (uVar12 == 0x8000000000000005) {
                    /* try { // try from 0038be4b to 0038be84 has its CatchHandler @ 0038c366 */
    _ZN4just10subcommand10Subcommand4edit17h78df30ddd5b0fe41E(param_1,&local_778);
    goto LAB_0038c327;
  }
  _ZN4just10subcommand10Subcommand7compile17hd4ddb48c754af338E
            (&local_6f0,param_3,param_4,CONCAT44(uStack_744,local_748),
             CONCAT44(uStack_73c,uStack_740));
  local_7e8 = (undefined4)CONCAT41(uStack_6e7,uStack_6e8);
  uStack_7e4 = (undefined4)
               (CONCAT17(uStack_6e1,CONCAT25(uStack_6e3,CONCAT41(uStack_6e7,uStack_6e8))) >> 0x20);
  uStack_7e0 = (undefined4)CONCAT41(uStack_6df,uStack_6e0);
  uStack_7dc = (undefined4)
               (CONCAT17(uStack_6d9,CONCAT25(uStack_6db,CONCAT41(uStack_6df,uStack_6e0))) >> 0x20);
  local_7d8 = (undefined4)CONCAT41(uStack_6d7,uStack_6d8);
  uStack_7d4 = (undefined4)
               (CONCAT17(uStack_6d1,CONCAT25(uStack_6d3,CONCAT41(uStack_6d7,uStack_6d8))) >> 0x20);
  uStack_7d0 = (undefined4)CONCAT41(uStack_6cf,uStack_6d0);
  uStack_7cc = (undefined4)
               (CONCAT17(uStack_6c9,CONCAT25(uStack_6cb,CONCAT41(uStack_6cf,uStack_6d0))) >> 0x20);
  local_7c8 = (undefined4)CONCAT41(uStack_6c7,local_6c8);
  uStack_7c4 = (undefined4)(CONCAT35((undefined3)uStack_6c3,CONCAT41(uStack_6c7,local_6c8)) >> 0x20)
  ;
  uStack_7c0 = (undefined4)CONCAT41(uStack_6bf,uStack_6c3._3_1_);
  uStack_7bc = (undefined4)
               (CONCAT35((undefined3)uStack_6bb,CONCAT41(uStack_6bf,uStack_6c3._3_1_)) >> 0x20);
  local_7b8 = (undefined4)CONCAT41(uStack_6b7,uStack_6bb._3_1_);
  uStack_7b4 = (undefined4)
               (CONCAT35((undefined3)uStack_6b3,CONCAT41(uStack_6b7,uStack_6bb._3_1_)) >> 0x20);
  uStack_7b0 = (undefined4)CONCAT71(uStack_6af,uStack_6b3._3_1_);
  uStack_7ac = (undefined4)((uint7)uStack_6af >> 0x18);
  local_7a8 = local_6a8;
  uStack_7a7 = uStack_6a7;
  uStack_7a0 = uStack_6a0;
  uStack_79f = uStack_69f;
  local_798 = local_698;
  uStack_794 = uStack_694;
  uStack_790 = uStack_690;
  uStack_78c = uStack_68c;
  local_788 = (undefined)local_688;
  uStack_787 = (undefined7)((ulong)local_688 >> 8);
  if (CONCAT17(uStack_6e9,CONCAT25(uStack_6eb,CONCAT41(uStack_6ef,local_6f0))) ==
      -0x8000000000000000) {
    *(undefined8 *)(param_1 + 0x60) = local_688;
    *(ulong *)(param_1 + 0x50) = CONCAT44(uStack_694,local_698);
    *(ulong *)(param_1 + 0x58) = CONCAT44(uStack_68c,uStack_690);
    *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_6a7,local_6a8);
    *(ulong *)(param_1 + 0x48) = CONCAT71(uStack_69f,uStack_6a0);
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_7b4,local_7b8);
    *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_7ac,uStack_7b0);
    *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_7c4,local_7c8);
    *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_7bc,uStack_7c0);
    *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_7d4,local_7d8);
    *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_7cc,uStack_7d0);
    *(undefined4 *)param_1 = local_7e8;
    *(undefined4 *)(param_1 + 4) = uStack_7e4;
    *(undefined4 *)(param_1 + 8) = uStack_7e0;
    *(undefined4 *)(param_1 + 0xc) = uStack_7dc;
    goto LAB_0038c327;
  }
  (*(code *)PTR_memcpy_00565e28)(local_320,local_680,0x2f0);
  local_388 = CONCAT44(uStack_7e4,local_7e8);
  uStack_380 = CONCAT44(uStack_7dc,uStack_7e0);
  local_378 = local_7d8;
  uStack_374 = uStack_7d4;
  uStack_370 = uStack_7d0;
  uStack_36c = uStack_7cc;
  local_368 = local_7c8;
  uStack_364 = uStack_7c4;
  uStack_360 = uStack_7c0;
  uStack_35c = uStack_7bc;
  local_358 = local_7b8;
  uStack_354 = uStack_7b4;
  uStack_350 = uStack_7b0;
  uStack_34c = uStack_7ac;
  local_338 = local_798;
  uStack_334 = uStack_794;
  uStack_330 = uStack_790;
  uStack_32c = uStack_78c;
  local_328 = CONCAT71(uStack_787,local_788);
  switch(uVar12 ^ 0x8000000000000000) {
  case 0:
  case 3:
  case 5:
  case 9:
  case 0xb:
  case 0xc:
                    /* try { // try from 0038c349 to 0038c361 has its CatchHandler @ 0038c37e */
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_005661f8)
              (&DAT_0016c0e6,0x28,&PTR_DAT_00531038);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  case 1:
    if (param_2[1] == 0x8000000000000000) {
      uVar12 = 0;
    }
    else {
      uVar12 = param_2[2];
    }
    _ZN4just10subcommand10Subcommand6choose17h70c66fd2ffcf2f5eE
              (&local_6f0,param_3,local_390,&local_778,param_2 + 4,uVar12,param_2[3]);
    break;
  default:
    lVar10 = 0x30;
    goto LAB_0038c161;
  case 4:
    (*(code *)PTR_memcpy_00565e28)(&local_6f0,local_390,0x360);
                    /* try { // try from 0038c13a to 0038c146 has its CatchHandler @ 0038c364 */
    _ZN4just10subcommand10Subcommand4dump17h35772f52367b2bf4E
              (&local_7e8,*(undefined *)(param_3 + 0x199),&local_6f0);
    goto LAB_0038c147;
  case 6:
    lVar10 = 0x20;
LAB_0038c161:
                    /* try { // try from 0038c167 to 0038c2a5 has its CatchHandler @ 0038c37e */
    _ZN4just8justfile8Justfile3run17h44a153d0be889dd4E
              (&local_6f0,local_390,param_3,&local_778,(long)param_2 + lVar10,8,0);
    break;
  case 7:
    (*(code *)PTR_memcpy_00565e28)(&local_6f0,local_390,0x360);
                    /* try { // try from 0038c0ed to 0038c106 has its CatchHandler @ 0038c364 */
    _ZN4just10subcommand10Subcommand6format17heea1de6da7464e03E
              (&local_7e8,param_3,&local_778,&local_6f0);
LAB_0038c147:
    if ((char)local_7e8 == '8') {
      *param_1 = '8';
    }
    else {
      *(ulong *)(param_1 + 0x60) = CONCAT71(uStack_787,local_788);
      *(ulong *)(param_1 + 0x51) =
           CONCAT17((undefined)uStack_790,CONCAT43(uStack_794,local_798._1_3_));
      *(ulong *)(param_1 + 0x59) = CONCAT17(local_788,CONCAT43(uStack_78c,uStack_790._1_3_));
      *(ulong *)(param_1 + 0x41) = CONCAT17(uStack_7a0,uStack_7a7);
      *(ulong *)(param_1 + 0x49) = CONCAT17((undefined)local_798,uStack_79f);
      *(ulong *)(param_1 + 0x31) =
           CONCAT17((undefined)uStack_7b0,CONCAT43(uStack_7b4,local_7b8._1_3_));
      *(ulong *)(param_1 + 0x39) = CONCAT17(local_7a8,CONCAT43(uStack_7ac,uStack_7b0._1_3_));
      *(ulong *)(param_1 + 0x21) =
           CONCAT17((undefined)uStack_7c0,CONCAT43(uStack_7c4,local_7c8._1_3_));
      *(ulong *)(param_1 + 0x29) =
           CONCAT17((undefined)local_7b8,CONCAT43(uStack_7bc,uStack_7c0._1_3_));
      *(ulong *)(param_1 + 0x11) =
           CONCAT17((undefined)uStack_7d0,CONCAT43(uStack_7d4,local_7d8._1_3_));
      *(ulong *)(param_1 + 0x19) =
           CONCAT17((undefined)local_7c8,CONCAT43(uStack_7cc,uStack_7d0._1_3_));
      *(uint *)(param_1 + 1) = CONCAT13((undefined)uStack_7e4,local_7e8._1_3_);
      *(uint *)(param_1 + 5) = CONCAT13((undefined)uStack_7e0,uStack_7e4._1_3_);
      *(uint *)(param_1 + 9) = CONCAT13((undefined)uStack_7dc,uStack_7e0._1_3_);
      *(uint *)(param_1 + 0xd) = CONCAT13((undefined)local_7d8,uStack_7dc._1_3_);
      *param_1 = (char)local_7e8;
    }
    goto LAB_0038c327;
  case 8:
    _ZN4just10subcommand10Subcommand6groups17h91135709a9d2e1deE(param_3,local_390);
    goto LAB_0038c2b2;
  case 10:
    _ZN4just10subcommand10Subcommand4list17h279afbbedddd5378E
              (&local_6f0,param_3,local_390,param_2 + 1);
    break;
  case 0xd:
    local_708 = uStack_758;
    uStack_704 = uStack_754;
    uStack_700 = (undefined4)local_750;
    uStack_6fc = local_750._4_4_;
    local_718 = uStack_768;
    uStack_714 = uStack_764;
    uStack_710 = uStack_760;
    uStack_70c = uStack_75c;
    local_728 = (undefined4)local_778;
    uStack_724 = local_778._4_4_;
    uStack_720 = uStack_770;
    uStack_71c = uStack_76c;
    (*(code *)PTR_memcpy_00565e28)(&local_6f0,local_390,0x360);
    _ZN4just10subcommand10Subcommand3run17h0caeb55d50695da5E
              (&local_7e8,param_3,param_4,&local_728,&local_6f0,param_2[2],param_2[3],param_2 + 4);
    if ((char)local_7e8 == '8') {
      *param_1 = '8';
      return param_1;
    }
    *(ulong *)(param_1 + 0x60) = CONCAT71(uStack_787,local_788);
    *(ulong *)(param_1 + 0x51) =
         CONCAT17((undefined)uStack_790,CONCAT43(uStack_794,local_798._1_3_));
    *(ulong *)(param_1 + 0x59) = CONCAT17(local_788,CONCAT43(uStack_78c,uStack_790._1_3_));
    *(ulong *)(param_1 + 0x41) = CONCAT17(uStack_7a0,uStack_7a7);
    *(ulong *)(param_1 + 0x49) = CONCAT17((undefined)local_798,uStack_79f);
    *(ulong *)(param_1 + 0x31) =
         CONCAT17((undefined)uStack_7b0,CONCAT43(uStack_7b4,local_7b8._1_3_));
    *(ulong *)(param_1 + 0x39) = CONCAT17(local_7a8,CONCAT43(uStack_7ac,uStack_7b0._1_3_));
    *(ulong *)(param_1 + 0x21) =
         CONCAT17((undefined)uStack_7c0,CONCAT43(uStack_7c4,local_7c8._1_3_));
    *(ulong *)(param_1 + 0x29) =
         CONCAT17((undefined)local_7b8,CONCAT43(uStack_7bc,uStack_7c0._1_3_));
    *(ulong *)(param_1 + 0x11) =
         CONCAT17((undefined)uStack_7d0,CONCAT43(uStack_7d4,local_7d8._1_3_));
    *(ulong *)(param_1 + 0x19) =
         CONCAT17((undefined)local_7c8,CONCAT43(uStack_7cc,uStack_7d0._1_3_));
    *(ulong *)(param_1 + 1) = CONCAT17((undefined)uStack_7e0,CONCAT43(uStack_7e4,local_7e8._1_3_));
    *(ulong *)(param_1 + 9) = CONCAT17((undefined)local_7d8,CONCAT43(uStack_7dc,uStack_7e0._1_3_));
    *param_1 = (char)local_7e8;
    return param_1;
  case 0xe:
                    /* try { // try from 0038bff6 to 0038c034 has its CatchHandler @ 0038c37e */
    _ZN4just10subcommand10Subcommand4show17h0bdf6b2545355152E
              (&local_6f0,param_3,local_390,param_2 + 1);
    break;
  case 0xf:
    _ZN4just10subcommand10Subcommand7summary17hf6e7b6af0c5cf7fdE
              (*(undefined *)(param_3 + 0x1a3),*(undefined *)(param_3 + 0x1a7),local_390);
    goto LAB_0038c2b2;
  case 0x10:
    _ZN4just10subcommand10Subcommand9variables17hc98f87f2340c147dE(local_390);
    goto LAB_0038c2b2;
  }
  if (local_6f0 == '8') {
LAB_0038c2b2:
    *param_1 = '8';
                    /* try { // try from 0038c2b5 to 0038c326 has its CatchHandler @ 0038c366 */
    _ZN4core3ptr51drop_in_place_LT_just__compilation__Compilation_GT_17hcea2292c76e0cd86E(local_390)
    ;
  }
  else {
    *(ulong *)(param_1 + 0x60) = CONCAT44(uStack_68c,uStack_690);
    *(ulong *)(param_1 + 0x51) = CONCAT17((undefined)local_698,uStack_69f);
    *(ulong *)(param_1 + 0x59) =
         CONCAT17((undefined)uStack_690,CONCAT43(uStack_694,local_698._1_3_));
    *(ulong *)(param_1 + 0x41) = CONCAT17(local_6a8,uStack_6af);
    *(ulong *)(param_1 + 0x49) = CONCAT17(uStack_6a0,uStack_6a7);
    *(undefined4 *)(param_1 + 0x31) = uStack_6bf;
    *(undefined4 *)(param_1 + 0x35) = uStack_6bb;
    *(undefined4 *)(param_1 + 0x39) = uStack_6b7;
    *(undefined4 *)(param_1 + 0x3d) = uStack_6b3;
    *(undefined4 *)(param_1 + 0x21) = uStack_6cf;
    *(uint *)(param_1 + 0x25) = CONCAT13(local_6c8,CONCAT12(uStack_6c9,uStack_6cb));
    *(undefined4 *)(param_1 + 0x29) = uStack_6c7;
    *(undefined4 *)(param_1 + 0x2d) = uStack_6c3;
    *(undefined4 *)(param_1 + 0x11) = uStack_6df;
    *(uint *)(param_1 + 0x15) = CONCAT13(uStack_6d8,CONCAT12(uStack_6d9,uStack_6db));
    *(undefined4 *)(param_1 + 0x19) = uStack_6d7;
    *(uint *)(param_1 + 0x1d) = CONCAT13(uStack_6d0,CONCAT12(uStack_6d1,uStack_6d3));
    *(undefined4 *)(param_1 + 1) = uStack_6ef;
    *(uint *)(param_1 + 5) = CONCAT13(uStack_6e8,CONCAT12(uStack_6e9,uStack_6eb));
    *(undefined4 *)(param_1 + 9) = uStack_6e7;
    *(uint *)(param_1 + 0xd) = CONCAT13(uStack_6e0,CONCAT12(uStack_6e1,uStack_6e3));
    *param_1 = local_6f0;
    _ZN4core3ptr51drop_in_place_LT_just__compilation__Compilation_GT_17hcea2292c76e0cd86E(local_390)
    ;
  }
LAB_0038c327:
  _ZN4core3ptr41drop_in_place_LT_just__search__Search_GT_17h18f5d3903328307eE(&local_778);
  return param_1;
}