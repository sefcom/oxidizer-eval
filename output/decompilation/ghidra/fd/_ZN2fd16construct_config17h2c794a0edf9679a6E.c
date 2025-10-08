void _ZN2fd16construct_config17h2c794a0edf9679a6E
               (undefined8 *param_1,char *param_2,ulong *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined uVar16;
  char cVar17;
  char cVar18;
  undefined uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong *extraout_RDX;
  ulong *extraout_RDX_00;
  ulong *puVar24;
  byte bVar25;
  byte bVar26;
  ulong *puVar27;
  undefined8 uVar28;
  bool bVar29;
  bool bVar30;
  undefined auVar31 [16];
  undefined local_379;
  char local_364;
  undefined8 local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  long local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined4 local_2f6;
  undefined2 local_2f2;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  long local_2a8;
  ulong *local_2a0;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  int local_278;
  undefined8 local_274;
  undefined4 local_26c;
  long local_268;
  undefined8 uStack_260;
  ulong *local_258;
  ulong *puStack_250;
  ulong *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  ulong *local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  ulong local_d0 [20];
  
  if (param_2[0x1e7] == '\0') {
    uVar16 = 1;
    if (param_2[0x1e6] == '\0') {
      uStack_240 = param_3 + param_4 * 3;
                    /* try { // try from 002fac69 to 002fac75 has its CatchHandler @ 002fb6e6 */
      local_248 = param_3;
      uVar16 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h9a260a21f93a7e74E
                         (&local_248);
    }
  }
  else {
    uVar16 = 0;
  }
  local_238 = *(long *)(param_2 + 0x1a8);
  local_248 = *(ulong **)(param_2 + 0x198);
  uStack_240 = *(ulong **)(param_2 + 0x1a0);
  param_2[0x198] = '\0';
  param_2[0x199] = '\0';
  param_2[0x19a] = '\0';
  param_2[0x19b] = '\0';
  param_2[0x19c] = '\0';
  param_2[0x19d] = '\0';
  param_2[0x19e] = '\0';
  param_2[0x19f] = -0x80;
  _ZN4core6option15Option_LT_T_GT_7or_else17h3b9780feed1c5f20E(&local_310,&local_248);
                    /* try { // try from 002facc3 to 002fad1f has its CatchHandler @ 002fb725 */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0053fe58
  )(&local_248,&local_310);
  local_178 = (undefined4)uStack_240;
  uStack_174 = uStack_240._4_4_;
  uStack_170 = (undefined4)local_238;
  uStack_16c = local_238._4_4_;
  if (local_248 == (ulong *)&DAT_8000000000000000) {
    local_d0[0] = local_d0[0] & 0xffffffff00000000;
    uVar20 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2f,local_d0);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc59efc0c75b13120E
              (&local_248,uVar20);
    uStack_320 = (undefined4)uStack_240;
    uStack_31c = uStack_240._4_4_;
  }
  else {
    uStack_320 = (undefined4)uStack_240;
    uStack_31c = uStack_240._4_4_;
  }
  uVar20 = *(undefined8 *)(param_2 + 0x58);
  uVar12 = *(undefined8 *)(param_2 + 0x60);
  uVar21 = *(undefined8 *)(param_2 + 0x68);
  param_2[0x58] = '\0';
  param_2[0x59] = '\0';
  param_2[0x5a] = '\0';
  param_2[0x5b] = '\0';
  param_2[0x5c] = '\0';
  param_2[0x5d] = '\0';
  param_2[0x5e] = '\0';
  param_2[0x5f] = '\0';
  param_2[0x60] = '\b';
  param_2[0x61] = '\0';
  param_2[0x62] = '\0';
  param_2[99] = '\0';
  param_2[100] = '\0';
  param_2[0x65] = '\0';
  param_2[0x66] = '\0';
  param_2[0x67] = '\0';
  param_2[0x68] = '\0';
  param_2[0x69] = '\0';
  param_2[0x6a] = '\0';
  param_2[0x6b] = '\0';
  param_2[0x6c] = '\0';
  param_2[0x6d] = '\0';
  param_2[0x6e] = '\0';
  param_2[0x6f] = '\0';
                    /* try { // try from 002fad77 to 002fad86 has its CatchHandler @ 002fb716 */
  local_328 = local_248;
  local_318 = local_238;
  _ZN2fd24extract_time_constraints17h733b02d9fa69be15E(&local_248,param_2);
  uVar15 = uStack_240;
  puVar13 = local_248;
  if (local_248 == (ulong *)&DAT_8000000000000000) {
    param_1[1] = uStack_240;
    *param_1 = 2;
  }
  else {
    local_2a8 = local_238;
    if (*(int *)(param_2 + 0x1b0) == 3) {
      local_188 = 3;
    }
    else {
      local_274 = *(undefined8 *)(param_2 + 0x1b4);
      local_26c = *(undefined4 *)(param_2 + 0x1bc);
      local_278 = *(int *)(param_2 + 0x1b0);
      _ZN2fd6filter5owner11OwnerFilter13filter_ignore17hbaaea47d82f3121fE(&local_188,&local_278);
    }
                    /* try { // try from 002fae17 to 002faec8 has its CatchHandler @ 002fb72a */
    (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_005408a8)();
    cVar17 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17hf23bc32740498873E();
    if (param_2[0x1f5] == '\0') {
      _ZN3std3env6var_os17hd31ea1d8e075b910E(&local_248,&DAT_00174078,8);
      lVar22 = local_238;
      if (((local_248 == (ulong *)&DAT_8000000000000000) ||
          (_ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h7308b79749514aeeE
                     (local_248,uStack_240), lVar22 == 0)) && (cVar17 != '\0')) goto LAB_002fae97;
LAB_002faecb:
      local_d0[0] = 0x8000000000000000;
      cVar18 = '\0';
      local_364 = param_2[0x1f6];
      if (local_364 != '\x02') goto LAB_002faee1;
LAB_002faf36:
      local_364 = '\0';
    }
    else {
      if (param_2[0x1f5] != '\x01') goto LAB_002faecb;
LAB_002fae97:
      (*(code *)PTR__ZN8lscolors8LsColors8from_env17hf292d86f4e2f62d1E_00540a08)(&local_248);
      if (local_248 == (ulong *)&DAT_8000000000000000) {
        (*(code *)PTR__ZN8lscolors8LsColors11from_string17h2ed37214983bcb72E_00540a10)
                  (&local_178,&DAT_0017b8d0,0x168f);
      }
      else {
        (*(code *)PTR_memcpy_0053fd28)(&local_178,&local_248,0xa0);
      }
      (*(code *)PTR_memcpy_0053fd28)(local_d0,&local_178,0xa0);
      cVar18 = '\x01';
      local_364 = param_2[0x1f6];
      if (local_364 == '\x02') goto LAB_002faf36;
LAB_002faee1:
      if (local_364 != '\x01') {
        local_364 = cVar18;
      }
    }
                    /* try { // try from 002faf3e to 002faf50 has its CatchHandler @ 002fb6f9 */
    _ZN2fd15extract_command17ha9c9fdeadbe29078E(&local_248,param_2,cVar18);
    puVar14 = local_248;
    if (local_248 != (ulong *)0x8000000000000001) {
      uStack_290 = (undefined4)local_238;
      uStack_28c = local_238._4_4_;
      uStack_288 = uStack_230;
      uStack_284 = uStack_22c;
      bVar29 = local_248 != (ulong *)&DAT_8000000000000000;
      bVar30 = param_2[0x1f9] == '\0';
      cVar18 = param_2[0x1e0];
      local_2a0 = local_248;
      local_298 = uStack_240;
      bVar1 = param_2[0x1e1];
      bVar25 = param_2[0x1e2] ^ 1;
      bVar26 = param_2[0x1e5] ^ 1;
      if (((bVar1 ^ 1) & bVar30) == 0) {
        bVar25 = 0;
        bVar26 = 0;
      }
      uVar23 = *(undefined8 *)(param_2 + 0x20);
      local_2b0 = *(undefined8 *)(param_2 + 0x28);
      local_2c0 = uVar23;
      uVar28 = local_2b0;
      if (*param_2 != '\0') {
        uVar28 = *(undefined8 *)(param_2 + 8);
        local_2c0 = 1;
      }
      if (param_2[0x10] != '\0') {
        local_2b0 = *(undefined8 *)(param_2 + 0x18);
        uVar23 = 1;
      }
      bVar2 = param_2[0x1e3];
      bVar3 = param_2[0x1e4];
      cVar4 = param_2[0x1ee];
      cVar5 = param_2[0x1ed];
      cVar6 = param_2[500];
      cVar7 = param_2[0x1ef];
      cVar8 = param_2[0x1f2];
      cVar9 = param_2[0x1f0];
      local_2b8 = uVar23;
                    /* try { // try from 002fb0ec to 002fb0f8 has its CatchHandler @ 002fb6cf */
      local_2c8 = _ZN2fd3cli4Opts7threads17h134d3f693ba47df8E(*(undefined8 *)(param_2 + 0x1d8));
      local_2d0 = *(undefined8 *)(param_2 + 0x1c0);
      uVar11 = *(undefined4 *)(param_2 + 0x1c8);
      puVar27 = local_d0;
      (*(code *)PTR_memcpy_0053fd28)(&local_248,puVar27,0xa0);
      if (*(long *)(param_2 + 0xe8) == -0x8000000000000000) {
        local_379 = 2;
        puVar24 = extraout_RDX;
        if (*(long *)(param_2 + 0x100) != -0x8000000000000000) goto LAB_002fb14c;
LAB_002fb229:
        lVar22 = 0;
      }
      else {
        puVar27 = *(ulong **)(param_2 + 0xf0);
        _ZN2fd16construct_config28__u7b__u7b_closure_u7d__u7d_17h3187d22afa309918E
                  (&local_178,puVar27,*(undefined8 *)(param_2 + 0xf8));
        local_379 = (undefined)local_178;
        local_2f0 = CONCAT17((undefined)uStack_170,CONCAT43(uStack_174,local_178._1_3_));
        puVar24 = extraout_RDX_00;
        if (*(long *)(param_2 + 0x100) == -0x8000000000000000) goto LAB_002fb229;
LAB_002fb14c:
                    /* try { // try from 002fb15a to 002fb166 has its CatchHandler @ 002fb642 */
        _ZN2fd16construct_config28__u7b__u7b_closure_u7d__u7d_17ha57dc170e7a8e543E
                  (&local_178,*(undefined8 *)(param_2 + 0x108),*(undefined8 *)(param_2 + 0x110));
        lVar22 = CONCAT44(uStack_174,local_178);
        uVar23 = CONCAT44(uStack_16c,uStack_170);
        puVar27 = (ulong *)CONCAT44(uStack_15c,uStack_160);
        puVar24 = local_168;
        if (lVar22 == 0) {
          local_178 = uStack_170;
          uStack_174 = uStack_16c;
          uStack_170 = SUB84(local_168,0);
          uStack_16c = (undefined4)((ulong)local_168 >> 0x20);
                    /* try { // try from 002fb1a8 to 002fb1b4 has its CatchHandler @ 002fb62d */
          local_168 = puVar27;
          uVar21 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17ha95572c98ed84657E
                             (&local_178);
          param_1[1] = uVar21;
          *param_1 = 2;
                    /* try { // try from 002fb1c1 to 002fb1d2 has its CatchHandler @ 002fb628 */
          _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_lscolors__LsColors_GT__GT_17h7f447a0aa3572fa7E
                    (&local_248);
          _ZN4core3ptr69drop_in_place_LT_core__option__Option_LT_fd__exec__CommandSet_GT__GT_17h5dfef4a94fbea321E
                    (&local_2a0);
          goto LAB_002faf88;
        }
      }
      local_268 = lVar22;
      uStack_260 = uVar23;
      local_258 = puVar24;
      puStack_250 = puVar27;
      if (*(long *)(param_2 + 0x148) == -0x8000000000000000) {
        local_1a8 = 2;
        if (puVar14 == (ulong *)&DAT_8000000000000000) goto LAB_002fb265;
LAB_002fb2ac:
        local_150 = CONCAT44(uStack_284,uStack_288);
        uStack_160 = (undefined4)local_298;
        uStack_15c = local_298._4_4_;
        uStack_158 = uStack_290;
        uStack_154 = uStack_28c;
        local_178 = 1;
        uStack_174 = 0;
        uStack_170 = 1;
        uStack_16c = 0;
        local_168 = puVar14;
                    /* try { // try from 002fb2eb to 002fb2f7 has its CatchHandler @ 002fb635 */
        local_2e8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc348999cb7853116E(&local_178);
      }
      else {
                    /* try { // try from 002fb27a to 002fb286 has its CatchHandler @ 002fb63a */
        _ZN2fd3fmt14FormatTemplate5parse17hf8dc6f2b9acbeb6eE
                  (&local_178,*(undefined8 *)(param_2 + 0x150),*(undefined8 *)(param_2 + 0x158));
        uStack_1a0 = uStack_170;
        uStack_19c = uStack_16c;
        local_198 = local_168;
        uStack_190 = CONCAT44(uStack_15c,uStack_160);
        local_1a8 = CONCAT44(uStack_174,local_178);
        if (puVar14 != (ulong *)&DAT_8000000000000000) goto LAB_002fb2ac;
LAB_002fb265:
        local_2e8 = 0;
      }
      local_2e0 = *(undefined8 *)(param_2 + 0x1d0);
                    /* try { // try from 002fb334 to 002fb340 has its CatchHandler @ 002fb669 */
      local_2d8 = uVar28;
      local_280 = local_2e8;
      _ZN4core4iter6traits8iterator8Iterator7collect17h638ff640416a658cE
                (&local_178,*(long *)(param_2 + 0x48),
                 *(long *)(param_2 + 0x48) + *(long *)(param_2 + 0x50) * 0x18);
      param_1[0xf] = *(undefined8 *)(param_2 + 0x80);
      uVar23 = *(undefined8 *)(param_2 + 0x78);
      param_1[0xd] = *(undefined8 *)(param_2 + 0x70);
      param_1[0xe] = uVar23;
      param_2[0x70] = '\0';
      param_2[0x71] = '\0';
      param_2[0x72] = '\0';
      param_2[0x73] = '\0';
      param_2[0x74] = '\0';
      param_2[0x75] = '\0';
      param_2[0x76] = '\0';
      param_2[0x77] = '\0';
      param_2[0x78] = '\b';
      param_2[0x79] = '\0';
      param_2[0x7a] = '\0';
      param_2[0x7b] = '\0';
      param_2[0x7c] = '\0';
      param_2[0x7d] = '\0';
      param_2[0x7e] = '\0';
      param_2[0x7f] = '\0';
      param_2[0x80] = '\0';
      param_2[0x81] = '\0';
      param_2[0x82] = '\0';
      param_2[0x83] = '\0';
      param_2[0x84] = '\0';
      param_2[0x85] = '\0';
      param_2[0x86] = '\0';
      param_2[0x87] = '\0';
      param_1[0x30] = CONCAT44(uStack_184,local_188);
      param_1[0x31] = uStack_180;
      cVar10 = param_2[499];
      param_1[0x2d] = local_310;
      param_1[0x2e] = uStack_308;
      param_1[0x2f] = local_300;
      param_1[0x18] = local_318;
      *(undefined4 *)(param_1 + 0x16) = (undefined4)local_328;
      *(undefined4 *)((long)param_1 + 0xb4) = local_328._4_4_;
      *(undefined4 *)(param_1 + 0x17) = uStack_320;
      *(undefined4 *)((long)param_1 + 0xbc) = uStack_31c;
      auVar31 = _ZN2fd3cli4Opts11max_results17h69eff37668279061E(param_2);
      uVar19 = _ZN2fd3cli4Opts16strip_cwd_prefix17had143ea50fae4eb8E(param_2,param_2[0x1ef],bVar29);
      (*(code *)PTR_memcpy_0053fd28)(param_1 + 0x19,&local_248,0xa0);
      param_1[0x37] = local_258;
      param_1[0x38] = puStack_250;
      param_1[0x35] = local_268;
      param_1[0x36] = uStack_260;
      param_1[6] = local_1a8;
      param_1[7] = CONCAT44(uStack_19c,uStack_1a0);
      param_1[8] = local_198;
      param_1[9] = uStack_190;
      param_1[0xc] = local_168;
      *(undefined4 *)(param_1 + 10) = local_178;
      *(undefined4 *)((long)param_1 + 0x54) = uStack_174;
      *(undefined4 *)(param_1 + 0xb) = uStack_170;
      *(undefined4 *)((long)param_1 + 0x5c) = uStack_16c;
      *param_1 = local_2c0;
      param_1[1] = local_2d8;
      param_1[2] = local_2b8;
      param_1[3] = local_2b0;
      *(undefined (*) [16])(param_1 + 4) = auVar31;
      param_1[0x10] = uVar20;
      param_1[0x11] = uVar12;
      param_1[0x12] = uVar21;
      param_1[0x13] = puVar13;
      param_1[0x14] = uVar15;
      param_1[0x15] = local_2a8;
      param_1[0x32] = local_2d0;
      *(undefined4 *)(param_1 + 0x33) = uVar11;
      param_1[0x34] = local_2c8;
      param_1[0x39] = local_2e8;
      param_1[0x3a] = local_2e0;
      *(undefined *)(param_1 + 0x3b) = uVar16;
      *(char *)((long)param_1 + 0x1d9) = cVar4;
      *(bool *)((long)param_1 + 0x1da) = cVar18 == '\0' && bVar30;
      *(bool *)((long)param_1 + 0x1db) = bVar1 == 0 && bVar30;
      *(byte *)((long)param_1 + 0x1dc) = bVar3 ^ 1;
      *(byte *)((long)param_1 + 0x1dd) = bVar25;
      *(byte *)((long)param_1 + 0x1de) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1df) = bVar26;
      *(char *)(param_1 + 0x3c) = cVar5;
      *(char *)((long)param_1 + 0x1e1) = cVar6;
      *(char *)((long)param_1 + 0x1e2) = cVar7;
      *(char *)((long)param_1 + 0x1e3) = cVar9;
      *(char *)((long)param_1 + 0x1e4) = cVar8;
      *(char *)((long)param_1 + 0x1e5) = cVar17;
      *(char *)((long)param_1 + 0x1e6) = cVar10;
      *(undefined *)((long)param_1 + 0x1e7) = uVar19;
      *(char *)(param_1 + 0x3d) = local_364;
      *(undefined *)((long)param_1 + 0x1e9) = local_379;
      *(undefined8 *)((long)param_1 + 0x1ea) = local_2f0;
      *(undefined2 *)((long)param_1 + 0x1f6) = local_2f2;
      *(undefined4 *)((long)param_1 + 0x1f2) = local_2f6;
      goto LAB_002fb60e;
    }
    param_1[1] = uStack_240;
    *param_1 = 2;
                    /* try { // try from 002faf76 to 002faf87 has its CatchHandler @ 002fb72a */
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_lscolors__LsColors_GT__GT_17h7f447a0aa3572fa7E
              (local_d0);
LAB_002faf88:
    _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_fd__filter__time__TimeFilter_GT__GT_17h01aa39202dfda311E
              (puVar13,uVar15);
  }
  _ZN4core3ptr106drop_in_place_LT_alloc__vec__Vec_LT_crossbeam_channel__flavors__array__Slot_LT_fd__walk__Batch_GT__GT__GT_17hd423336e79517fe6E
            (uVar20,uVar12);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6194a405d9e61c9bE(&local_328);
  _ZN4core3ptr40drop_in_place_LT_regex__error__Error_GT_17h23361293c27a3604E(&local_310);
LAB_002fb60e:
  _ZN4core3ptr34drop_in_place_LT_fd__cli__Opts_GT_17h8f24d8296db52e21E(param_2);
  return;
}