undefined  [16]
_ZN9uu_runcon6uumain6uumain17he67dd5d0614d5a18E(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  int local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  int local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 local_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 local_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3d8;
  undefined4 local_3d0;
  undefined local_378 [8];
  undefined8 local_370;
  undefined8 local_368;
  long local_360;
  undefined8 local_358;
  undefined8 local_350;
  long local_348;
  undefined8 local_340;
  undefined8 local_338;
  long local_330;
  undefined8 local_328;
  undefined8 local_320;
  long local_318;
  undefined8 local_310;
  undefined8 local_308;
  long local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined local_2e8;
  undefined local_2e0 [712];
  
  (*(code *)PTR__ZN9uu_runcon6uu_app17h1fe07eb190a905e6E_001f22e0)(local_2e0);
  _ZN9uu_runcon18parse_command_line17hf9e79084b7f1ba94E(&local_418,local_2e0,param_1,param_2);
  (*(code *)PTR_memcpy_001f2270)(local_378,&local_418,0x98);
  uVar1 = 2;
  if (local_360 + 0x7fffffffffffffffU < 2) {
    uVar1 = local_360 + 0x7fffffffffffffffU;
  }
  if (uVar1 == 0) {
    (*(code *)PTR__ZN9uu_runcon21print_current_context17h9215a313e1a60e64E_001f22f8)(&local_468);
    if (local_468 == 0x11) {
LAB_0015b742:
      uVar3 = 0;
    }
    else {
      uStack_3d8 = uStack_428;
      uStack_3e8 = (undefined4)uStack_438;
      local_3e4 = uStack_438._4_4_;
      uStack_3e0 = (undefined4)uStack_430;
      uStack_3dc = uStack_430._4_4_;
      uStack_3f8 = (undefined4)uStack_448;
      local_3f4 = uStack_448._4_4_;
      uStack_3f0 = (undefined4)uStack_440;
      uStack_3ec = uStack_440._4_4_;
      uStack_408 = (undefined4)uStack_458;
      uStack_404 = uStack_458._4_4_;
      uStack_400 = (undefined4)uStack_450;
      uStack_3fc = uStack_450._4_4_;
      local_418 = local_468;
      uStack_414 = uStack_464;
      uStack_410 = uStack_460;
      uStack_40c = uStack_45c;
      local_3d0 = 1;
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbfe983e35b3b9592E(&local_418);
    }
LAB_0015b953:
    auVar4._8_8_ = &
                   PTR__ZN4core3ptr51drop_in_place_LT_uu_runcon__errors__RunconError_GT_17h41bae80a1189f82aE_001eade8
    ;
    auVar4._0_8_ = uVar3;
LAB_0015b95d:
    _ZN4core3ptr39drop_in_place_LT_uu_runcon__Options_GT_17h80ff87823e29a963E(local_378);
  }
  else {
    if (uVar1 == 1) {
                    /* try { // try from 0015b66b to 0015ba06 has its CatchHandler @ 0015ba2e */
      (*(code *)PTR__ZN9uu_runcon17get_plain_context17hdc7dc8eb3b1060b4E_001f22e8)
                (&local_418,local_350,local_348);
      if (local_418 == 0x11) {
        _ZN9uu_runcon6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h1b5aa9e7ecf1c24eE
                  (&local_468,CONCAT44(uStack_40c,uStack_410));
      }
      else {
        uStack_458 = CONCAT44(uStack_404,uStack_408);
        uStack_450 = CONCAT44(uStack_3fc,uStack_400);
        uStack_448 = CONCAT44(local_3f4,uStack_3f8);
        uStack_440 = CONCAT44(uStack_3ec,uStack_3f0);
        uStack_438 = CONCAT44(local_3e4,uStack_3e8);
        uStack_430 = CONCAT44(uStack_3dc,uStack_3e0);
        local_468 = local_418;
      }
      if (local_468 == 0x11) {
        auVar4 = (*(code *)PTR__ZN9uu_runcon15execute_command17hf1fa972cc5d084a3E_001f22f0)
                           (local_338,local_330,local_370,local_368);
        goto LAB_0015b95d;
      }
      uStack_458._4_4_ = (undefined4)((ulong)uStack_458 >> 0x20);
      uStack_450._4_4_ = (undefined4)((ulong)uStack_450 >> 0x20);
      uStack_448._4_4_ = (undefined4)((ulong)uStack_448 >> 0x20);
      uStack_440._4_4_ = (undefined4)((ulong)uStack_440 >> 0x20);
      uStack_438._4_4_ = (undefined4)((ulong)uStack_438 >> 0x20);
      uStack_430._4_4_ = (undefined4)((ulong)uStack_430 >> 0x20);
      local_3e4 = uStack_438._4_4_;
      uStack_3e0 = (undefined4)uStack_430;
      uStack_3dc = uStack_430._4_4_;
      local_3f4 = uStack_448._4_4_;
      uStack_3f0 = (undefined4)uStack_440;
      uStack_3ec = uStack_440._4_4_;
      uStack_3e8 = (undefined4)uStack_438;
      uStack_404 = uStack_458._4_4_;
      uStack_400 = (undefined4)uStack_450;
      uStack_3fc = uStack_450._4_4_;
      uStack_3f8 = (undefined4)uStack_448;
      uStack_408 = (undefined4)uStack_458;
      local_3d0 = 1;
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbfe983e35b3b9592E(&local_418);
    }
    else {
      if (local_300 == -0x8000000000000000) {
        (*(code *)PTR__ZN9uu_runcon21print_current_context17h9215a313e1a60e64E_001f22f8)(&local_468)
        ;
        if (local_468 == 0x11) goto LAB_0015b742;
        uStack_3d8 = uStack_428;
        uStack_3e8 = (undefined4)uStack_438;
        local_3e4 = uStack_438._4_4_;
        uStack_3e0 = (undefined4)uStack_430;
        uStack_3dc = uStack_430._4_4_;
        uStack_3f8 = (undefined4)uStack_448;
        local_3f4 = uStack_448._4_4_;
        uStack_3f0 = (undefined4)uStack_440;
        uStack_3ec = uStack_440._4_4_;
        uStack_408 = (undefined4)uStack_458;
        uStack_404 = uStack_458._4_4_;
        uStack_400 = (undefined4)uStack_450;
        uStack_3fc = uStack_450._4_4_;
        local_418 = local_468;
        uStack_414 = uStack_464;
        uStack_410 = uStack_460;
        uStack_40c = uStack_45c;
        local_3d0 = 1;
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbfe983e35b3b9592E(&local_418);
        goto LAB_0015b953;
      }
      if (local_360 == -0x8000000000000000) {
        local_358 = 0;
      }
      if (local_348 == -0x8000000000000000) {
        local_340 = 0;
      }
      uVar3 = 0;
      if (local_330 != -0x8000000000000000) {
        uVar3 = local_328;
      }
      uVar2 = 0;
      if (local_318 != -0x8000000000000000) {
        uVar2 = local_310;
      }
      (*(code *)PTR__ZN9uu_runcon18get_custom_context17hfc7b7c6ca4bc17a5E_001f2300)
                (&local_418,local_2e8,local_358,local_350,local_340,local_338,uVar3,local_320,uVar2,
                 local_308,local_2f8,local_2f0);
      if (local_418 == 0x11) {
        _ZN9uu_runcon6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h1b5aa9e7ecf1c24eE
                  (&local_468,CONCAT44(uStack_40c,uStack_410));
      }
      else {
        uStack_458 = CONCAT44(uStack_404,uStack_408);
        uStack_450 = CONCAT44(uStack_3fc,uStack_400);
        uStack_448 = CONCAT44(local_3f4,uStack_3f8);
        uStack_440 = CONCAT44(uStack_3ec,uStack_3f0);
        uStack_438 = CONCAT44(local_3e4,uStack_3e8);
        uStack_430 = CONCAT44(uStack_3dc,uStack_3e0);
        local_468 = local_418;
      }
      if (local_468 == 0x11) {
        auVar4 = (*(code *)PTR__ZN9uu_runcon15execute_command17hf1fa972cc5d084a3E_001f22f0)
                           (local_2f8,local_2f0,local_370,local_368);
        goto LAB_0015b95d;
      }
      uStack_458._4_4_ = (undefined4)((ulong)uStack_458 >> 0x20);
      uStack_450._4_4_ = (undefined4)((ulong)uStack_450 >> 0x20);
      uStack_448._4_4_ = (undefined4)((ulong)uStack_448 >> 0x20);
      uStack_440._4_4_ = (undefined4)((ulong)uStack_440 >> 0x20);
      uStack_438._4_4_ = (undefined4)((ulong)uStack_438 >> 0x20);
      uStack_430._4_4_ = (undefined4)((ulong)uStack_430 >> 0x20);
      local_3e4 = uStack_438._4_4_;
      uStack_3e0 = (undefined4)uStack_430;
      uStack_3dc = uStack_430._4_4_;
      local_3f4 = uStack_448._4_4_;
      uStack_3f0 = (undefined4)uStack_440;
      uStack_3ec = uStack_440._4_4_;
      uStack_3e8 = (undefined4)uStack_438;
      uStack_404 = uStack_458._4_4_;
      uStack_400 = (undefined4)uStack_450;
      uStack_3fc = uStack_450._4_4_;
      uStack_3f8 = (undefined4)uStack_448;
      uStack_408 = (undefined4)uStack_458;
      local_3d0 = 1;
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbfe983e35b3b9592E(&local_418);
    }
    _ZN4core3ptr39drop_in_place_LT_uu_runcon__Options_GT_17h80ff87823e29a963E(local_378);
    auVar4._8_8_ = &
                   PTR__ZN4core3ptr51drop_in_place_LT_uu_runcon__errors__RunconError_GT_17h41bae80a1189f82aE_001eade8
    ;
    auVar4._0_8_ = uVar3;
  }
  return auVar4;
}