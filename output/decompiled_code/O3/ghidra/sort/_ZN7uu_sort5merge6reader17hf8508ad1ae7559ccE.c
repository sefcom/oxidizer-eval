long __rustcall
uu_sort::merge::reader
          (undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,undefined param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined local_1a9;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_1a8 = param_1;
  local_1a0 = param_4;
  _<std::sync::mpsc::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_b0,&local_1a8);
  if (CONCAT44(uStack_a4,local_a8) != -0x8000000000000000) {
    do {
      local_b8 = local_38;
      local_c8 = local_48;
      uStack_c0 = uStack_40;
      local_d8 = local_58;
      uStack_d0 = uStack_50;
      local_e8 = local_68;
      uStack_e0 = uStack_60;
      local_128 = local_a8;
      uStack_124 = uStack_a4;
      uStack_120 = uStack_a0;
      uStack_11c = uStack_9c;
      local_118 = local_98;
      uStack_114 = uStack_94;
      uStack_110 = uStack_90;
      uStack_10c = uStack_8c;
      local_108 = local_88;
      uStack_104 = uStack_84;
      uStack_100 = uStack_80;
      uStack_fc = uStack_7c;
      local_f8 = local_78;
      uStack_f4 = uStack_74;
      uStack_f0 = uStack_70;
      uStack_ec = uStack_6c;
      if (param_3 <= local_b0) {
                    /* try { // try from 002319fa to 00231a09 has its CatchHandler @ 00231a35 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check(local_b0,param_3,&PTR_DAT_002ff8e0);
      }
      if (*(int *)(param_2 + local_b0 * 0x48) == 3) {
        core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&local_128);
      }
      else {
        plVar1 = (long *)(param_2 + local_b0 * 0x48);
        uVar6 = _<uu_sort::merge::PlainTmpMergeInput_as_uu_sort::merge::MergeInput>::as_read
                          (plVar1 + 2);
        chunks::read(&local_198,plVar1,&local_a8,0,&local_1a9,plVar1 + 6,uVar6,&local_1a9,param_5,
                     local_1a0);
        if (local_198 != 0) {
          return local_198;
        }
        if ((char)uStack_190 == '\0') {
          lVar2 = *plVar1;
          *plVar1 = 3;
          if (lVar2 == 3) {
            uVar6 = core::option::unwrap_failed(&PTR_DAT_002ff8f8);
                    /* catch() { ... } // from try @ 002319c0 with catch @ 00231a17 */
            core::ptr::drop_in_place<uu_sort::merge::PlainTmpMergeInput>(&local_148);
                    /* WARNING: Subroutine does not return */
            _Unwind_Resume(uVar6);
          }
          uStack_190 = plVar1[1];
          lVar3 = plVar1[2];
          lVar4 = plVar1[3];
          lVar5 = plVar1[4];
          local_170 = *(undefined4 *)(plVar1 + 5);
          uStack_16c = *(undefined4 *)((long)plVar1 + 0x2c);
          uStack_168 = *(undefined4 *)(plVar1 + 6);
          uStack_164 = *(undefined4 *)((long)plVar1 + 0x34);
          local_160 = *(undefined4 *)(plVar1 + 7);
          uStack_15c = *(undefined4 *)((long)plVar1 + 0x3c);
          uStack_158 = *(undefined4 *)(plVar1 + 8);
          uStack_154 = *(undefined4 *)((long)plVar1 + 0x44);
          uStack_188._0_4_ = (undefined4)lVar3;
          uStack_188._4_4_ = (undefined4)((ulong)lVar3 >> 0x20);
          local_180._0_4_ = (undefined4)lVar4;
          local_180._4_4_ = (undefined4)((ulong)lVar4 >> 0x20);
          uStack_178._0_4_ = (undefined4)lVar5;
          uStack_178._4_4_ = (undefined4)((ulong)lVar5 >> 0x20);
          local_138 = (undefined4)uStack_178;
          uStack_134 = uStack_178._4_4_;
          local_148 = (undefined4)uStack_188;
          uStack_144 = uStack_188._4_4_;
          uStack_140 = (undefined4)local_180;
          uStack_13c = local_180._4_4_;
                    /* try { // try from 002319b6 to 002319bf has its CatchHandler @ 00231a1c */
          local_198 = lVar2;
          uStack_188 = lVar3;
          local_180 = lVar4;
          uStack_178 = lVar5;
          uStack_130 = local_170;
          uStack_12c = uStack_16c;
          core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&local_198);
                    /* try { // try from 002319c0 to 002319c9 has its CatchHandler @ 00231a17 */
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&uStack_168);
          uStack_188 = CONCAT44(uStack_134,local_138);
          local_180 = CONCAT44(uStack_12c,uStack_130);
          local_198 = CONCAT44(uStack_144,local_148);
          uStack_190 = CONCAT44(uStack_13c,uStack_140);
          _<uu_sort::merge::PlainTmpMergeInput_as_uu_sort::merge::MergeInput>::finished_reading
                    (&local_198);
        }
      }
      _<std::sync::mpsc::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                (&local_b0,&local_1a8);
    } while (CONCAT44(uStack_a4,local_a8) != -0x8000000000000000);
  }
  return 0;
}