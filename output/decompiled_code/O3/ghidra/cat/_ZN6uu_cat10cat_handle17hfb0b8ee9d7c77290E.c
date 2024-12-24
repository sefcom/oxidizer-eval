void __rustcall uu_cat::cat_handle(long *param_1,long param_2,int *param_3,long *param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  bool bVar14;
  undefined auVar15 [16];
  undefined auStack_10030 [33568];
  undefined *puStack_7d10;
  char cStack_7d01;
  undefined8 uStack_7d00;
  long *plStack_7cf8;
  long lStack_7cf0;
  uint uStack_7ce8;
  uint uStack_7ce4;
  undefined **ppuStack_7ce0;
  undefined auStack_7cd8 [16];
  undefined8 uStack_7cc8;
  undefined4 uStack_7cc0;
  undefined4 uStack_7cbc;
  undefined8 uStack_7cb8;
  undefined8 uStack_7cb0;
  undefined8 uStack_7ca8;
  undefined8 uStack_7ca0;
  undefined uStack_7c98;
  char *pcStack_7c90;
  long lStack_7c88;
  int *piStack_7c80;
  undefined8 uStack_7c78;
  long *plStack_7c70;
  code *pcStack_7c68;
  undefined *puStack_7c60;
  undefined8 uStack_7c58;
  long **pplStack_7c50;
  undefined8 uStack_7c48;
  undefined8 *puStack_7c40;
  undefined8 uStack_7c38;
  undefined auStack_7c30 [3072];
  undefined8 uStack_7030;
  undefined8 uStack_6030;
  undefined8 uStack_5030;
  undefined8 uStack_4030;
  undefined8 uStack_3030;
  undefined8 uStack_2030;
  undefined8 uStack_1030;
  
  if (*param_3 != 0) {
    uStack_1030 = 0;
    uStack_2030 = 0;
    uStack_3030 = 0;
    uStack_4030 = 0;
    uStack_5030 = 0;
    uStack_6030 = 0;
    uStack_7030 = 0;
    puStack_7d10 = (undefined *)0x1b09e0;
    plStack_7cf8 = param_1;
    (*(code *)PTR_memset_0021d170)(auStack_7c30,0,0x7c00);
    puStack_7d10 = (undefined *)0x1b09e6;
    uStack_7c78 = std::io::stdio::stdout();
    puStack_7d10 = (undefined *)0x1b09fc;
    uStack_7d00 = std::io::stdio::Stderr::lock(&uStack_7c78);
    cStack_7d01 = *(char *)(param_3 + 1);
    bVar14 = *(char *)((long)param_3 + 2) != '\0';
    pcStack_7c90 = "$\n";
    if (!bVar14) {
      pcStack_7c90 = "\n: ";
    }
    lStack_7c88 = (ulong)bVar14 + 1;
    ppuStack_7ce0 = &PTR_s_src_uu_cat_src_cat_rs_00219128;
    uStack_7ce4 = (uint)*(byte *)((long)param_3 + 1);
    uStack_7ce8 = (uint)*(byte *)((long)param_3 + 3);
    lStack_7cf0 = param_2;
    piStack_7c80 = param_3;
    do {
      puStack_7d10 = (undefined *)0x1b0a71;
      auVar15 = _<std::os::unix::net::stream::UnixStream_as_std::io::Read>::read
                          (lStack_7cf0,auStack_7c30,0x7c00,
                           _<std::os::unix::net::stream::UnixStream_as_std::io::Read>::read);
      uVar10 = auVar15._8_8_;
      auStack_7cd8 = auVar15;
      if ((auVar15._0_8_ != 0) || (uVar10 == 0)) {
        puStack_7d10 = (undefined *)0x1b0d67;
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(auStack_7cd8);
        *plStack_7cf8 = -0x7ffffffffffffffa;
LAB_001b0d41:
        puStack_7d10 = (undefined *)0x1b0d4b;
        core::ptr::drop_in_place<std::io::stdio::StdoutLock>(uStack_7d00);
        return;
      }
      puStack_7d10 = (undefined *)0x1b0aa7;
      auVar15 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                          (uVar10,auStack_7c30,0x7c00,&PTR_s_src_uu_cat_src_cat_rs_00219110);
      uVar11 = auVar15._8_8_;
      lVar7 = auVar15._0_8_;
      uVar13 = 0;
      do {
        uVar9 = uVar13;
        if (uVar11 < uVar13 || uVar11 - uVar13 == 0) goto LAB_001b0d8a;
        if (*(char *)(lVar7 + uVar13) == '\n') {
          puStack_7d10 = (undefined *)0x1b0b00;
          write_new_line(&uStack_7cc8,&uStack_7d00,piStack_7c80,param_4,
                         *(undefined *)(lStack_7cf0 + 4));
          if (uStack_7cc8 != -0x7ffffffffffffffa) {
            plStack_7cf8[2] = uStack_7cb8;
            *(undefined4 *)plStack_7cf8 = (undefined4)uStack_7cc8;
            *(undefined4 *)((long)plStack_7cf8 + 4) = uStack_7cc8._4_4_;
            *(undefined4 *)(plStack_7cf8 + 1) = uStack_7cc0;
            *(undefined4 *)((long)plStack_7cf8 + 0xc) = uStack_7cbc;
LAB_001b0d37:
            puStack_7d10 = (undefined *)0x1b0d41;
            core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>
                      (auStack_7cd8);
            goto LAB_001b0d41;
          }
          *(undefined *)(param_4 + 1) = 1;
          uVar13 = uVar13 + 1;
        }
        else {
          if (*(char *)((long)param_4 + 9) == '\0') {
            *(undefined *)((long)param_4 + 10) = 0;
            if ((*(char *)(param_4 + 1) != '\0') && (cStack_7d01 != '\0')) {
              pcStack_7c68 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
              uStack_7cc8 = 2;
              uStack_7cb8 = 0;
              uStack_7cb0 = 6;
              uStack_7ca8 = 0;
              uStack_7ca0 = 0x20;
              uStack_7c98 = 3;
              puStack_7c60 = &DAT_00219140;
              uStack_7c58 = 2;
              puStack_7c40 = &uStack_7cc8;
              uStack_7c38 = 1;
              pplStack_7c50 = &plStack_7c70;
              uStack_7c48 = 1;
              puStack_7d10 = (undefined *)0x1b0c1e;
              plStack_7c70 = param_4;
              lVar8 = std::io::Write::write_fmt(&uStack_7d00,&puStack_7c60);
              if (lVar8 != 0) goto LAB_001b0d0a;
              *param_4 = *param_4 + 1;
            }
          }
          else {
            puStack_7d10 = (undefined *)0x1b0b3e;
            lVar8 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(&uStack_7d00,"\r",1);
            if (lVar8 != 0) {
LAB_001b0d0a:
              *plStack_7cf8 = -0x8000000000000000;
              plStack_7cf8[1] = lVar8;
              goto LAB_001b0d37;
            }
            *(undefined2 *)(param_4 + 1) = 0;
            *(undefined *)((long)param_4 + 10) = 0;
          }
          puStack_7d10 = (undefined *)0x1b0c4a;
          lVar8 = write_end(&uStack_7d00,lVar7 + uVar13,uVar11 - uVar13,uStack_7ce4,uStack_7ce8);
          uVar9 = lVar8 + uVar13;
          if (uVar9 == uVar11) {
            *(undefined *)(param_4 + 1) = 0;
            break;
          }
          if (uVar11 <= uVar9) {
            ppuStack_7ce0 = &PTR_s_src_uu_cat_src_cat_rs_00219160;
LAB_001b0d8a:
                    /* WARNING: Subroutine does not return */
            puStack_7d10 = (undefined *)0x1b0d9b;
            core::panicking::panic_bounds_check(uVar9,uVar11,ppuStack_7ce0);
          }
          if (*(char *)(lVar7 + uVar9) == '\n') {
            puStack_7d10 = (undefined *)0x1b0ca6;
            write_end_of_line(&uStack_7cc8,&uStack_7d00,pcStack_7c90,lStack_7c88,
                              *(undefined *)(lStack_7cf0 + 4));
            if (uStack_7cc8 != -0x7ffffffffffffffa) {
              *(undefined4 *)(plStack_7cf8 + 1) = uStack_7cc0;
              *(undefined4 *)((long)plStack_7cf8 + 0xc) = uStack_7cbc;
              *(undefined4 *)(plStack_7cf8 + 2) = (undefined4)uStack_7cb8;
              *(undefined4 *)((long)plStack_7cf8 + 0x14) = uStack_7cb8._4_4_;
              *plStack_7cf8 = uStack_7cc8;
              goto LAB_001b0d37;
            }
            *(undefined *)(param_4 + 1) = 1;
            uVar13 = uVar13 + lVar8 + 1;
          }
          else {
            if (*(char *)(lVar7 + uVar9) != '\r') {
              uStack_7cc8 = 0;
              puStack_7d10 = (undefined *)0x1b0dc4;
              uVar6 = core::panicking::assert_failed
                                (0,lVar7 + uVar9,"\n: ",&uStack_7cc8,
                                 &PTR_s_src_uu_cat_src_cat_rs_00219178);
              puStack_7d10 = (undefined *)0x1b0de9;
              core::ptr::drop_in_place<std::io::stdio::StdoutLock>(uStack_7d00);
              puStack_7d10 = &LAB_001b0df1;
              _Unwind_Resume(uVar6);
              return;
            }
            *(undefined *)((long)param_4 + 9) = 1;
            uVar13 = uVar13 + lVar8 + 1;
          }
        }
      } while (uVar13 < uVar10);
      puStack_7d10 = (undefined *)0x1b0cd9;
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(auStack_7cd8);
    } while( true );
  }
  if (*(char *)(param_3 + 1) != '\0') {
    write_lines();
    return;
  }
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar12 = puVar1;
    *(undefined8 *)(puVar12 + -0x1000) = 0;
    puVar1 = puVar12 + -0x1000;
  } while (puVar12 + -0x1000 != auStack_10030);
  *(long **)(puVar12 + -0x1020) = param_1;
  *(undefined8 *)(puVar12 + -0x1030) = 0x1afdfa;
  uVar6 = std::io::stdio::stdout();
  *(undefined8 *)(puVar12 + -0x1008) = uVar6;
  *(undefined8 *)(puVar12 + -0x1030) = 0x1afe0a;
  uVar6 = std::io::stdio::Stderr::lock(puVar12 + -0x1008);
  *(undefined8 *)(puVar12 + -0x1028) = uVar6;
  *(undefined8 *)(puVar12 + -0x1030) = 0x1afe21;
  splice::write_fast_using_splice(puVar12 + -0x1000,param_2,puVar12 + -0x1028);
  lVar7 = *(long *)(puVar12 + -0x1000);
  cVar2 = puVar12[-0xff8];
  if (lVar7 == -0x7ffffffffffffffa) {
    if (cVar2 == '\0') {
      **(undefined8 **)(puVar12 + -0x1020) = 0x8000000000000006;
    }
    else {
      puVar1 = puVar12 + -0x1000;
      *(undefined8 *)(puVar12 + -0x1030) = 0x1afe5b;
      (*(code *)PTR_memset_0021d170)(puVar1,0,0x10000);
      while( true ) {
        *(undefined8 *)(puVar12 + -0x1030) = 0x1afe8d;
        auVar15 = _<std::os::unix::net::stream::UnixStream_as_std::io::Read>::read
                            (param_2,puVar1,0x10000);
        *(undefined (*) [16])(puVar12 + -0x1018) = auVar15;
        if ((auVar15._0_8_ != 0) || (auVar15._8_8_ == 0)) break;
        *(undefined8 *)(puVar12 + -0x1030) = 0x1afeb8;
        uVar6 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                          (auVar15._8_8_,puVar1,0x10000,&PTR_s_src_uu_cat_src_cat_rs_002190f8);
        *(undefined8 *)(puVar12 + -0x1030) = 0x1afec1;
        lVar7 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(puVar12 + -0x1028,uVar6);
        if (lVar7 != 0) {
          puVar5 = *(undefined8 **)(puVar12 + -0x1020);
          *puVar5 = 0x8000000000000000;
          puVar5[1] = lVar7;
          *(undefined8 *)(puVar12 + -0x1030) = 0x1aff64;
          core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>
                    (puVar12 + -0x1018);
          goto LAB_001aff78;
        }
        *(undefined8 *)(puVar12 + -0x1030) = 0x1afece;
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>
                  (puVar12 + -0x1018);
      }
      *(undefined8 *)(puVar12 + -0x1030) = 0x1aff16;
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(puVar12 + -0x1018)
      ;
      *(undefined8 *)(puVar12 + -0x1030) = 0x1aff1f;
      lVar7 = _<std::io::stdio::StdoutLock_as_std::io::Write>::flush(puVar12 + -0x1028);
      if (lVar7 == 0) {
        **(undefined8 **)(puVar12 + -0x1020) = 0x8000000000000006;
      }
      else {
        puVar5 = *(undefined8 **)(puVar12 + -0x1020);
        *puVar5 = 0x8000000000000000;
        puVar5[1] = lVar7;
      }
LAB_001aff78:
      uVar6 = *(undefined8 *)(puVar12 + -0x1028);
    }
  }
  else {
    uVar3 = *(undefined8 *)(puVar12 + -0xff7);
    plVar4 = *(long **)(puVar12 + -0x1020);
    plVar4[2] = *(long *)(puVar12 + -0xff0);
    *(undefined8 *)((long)plVar4 + 9) = uVar3;
    *plVar4 = lVar7;
    *(char *)(plVar4 + 1) = cVar2;
  }
  *(undefined8 *)(puVar12 + -0x1030) = 0x1aff81;
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(uVar6);
  return;
}