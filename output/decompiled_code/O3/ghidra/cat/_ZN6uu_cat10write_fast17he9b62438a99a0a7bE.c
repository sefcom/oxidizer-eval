void __rustcall uu_cat::write_fast(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined auVar9 [16];
  undefined auStack_10030 [65536];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar8 = puVar1;
    *(undefined8 *)(puVar8 + -0x1000) = 0;
    puVar1 = puVar8 + -0x1000;
  } while (puVar8 + -0x1000 != auStack_10030);
  *(undefined8 *)(puVar8 + -0x1020) = param_1;
  *(undefined8 *)(puVar8 + -0x1030) = 0x1afdfa;
  uVar6 = std::io::stdio::stdout();
  *(undefined8 *)(puVar8 + -0x1008) = uVar6;
  *(undefined8 *)(puVar8 + -0x1030) = 0x1afe0a;
  uVar6 = std::io::stdio::Stderr::lock(puVar8 + -0x1008);
  *(undefined8 *)(puVar8 + -0x1028) = uVar6;
                    /* try { // try from 001afe11 to 001afe20 has its CatchHandler @ 001aff93 */
  *(undefined8 *)(puVar8 + -0x1030) = 0x1afe21;
  splice::write_fast_using_splice(puVar8 + -0x1000,param_2,puVar8 + -0x1028);
  lVar7 = *(long *)(puVar8 + -0x1000);
  cVar2 = puVar8[-0xff8];
  if (lVar7 == -0x7ffffffffffffffa) {
    if (cVar2 == '\0') {
      **(undefined8 **)(puVar8 + -0x1020) = 0x8000000000000006;
    }
    else {
      puVar1 = puVar8 + -0x1000;
      *(undefined8 *)(puVar8 + -0x1030) = 0x1afe5b;
      (*(code *)PTR_memset_0021d170)(puVar1,0,0x10000);
      while( true ) {
                    /* try { // try from 001afe80 to 001afe8c has its CatchHandler @ 001affa4 */
        *(undefined8 *)(puVar8 + -0x1030) = 0x1afe8d;
        auVar9 = _<std::os::unix::net::stream::UnixStream_as_std::io::Read>::read
                           (param_2,puVar1,0x10000);
        *(undefined (*) [16])(puVar8 + -0x1018) = auVar9;
        if ((auVar9._0_8_ != 0) || (auVar9._8_8_ == 0)) break;
                    /* try { // try from 001afea4 to 001afec0 has its CatchHandler @ 001aff95 */
        *(undefined8 *)(puVar8 + -0x1030) = 0x1afeb8;
        uVar6 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                          (auVar9._8_8_,puVar1,0x10000,&PTR_s_src_uu_cat_src_cat_rs_002190f8);
        *(undefined8 *)(puVar8 + -0x1030) = 0x1afec1;
        lVar7 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(puVar8 + -0x1028,uVar6);
        if (lVar7 != 0) {
          puVar5 = *(undefined8 **)(puVar8 + -0x1020);
          *puVar5 = 0x8000000000000000;
          puVar5[1] = lVar7;
          *(undefined8 *)(puVar8 + -0x1030) = 0x1aff64;
          core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>
                    (puVar8 + -0x1018);
          goto LAB_001aff78;
        }
                    /* try { // try from 001afec6 to 001afecd has its CatchHandler @ 001affa4 */
        *(undefined8 *)(puVar8 + -0x1030) = 0x1afece;
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>
                  (puVar8 + -0x1018);
      }
                    /* try { // try from 001aff0c to 001aff63 has its CatchHandler @ 001aff93 */
      *(undefined8 *)(puVar8 + -0x1030) = 0x1aff16;
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(puVar8 + -0x1018);
      *(undefined8 *)(puVar8 + -0x1030) = 0x1aff1f;
      lVar7 = _<std::io::stdio::StdoutLock_as_std::io::Write>::flush(puVar8 + -0x1028);
      if (lVar7 == 0) {
        **(undefined8 **)(puVar8 + -0x1020) = 0x8000000000000006;
      }
      else {
        puVar5 = *(undefined8 **)(puVar8 + -0x1020);
        *puVar5 = 0x8000000000000000;
        puVar5[1] = lVar7;
      }
LAB_001aff78:
      uVar6 = *(undefined8 *)(puVar8 + -0x1028);
    }
  }
  else {
    uVar3 = *(undefined8 *)(puVar8 + -0xff7);
    plVar4 = *(long **)(puVar8 + -0x1020);
    plVar4[2] = *(long *)(puVar8 + -0xff0);
    *(undefined8 *)((long)plVar4 + 9) = uVar3;
    *plVar4 = lVar7;
    *(char *)(plVar4 + 1) = cVar2;
  }
  *(undefined8 *)(puVar8 + -0x1030) = 0x1aff81;
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(uVar6);
  return;
}