void __rustcall
uu_csplit::csplit(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  long local_1a0;
  long local_198;
  undefined8 local_190;
  long local_188;
  long lStack_180;
  undefined8 uStack_178;
  long local_170;
  long local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128 [4];
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined local_f0;
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  long lStack_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined uStack_90;
  undefined7 uStack_8f;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_78;
  undefined local_70 [8];
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined local_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  std::io::BufRead::lines(&lStack_d0,param_5);
  uStack_a0 = 0;
  local_e8 = 0;
  lStack_e0 = 8;
  local_d8 = 0;
  local_98 = 1;
  uStack_90 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_128[0] = 0x8000000000000000;
  local_f0 = 0;
                    /* try { // try from 00260a71 to 00260adc has its CatchHandler @ 00260e01 */
  local_108 = param_2;
  (*(code *)PTR_get_patterns_004206d0)(&local_188,param_3,param_4);
  local_1e8 = lStack_180;
  lVar3 = local_1e8;
  uStack_1e0 = uStack_178;
  uVar2 = uStack_1e0;
  local_1d8 = local_170;
  local_1e8._0_4_ = (int)lStack_180;
  local_1e8._4_4_ = (undefined4)((ulong)lStack_180 >> 0x20);
  uStack_1e0._0_4_ = (undefined4)uStack_178;
  uStack_1e0._4_4_ = (undefined4)((ulong)uStack_178 >> 0x20);
  local_1e8 = lVar3;
  uStack_1e0 = uVar2;
  if (local_188 == 0xc) {
    local_88 = (int)local_1e8;
    uStack_84 = local_1e8._4_4_;
    uStack_80 = (undefined4)uStack_1e0;
    uStack_7c = uStack_1e0._4_4_;
    local_78 = local_170;
    do_csplit(&local_1e8,local_128,&local_88,&local_e8);
    bVar4 = true;
    bVar1 = true;
    if ((int)local_1e8 != 0xc) {
LAB_00260b25:
      if ((bVar4) && (*(char *)(param_2 + 0x60) == '\0')) {
        lVar3 = (*(code *)PTR_delete_all_splits_004206d8)(local_128);
        if (lVar3 != 0) {
          *param_1 = 0;
          param_1[1] = lVar3;
          goto LAB_00260c4a;
        }
      }
      param_1[4] = local_1c8;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_1d8;
      *(undefined4 *)((long)param_1 + 0x14) = local_1d8._4_4_;
      *(undefined4 *)(param_1 + 3) = uStack_1d0;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_1cc;
      *(int *)param_1 = (int)local_1e8;
      *(undefined4 *)((long)param_1 + 4) = local_1e8._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1e0;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_1e0._4_4_;
                    /* try { // try from 00260b94 to 00260ba0 has its CatchHandler @ 00260dfc */
      core::ptr::drop_in_place<uu_csplit::SplitWriter>(local_128);
      goto LAB_00260c5f;
    }
    uStack_90 = 1;
                    /* try { // try from 00260af3 to 00260b3d has its CatchHandler @ 00260def */
    _<uu_csplit::InputSplitter<I>as_core::iter::traits::iterator::Iterator>::next
              (local_50,&local_e8);
    bVar1 = true;
    if (CONCAT44(uStack_44,local_48) == -0x7fffffffffffffff) {
LAB_00260b1d:
      bVar4 = local_1e8 != 0xc;
      goto LAB_00260b25;
    }
    local_1a8 = local_38;
    local_1b8 = local_48;
    uStack_1b4 = uStack_44;
    uStack_1b0 = uStack_40;
    uStack_1ac = uStack_3c;
                    /* try { // try from 00260bbf to 00260bcc has its CatchHandler @ 00260dcc */
    lVar3 = (*(code *)PTR_new_writer_004206e0)(local_128);
    if (lVar3 == 0) {
      if (CONCAT44(uStack_1b4,local_1b8) == -0x8000000000000000) {
        *param_1 = 0;
        param_1[1] = CONCAT44(uStack_1ac,uStack_1b0);
      }
      else {
        uStack_178 = local_1a8;
                    /* try { // try from 00260c1c to 00260c29 has its CatchHandler @ 00260dac */
        local_188 = CONCAT44(uStack_1b4,local_1b8);
        lStack_180 = CONCAT44(uStack_1ac,uStack_1b0);
        lVar3 = (*(code *)PTR_writeln_004206c0)(local_128);
        if (lVar3 == 0) {
                    /* try { // try from 00260c86 to 00260c8f has its CatchHandler @ 00260dbb */
          core::ptr::drop_in_place<alloc::string::String>(&local_188);
          uStack_130 = CONCAT71(uStack_8f,uStack_90);
          local_138 = local_98;
          local_148 = local_a8;
          uStack_140 = uStack_a0;
          local_158 = local_b8;
          uStack_150 = uStack_b0;
          local_168 = local_c8;
          uStack_160 = uStack_c0;
          uStack_178 = local_d8;
          local_170 = lStack_d0;
          local_188 = local_e8;
          lStack_180 = lStack_e0;
          while( true ) {
                    /* try { // try from 00260cf7 to 00260d01 has its CatchHandler @ 00260dde */
            _<uu_csplit::InputSplitter<I>as_core::iter::traits::iterator::Iterator>::next
                      (local_70,&local_188);
            if (local_68 == -0x7fffffffffffffff) break;
            if (local_68 == -0x8000000000000000) {
              *param_1 = 0;
              param_1[1] = local_60;
LAB_00260d97:
                    /* try { // try from 00260d99 to 00260da2 has its CatchHandler @ 00260dbb */
              core::ptr::
              drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>
                        (&local_188);
              bVar1 = false;
              goto LAB_00260c4a;
            }
            local_1a0 = local_68;
            local_198 = local_60;
            local_190 = local_58;
                    /* try { // try from 00260d33 to 00260d40 has its CatchHandler @ 00260dbd */
            lVar3 = (*(code *)PTR_writeln_004206c0)(local_128);
            if (lVar3 != 0) {
              *param_1 = 0;
              param_1[1] = lVar3;
                    /* try { // try from 00260d8d to 00260d96 has its CatchHandler @ 00260daa */
              core::ptr::drop_in_place<alloc::string::String>(&local_1a0);
              goto LAB_00260d97;
            }
                    /* try { // try from 00260d46 to 00260d4f has its CatchHandler @ 00260dde */
            core::ptr::drop_in_place<alloc::string::String>(&local_1a0);
          }
                    /* try { // try from 00260d54 to 00260d6d has its CatchHandler @ 00260dbb */
          core::ptr::
          drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>
                    (&local_188);
          (*(code *)PTR_finish_split_004206c8)(local_128);
          bVar1 = false;
          goto LAB_00260b1d;
        }
        *param_1 = 0;
        param_1[1] = lVar3;
                    /* try { // try from 00260c3d to 00260c46 has its CatchHandler @ 00260dbb */
        core::ptr::drop_in_place<alloc::string::String>(&local_188);
      }
      bVar1 = true;
    }
    else {
      *param_1 = 0;
      param_1[1] = lVar3;
      bVar1 = true;
                    /* try { // try from 00260be0 to 00260be9 has its CatchHandler @ 00260def */
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>
                (&local_1b8);
    }
LAB_00260c4a:
                    /* try { // try from 00260c4a to 00260c51 has its CatchHandler @ 00260e01 */
    core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>
              (&local_1e8);
  }
  else {
    param_1[3] = local_170;
    *(int *)(param_1 + 1) = (int)local_1e8;
    *(undefined4 *)((long)param_1 + 0xc) = local_1e8._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1e0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_1e0._4_4_;
    *param_1 = local_188;
    param_1[4] = local_168;
    bVar1 = true;
  }
                    /* try { // try from 00260c52 to 00260c5e has its CatchHandler @ 00260dfc */
  core::ptr::drop_in_place<uu_csplit::SplitWriter>(local_128);
LAB_00260c5f:
  if (bVar1) {
    core::ptr::
    drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>
              (&local_e8);
  }
  return;
}