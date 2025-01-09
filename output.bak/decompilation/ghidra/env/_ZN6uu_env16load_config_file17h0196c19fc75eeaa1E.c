undefined  [16] __rustcall uu_env::load_config_file(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined extraout_DL;
  undefined auVar7 [16];
  long local_298;
  long local_290;
  long *local_288;
  undefined *local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  long local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined local_240 [16];
  long local_230;
  long local_228;
  undefined8 *local_220;
  undefined8 local_218;
  undefined local_210 [40];
  undefined local_1e8 [32];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  long local_178;
  long lStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_298 = *(long *)(param_1 + 8);
  local_290 = *(long *)(param_1 + 0x10) * 0x10 + local_298;
  puVar5 = (undefined8 *)
           _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_298);
  if (puVar5 != (undefined8 *)0x0) {
    do {
      uVar6 = *puVar5;
      uVar1 = puVar5[1];
      cVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar6,uVar1,&DAT_001244c2,1);
      if (cVar4 == '\0') {
        ini::Ini::load_from_file_opt(&local_e0,uVar6,uVar1,1,1);
      }
      else {
        local_178 = std::io::stdio::stdin();
        local_228 = std::io::stdio::Stdin::lock(&local_178);
        local_220 = (undefined8 *)(CONCAT71(local_220._1_7_,extraout_DL) & 0xffffffffffffff01);
                    /* try { // try from 001cc74f to 001cc76d has its CatchHandler @ 001cc984 */
        ini::Ini::read_from_opt(&local_e0,&local_228,1,1);
        core::ptr::drop_in_place<std::io::stdio::StdinLock>(local_228,(ulong)local_220 & 0xffffffff)
        ;
      }
      uVar3 = local_d0;
      puVar5 = local_d8;
      lVar2 = local_e0;
      if (local_e0 == -0x8000000000000000) {
        local_268 = local_b8;
        local_278 = local_c8;
        uStack_274 = uStack_c4;
        uStack_270 = uStack_c0;
        uStack_26c = uStack_bc;
        local_288 = local_d8;
        local_280 = (undefined *)local_d0;
        uVar6 = load_config_file::___closure__(uVar6,uVar1,&local_288);
        goto LAB_001cc96b;
      }
      local_168 = local_b8;
      local_178 = CONCAT44(uStack_c4,local_c8);
      lStack_170 = CONCAT44(uStack_bc,uStack_c0);
      local_f0 = local_40;
      uStack_e8 = uStack_38;
      local_100 = local_50;
      uStack_f8 = uStack_48;
      local_110 = local_60;
      uStack_108 = uStack_58;
      local_120 = local_70;
      uStack_118 = uStack_68;
      local_130 = local_80;
      uStack_12c = uStack_7c;
      uStack_128 = uStack_78;
      uStack_124 = uStack_74;
      local_140 = local_90;
      uStack_13c = uStack_8c;
      uStack_138 = uStack_88;
      uStack_134 = uStack_84;
      local_150 = local_a0;
      uStack_14c = uStack_9c;
      uStack_148 = uStack_98;
      uStack_144 = uStack_94;
      uStack_160 = local_b0;
      uStack_15c = uStack_ac;
      uStack_158 = CONCAT44(uStack_a4,uStack_a8);
      (*(code *)PTR_memcpy_0024d1c8)(local_210,&local_178,0x98);
      local_228 = lVar2;
      local_220 = puVar5;
      local_218 = uVar3;
      local_280 = local_1e8;
      local_278 = local_1c8;
      uStack_274 = uStack_1c4;
      uStack_270 = uStack_1c0;
      uStack_26c = uStack_1bc;
      local_268 = local_1b8;
      local_288 = &local_228;
      while( true ) {
                    /* try { // try from 001cc8c0 to 001cc8cb has its CatchHandler @ 001cc99d */
        _<ini::SectionIter_as_core::iter::traits::iterator::Iterator>::next(local_240,&local_288);
        if (local_230 == 0) break;
        lStack_170 = local_230 + 0x40;
        uStack_158 = *(undefined8 *)(local_230 + 0x70);
        local_178 = local_230;
        local_168 = *(undefined8 *)(local_230 + 0x60);
        uStack_160 = *(undefined4 *)(local_230 + 0x68);
        uStack_15c = *(undefined4 *)(local_230 + 0x6c);
        while( true ) {
                    /* try { // try from 001cc910 to 001cc936 has its CatchHandler @ 001cc99f */
          _<ini::PropertyIter_as_core::iter::traits::iterator::Iterator>::next
                    (&local_260,&local_178);
          if (local_260 == 0) break;
          std::env::set_var(local_260,local_258,local_250,local_248);
        }
      }
      core::ptr::drop_in_place<ini::Ini>(&local_228);
      puVar5 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_298);
    } while (puVar5 != (undefined8 *)0x0);
  }
  uVar6 = 0;
LAB_001cc96b:
  auVar7._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00248908;
  auVar7._0_8_ = uVar6;
  return auVar7;
}