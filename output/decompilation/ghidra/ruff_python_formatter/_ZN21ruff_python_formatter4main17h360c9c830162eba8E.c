code * _ZN21ruff_python_formatter4main17h360c9c830162eba8E(void)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 extraout_RDX;
  long lVar9;
  code *pcVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined **local_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_70;
  undefined local_68 [8];
  long local_60;
  long local_58;
  char local_50;
  byte local_4b [3];
  undefined local_48 [24];
  
  _ZN12clap_builder6derive6Parser5parse17hb67efa6497466508E(local_68);
  if (local_58 == 0) {
    if ((local_4b[0] == 2) || ((local_4b[0] & 1) != 0)) {
                    /* try { // try from 003d0392 to 003d039b has its CatchHandler @ 003d05c9 */
      _ZN21ruff_python_formatter15read_from_stdin17hb66a960b14556087E(&local_a0);
      puVar3 = local_90;
      pcVar10 = local_98;
      ppuVar11 = local_a0;
                    /* try { // try from 003d03b7 to 003d03dc has its CatchHandler @ 003d05be */
      (*(code *)
        PTR__ZN21ruff_python_formatter3cli22format_and_debug_print17hafab07a4cadcab9dE_006bd530)
                (&local_a0,local_98,local_90,local_68,&DAT_001864a8,8);
      puVar4 = local_90;
      pcVar2 = local_98;
      ppuVar1 = local_a0;
      pcVar8 = local_98;
      if (local_a0 != (undefined **)&DAT_8000000000000000) {
        if (local_50 == '\0') {
                    /* try { // try from 003d04c6 to 003d04db has its CatchHandler @ 003d05ae */
          local_a0 = (undefined **)
                     (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_006bd538)();
          local_b8 = (undefined **)
                     (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_006bd540)
                               (&local_a0);
                    /* try { // try from 003d04e0 to 003d04fb has its CatchHandler @ 003d05a0 */
          lVar9 = (*(code *)
                    PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_006bd548
                  )(&local_b8,pcVar2,puVar4);
          if (lVar9 == 0) {
            _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17he9349647b3a206e2E
                      (local_b8);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e6d45d9886d7667E
                      (ppuVar1,pcVar2);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e6d45d9886d7667E
                      (ppuVar11,pcVar10);
            pcVar8 = (code *)0x0;
            goto LAB_003d0521;
          }
          pcVar8 = (code *)_ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h253cebc4b374091aE
                                     (lVar9);
                    /* try { // try from 003d0503 to 003d0593 has its CatchHandler @ 003d05ae */
          _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17he9349647b3a206e2E
                    (local_b8);
        }
        else {
          cVar5 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h4466dd4b5091c714E
                            (local_98,local_90,pcVar10,puVar3);
          if (cVar5 == '\0') {
            local_a0 = &PTR_DAT_0067a3f8;
            local_98 = (code *)0x1;
            local_90 = &DAT_00000008;
            local_88 = 0;
            uStack_80 = 0;
            pcVar8 = (code *)_ZN6anyhow9__private10format_err17hd87f3faee3401bd9E(&local_a0);
          }
          else {
            pcVar8 = (code *)0x0;
          }
        }
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e6d45d9886d7667E(ppuVar1,pcVar2)
        ;
      }
LAB_003d051c:
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e6d45d9886d7667E(ppuVar11,pcVar10)
      ;
    }
    else {
      local_b8 = (undefined **)local_4b;
      local_b0 = 
      _ZN66__LT_core__option__Option_LT_T_GT__u20_as_u20_core__fmt__Debug_GT_3fmt17h0954651f0660b224E
      ;
      local_a0 = &PTR_DAT_0067a3e8;
      local_98 = (code *)0x1;
      uStack_80 = 0;
      local_88 = 1;
                    /* try { // try from 003d0477 to 003d0491 has its CatchHandler @ 003d05c9 */
      local_90 = (undefined *)&local_b8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h34ac8ae5550a3ffbE
                (local_48,0,extraout_RDX,&local_a0);
      pcVar8 = (code *)_ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h4afbb69447b685e5E
                                 (local_48);
    }
  }
  else {
    lVar9 = local_58 * 0x18;
    lVar12 = local_60;
    do {
                    /* try { // try from 003d027b to 003d029a has its CatchHandler @ 003d05e4 */
      _ZN3std2fs14read_to_string17h41eae1eb6c2775c1E(&local_a0,lVar12);
      _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h652c53f0156db4f6E
                (&local_b8,&local_a0,*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10));
      ppuVar11 = local_b8;
      pcVar8 = local_b0;
      if (local_b8 == (undefined **)&DAT_8000000000000000) goto LAB_003d0521;
                    /* try { // try from 003d02c6 to 003d02db has its CatchHandler @ 003d05df */
      local_70 = local_b0;
      (*(code *)
        PTR__ZN21ruff_python_formatter3cli22format_and_debug_print17hafab07a4cadcab9dE_006bd530)
                (&local_a0,local_b0,local_a8,local_68,*(undefined8 *)(lVar12 + 8),
                 *(undefined8 *)(lVar12 + 0x10));
      puVar3 = local_90;
      pcVar2 = local_98;
      ppuVar1 = local_a0;
      pcVar10 = local_70;
      pcVar8 = local_98;
      if (local_a0 == (undefined **)&DAT_8000000000000000) goto LAB_003d051c;
      if ((local_4b[0] == 2) || ((local_4b[0] & 1) == 0)) {
        uVar7 = _ZN3std2fs5write17h0d1ce5070c5f0cf0E(lVar12,local_98,local_90);
        pcVar8 = (code *)_ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17hb6ea084bb847c06dE
                                   (uVar7,*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10)
                                   );
        if (pcVar8 != (code *)0x0) goto LAB_003d04ae;
      }
      else {
                    /* try { // try from 003d030b to 003d0320 has its CatchHandler @ 003d05f9 */
        local_a0 = (undefined **)
                   (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_006bd538)();
        local_b8 = (undefined **)
                   (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_006bd540)
                             (&local_a0);
                    /* try { // try from 003d0325 to 003d0333 has its CatchHandler @ 003d05cb */
        lVar6 = (*(code *)
                  PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_006bd548
                )(&local_b8,pcVar2,puVar3);
        if (lVar6 != 0) {
                    /* try { // try from 003d049a to 003d04a1 has its CatchHandler @ 003d059e */
          pcVar8 = (code *)_ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h253cebc4b374091aE
                                     (lVar6);
                    /* try { // try from 003d04a9 to 003d04ad has its CatchHandler @ 003d059c */
          _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17he9349647b3a206e2E
                    (local_b8);
LAB_003d04ae:
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e6d45d9886d7667E
                    (ppuVar1,pcVar2);
          pcVar10 = local_70;
          goto LAB_003d051c;
        }
                    /* try { // try from 003d0341 to 003d036f has its CatchHandler @ 003d05f9 */
        _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17he9349647b3a206e2E(local_b8);
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e6d45d9886d7667E(ppuVar1,pcVar2);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e6d45d9886d7667E
                (ppuVar11,local_70);
      lVar12 = lVar12 + 0x18;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
    pcVar8 = (code *)0x0;
  }
LAB_003d0521:
  _ZN4core3ptr52drop_in_place_LT_ruff_python_formatter__cli__Cli_GT_17h0f3c9660c8ee91e1E(local_68);
  return pcVar8;
}