/* WARNING: Type propagation algorithm not settling */

long __rustcall uu_dd::dd_copy(undefined4 *param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  ulong uVar7;
  int iVar8;
  char cVar9;
  undefined8 uVar10;
  long lVar11;
  undefined uVar12;
  ulong uVar13;
  bool bVar14;
  undefined auVar15 [12];
  int local_29c;
  long local_290;
  long local_288;
  ulong local_280;
  long local_278;
  long *local_270;
  long local_268;
  long local_260;
  ulong local_258;
  ulong local_250;
  undefined **local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  long local_228;
  undefined8 uStack_220;
  undefined local_218 [12];
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  long local_1e8;
  long local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  long local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_170;
  long local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  long local_150;
  undefined local_148 [8];
  undefined8 local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  undefined local_120 [24];
  long local_108 [8];
  long local_c8;
  long local_c0;
  ulong local_b8;
  int local_b0;
  undefined local_a8 [12];
  long local_98;
  long local_90;
  ulong local_88;
  int local_80;
  long *local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
                    /* try { // try from 001d7f8e to 001d7fd6 has its CatchHandler @ 001d8866 */
  local_218 = std::time::Instant::now();
  lVar11 = param_2[2];
  local_170 = calc_bsize(*(undefined8 *)(*(long *)(param_1 + 2) + 0x70),
                         *(undefined8 *)(lVar11 + 0x78));
  std::sync::mpmc::channel(&local_1d8);
  local_208 = (undefined4)local_1d8;
  uStack_204 = local_1d8._4_4_;
  uStack_200 = (undefined4)uStack_1d0;
  uStack_1fc = uStack_1d0._4_4_;
  local_248 = (undefined **)local_1c8;
  uStack_240 = (undefined4)uStack_1c0;
  uStack_23c = uStack_1c0._4_4_;
  local_238 = CONCAT31(local_238._1_3_,*(undefined *)(*(long *)(param_1 + 2) + 0xa6));
  local_1c8 = (undefined ***)0x8000000000000000;
  local_1d8 = (undefined **)0x0;
                    /* try { // try from 001d802c to 001d805d has its CatchHandler @ 001d8861 */
  std::thread::Builder::spawn_unchecked(local_108,&local_1d8,&local_248);
  core::result::Result<T,E>::expect(&local_160,local_108);
  cVar1 = *(char *)(lVar11 + 0x93);
  lVar11 = **(long **)(param_1 + 2);
  if (((lVar11 == 0) || ((int)lVar11 == 1)) && ((*(long **)(param_1 + 2))[1] == 0)) {
                    /* try { // try from 001d86bf to 001d86d0 has its CatchHandler @ 001d8851 */
    lVar11 = flush_caches_full_length(param_1,param_2);
    if (lVar11 == 0) {
      uStack_1c0 = param_2[2];
      uStack_1d0 = *param_2;
      local_1c8 = (undefined ***)param_2[1];
      local_1d8 = (undefined **)0x8000000000000000;
      local_238 = 0;
      uStack_234 = 0;
      uStack_230 = 0;
      local_248 = (undefined **)0x0;
      uStack_240 = 0;
      uStack_23c = 0;
      local_108[2] = 0;
      local_108[3] = 0;
      local_108[0] = 0;
      local_108[1] = 0;
      local_1e8 = local_150;
      local_1f8 = (long *)CONCAT44(uStack_15c,local_160);
      uStack_1f0 = CONCAT44(uStack_154,uStack_158);
                    /* try { // try from 001d87fc to 001d882e has its CatchHandler @ 001d8851 */
      lVar11 = finalize(&local_1d8,&local_248,local_108,local_218._0_8_,local_218._8_4_,&local_208,
                        &local_1f8,cVar1 == '\0');
      bVar14 = false;
      goto LAB_001d873b;
    }
    bVar14 = true;
  }
  else {
                    /* try { // try from 001d808e to 001d80aa has its CatchHandler @ 001d8851 */
    _<u8_as_alloc::vec::spec_from_elem::SpecFromElem>::from_elem(local_148,0xdd,local_170);
                    /* try { // try from 001d80ae to 001d80bd has its CatchHandler @ 001d8849 */
    Alarm::with_interval(local_120);
                    /* try { // try from 001d80c1 to 001d80ea has its CatchHandler @ 001d8859 */
    uVar10 = Alarm::manual_trigger_fn(local_120);
    progress::SignalHandler::install_signal_handler
              (local_108,uVar10,
               &PTR_drop_in_place<uu_dd_Alarm_manual_trigger_fn___closure__>_00260fd8);
    lVar11 = *(long *)(param_1 + 2);
    if ((local_108[0] == 0) && (local_1f8 = local_108 + 1, *(char *)(lVar11 + 0xa6) != '\x02')) {
      local_248 = (undefined **)&local_1f8;
      uStack_240 = 0x1ef100;
      uStack_23c = 0;
      local_1d8 = &PTR_DAT_00261138;
      uStack_1d0 = 2;
      local_1b8 = 0;
      uStack_1c0 = 1;
                    /* try { // try from 001d8173 to 001d81dc has its CatchHandler @ 001d8841 */
      local_1c8 = &local_248;
      std::io::stdio::_eprint(&local_1d8);
      lVar11 = *(long *)(param_1 + 2);
    }
    cVar2 = *(char *)(lVar11 + 0x45);
    cVar3 = *(char *)(param_2[2] + 0x9c);
    if (*(char *)(param_2[2] + 0xa5) == '\0') {
      uStack_230 = (undefined4)param_2[2];
      uStack_22c = (undefined4)((ulong)param_2[2] >> 0x20);
      uStack_240 = *(undefined4 *)param_2;
      uStack_23c = *(undefined4 *)((long)param_2 + 4);
      local_238 = *(undefined4 *)(param_2 + 1);
      uStack_234 = *(undefined4 *)((long)param_2 + 0xc);
      local_248 = (undefined **)0x8000000000000000;
    }
    else {
      local_1e8 = param_2[2];
      local_1f8 = (long *)*param_2;
      uStack_1f0 = param_2[1];
      bufferedoutput::BufferedOutput::new(&local_1d8,&local_1f8);
      uStack_220 = CONCAT44(uStack_1ac,uStack_1b0);
      local_248 = local_1d8;
      uStack_240 = (undefined4)uStack_1d0;
      uStack_23c = uStack_1d0._4_4_;
      local_238 = SUB84(local_1c8,0);
      uStack_234 = (undefined4)((ulong)local_1c8 >> 0x20);
      uStack_230 = (undefined4)uStack_1c0;
      uStack_22c = (undefined4)(uStack_1c0 >> 0x20);
      local_228 = local_1b8;
    }
    local_260 = 0;
    local_268 = 0;
    local_270 = (long *)0x0;
    local_278 = 0;
    local_29c = 0;
    local_280 = 0;
    local_288 = 0;
    local_290 = 0;
    local_258 = 0;
    local_168 = 0;
    local_250 = 0;
LAB_001d8280:
    plVar4 = *(long **)(param_1 + 2);
    lVar11 = *plVar4;
    if (lVar11 == 0) {
      uVar13 = plVar4[1];
      if ((ulong)(local_288 + local_290) < uVar13) goto LAB_001d82d4;
LAB_001d856e:
      uStack_1d0 = CONCAT44(uStack_23c,uStack_240);
      local_1b8 = local_228;
      uStack_1b0 = (undefined4)uStack_220;
      uStack_1ac = uStack_220._4_4_;
      local_1c8 = (undefined ***)CONCAT44(uStack_234,local_238);
      uStack_1c0 = CONCAT44(uStack_22c,uStack_230);
      local_1d8 = local_248;
      local_c8 = local_290;
      local_c0 = local_288;
      local_b8 = local_280;
      local_b0 = local_29c;
      uStack_1f0 = local_278;
      local_1f8 = local_270;
      local_1e8 = local_268;
      local_1e0 = local_260;
      local_38 = local_150;
      local_48 = local_160;
      uStack_44 = uStack_15c;
      uStack_40 = uStack_158;
      uStack_3c = uStack_154;
                    /* try { // try from 001d863b to 001d866e has its CatchHandler @ 001d8839 */
      lVar11 = finalize(&local_1d8,&local_c8,&local_1f8,local_218._0_8_,local_218._8_4_,&local_208,
                        &local_48,cVar1 == '\0');
                    /* try { // try from 001d8675 to 001d8683 has its CatchHandler @ 001d8859 */
      core::ptr::
      drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>
                (local_108);
                    /* try { // try from 001d8687 to 001d8695 has its CatchHandler @ 001d8849 */
      core::ptr::drop_in_place<uu_dd::Alarm>(local_120);
                    /* try { // try from 001d8699 to 001d86a7 has its CatchHandler @ 001d8851 */
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_148);
                    /* try { // try from 001d86aa to 001d86b6 has its CatchHandler @ 001d8866 */
      core::ptr::drop_in_place<std::sync::mpsc::Sender<uu_dd::progress::ProgUpdate>>(&local_208);
      goto LAB_001d875c;
    }
    if ((int)lVar11 == 1) {
      uVar13 = plVar4[1];
      if (uVar13 <= local_280) goto LAB_001d856e;
    }
    else {
      uVar13 = plVar4[1];
    }
LAB_001d82d4:
    uVar10 = calc_loop_bsize(lVar11,uVar13,local_290,local_288,local_270,local_278,plVar4[0xe],
                             local_170);
                    /* try { // try from 001d82fb to 001d8568 has its CatchHandler @ 001d886b */
    read_helper(&local_1d8,param_1,local_148,uVar10);
    uVar13 = uStack_1c0;
    pppuVar5 = local_1c8;
    lVar11 = uStack_1d0;
    if (local_1d8 == (undefined **)0x0) {
      iVar8 = (int)local_1b8;
      if ((uStack_1d0 == 0) && (local_1c8 == (undefined ***)0x0)) goto LAB_001d856e;
      BlockWriter::write_blocks(&local_1d8,&local_248,local_140,local_138);
      uVar7 = uStack_1c0;
      pppuVar6 = local_1c8;
      if (local_1d8 == (undefined **)0x0) {
        local_130 = local_1b8;
        local_128 = CONCAT44(uStack_1ac,uStack_1b0);
        if (cVar2 != '\0') {
          core::result::Result<T,E>::unwrap(local_250 >> 0x3f,&PTR_DAT_00261158);
          core::result::Result<T,E>::unwrap(uVar13 >> 0x3f,&PTR_DAT_00261170);
          Input::discard_cache(*param_1,param_1[1],local_250,uVar13);
        }
        if (cVar3 != '\0') {
          core::result::Result<T,E>::unwrap((long)local_258 < 0 || local_168 != 0,&PTR_DAT_00261188)
          ;
          core::result::Result<T,E>::unwrap((long)pppuVar6 < 0 || uVar7 != 0,&PTR_DAT_002611a0);
          BlockWriter::discard_cache(&local_248,local_258,pppuVar6);
        }
        local_250 = local_250 + uVar13;
        bVar14 = CARRY8(local_258,(ulong)pppuVar6);
        local_258 = local_258 + (long)pppuVar6;
        local_168 = local_168 + uVar7 + (ulong)bVar14;
        local_290 = local_290 + lVar11;
        local_288 = local_288 + (long)pppuVar5;
        local_29c = local_29c + iVar8;
        local_280 = local_280 + uVar13;
        local_268 = local_268 + local_130;
        local_260 = local_260 + local_128;
        bVar14 = CARRY8((ulong)local_270,(ulong)pppuVar6);
        local_270 = (long *)((long)local_270 + (long)pppuVar6);
        local_278 = local_278 + uVar7 + (ulong)bVar14;
        cVar9 = Alarm::get_trigger(local_120);
        if (cVar9 != '\x01') goto code_r0x001d84af;
        uVar12 = 0;
        goto LAB_001d84c2;
      }
    }
    lVar11 = uStack_1d0;
                    /* try { // try from 001d86ec to 001d86f5 has its CatchHandler @ 001d8841 */
    core::ptr::drop_in_place<uu_dd::BlockWriter>(&local_248);
                    /* try { // try from 001d86fb to 001d8707 has its CatchHandler @ 001d8859 */
    core::ptr::
    drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>
              (local_108);
                    /* try { // try from 001d870d to 001d8719 has its CatchHandler @ 001d8849 */
    core::ptr::drop_in_place<uu_dd::Alarm>(local_120);
                    /* try { // try from 001d871f to 001d872b has its CatchHandler @ 001d8851 */
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_148);
    bVar14 = false;
  }
                    /* try { // try from 001d872e to 001d873a has its CatchHandler @ 001d8861 */
  core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&local_160);
LAB_001d873b:
                    /* try { // try from 001d873b to 001d8747 has its CatchHandler @ 001d8866 */
  core::ptr::drop_in_place<std::sync::mpsc::Sender<uu_dd::progress::ProgUpdate>>(&local_208);
  if (bVar14) {
    core::ptr::drop_in_place<uu_dd::Output>
              (*(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4));
  }
LAB_001d875c:
  core::ptr::drop_in_place<uu_dd::Input>(param_1[1]);
  return lVar11;
code_r0x001d84af:
  if (cVar9 == '\x02') {
    uVar12 = 1;
LAB_001d84c2:
    auVar15 = std::time::Instant::elapsed(local_218);
    local_98 = local_290;
    local_90 = local_288;
    local_88 = local_280;
    local_80 = local_29c;
    local_78 = local_270;
    local_70 = local_278;
    local_68 = local_268;
    local_60 = local_260;
    local_58 = uVar12;
    local_a8 = auVar15;
    std::sync::mpmc::Sender<T>::send(&local_1d8,&local_208,local_a8);
  }
  goto LAB_001d8280;
}