undefined  [16] __rustcall
uu_join::exec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined local_242;
  undefined local_241;
  undefined4 local_240;
  char local_23a;
  undefined local_239;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined local_1d8 [40];
  undefined8 local_1b0;
  undefined local_1a8 [12];
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 *local_178;
  code *pcStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined local_150;
  undefined8 *local_148;
  code *pcStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined local_f0 [16];
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined local_90 [16];
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
                    /* try { // try from 00170473 to 001704af has its CatchHandler @ 00170eaf */
  local_1b0 = (*(code *)PTR_stdin_00239360)();
  (*(code *)PTR_new_00239368)
            (&local_238,0,param_1,param_2,&local_1b0,param_5[9],*(undefined *)((long)param_5 + 0x5f)
             ,*(undefined *)(param_5 + 0xb));
  auVar10._8_8_ = local_228;
  auVar10._0_8_ = uStack_230;
  if (CONCAT44(local_238._4_4_,(undefined4)local_238) == -0x8000000000000000) {
    uVar9 = 1;
    local_238 = (undefined8 *)0x8000000000000000;
  }
  else {
    local_98 = local_1e0;
    local_a8 = local_1f0;
    uStack_a4 = uStack_1ec;
    uStack_a0 = uStack_1e8;
    uStack_9c = uStack_1e4;
    local_b8 = local_200;
    uStack_b4 = uStack_1fc;
    uStack_b0 = uStack_1f8;
    uStack_ac = uStack_1f4;
    local_c8 = uStack_210;
    uStack_c4 = uStack_20c;
    uStack_c0 = uStack_208;
    uStack_bc = uStack_204;
    local_d8 = (undefined4)uStack_220;
    uStack_d4 = uStack_220._4_4_;
    uStack_d0 = (undefined4)uStack_218;
    uStack_cc = uStack_218._4_4_;
    local_e0 = local_228;
    local_240 = (undefined4)CONCAT71((int7)((ulong)local_1e0 >> 8),1);
                    /* try { // try from 00170542 to 00170566 has its CatchHandler @ 00170e87 */
    (*(code *)PTR_new_00239368)
              (&local_238,1,param_3,param_4,&local_1b0,param_5[10],
               *(undefined *)((long)param_5 + 0x5f),*(undefined *)((long)param_5 + 0x59));
    auVar10._8_8_ = local_228;
    auVar10._0_8_ = uStack_230;
    if (CONCAT44(local_238._4_4_,(undefined4)local_238) == -0x8000000000000000) {
      local_240 = 1;
      local_238 = (undefined8 *)0x8000000000000000;
    }
    else {
      local_38 = local_1e0;
      local_48 = local_1f0;
      uStack_44 = uStack_1ec;
      uStack_40 = uStack_1e8;
      uStack_3c = uStack_1e4;
      local_58 = local_200;
      uStack_54 = uStack_1fc;
      uStack_50 = uStack_1f8;
      uStack_4c = uStack_1f4;
      local_68 = uStack_210;
      uStack_64 = uStack_20c;
      uStack_60 = uStack_208;
      uStack_5c = uStack_204;
      local_78 = (undefined4)uStack_220;
      uStack_74 = uStack_220._4_4_;
      uStack_70 = (undefined4)uStack_218;
      uStack_6c = uStack_218._4_4_;
      local_80 = local_228;
      local_242 = *(undefined *)((long)param_5 + 0x5b);
      local_241 = *(undefined *)((long)param_5 + 0x5e);
      local_23a = *(char *)((long)param_5 + 0x5c);
      if (local_23a == '\0') {
        local_240 = 1;
                    /* try { // try from 001706af to 001706d8 has its CatchHandler @ 00170e82 */
        State::initialize(local_f0,&local_239,0);
        State::initialize(local_90,&local_239,*(code *)((long)param_5 + 0x5c));
        local_138 = param_5[2];
        local_148 = (undefined8 *)*param_5;
        pcStack_140 = (code *)param_5[1];
        local_240 = 0;
      }
      else {
        puVar4 = (undefined *)::alloc::alloc::Global::alloc_impl(0x10);
        if (puVar4 == (undefined *)0x0) {
          local_240 = 1;
                    /* try { // try from 00170d83 to 00170d92 has its CatchHandler @ 00170e82 */
          (*(code *)PTR_handle_alloc_error_002392f8)(8,0x10);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        *puVar4 = 0;
        *(ulong *)(puVar4 + 1) = CONCAT44(local_238._4_4_,(undefined4)local_238);
        *(ulong *)(puVar4 + 8) =
             CONCAT35(uStack_230._4_3_,CONCAT41((undefined4)uStack_230,local_238._7_1_));
        local_240 = (undefined4)
                    CONCAT71((int7)(CONCAT44(local_238._4_4_,(undefined4)local_238) >> 8),1);
                    /* try { // try from 00170631 to 00170648 has its CatchHandler @ 00170e82 */
        ::alloc::slice::hack::into_vec(local_1a8,puVar4,1);
        local_238 = (undefined8 *)&local_239;
                    /* try { // try from 0017065d to 00170680 has its CatchHandler @ 00170e3f */
        local_228 = (undefined8 *)local_1a8;
        uStack_230 = (code *)((long)param_5 + 0x5c);
        exec::___closure__(&local_238,local_f0);
        exec::___closure__(&local_238,local_90);
        local_138 = CONCAT44(uStack_194,local_198);
        local_148 = (undefined8 *)local_1a8._0_8_;
        pcStack_140 = stack0xfffffffffffffe60;
        local_240 = (undefined4)CONCAT71((int7)((ulong)local_138 >> 8),1);
      }
      local_150 = *(undefined *)((long)param_5 + 0x5f);
      local_168 = local_138;
      local_178 = local_148;
      pcStack_170 = pcStack_140;
      local_160 = *(undefined4 *)(param_5 + 4);
      uStack_15c = *(undefined4 *)((long)param_5 + 0x24);
      uStack_158 = *(undefined4 *)(param_5 + 5);
      uStack_154 = *(undefined4 *)((long)param_5 + 0x2c);
                    /* try { // try from 0017072f to 0017075c has its CatchHandler @ 00170eaa */
      local_130 = (*(code *)PTR_stdout_00239370)();
      uVar5 = (*(code *)PTR_lock_00239378)(&local_130);
      std::io::buffered::bufwriter::BufWriter<W>::with_capacity(local_1d8,0x2000,uVar5);
      if (*(char *)((long)param_5 + 0x5d) == '\0') {
LAB_001707e2:
        if ((local_e0 != (undefined8 *)0x0) && (local_80 != (undefined8 *)0x0)) {
          do {
                    /* try { // try from 00170820 to 001708b1 has its CatchHandler @ 00170eb8 */
            auVar10 = (*(code *)PTR_get_current_key_00239388)(local_f0);
            auVar11 = (*(code *)PTR_get_current_key_00239388)(local_90);
            cVar3 = Input<Sep>::compare(local_242,auVar10._0_8_,auVar10._8_8_,auVar11._0_8_,
                                        auVar11._8_8_);
            if (cVar3 == '\0') {
              State::extend(&local_238,local_f0,&local_242);
              puVar2 = local_228;
              pcVar1 = uStack_230;
              auVar10._8_8_ = local_228;
              auVar10._0_8_ = uStack_230;
              if (local_238 == (undefined8 *)0x8000000000000001) {
                    /* try { // try from 00170bf3 to 00170c0e has its CatchHandler @ 00170dd9 */
                lVar6 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush
                                  (local_1d8);
                if (lVar6 != 0) {
                  auVar10 = (*(code *)PTR_from_00239380)(lVar6);
                    /* try { // try from 00170c0f to 00170c1f has its CatchHandler @ 00170e80 */
                  core::ptr::
                  drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                            (pcVar1,puVar2);
                }
                goto LAB_00170b77;
              }
              local_108 = (undefined4)uStack_218;
              uStack_104 = uStack_218._4_4_;
              uStack_100 = uStack_210;
              uStack_fc = uStack_20c;
              local_118 = (undefined4)local_228;
              uStack_114 = local_228._4_4_;
              uStack_110 = (undefined4)uStack_220;
              uStack_10c = uStack_220._4_4_;
              local_128 = local_238;
              uStack_120 = uStack_230;
                    /* try { // try from 001708e4 to 001708f5 has its CatchHandler @ 00170e3a */
              State::extend(&local_238,local_90,&local_242);
              puVar2 = local_228;
              pcVar1 = uStack_230;
              auVar10._8_8_ = local_228;
              auVar10._0_8_ = uStack_230;
              if (local_238 == (undefined8 *)0x8000000000000001) {
                    /* try { // try from 00170c35 to 00170c4c has its CatchHandler @ 00170dc6 */
                lVar6 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush
                                  (local_1d8);
                if (lVar6 != 0) {
                  auVar10 = (*(code *)PTR_from_00239380)(lVar6);
                    /* try { // try from 00170c4d to 00170c5d has its CatchHandler @ 00170dc4 */
                  core::ptr::
                  drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                            (pcVar1,puVar2);
                }
LAB_00170c82:
                    /* try { // try from 00170c82 to 00170d23 has its CatchHandler @ 00170e80 */
                core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&local_128);
                goto LAB_00170b77;
              }
              local_188 = (undefined4)uStack_218;
              uStack_184 = uStack_218._4_4_;
              uStack_180 = uStack_210;
              uStack_17c = uStack_20c;
              local_198 = (undefined4)local_228;
              uStack_194 = local_228._4_4_;
              uStack_190 = (undefined4)uStack_220;
              uStack_18c = uStack_220._4_4_;
              local_1a8._0_8_ = local_238;
              stack0xfffffffffffffe60 = uStack_230;
              if (*(char *)((long)param_5 + 0x5a) != '\0') {
                    /* try { // try from 00170931 to 00170989 has its CatchHandler @ 00170e57 */
                lVar6 = State::combine(local_f0,local_1d8,local_90,&local_178);
                if (lVar6 != 0) {
                    /* try { // try from 00170c66 to 00170c6e has its CatchHandler @ 00170db9 */
                  auVar10 = (*(code *)PTR_from_00239380)(lVar6);
                    /* try { // try from 00170c6f to 00170c81 has its CatchHandler @ 00170dc4 */
                  core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(local_1a8);
                  goto LAB_00170c82;
                }
              }
              uStack_218 = CONCAT44(uStack_104,local_108);
              uStack_210 = uStack_100;
              uStack_20c = uStack_fc;
              local_228 = (undefined8 *)CONCAT44(uStack_114,local_118);
              uStack_220 = CONCAT44(uStack_10c,uStack_110);
              local_238._0_4_ = (undefined4)local_128;
              local_238._4_4_ = local_128._4_4_;
              uStack_230._0_4_ = (undefined4)uStack_120;
              uStack_230._4_4_ = uStack_120._4_4_;
              (*(code *)PTR_reset_00239390)(local_f0,&local_238);
              uStack_218 = CONCAT44(uStack_184,local_188);
              uStack_210 = uStack_180;
              uStack_20c = uStack_17c;
              local_228 = (undefined8 *)CONCAT44(uStack_194,local_198);
              uStack_220 = CONCAT44(uStack_18c,uStack_190);
              local_238._0_4_ = local_1a8._0_4_;
              local_238._4_4_ = local_1a8._4_4_;
              uStack_230._0_4_ = local_1a8._8_4_;
              uStack_230._4_4_ = uStack_19c;
                    /* try { // try from 001709b1 to 001709be has its CatchHandler @ 00170e38 */
              (*(code *)PTR_reset_00239390)(local_90,&local_238);
            }
            else {
              if (cVar3 == '\x01') {
                auVar10 = State::skip_line(local_90,local_1d8,&local_242,&local_178);
                uVar5 = auVar10._8_8_;
                lVar6 = auVar10._0_8_;
                if (lVar6 != 0) {
                    /* try { // try from 00170b48 to 00170b5f has its CatchHandler @ 00170dec */
                  lVar7 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush
                                    (local_1d8);
                  if (lVar7 != 0) {
                    auVar10 = (*(code *)PTR_from_00239380)(lVar7);
                    /* try { // try from 00170b60 to 00170b70 has its CatchHandler @ 00170e80 */
                    core::ptr::
                    drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                              (lVar6,uVar5);
                  }
                  goto LAB_00170b77;
                }
                core::ptr::
                drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn_uucore::mods::error::UError>>>
                          (0,uVar5);
              }
              else {
                    /* try { // try from 001709d0 to 00170a02 has its CatchHandler @ 00170eb8 */
                auVar10 = State::skip_line(local_f0,local_1d8,&local_242,&local_178);
                uVar5 = auVar10._8_8_;
                lVar6 = auVar10._0_8_;
                if (lVar6 != 0) {
                    /* try { // try from 00170b1d to 00170b34 has its CatchHandler @ 00170dff */
                  lVar7 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush
                                    (local_1d8);
                  if (lVar7 != 0) {
                    auVar10 = (*(code *)PTR_from_00239380)(lVar7);
                    /* try { // try from 00170b35 to 00170b45 has its CatchHandler @ 00170e80 */
                    core::ptr::
                    drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                              (lVar6,uVar5);
                  }
                  goto LAB_00170b77;
                }
                core::ptr::
                drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn_uucore::mods::error::UError>>>
                          (0,uVar5);
              }
              local_98._0_4_ = CONCAT13(1,(undefined3)local_98);
              local_38._0_4_ = CONCAT13(1,(undefined3)local_38);
            }
          } while ((local_e0 != (undefined8 *)0x0) && (local_80 != (undefined8 *)0x0));
        }
                    /* try { // try from 00170a2d to 00170a4b has its CatchHandler @ 00170e80 */
        auVar10 = State::finalize(local_f0,local_1d8,&local_242,&local_178);
        uVar5 = auVar10._8_8_;
        lVar6 = auVar10._0_8_;
        if (lVar6 == 0) {
          core::ptr::
          drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn_uucore::mods::error::UError>>>
                    (0,uVar5);
          auVar10 = State::finalize(local_90,local_1d8,&local_242,&local_178);
          uVar8 = auVar10._8_8_;
          lVar6 = auVar10._0_8_;
          if (lVar6 == 0) {
            core::ptr::
            drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn_uucore::mods::error::UError>>>
                      (0,uVar8);
            lVar6 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush(local_1d8)
            ;
            if (lVar6 == 0) {
              if (local_98._2_1_ != '\0' || local_38._2_1_ != '\0') {
                _local_1a8 = (*(code *)PTR_execution_phrase_00239398)();
                local_128 = (undefined8 *)local_1a8;
                uStack_120 = _<&T_as_core::fmt::Display>::fmt;
                local_238._0_4_ = 0x2325f0;
                local_238._4_4_ = 0;
                uStack_230._0_4_ = 2;
                uStack_230._4_4_ = 0;
                uStack_218 = 0;
                local_228 = &local_128;
                uStack_220 = 1;
                (*(code *)PTR__eprint_002393a0)(&local_238);
                (*(code *)PTR_set_exit_code_002393a8)(1);
              }
                    /* try { // try from 00170d24 to 00170d2d has its CatchHandler @ 00170eaa */
              core::ptr::
              drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>
                        (local_1d8);
                    /* try { // try from 00170d2e to 00170d3a has its CatchHandler @ 00170e82 */
              core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(&local_178);
                    /* try { // try from 00170d3b to 00170d47 has its CatchHandler @ 00170e87 */
              core::ptr::drop_in_place<uu_join::State>(local_90);
                    /* try { // try from 00170d48 to 00170d58 has its CatchHandler @ 00170eaf */
              core::ptr::drop_in_place<uu_join::State>(local_f0);
                    /* try { // try from 00170d61 to 00170d65 has its CatchHandler @ 00170d9a */
              core::ptr::drop_in_place<uu_join::SepSetting>(param_5 + 6);
              if (local_23a != '\0') {
                    /* try { // try from 00170d6d to 00170d74 has its CatchHandler @ 00170d95 */
                core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(param_5);
              }
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar8;
              auVar10 = auVar11 << 0x40;
              goto LAB_00170bc9;
            }
            auVar10 = (*(code *)PTR_from_00239380)(lVar6);
          }
          else {
                    /* try { // try from 00170abd to 00170ad8 has its CatchHandler @ 00170e12 */
            lVar7 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush(local_1d8)
            ;
            if (lVar7 != 0) {
              auVar10 = (*(code *)PTR_from_00239380)(lVar7);
                    /* try { // try from 00170ad9 to 00170b14 has its CatchHandler @ 00170e80 */
              core::ptr::
              drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                        (lVar6,uVar8);
            }
          }
        }
        else {
                    /* try { // try from 00170a57 to 00170a72 has its CatchHandler @ 00170e25 */
          lVar7 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush(local_1d8);
          if (lVar7 != 0) {
            auVar10 = (*(code *)PTR_from_00239380)(lVar7);
                    /* try { // try from 00170a73 to 00170ab1 has its CatchHandler @ 00170e80 */
            core::ptr::
            drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                      (lVar6,uVar5);
          }
        }
      }
      else {
                    /* try { // try from 00170763 to 001707dc has its CatchHandler @ 00170e80 */
        lVar6 = State::print_headers(local_f0,local_1d8,local_90,&local_178);
        if (lVar6 == 0) {
          lVar6 = State::reset_read_line(local_f0,&local_242);
          if (lVar6 == 0) {
            lVar6 = State::reset_read_line(local_90,&local_242);
            if (lVar6 == 0) goto LAB_001707e2;
            auVar10 = (*(code *)PTR_from_00239380)(lVar6);
          }
          else {
            auVar10 = (*(code *)PTR_from_00239380)(lVar6);
          }
        }
        else {
          auVar10 = (*(code *)PTR_from_00239380)(lVar6);
        }
      }
LAB_00170b77:
                    /* try { // try from 00170b77 to 00170b80 has its CatchHandler @ 00170eaa */
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>
                (local_1d8);
                    /* try { // try from 00170b81 to 00170b8d has its CatchHandler @ 00170e82 */
      core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(&local_178);
                    /* try { // try from 00170b8e to 00170b9a has its CatchHandler @ 00170e87 */
      core::ptr::drop_in_place<uu_join::State>(local_90);
    }
                    /* try { // try from 00170b9b to 00170bab has its CatchHandler @ 00170eaf */
    uVar9 = local_240;
    core::ptr::drop_in_place<uu_join::State>(local_f0);
  }
                    /* try { // try from 00170bb0 to 00170bb4 has its CatchHandler @ 00170e8c */
  core::ptr::drop_in_place<uu_join::SepSetting>(param_5 + 6);
  if ((char)uVar9 != '\0') {
                    /* try { // try from 00170bba to 00170bc1 has its CatchHandler @ 00170e7b */
    core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(param_5);
  }
LAB_00170bc9:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(param_5 + 3);
  return auVar10;
}