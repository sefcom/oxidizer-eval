undefined8 _ZN10check_docs4main17ha386782cabb158e1E(void)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  long local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  long local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  long local_188;
  undefined **local_178;
  undefined8 uStack_170;
  long local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  long local_128;
  long local_118;
  undefined local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined **local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined **local_98;
  undefined8 local_90;
  long local_88;
  undefined **local_80;
  undefined8 local_78;
  long local_70;
  undefined **local_68;
  undefined8 uStack_60;
  long local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  (*(code *)PTR__ZN10check_docs18search_for_pattern17hb802ea78856797e4E_002fe7f8)
            (&local_1e8,"ANCHOR",6,".",1);
  uVar3 = uStack_1e0;
  ppuVar2 = local_1e8;
                    /* try { // try from 001e02f0 to 001e036c has its CatchHandler @ 001e0821 */
  (*(code *)PTR__ZN10check_docs23extract_starts_and_ends17h30dde6298c2e4524E_002fe800)
            (&local_1e8,uStack_1e0,local_1d8);
  uVar5 = uStack_1e0;
  if (local_1e8 != (undefined **)0x8000000000000000) {
    local_48 = (undefined4)uStack_1d0;
    uStack_44 = uStack_1d0._4_4_;
    uStack_40 = (undefined4)uStack_1c8;
    uStack_3c = uStack_1c8._4_4_;
    local_80 = local_1e8;
    local_78 = uStack_1e0;
    local_70 = local_1d8;
    (*(code *)PTR__ZN10check_docs20filter_valid_anchors17h39bbb345caf4f14fE_002fe808)
              (&local_1e8,&local_80,&local_48);
    local_128 = local_1d8;
    local_138 = local_1e8;
    uStack_130 = uStack_1e0;
    local_1a8 = CONCAT44(uStack_1bc,local_1c0);
    local_1b8 = (undefined4)uStack_1d0;
    uStack_1b4 = uStack_1d0._4_4_;
    uStack_1b0 = (undefined4)uStack_1c8;
    uStack_1ac = uStack_1c8._4_4_;
                    /* try { // try from 001e039e to 001e040a has its CatchHandler @ 001e07fa */
    (*(code *)PTR__ZN10check_docs18search_for_pattern17hb802ea78856797e4E_002fe7f8)
              (&local_1e8,"{{#include",10,".",1);
    bVar1 = true;
    uVar5 = uStack_1e0;
    if (local_1e8 != (undefined **)0x8000000000000000) {
      local_c8 = local_1e8;
      local_c0 = uStack_1e0;
      local_b8 = local_1d8;
      (*(code *)PTR__ZN10check_docs14parse_includes17h98cae0f800d53a09E_002fe810)
                (&local_1e8,&local_c8);
      local_58 = local_1d8;
      local_68 = local_1e8;
      uStack_60 = uStack_1e0;
      local_188 = CONCAT44(uStack_1bc,local_1c0);
      local_198 = uStack_1d0;
      uStack_190 = uStack_1c8;
      local_e8 = local_128;
      local_f8 = (undefined4)local_138;
      uStack_f4 = local_138._4_4_;
      uStack_f0 = (undefined4)uStack_130;
      uStack_ec = uStack_130._4_4_;
                    /* try { // try from 001e0459 to 001e0473 has its CatchHandler @ 001e07e9 */
      (*(code *)PTR__ZN10check_docs17validate_includes17h41bae39804dee97eE_002fe818)
                (&local_1e8,&local_68,&local_f8);
      local_168 = local_1d8;
      local_178 = local_1e8;
      uStack_170 = uStack_1e0;
      local_148 = CONCAT44(uStack_1bc,local_1c0);
      local_158 = (undefined4)uStack_1d0;
      uStack_154 = uStack_1d0._4_4_;
      uStack_150 = (undefined4)uStack_1c8;
      uStack_14c = uStack_1c8._4_4_;
                    /* try { // try from 001e04a8 to 001e051d has its CatchHandler @ 001e07c5 */
      (*(code *)PTR__ZN10check_docs18search_for_pattern17hb802ea78856797e4E_002fe7f8)
                (&local_1e8,".md",3,"./docs/src/SUMMARY.md",0x15);
      uVar5 = uStack_1e0;
      if (local_1e8 != (undefined **)0x8000000000000000) {
        local_b0 = local_1e8;
        local_a8 = uStack_1e0;
        local_a0 = local_1d8;
        (*(code *)PTR__ZN10check_docs14parse_md_files17hf10b783de1f7744bE_002fe820)
                  (&local_f8,&local_b0,"./docs/src/utf8",0xb);
                    /* try { // try from 001e051e to 001e0550 has its CatchHandler @ 001e079c */
        (*(code *)PTR__ZN10check_docs10find_files17h9e4b901753d7660dE_002fe828)
                  (&local_1e8,&DAT_00145698,4,"./docs/src/utf8",0xb,"SUMMARY.md",10);
        uVar5 = uStack_1e0;
        if (local_1e8 == (undefined **)0x8000000000000000) {
          _ZN4core3ptr83drop_in_place_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT_17h1ec950fce63b4fbbE
                    (&local_f8);
        }
        else {
          local_98 = local_1e8;
          local_90 = uStack_1e0;
          local_88 = local_1d8;
          local_1c0 = uStack_d0;
          uStack_1bc = uStack_cc;
          local_1d8 = local_e8;
          local_1e8 = (undefined **)CONCAT44(uStack_f4,local_f8);
          uStack_1e0 = CONCAT44(uStack_ec,uStack_f0);
                    /* try { // try from 001e0618 to 001e0632 has its CatchHandler @ 001e079a */
          (*(code *)PTR__ZN10check_docs17validate_md_files17ha2d5d22a4b1fbbc4E_002fe830)
                    (local_110,&local_1e8,&local_98);
                    /* try { // try from 001e0643 to 001e06e4 has its CatchHandler @ 001e07b3 */
          local_118 = local_148;
          (*(code *)PTR__ZN10check_docs13report_errors17h75874821b4daa881E_002fe838)
                    ("warning",7,CONCAT44(uStack_14c,uStack_150));
          (*(code *)PTR__ZN10check_docs13report_errors17h75874821b4daa881E_002fe838)
                    ("include paths",0xd,uStack_190,local_188);
          (*(code *)PTR__ZN10check_docs13report_errors17h75874821b4daa881E_002fe838)
                    ("anchors",7,CONCAT44(uStack_1ac,uStack_1b0),local_1a8);
          lVar4 = local_168;
          (*(code *)PTR__ZN10check_docs13report_errors17h75874821b4daa881E_002fe838)
                    (&DAT_00146320,8,uStack_170,local_168);
          (*(code *)PTR__ZN10check_docs13report_errors17h75874821b4daa881E_002fe838)
                    (&DAT_00146750,8,local_108,local_100);
          if ((((local_1a8 == 0) && (lVar4 == 0)) && (local_188 == 0)) &&
             ((local_118 == 0 && (local_100 == 0)))) {
                    /* try { // try from 001e0704 to 001e0710 has its CatchHandler @ 001e079a */
            _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_anyhow__Error_GT__GT_17hfe5e2e719a94780fE
                      (local_110);
                    /* try { // try from 001e0711 to 001e071d has its CatchHandler @ 001e07ae */
            _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_anyhow__Error_GT__GT_17hfe5e2e719a94780fE
                      (&local_158);
                    /* try { // try from 001e071e to 001e072a has its CatchHandler @ 001e07e9 */
            _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_anyhow__Error_GT__GT_17hfe5e2e719a94780fE
                      (&local_178);
                    /* try { // try from 001e072d to 001e0736 has its CatchHandler @ 001e07fa */
            _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_anyhow__Error_GT__GT_17hfe5e2e719a94780fE
                      (&local_198);
                    /* try { // try from 001e0739 to 001e0742 has its CatchHandler @ 001e07e4 */
            _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_anyhow__Error_GT__GT_17hfe5e2e719a94780fE
                      (&local_1b8);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h410bbc7067db87e9E
                      (ppuVar2,uVar3);
            return 0;
          }
          local_1e8 = &PTR_s_Finished_with_errors_002d28c8;
          uStack_1e0 = 1;
          local_1d8 = 8;
          uStack_1d0 = 0;
          uStack_1c8 = 0;
                    /* try { // try from 001e077b to 001e0784 has its CatchHandler @ 001e07b3 */
          uVar5 = _ZN6anyhow9__private10format_err17hd87f3faee3401bd9E(&local_1e8);
                    /* try { // try from 001e0785 to 001e0794 has its CatchHandler @ 001e079a */
          _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_anyhow__Error_GT__GT_17hfe5e2e719a94780fE
                    (local_110);
        }
      }
                    /* try { // try from 001e056d to 001e0579 has its CatchHandler @ 001e07ae */
      _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_anyhow__Error_GT__GT_17hfe5e2e719a94780fE
                (&local_158);
                    /* try { // try from 001e057a to 001e0586 has its CatchHandler @ 001e07e9 */
      _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_anyhow__Error_GT__GT_17hfe5e2e719a94780fE
                (&local_178);
                    /* try { // try from 001e0589 to 001e0592 has its CatchHandler @ 001e07fa */
      _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_anyhow__Error_GT__GT_17hfe5e2e719a94780fE
                (&local_198);
      bVar1 = false;
    }
                    /* try { // try from 001e0595 to 001e059e has its CatchHandler @ 001e07e4 */
    _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_anyhow__Error_GT__GT_17hfe5e2e719a94780fE
              (&local_1b8);
    if (bVar1) {
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_check_docs__Anchor_GT__GT_17hc9e5607e38ec4097E
                (&local_138);
    }
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h410bbc7067db87e9E(ppuVar2,uVar3);
  return uVar5;
}