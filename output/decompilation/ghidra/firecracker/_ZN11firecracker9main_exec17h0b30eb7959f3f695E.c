void _ZN11firecracker9main_exec17h0b30eb7959f3f695E(undefined4 *param_1)

{
  undefined auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  undefined uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  ulong uVar19;
  undefined **ppuVar20;
  undefined auVar21 [12];
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 local_450;
  undefined4 uStack_44c;
  char cStack_448;
  char cStack_447;
  undefined uStack_446;
  undefined uStack_445;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined8 uStack_430;
  undefined8 local_428;
  char *local_420;
  undefined8 local_418;
  undefined *local_410;
  undefined8 local_408;
  undefined *local_400;
  undefined8 local_3f8;
  ulong local_3f0;
  undefined4 *local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined **ppuStack_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  ulong local_390;
  ulong local_388;
  undefined **local_380;
  undefined local_378 [16];
  undefined8 local_368;
  long local_360;
  undefined local_358 [48];
  undefined4 local_328;
  undefined4 uStack_324;
  undefined8 uStack_320;
  undefined *local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined *local_2b0;
  undefined8 local_2a8;
  undefined local_298 [16];
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined local_268 [8];
  undefined8 uStack_260;
  undefined8 local_258;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined8 *puStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  long local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ulong local_1f0;
  long local_1e8;
  ulong local_1e0;
  undefined4 *local_1d8;
  ulong local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined local_190 [4];
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined uStack_178;
  undefined7 uStack_177;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  long local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  long local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  long local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  char local_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined local_48 [24];
  
  cVar7 = (*(code *)PTR__ZN3vmm6logger7logging6Logger4init17hde53f9574ccc2810E_004bfca8)
                    (PTR__ZN3vmm6logger7logging6LOGGER17hf7b002b101b876e4E_004bfca0);
  if (cVar7 != '\0') {
    *param_1 = 0;
    return;
  }
  local_3e8 = param_1;
  (*(code *)PTR__ZN3vmm4arch14host_page_size17hc6d6bc838143332aE_004bfcb0)();
  uVar12 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_004bfcb8)();
  uVar12 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc010b2f6a24aeed3E(uVar12);
  (*(code *)PTR__ZN3std9panicking8set_hook17h907d45d363a27a50E_004bfcc0)(uVar12,&DAT_004a3f30);
  uVar12 = (*(code *)
             PTR__ZN4core3fmt3num3imp21__LT_impl_u20_u64_GT_4_fmt17h284f18664830c6ddE_004bfcc8)
                     (0xc800,&local_328,0x14);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
            (&local_478,uVar12);
  puVar3 = PTR__ZN5utils10arg_parser8Argument13default_value17he023b124caa1f40aE_004bfcd0;
  local_258 = CONCAT44(uStack_468._4_4_,(undefined4)uStack_468);
  uStack_260 = CONCAT44(uStack_46c,uStack_470);
  local_3c8 = (undefined **)0x0;
  uStack_3c0 = (code *)0x8;
  uStack_3a0 = 0;
  ppuStack_3b8 = (undefined **)0x0;
  uStack_3b0 = 0;
  local_478 = 3;
  uStack_474 = 0;
  uStack_458 = 3;
  uStack_454 = 0;
  local_438 = 0;
  uStack_434 = 0;
  uStack_430 = 8;
  local_428 = 0;
  local_420 = &DAT_00131120;
  local_418 = 8;
  local_410 = (undefined *)0x0;
  local_400 = (undefined *)0x0;
  local_3f0._0_3_ = 0x100;
  (*(code *)PTR__ZN5utils10arg_parser8Argument13default_value17he023b124caa1f40aE_004bfcd0)
            (&local_328,&local_478,&DAT_0013921b,0x17);
  puVar2 = PTR_memcpy_004bf3b8;
  local_2b0 = &DAT_00138bc4;
  local_2a8 = 0x2b;
  (*(code *)PTR_memcpy_004bf3b8)(&local_478,&local_328,0x90);
  puVar4 = PTR__ZN5utils10arg_parser9ArgParser3arg17hea156377e60f3f8cE_004bfcd8;
  (*(code *)PTR__ZN5utils10arg_parser9ArgParser3arg17hea156377e60f3f8cE_004bfcd8)
            (local_298,&local_3c8,&local_478);
  local_478 = 3;
  uStack_474 = 0;
  uStack_458 = 3;
  uStack_454 = 0;
  local_438 = 0;
  uStack_434 = 0;
  uStack_430 = 8;
  local_428 = 0;
  local_420 = "id";
  local_418 = 2;
  local_410 = (undefined *)0x0;
  local_400 = (undefined *)0x0;
  local_3f0._0_3_ = 0x100;
  (*(code *)puVar3)(&local_328,&local_478,&DAT_00139232,0x12);
  local_2b0 = &DAT_00138bef;
  local_2a8 = 0x1a;
  (*(code *)puVar2)(&local_478,&local_328,0x90);
  (*(code *)puVar4)(&local_3c8,local_298,&local_478);
  uStack_460 = (undefined4)local_3d0;
  uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
  uStack_470 = local_3e0;
  uStack_46c = uStack_3dc;
  uStack_468._0_4_ = uStack_3d8;
  uStack_468._4_4_ = uStack_3d4;
  local_450 = local_3e0;
  uStack_44c = uStack_3dc;
  cStack_448 = (char)uStack_3d8;
  cStack_447 = (char)((uint)uStack_3d8 >> 8);
  uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
  uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
  uStack_444 = uStack_3d4;
  local_478 = 3;
  uStack_474 = 0;
  uStack_458 = 3;
  uStack_454 = 0;
  local_438 = 0;
  uStack_434 = 0;
  uStack_430 = 8;
  local_428 = 0;
  local_420 = &DAT_00138c09;
  local_418 = 0xe;
  local_410 = (undefined *)0x0;
  local_400 = (undefined *)0x0;
  local_3f0 = CONCAT53(local_3f0._3_5_,0x100);
  local_440 = uStack_460;
  uStack_43c = uStack_45c;
  puVar13 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x10,0);
  if (puVar13 == (undefined8 *)0x0) {
LAB_0025b5b4:
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_004bfa40)(8,0x10);
    ppuVar20 = (undefined **)CONCAT44(uStack_468._4_4_,(undefined4)uStack_468);
LAB_0025b5c4:
    uStack_220 = ppuVar20;
    puStack_230 = (undefined8 *)CONCAT44(uStack_474,local_478);
    local_228 = CONCAT44(uStack_46c,uStack_470);
    local_218 = CONCAT44(uStack_45c,uStack_460);
LAB_0025b5e6:
    uStack_468._4_4_ = SUB84(uStack_220,0);
    uStack_460 = (undefined4)((ulong)uStack_220 >> 0x20);
    uStack_45c = (undefined4)local_218;
    uStack_458 = (undefined4)((ulong)local_218 >> 0x20);
    uStack_474 = SUB84(puStack_230,0);
    uStack_470 = (undefined4)((ulong)puStack_230 >> 0x20);
    uStack_46c = (undefined4)local_228;
    uStack_468._0_4_ = (undefined4)((ulong)local_228 >> 0x20);
    local_3a8 = CONCAT44(uStack_454,uStack_458);
    uStack_3a0 = CONCAT44(uStack_44c,local_450);
    ppuStack_3b8 = (undefined **)CONCAT44(uStack_468._4_4_,(undefined4)uStack_468);
    uStack_3b0 = CONCAT44(uStack_45c,uStack_460);
    local_3c8 = (undefined **)CONCAT44(uStack_474,local_478);
    uStack_3c0 = (code *)CONCAT44(uStack_46c,uStack_470);
    local_398 = CONCAT13(uStack_445,CONCAT12(uStack_446,CONCAT11(cStack_447,cStack_448)));
    local_3e8[0xd] = local_398;
    local_3e8[9] = uStack_458;
    local_3e8[10] = uStack_454;
    local_3e8[0xb] = local_450;
    local_3e8[0xc] = uStack_44c;
    local_3e8[5] = (undefined4)uStack_468;
    local_3e8[6] = uStack_468._4_4_;
    local_3e8[7] = uStack_460;
    local_3e8[8] = uStack_45c;
    local_3e8[1] = local_478;
    local_3e8[2] = uStack_474;
    local_3e8[3] = uStack_470;
    local_3e8[4] = uStack_46c;
    *local_3e8 = 7;
    local_308 = local_3a8;
    uStack_300 = uStack_3a0;
    uStack_468 = ppuStack_3b8;
  }
  else {
    *puVar13 = &DAT_00138c7a;
    puVar13[1] = 10;
    local_298._0_8_ = (undefined *)0x1;
    local_288 = 1;
    local_298._8_8_ = puVar13;
    (*(code *)PTR__ZN5utils10arg_parser8Argument7forbids17h0672c6c5882fec3fE_004bfce0)
              (&local_328,&local_478,local_298);
    local_2b0 = &DAT_00138c17;
    local_2a8 = 99;
    (*(code *)PTR_memcpy_004bf3b8)(&local_478,&local_328,0x90);
    (*(code *)PTR__ZN5utils10arg_parser9ArgParser3arg17hea156377e60f3f8cE_004bfcd8)
              (local_298,&local_3c8,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_00138c7a;
    local_418 = 10;
    local_410 = (undefined *)0x0;
    local_400 = (undefined *)0x0;
    local_3f0 = local_3f0 & 0xffffffffff000000;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    pcVar14 = (code *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x10,0);
    if (pcVar14 == (code *)0x0) goto LAB_0025b5b4;
    *(undefined **)pcVar14 = &DAT_00138c09;
    *(undefined8 *)(pcVar14 + 8) = 0xe;
    local_3c8 = (undefined **)&DAT_00000001;
    ppuStack_3b8 = (undefined **)&DAT_00000001;
    uStack_3c0 = pcVar14;
    (*(code *)PTR__ZN5utils10arg_parser8Argument7forbids17h0672c6c5882fec3fE_004bfce0)
              (&local_328,&local_478,&local_3c8);
    local_2b0 = &DAT_00138c84;
    local_2a8 = 0x68;
    (*(code *)puVar2)(&local_478,&local_328,0x90);
    (*(code *)puVar4)(&local_328,local_298,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_00138cec;
    local_418 = 0xd;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00138cf9;
    local_3f8 = 0x4a;
    local_3f0 = 0x100;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_3c8,&local_328,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_00138d43;
    local_418 = 0x11;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00138d54;
    local_3f8 = 0x4e;
    local_3f0 = 0x100;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_328,&local_3c8,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_00138da2;
    local_418 = 0x12;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00138db4;
    local_3f8 = 0x4f;
    local_3f0 = 0x100;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_3c8,&local_328,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_00138e03;
    local_418 = 0xb;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00138e0e;
    local_3f8 = 0x46;
    local_3f0 = 0x100;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_328,&local_3c8,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = "metadataFileOpen";
    local_418 = 8;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00138e54;
    local_3f8 = 0x48;
    local_3f0 = 0x100;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_3c8,&local_328,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_00138e9c;
    local_418 = 6;
    local_410 = &DAT_00138e03;
    local_408 = 0xb;
    local_400 = &DAT_00138ea2;
    local_3f8 = 0x5a;
    local_3f0 = 0;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_328,&local_3c8,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_00131478;
    local_418 = 8;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00138efc;
    local_3f8 = 0x44;
    local_3f0 = 0x100;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_3c8,&local_328,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = "level";
    local_418 = 5;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00138f40;
    local_3f8 = 0x15;
    local_3f0 = 0x100;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_328,&local_3c8,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = "module";
    local_418 = 6;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00138f55;
    local_3f8 = 0x1d;
    local_3f0 = 0x100;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_3c8,&local_328,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_00138f72;
    local_418 = 10;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00138f7c;
    local_3f8 = 0x2f;
    local_3f0 = 0;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_328,&local_3c8,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_00138fab;
    local_418 = 0xf;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00138fba;
    local_3f8 = 0x4c;
    local_3f0 = 0;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_3c8,&local_328,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_00139006;
    local_418 = 0xc;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00139012;
    local_3f8 = 0x45;
    local_3f0 = 0x100;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_328,&local_3c8,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_00139057;
    local_418 = 10;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00139061;
    local_3f8 = 0x5e;
    local_3f0 = 0;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_3c8,&local_328,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = "version";
    local_418 = 7;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00135900;
    local_3f8 = 0x20;
    local_3f0 = 0;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_328,&local_3c8,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = "snapshot-version";
    local_418 = 0x10;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_001390bf;
    local_3f8 = 0x28;
    local_3f0 = 0;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_3c8,&local_328,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_001390e7;
    local_418 = 0x11;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_001390f8;
    local_3f8 = 0x42;
    local_3f0 = 0x100;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(local_298,&local_3c8,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_0013913a;
    local_418 = 0x19;
    local_410 = (undefined *)0x0;
    local_400 = (undefined *)0x0;
    local_3f0 = CONCAT53(local_3f0._3_5_,0x100);
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)PTR__ZN5utils10arg_parser8Argument13default_value17he023b124caa1f40aE_004bfcd0)
              (&local_328,&local_478,uStack_260,local_258);
    local_2b0 = &DAT_00139153;
    local_2a8 = 0x2c;
    (*(code *)puVar2)(&local_478,&local_328,0x90);
    (*(code *)puVar4)(&local_328,local_298,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_0013917f;
    local_418 = 0xf;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00135dc0;
    local_3f8 = 0x20;
    local_3f0 = 0x100;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(&local_3c8,&local_328,&local_478);
    uStack_460 = (undefined4)local_3d0;
    uStack_45c = (undefined4)((ulong)local_3d0 >> 0x20);
    uStack_470 = local_3e0;
    uStack_46c = uStack_3dc;
    uStack_468._0_4_ = uStack_3d8;
    uStack_468._4_4_ = uStack_3d4;
    local_450 = local_3e0;
    uStack_44c = uStack_3dc;
    cStack_448 = (char)uStack_3d8;
    cStack_447 = (char)((uint)uStack_3d8 >> 8);
    uStack_446 = (undefined)((uint)uStack_3d8 >> 0x10);
    uStack_445 = (undefined)((uint)uStack_3d8 >> 0x18);
    uStack_444 = uStack_3d4;
    local_478 = 3;
    uStack_474 = 0;
    uStack_458 = 3;
    uStack_454 = 0;
    local_438 = 0;
    uStack_434 = 0;
    uStack_430 = 8;
    local_428 = 0;
    local_420 = &DAT_0013918e;
    local_418 = 10;
    local_410 = (undefined *)0x0;
    local_400 = &DAT_00139198;
    local_3f8 = 0x15;
    local_3f0 = 0;
    local_440 = uStack_460;
    uStack_43c = uStack_45c;
    (*(code *)puVar4)(local_358,&local_3c8,&local_478);
    (*(code *)PTR__ZN5utils10arg_parser9ArgParser18parse_from_cmdline17h9e0c84309a12b615E_004bfce8)
              (&local_478,local_358);
    if (CONCAT44(uStack_474,local_478) != -0x7ffffffffffffffc) {
      *(ulong *)(local_3e8 + 0xc) = CONCAT44(uStack_44c,local_450);
      *(ulong *)(local_3e8 + 8) = CONCAT44(uStack_45c,uStack_460);
      *(ulong *)(local_3e8 + 10) = CONCAT44(uStack_454,uStack_458);
      local_3e8[4] = uStack_470;
      local_3e8[5] = uStack_46c;
      local_3e8[6] = (undefined4)uStack_468;
      local_3e8[7] = uStack_468._4_4_;
      *local_3e8 = 2;
      *(long *)(local_3e8 + 2) = CONCAT44(uStack_474,local_478);
      goto LAB_0025ae60;
    }
    cVar7 = (*(code *)PTR__ZN5utils10arg_parser9Arguments12flag_present17hcdc23bf30ac1487cE_004bfcf0
            )(local_358,"help",4);
    puVar2 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_004bfcf8;
    uStack_468 = (undefined **)&local_328;
    if (cVar7 != '\0') {
      local_328 = 0x4a3fa8;
      uStack_324 = 0;
      uStack_320._0_4_ = 0x231780;
      uStack_320._4_4_ = 0;
      local_478 = 0x4a3eb0;
      uStack_474 = 0;
      uStack_470 = 2;
      uStack_46c = 0;
      uStack_458 = 0;
      uStack_454 = 0;
      uStack_460 = 1;
      uStack_45c = 0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_004bfcf8)(&local_478);
      (*(code *)PTR__ZN5utils10arg_parser9ArgParser14formatted_help17h2dfefc7734439043E_004bfd00)
                (&local_328,local_358);
      uStack_3c0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_478 = 0x4a3ed0;
      uStack_474 = 0;
      uStack_470 = 2;
      uStack_46c = 0;
      uStack_458 = 0;
      uStack_454 = 0;
      uStack_460 = 1;
      uStack_45c = 0;
      local_3c8 = (undefined **)&local_328;
      uStack_468 = (undefined **)&local_3c8;
      (*(code *)puVar2)(&local_478);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1017b1af1d0852d4E(&local_328);
LAB_0025ae52:
      *local_3e8 = 0xb;
      goto LAB_0025ae60;
    }
    cVar7 = (*(code *)PTR__ZN5utils10arg_parser9Arguments12flag_present17hcdc23bf30ac1487cE_004bfcf0
            )(local_358,"version",7);
    if (cVar7 != '\0') {
      local_328 = 0x4a3fa8;
      uStack_324 = 0;
      uStack_320._0_4_ = 0x231780;
      uStack_320._4_4_ = 0;
      local_478 = 0x4a3eb0;
      uStack_474 = 0;
      uStack_470 = 2;
      uStack_46c = 0;
      uStack_458 = 0;
      uStack_454 = 0;
      uStack_460 = 1;
      uStack_45c = 0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_004bfcf8)(&local_478);
      goto LAB_0025ae52;
    }
    cVar7 = (*(code *)PTR__ZN5utils10arg_parser9Arguments12flag_present17hcdc23bf30ac1487cE_004bfcf0
            )(local_358,"snapshot-version",0x10);
    if (cVar7 != '\0') {
      local_318 = _DAT_001393f8;
      uStack_310 = _UNK_00139400;
      local_328 = _DAT_001393e8;
      uStack_324 = _UNK_001393ec;
      uStack_320._0_4_ = _UNK_001393f0;
      uStack_320._4_4_ = _UNK_001393f4;
      local_308 = 0;
      uStack_3c0 = (code *)
                   PTR__ZN6semver7display64__LT_impl_u20_core__fmt__Display_u20_for_u20_semver__Version_GT_3fmt17ha9f34b03bf53131aE_004bfd08
      ;
      local_478 = 0x4a3ef0;
      uStack_474 = 0;
      uStack_470 = 2;
      uStack_46c = 0;
      uStack_458 = 0;
      uStack_454 = 0;
      uStack_460 = 1;
      uStack_45c = 0;
      local_3c8 = (undefined **)&local_328;
      uStack_468 = (undefined **)&local_3c8;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_004bfcf8)(&local_478);
      _ZN4core3ptr36drop_in_place_LT_semver__Version_GT_17h899d2d10dc06f6c7E(&local_328);
      goto LAB_0025ae52;
    }
    lVar15 = (*(code *)
               PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10)
                       (local_358,&DAT_001390e7,0x11);
    if (lVar15 != 0) {
      _ZN11firecracker26print_snapshot_data_format17hddac348824e0a41bE
                (&local_478,*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10));
      if (CONCAT44(uStack_474,local_478) != 7) {
        *(ulong *)(local_3e8 + 0xc) = CONCAT44(uStack_44c,local_450);
        *(ulong *)(local_3e8 + 8) = CONCAT44(uStack_45c,uStack_460);
        *(ulong *)(local_3e8 + 10) = CONCAT44(uStack_454,uStack_458);
        local_3e8[4] = uStack_470;
        local_3e8[5] = uStack_46c;
        local_3e8[6] = (undefined4)uStack_468;
        local_3e8[7] = uStack_468._4_4_;
        *local_3e8 = 3;
        *(long *)(local_3e8 + 2) = CONCAT44(uStack_474,local_478);
        goto LAB_0025ae60;
      }
      goto LAB_0025ae52;
    }
    lVar15 = (*(code *)
               PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10)
                       (local_358,"id",2);
    if (lVar15 == 0) {
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_004bf3c8)(&PTR_DAT_004a3f60);
LAB_0025bce4:
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_004bf3c8)(&PTR_DAT_004a4030);
LAB_0025bcf1:
      (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_004bf5f0)
                (&DAT_00139201,0x1a,&PTR_DAT_004a4060);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    (*(code *)PTR__ZN5utils10validators20validate_instance_id17hcd21babe44300cc2E_004bfd18)
              (&local_478,*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10));
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h5d8591333a73f7d6E(&local_478);
    ppuVar20 = (undefined **)&local_328;
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_004bfd20
    )(ppuVar20,lVar15);
    _ZN3std4sync9once_lock17OnceLock_LT_T_GT_10try_insert17h69345edf13b69164E(&local_478,ppuVar20);
    uVar19 = 0x8000000000000000;
    if (CONCAT44(uStack_46c,uStack_470) == -0x8000000000000000) {
      local_3c8 = (undefined **)&DAT_8000000000000000;
    }
    else {
      ppuStack_3b8 = (undefined **)CONCAT44(uStack_45c,uStack_460);
      local_3c8 = (undefined **)CONCAT44(uStack_46c,uStack_470);
      uStack_3c0 = (code *)CONCAT44(uStack_468._4_4_,(undefined4)uStack_468);
    }
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hf28495ede029d5e8E(&local_3c8);
    lVar16 = (*(code *)
               PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10)
                       (local_358,&DAT_00131478,8);
    if (lVar16 != 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
                (&local_478,*(undefined8 *)(lVar16 + 8),*(undefined8 *)(lVar16 + 0x10));
      uVar19 = CONCAT44(uStack_474,local_478);
      ppuVar20 = (undefined **)CONCAT44(uStack_46c,uStack_470);
      local_390 = CONCAT44(uStack_468._4_4_,(undefined4)uStack_468);
    }
    lVar16 = (*(code *)
               PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10)
                       (local_358,"level",5);
    if (lVar16 != 0) {
      (*(code *)
        PTR__ZN80__LT_vmm__logger__logging__LevelFilter_u20_as_u20_core__str__traits__FromStr_GT_8from_str17h921333696ec799d7E_004bfd28
      )(&local_478,*(undefined8 *)(lVar16 + 8),*(undefined8 *)(lVar16 + 0x10));
      local_328 = (undefined4)CONCAT43(uStack_46c,uStack_470._1_3_);
      uStack_324._3_1_ = (undefined)(undefined4)uStack_468;
      uStack_324 = CONCAT13(uStack_324._3_1_,(int3)((uint)uStack_46c >> 8));
      uStack_320._0_4_ = (undefined4)(CONCAT44(uStack_468._4_4_,(undefined4)uStack_468) >> 8);
      uStack_320._4_3_ = (undefined3)((uint)uStack_468._4_4_ >> 8);
      if (CONCAT44(uStack_474,local_478) != -0x7fffffffffffffff) {
        *(ulong *)(local_3e8 + 6) =
             CONCAT35(uStack_320._4_3_,CONCAT41((undefined4)uStack_320,uStack_324._3_1_));
        *(ulong *)((long)local_3e8 + 0x11) = CONCAT44(uStack_324,local_328);
        *local_3e8 = 4;
        *(long *)(local_3e8 + 2) = CONCAT44(uStack_474,local_478);
        *(undefined *)(local_3e8 + 4) = (undefined)uStack_470;
        _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h1485ca768f6a6c3cE
                  (uVar19,ppuVar20);
        goto LAB_0025ae60;
      }
    }
    puVar2 = PTR__ZN5utils10arg_parser9Arguments12flag_present17hcdc23bf30ac1487cE_004bfcf0;
    local_388 = uVar19;
    local_380 = ppuVar20;
    local_360 = lVar15;
    cVar7 = (*(code *)PTR__ZN5utils10arg_parser9Arguments12flag_present17hcdc23bf30ac1487cE_004bfcf0
            )(local_358,&DAT_00138f72,10);
    cVar8 = (*(code *)puVar2)(local_358,&DAT_00138fab,0xf);
    lVar15 = (*(code *)
               PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10)
                       (local_358,"module",6);
    uVar11 = 0;
    uVar6 = 0x80000000;
    if (lVar15 != 0) {
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_004bfd20
      )(&local_478,lVar15);
      local_128 = CONCAT44(uStack_46c,uStack_470);
      uStack_120 = CONCAT44(uStack_468._4_4_,(undefined4)uStack_468);
      uVar11 = local_478;
      uVar6 = uStack_474;
    }
    uStack_45c = uVar6;
    uStack_460 = uVar11;
    uStack_458 = (undefined4)local_128;
    uStack_454 = local_128._4_4_;
    local_450 = (undefined4)uStack_120;
    uStack_44c = uStack_120._4_4_;
    local_478 = (undefined4)local_388;
    uStack_474 = (undefined4)(local_388 >> 0x20);
    uStack_470 = SUB84(local_380,0);
    uStack_46c = (undefined4)((ulong)local_380 >> 0x20);
    uStack_468._0_4_ = (undefined4)local_390;
    uStack_468._4_4_ = (undefined4)(local_390 >> 0x20);
    cStack_448 = '\x02' - cVar7;
    cStack_447 = '\x02' - cVar8;
    uStack_446 = 6;
    lVar15 = (*(code *)PTR__ZN3vmm6logger7logging6Logger6update17hd8ab21c64c0e5747E_004bfd30)
                       (PTR__ZN3vmm6logger7logging6LOGGER17hf7b002b101b876e4E_004bfca0,&local_478);
    if (lVar15 != 0) {
      *local_3e8 = 5;
      *(long *)(local_3e8 + 2) = lVar15;
      goto LAB_0025ae60;
    }
    uVar19 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                       (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
    if (2 < uVar19) {
      local_3c8 = &PTR_DAT_004a3fa8;
      uStack_3c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1757f628e8f40b52E;
      local_478 = 0x4a3f10;
      uStack_474 = 0;
      uStack_470 = 1;
      uStack_46c = 0;
      uStack_458 = 0;
      uStack_454 = 0;
      uStack_460 = 1;
      uStack_45c = 0;
      uStack_468 = (undefined **)&local_3c8;
      local_308 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                            (&PTR_DAT_004a3fb8);
      local_328 = 0x138bb9;
      uStack_324 = 0;
      uStack_320._0_4_ = 0xb;
      uStack_320._4_4_ = 0;
      local_318 = &DAT_00138bb9;
      uStack_310 = 0xb;
      _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_478,3,&local_328);
    }
    auVar21 = (*(code *)
                PTR__ZN3vmm14signal_handler24register_signal_handlers17h8d2a27a71192403bE_004bfd38)
                        ();
    lVar15 = local_360;
    if ((auVar21 & (undefined  [12])0x1) != (undefined  [12])0x0) {
      *local_3e8 = 1;
      local_3e8[1] = auVar21._8_4_;
      goto LAB_0025ae60;
    }
    local_378 = _ZN11firecracker14resize_fdtable17ha61461e97c9c9377E();
    if (local_378._0_8_ == 3) {
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT__LP__RP__C_firecracker__ResizeFdTableError_GT__GT_17hac3548dabfd2b9faE
                (local_378);
    }
    else {
      local_298 = local_378;
      if (1 < local_378._0_8_) {
        *local_3e8 = 8;
        *(undefined (*) [16])(local_3e8 + 2) = local_378;
        goto LAB_0025ae60;
      }
      uVar19 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                         (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
      if (3 < uVar19) {
        uStack_3c0 = 
        _ZN11firecracker1_80__LT_impl_u20_core__fmt__Display_u20_for_u20_firecracker__ResizeFdTableError_GT_3fmt17h9119a7abbd9ad688E
        ;
        local_478 = 0x4a3f20;
        uStack_474 = 0;
        uStack_470 = 1;
        uStack_46c = 0;
        uStack_458 = 0;
        uStack_454 = 0;
        uStack_460 = 1;
        uStack_45c = 0;
        local_3c8 = (undefined **)local_298;
        uStack_468 = (undefined **)&local_3c8;
        local_308 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                              (&PTR_DAT_004a3fd0);
        local_328 = 0x138bb9;
        uStack_324 = 0;
        uStack_320._0_4_ = 0xb;
        uStack_320._4_4_ = 0;
        local_318 = &DAT_00138bb9;
        uStack_310 = 0xb;
        _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_478,4,&local_328);
      }
      _ZN4core3ptr52drop_in_place_LT_firecracker__ResizeFdTableError_GT_17h1642bdd3e12b6ad9E
                (local_298);
    }
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_004bfd20
    )(&local_1c0,lVar15);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
              (&uStack_1a8,&DAT_001391ec,10);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
              (local_190,&DAT_001391f6,0xb);
    uStack_178 = 0;
    lVar15 = (*(code *)
               PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10)
                       (local_358,&DAT_00139006,0xc);
    if (lVar15 == 0) {
LAB_0025b409:
      uVar9 = (*(code *)
                PTR__ZN5utils10arg_parser9Arguments12flag_present17hcdc23bf30ac1487cE_004bfcf0)
                        (local_358,&DAT_00138c7a,10);
      uVar12 = (*(code *)
                 PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10)
                         (local_358,&DAT_00138c09,0xe);
      _ZN11firecracker7seccomp13SeccompConfig9from_args17he53bf44f0843d7e2E(&local_478,uVar9,uVar12)
      ;
      ppuVar20 = uStack_468;
      if ((char)local_478 != '\x15') goto LAB_0025b5c4;
      _ZN11firecracker7seccomp11get_filters17hd13d8ec80e3e2eb0E(&local_238,uStack_474,uStack_470);
      puVar5 = local_3e8;
      if (CONCAT44(uStack_234,local_238) != 0) {
        local_298._4_4_ = uStack_234;
        local_298._0_4_ = local_238;
        local_298._8_8_ = puStack_230;
        local_288 = local_228;
        uStack_280 = (undefined4)uStack_220;
        uStack_27c = uStack_220._4_4_;
        local_278 = (undefined4)local_218;
        uStack_274 = local_218._4_4_;
        uStack_270 = uStack_210;
        uStack_26c = uStack_20c;
        lVar15 = (*(code *)
                   PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10)
                           (local_358,&DAT_00138e03,0xb);
        ppuVar20 = (undefined **)&DAT_8000000000000000;
        uStack_240 = (undefined **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
        uStack_320 = (undefined **)CONCAT44(uStack_320._4_4_,(undefined4)uStack_320);
        if (lVar15 != 0) {
          _ZN3std2fs14read_to_string17hda21ec86c0a6ebb0E(&local_478,lVar15);
          local_328 = uStack_470;
          uStack_324 = uStack_46c;
          ppuVar20 = (undefined **)&DAT_8000000000000000;
          uStack_240 = (undefined **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
          uStack_320 = uStack_468;
          if (CONCAT44(uStack_474,local_478) != -0x7fffffffffffffff) {
            local_f0 = uStack_470;
            uStack_ec = uStack_46c;
            local_f8 = CONCAT44(uStack_474,local_478);
            uStack_e8 = uStack_468;
            _ZN4core6result19Result_LT_T_C_E_GT_6expect17hee03fd7c598fd428E
                      (&local_478,&local_f8,&DAT_00139257,0x32,&PTR_DAT_004a3fe8);
            ppuVar20 = (undefined **)CONCAT44(uStack_474,local_478);
            local_248 = uStack_470;
            uStack_244 = uStack_46c;
            uStack_240 = uStack_468;
          }
        }
        lVar15 = (*(code *)
                   PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10)
                           (local_358,"metadataFileOpen",8);
        local_380 = ppuVar20;
        if (lVar15 == 0) {
LAB_0025b5a7:
          local_378._0_8_ = 0x8000000000000000;
        }
        else {
          _ZN3std2fs14read_to_string17hda21ec86c0a6ebb0E(&local_478,lVar15);
          local_328 = uStack_470;
          uStack_324 = uStack_46c;
          uStack_320 = uStack_468;
          if (CONCAT44(uStack_474,local_478) == -0x7fffffffffffffff) goto LAB_0025b5a7;
          local_d8 = uStack_470;
          uStack_d4 = uStack_46c;
          local_e0 = CONCAT44(uStack_474,local_478);
          uStack_d0 = uStack_468;
          _ZN4core6result19Result_LT_T_C_E_GT_6expect17hee03fd7c598fd428E
                    (local_378,&local_e0,&DAT_00139289,0x31,&PTR_DAT_004a4000);
        }
        puVar2 = PTR__ZN5utils10arg_parser9Arguments12flag_present17hcdc23bf30ac1487cE_004bfcf0;
        uVar9 = (*(code *)
                  PTR__ZN5utils10arg_parser9Arguments12flag_present17hcdc23bf30ac1487cE_004bfcf0)
                          (local_358,&DAT_00139057,10);
        local_388 = CONCAT71(local_388._1_7_,uVar9);
        uVar9 = (*(code *)puVar2)(local_358,&DAT_0013918e,10);
        uVar10 = (*(code *)puVar2)(local_358,&DAT_00138e9c,6);
        puVar18 = (undefined4 *)(ulong)uVar10;
        lVar15 = (*(code *)
                   PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10)
                           (local_358,&DAT_0013913a,0x19);
        if (lVar15 != 0) {
          _ZN4core3num21__LT_impl_u20_u64_GT_16from_ascii_radix17h3a465e09cf2726d1E
                    (&local_478,*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10));
          uVar17 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17h7e2a11c0926c2669E
                             (&local_478,&DAT_001392ba,0x45);
          lVar15 = (*(code *)
                     PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10)
                             (local_358,&DAT_0013917f,0xf);
          uVar12 = uVar17;
          if (lVar15 != 0) {
            _ZN4core3num21__LT_impl_u20_u64_GT_16from_ascii_radix17h3a465e09cf2726d1E
                      (&local_478,*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10));
            uVar12 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17h7e2a11c0926c2669E
                               (&local_478,&DAT_001392ff,0x3b);
          }
          if ((char)uVar10 == '\0') {
            lVar15 = (*(code *)
                       PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10
                     )(local_358,&DAT_00131120,8);
            if (lVar15 != 0) {
              _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
                        (&local_478,*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10));
              local_110 = CONCAT44(uStack_474,local_478);
              local_328 = uStack_470;
              uStack_324 = uStack_46c;
              uStack_320 = uStack_468;
              if (local_110 != -0x8000000000000000) {
                local_108 = uStack_470;
                uStack_104 = uStack_46c;
                uStack_100 = uStack_468;
                lVar15 = (*(code *)
                           PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10
                         )(local_358,&DAT_00138cec,0xd);
                if (lVar15 != 0) {
                  puVar18 = &local_478;
                  _ZN4core3num21__LT_impl_u20_u64_GT_16from_ascii_radix17h3a465e09cf2726d1E
                            (puVar18,*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10));
                  local_360 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17he6dd91a8ad03e809E
                                        (puVar18,&DAT_0013933a,0x37);
                }
                local_390 = (ulong)(lVar15 != 0);
                lVar15 = (*(code *)
                           PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10
                         )(local_358,&DAT_00138d43,0x11);
                if (lVar15 != 0) {
                  _ZN4core3num21__LT_impl_u20_u64_GT_16from_ascii_radix17h3a465e09cf2726d1E
                            (&local_478,*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10));
                  puVar18 = (undefined4 *)
                            _ZN4core6result19Result_LT_T_C_E_GT_6expect17he6dd91a8ad03e809E
                                      (&local_478,&DAT_00139371,0x3b);
                }
                lVar16 = (*(code *)
                           PTR__ZN5utils10arg_parser9Arguments12single_value17hfa922a008317d735E_004bfd10
                         )(local_358,&DAT_00138da2,0x12);
                if (lVar16 == 0) {
                  local_1c8 = 0;
                  auVar1 = local_378;
                }
                else {
                  _ZN4core3num21__LT_impl_u20_u64_GT_16from_ascii_radix17h3a465e09cf2726d1E
                            (&local_478,*(undefined8 *)(lVar16 + 8),*(undefined8 *)(lVar16 + 0x10));
                  local_1c8 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17he6dd91a8ad03e809E
                                        (&local_478,&DAT_001393ac,0x3c,&PTR_DAT_004a40a8);
                  auVar1 = local_378;
                }
                puVar5 = local_3e8;
                local_378._8_8_ = auVar1._8_8_;
                local_378._0_8_ = auVar1._0_8_;
                local_1d0 = (ulong)(lVar16 != 0);
                local_1f0 = local_390;
                local_1e8 = local_360;
                local_478 = SUB84(local_380,0);
                uStack_474 = (undefined4)((ulong)local_380 >> 0x20);
                uStack_470 = local_248;
                uStack_46c = uStack_244;
                if (local_378._0_8_ == -0x8000000000000000) {
                  local_378._8_8_ = 0;
                }
                local_1e0 = (ulong)(lVar15 != 0);
                local_1d8 = puVar18;
                uStack_468 = uStack_240;
                _ZN11firecracker18api_server_adapter12run_with_api17h95de3867043d5470E
                          (&local_c8,local_298,&local_478,&local_110,&local_1c0,&local_1f0,
                           local_388 & 0xff,uVar9,uVar17,uVar12,local_378._8_8_,local_368);
                local_378 = auVar1;
                uVar11 = 0xb;
                if (local_c8 != ' ') {
                  uStack_444 = (undefined4)local_98;
                  local_440 = (undefined4)((ulong)local_98 >> 0x20);
                  uStack_43c = (undefined4)uStack_90;
                  local_438 = (undefined4)((ulong)uStack_90 >> 0x20);
                  uStack_454 = (undefined4)local_a8;
                  local_450 = (undefined4)((ulong)local_a8 >> 0x20);
                  uStack_44c = (undefined4)uStack_a0;
                  cStack_448 = (char)((ulong)uStack_a0 >> 0x20);
                  cStack_447 = (char)((ulong)uStack_a0 >> 0x28);
                  uStack_446 = (undefined)((ulong)uStack_a0 >> 0x30);
                  uStack_445 = (undefined)((ulong)uStack_a0 >> 0x38);
                  uStack_468._4_4_ = (undefined4)local_b8;
                  uStack_460 = (undefined4)((ulong)local_b8 >> 0x20);
                  uStack_45c = (undefined4)uStack_b0;
                  uStack_458 = (undefined4)((ulong)uStack_b0 >> 0x20);
                  uStack_474 = (undefined4)CONCAT71(uStack_c7,local_c8);
                  uStack_470 = (undefined4)((uint7)uStack_c7 >> 0x18);
                  uStack_46c = (undefined4)uStack_c0;
                  uStack_468._0_4_ = (undefined4)((ulong)uStack_c0 >> 0x20);
                  puVar5[0x11] = local_438;
                  *(ulong *)(puVar5 + 0xd) = CONCAT44(uStack_444,(int)((ulong)uStack_a0 >> 0x20));
                  *(ulong *)(puVar5 + 0xf) = CONCAT44(uStack_43c,local_440);
                  *(ulong *)(puVar5 + 9) = CONCAT44(uStack_454,uStack_458);
                  *(ulong *)(puVar5 + 0xb) = CONCAT44(uStack_44c,local_450);
                  *(undefined ***)(puVar5 + 5) = uStack_468;
                  *(ulong *)(puVar5 + 7) = CONCAT44(uStack_45c,uStack_460);
                  puVar5[1] = local_478;
                  puVar5[2] = uStack_474;
                  puVar5[3] = uStack_470;
                  puVar5[4] = uStack_46c;
                  uVar11 = 9;
                }
                *puVar5 = uVar11;
                _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hf8b36c6afb1cf6edE
                          (local_378);
                _ZN4core3ptr139drop_in_place_LT_std__collections__hash__map__HashMap_LT_alloc__string__String_C_alloc__sync__Arc_LT_alloc__vec__Vec_LT_u64_GT__GT__GT__GT_17h19ec4151a8c22d65E
                          (local_298);
                goto LAB_0025ae60;
              }
            }
            goto LAB_0025bcf1;
          }
          _ZN106__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h51daf4a5599e18c5E
                    (&local_478,local_298);
          _ZN4core4iter6traits8iterator8Iterator7collect17h8f1bd563443c2c3cE(&local_328,&local_478);
          local_3c8 = local_380;
          uStack_3c0 = (code *)CONCAT44(uStack_244,local_248);
          ppuStack_3b8 = uStack_240;
          uStack_430 = CONCAT71(uStack_177,uStack_178);
          local_438 = (undefined4)local_180;
          uStack_434 = (undefined4)((ulong)local_180 >> 0x20);
          cStack_448 = local_190[0];
          cStack_447 = local_190[1];
          uStack_446 = local_190[2];
          uStack_445 = local_190[3];
          uStack_444 = uStack_18c;
          local_440 = uStack_188;
          uStack_43c = uStack_184;
          uStack_458 = local_1a0;
          uStack_454 = uStack_19c;
          local_450 = uStack_198;
          uStack_44c = uStack_194;
          uStack_468._0_4_ = local_1b0;
          uStack_468._4_4_ = uStack_1ac;
          uStack_460 = uStack_1a8;
          uStack_45c = uStack_1a4;
          local_478 = local_1c0;
          uStack_474 = uStack_1bc;
          uStack_470 = uStack_1b8;
          uStack_46c = uStack_1b4;
          uVar17 = local_378._8_8_;
          if (local_378._0_8_ == -0x8000000000000000) {
            uVar17 = 0;
          }
          _ZN11firecracker15run_without_api17h14833a82da343b1aE
                    (&local_88,&local_328,&local_3c8,&local_478,local_388 & 0xff,uVar9,uVar12,uVar17
                     ,local_368);
          uVar11 = 0xb;
          if (local_88 != '\x1d') {
            uStack_444 = (undefined4)local_58;
            local_440 = (undefined4)((ulong)local_58 >> 0x20);
            uStack_43c = (undefined4)uStack_50;
            local_438 = (undefined4)((ulong)uStack_50 >> 0x20);
            uStack_454 = (undefined4)local_68;
            local_450 = (undefined4)((ulong)local_68 >> 0x20);
            uStack_44c = (undefined4)uStack_60;
            cStack_448 = (char)((ulong)uStack_60 >> 0x20);
            cStack_447 = (char)((ulong)uStack_60 >> 0x28);
            uStack_446 = (undefined)((ulong)uStack_60 >> 0x30);
            uStack_445 = (undefined)((ulong)uStack_60 >> 0x38);
            uStack_468._4_4_ = (undefined4)local_78;
            uStack_460 = (undefined4)((ulong)local_78 >> 0x20);
            uStack_45c = (undefined4)uStack_70;
            uStack_458 = (undefined4)((ulong)uStack_70 >> 0x20);
            uStack_474 = (undefined4)CONCAT71(uStack_87,local_88);
            uStack_470 = (undefined4)((uint7)uStack_87 >> 0x18);
            uStack_46c = (undefined4)uStack_80;
            uStack_468._0_4_ = (undefined4)((ulong)uStack_80 >> 0x20);
            puVar5[0x11] = local_438;
            *(ulong *)(puVar5 + 0xd) = CONCAT44(uStack_444,(int)((ulong)uStack_60 >> 0x20));
            *(ulong *)(puVar5 + 0xf) = CONCAT44(uStack_43c,local_440);
            *(ulong *)(puVar5 + 9) = CONCAT44(uStack_454,uStack_458);
            *(ulong *)(puVar5 + 0xb) = CONCAT44(uStack_44c,local_450);
            *(ulong *)(puVar5 + 5) = CONCAT44(uStack_468._4_4_,(undefined4)uStack_468);
            *(ulong *)(puVar5 + 7) = CONCAT44(uStack_45c,uStack_460);
            puVar5[1] = local_478;
            puVar5[2] = uStack_474;
            puVar5[3] = uStack_470;
            puVar5[4] = uStack_46c;
            uVar11 = 10;
          }
          *puVar5 = uVar11;
          _ZN4core3ptr139drop_in_place_LT_std__collections__hash__map__HashMap_LT_alloc__string__String_C_alloc__sync__Arc_LT_alloc__vec__Vec_LT_u64_GT__GT__GT__GT_17h19ec4151a8c22d65E
                    (&local_328);
          _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hf8b36c6afb1cf6edE
                    (local_378);
          goto LAB_0025ae60;
        }
        goto LAB_0025bce4;
      }
      goto LAB_0025b5e6;
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
              (local_48,*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10));
    (*(code *)PTR__ZN3vmm10vmm_config7metrics12init_metrics17hddd84842699c0a5fE_004bfd40)
              (&local_208,local_48);
    if (local_208 == -0x8000000000000000) goto LAB_0025b409;
    local_158 = local_1f8;
    local_168 = local_208;
    lVar15 = local_168;
    uStack_160 = uStack_200;
    uVar12 = uStack_160;
    *local_3e8 = 6;
    local_168._0_4_ = (undefined4)local_208;
    local_168._4_4_ = (undefined4)((ulong)local_208 >> 0x20);
    uStack_160._0_4_ = (undefined4)uStack_200;
    uStack_160._4_4_ = (undefined4)((ulong)uStack_200 >> 0x20);
    local_3e8[1] = uStack_16c;
    local_3e8[2] = (undefined4)local_168;
    local_3e8[3] = local_168._4_4_;
    local_3e8[4] = (undefined4)uStack_160;
    local_3e8[5] = uStack_160._4_4_;
    *(undefined8 *)(local_3e8 + 6) = local_1f8;
    local_3e8[8] = local_150;
    local_3e8[9] = local_14c;
    local_3e8[10] = uStack_148;
    local_3e8[0xb] = uStack_144;
    local_3e8[0xc] = uStack_140;
    local_3e8[0xd] = local_13c;
    local_3e8[0xe] = uStack_138;
    local_3e8[0xf] = uStack_134;
    local_3e8[0x10] = uStack_130;
    local_3e8[0x11] = local_12c;
    local_168 = lVar15;
    uStack_160 = uVar12;
  }
  _ZN4core3ptr65drop_in_place_LT_vmm__vmm_config__instance_info__InstanceInfo_GT_17h8bafaefa3a8db683E
            (&local_1c0);
LAB_0025ae60:
  _ZN4core3ptr49drop_in_place_LT_utils__arg_parser__ArgParser_GT_17h4867b8e4a23b8fa6E(local_358);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1017b1af1d0852d4E(local_268);
  return;
}