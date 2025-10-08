void _ZN18alacritty_terminal4term13Term_LT_T_GT_15write_at_cursor17hea9a85bc72f6f9d2E
               (long param_1,undefined4 param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined2 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar10 = (undefined *)
            (*(code *)
              PTR__ZN109__LT_alacritty_terminal__grid__Charsets_u20_as_u20_core__ops__index__Index_LT_vte__ansi__CharsetIndex_GT__GT_5index17ha790449f008967f2E_009de560
            )(param_1 + 0x80,*(undefined *)(param_1 + 0x6e3),
              &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009777a0);
  uVar9 = _ZN3vte4ansi15StandardCharset3map17h13730de7dfbe6242E(*puVar10,param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined2 *)(param_1 + 0x7c);
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 == (long *)0x0) {
    uVar18 = 0;
  }
  else {
    LOCK();
    lVar3 = *plVar6;
    *plVar6 = *plVar6 + 1;
    UNLOCK();
    if (*plVar6 == 0 || SCARRY8(lVar3,1) != *plVar6 < 0) goto LAB_0046f8e8;
    uVar18 = *(undefined8 *)(param_1 + 0x68);
  }
  lVar3 = param_1 + 0x28;
                    /* try { // try from 0046f727 to 0046f888 has its CatchHandler @ 0046f8f9 */
  puVar11 = (undefined8 *)
            _ZN18alacritty_terminal4grid13Grid_LT_T_GT_11cursor_cell17h4172fc1fd56d763cE(lVar3);
  if ((*(ushort *)((long)puVar11 + 0x14) & 0x60) == 0) goto LAB_0046f88c;
  uVar7 = *(ulong *)(param_1 + 0x58);
  iVar5 = *(int *)(param_1 + 0x60);
  if (((*(ushort *)((long)puVar11 + 0x14) & 0x20) == 0) || (*(long *)(param_1 + 0xb8) - 1U <= uVar7)
     ) {
    if (uVar7 == 0) {
LAB_0046f816:
      iVar15 = 0;
      if (*(ulong *)(param_1 + 0xc0) <= *(ulong *)(param_1 + 0x50)) {
        iVar15 = (int)*(ulong *)(param_1 + 0x50) - (int)*(ulong *)(param_1 + 0xc0);
      }
      if (iVar15 + iVar5 != 0) {
        lVar12 = *(long *)(param_1 + 0xb8);
        lVar14 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                           (lVar3,iVar5 + -1,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977818);
        uVar19 = lVar12 - 1;
        uVar13 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(*(undefined8 *)(lVar14 + 0x18),lVar12);
        *(undefined8 *)(lVar14 + 0x18) = uVar13;
        uVar17 = *(ulong *)(lVar14 + 0x10);
        if (uVar17 <= uVar19) {
          ppuVar16 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977830;
          goto LAB_0046f8df;
        }
        puVar1 = (ushort *)(*(long *)(lVar14 + 8) + 0x14 + uVar19 * 0x18);
        *puVar1 = *puVar1 & 0xfbff;
      }
LAB_0046f881:
      puVar11 = (undefined8 *)
                _ZN18alacritty_terminal4grid13Grid_LT_T_GT_11cursor_cell17h4172fc1fd56d763cE(lVar3);
LAB_0046f88c:
      *(undefined4 *)(puVar11 + 2) = uVar9;
      local_48 = (undefined4)uVar2;
      uStack_44 = (undefined4)((ulong)uVar2 >> 0x20);
      *(undefined4 *)(puVar11 + 1) = local_48;
      *(undefined4 *)((long)puVar11 + 0xc) = uStack_44;
      *(undefined2 *)((long)puVar11 + 0x14) = uVar4;
                    /* try { // try from 0046f8ab to 0046f8b2 has its CatchHandler @ 0046f8ea */
      _ZN4core3ptr114drop_in_place_LT_core__option__Option_LT_alloc__sync__Arc_LT_alacritty_terminal__term__cell__CellExtra_GT__GT__GT_17h98da69247a1b0f0cE
                (puVar11);
      *puVar11 = uVar18;
      return;
    }
    lVar12 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                       (lVar3,iVar5,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009777e8);
    uVar19 = uVar7 - 1;
    uVar13 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(*(undefined8 *)(lVar12 + 0x18),uVar7);
    *(undefined8 *)(lVar12 + 0x18) = uVar13;
    uVar17 = *(ulong *)(lVar12 + 0x10);
    if (uVar19 < uVar17) {
      (*(code *)PTR__ZN18alacritty_terminal4term4cell4Cell10clear_wide17hefcec44bb91a1c8eE_009de568)
                (uVar19 * 0x18 + *(long *)(lVar12 + 8));
      goto LAB_0046f810;
    }
    ppuVar16 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977800;
  }
  else {
    lVar12 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                       (lVar3,iVar5,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009777b8);
    uVar19 = uVar7 + 1;
    uVar13 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(*(undefined8 *)(lVar12 + 0x18),uVar7 + 2);
    *(undefined8 *)(lVar12 + 0x18) = uVar13;
    uVar17 = *(ulong *)(lVar12 + 0x10);
    if (uVar19 < uVar17) {
      puVar1 = (ushort *)(*(long *)(lVar12 + 8) + 0x14 + uVar19 * 0x18);
      *puVar1 = *puVar1 & 0xffbf;
LAB_0046f810:
      if (uVar7 < 2) goto LAB_0046f816;
      goto LAB_0046f881;
    }
    ppuVar16 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009777d0;
  }
LAB_0046f8df:
                    /* try { // try from 0046f8df to 0046f8e7 has its CatchHandler @ 0046f8f9 */
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
            (uVar19,uVar17,ppuVar16);
LAB_0046f8e8:
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}