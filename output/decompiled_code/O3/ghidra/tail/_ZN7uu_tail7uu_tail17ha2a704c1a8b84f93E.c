undefined  [16] __rustcall uu_tail::uu_tail(long param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 unaff_R13;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined local_19a;
  undefined local_199;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined local_178 [8];
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  undefined local_150 [144];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  
  local_19a = *(undefined *)(param_1 + 0x4a);
  local_199 = 1;
  follow::watch::Observer::from(local_150,param_1);
                    /* try { // try from 00212cb1 to 00212cbb has its CatchHandler @ 00212e99 */
  auVar5 = follow::watch::Observer::start(local_150,param_1);
  if (auVar5._0_8_ == 0) {
                    /* try { // try from 00212cda to 00212ce3 has its CatchHandler @ 00212e99 */
    _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(local_178,param_1 + 0x18);
    local_158 = local_168 * 0x30 + local_170;
    local_160 = local_170;
    lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_160)
    ;
    if (lVar3 != 0) {
      do {
        if (*(long *)(lVar3 + 0x18) == -0x8000000000000000) {
LAB_00212d94:
          auVar5 = tail_stdin(param_1,&local_19a,lVar3,local_150);
        }
        else {
                    /* try { // try from 00212d40 to 00212d59 has its CatchHandler @ 00212ead */
          std::sys::os_str::bytes::Slice::to_owned(&local_c0,"/dev/stdin",10);
          local_188 = local_b0;
          local_198 = local_c0;
          uStack_194 = uStack_bc;
          uStack_190 = uStack_b8;
          uStack_18c = uStack_b4;
                    /* try { // try from 00212d81 to 00212d85 has its CatchHandler @ 00212e9e */
          cVar2 = _<std::path::PathBuf_as_core::cmp::PartialEq>::eq
                            (*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28),
                             CONCAT44(uStack_b4,uStack_b8));
          if (cVar2 != '\0') {
                    /* try { // try from 00212d8a to 00212dda has its CatchHandler @ 00212ead */
            core::ptr::drop_in_place<std::path::PathBuf>(&local_198);
            goto LAB_00212d94;
          }
          core::ptr::drop_in_place<std::path::PathBuf>(&local_198);
          auVar5 = tail_file(param_1,&local_19a,lVar3,*(undefined8 *)(lVar3 + 0x20),
                             *(undefined8 *)(lVar3 + 0x28),local_150,0);
        }
        if (auVar5._0_8_ != 0) {
                    /* try { // try from 00212e48 to 00212e51 has its CatchHandler @ 00212e99 */
          core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(local_178);
          goto LAB_00212cc7;
        }
        lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_160);
      } while (lVar3 != 0);
    }
                    /* try { // try from 00212df7 to 00212e0f has its CatchHandler @ 00212e99 */
    core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(local_178);
    if ((*(char *)(param_1 + 0x4c) == '\x02') ||
       (cVar2 = args::Settings::has_only_stdin(param_1), cVar2 != '\0')) {
      bVar1 = false;
    }
    else {
      (*(code *)PTR_memcpy_002c47b8)(&local_c0,local_150,0x90);
      auVar5 = follow::watch::follow(&local_c0,param_1);
      uVar4 = auVar5._8_8_;
      lVar3 = auVar5._0_8_;
      if (lVar3 != 0) goto LAB_00212e2d;
      bVar1 = true;
    }
                    /* try { // try from 00212e16 to 00212e1b has its CatchHandler @ 00212e8f */
    uucore::mods::error::get_exit_code();
    if (!bVar1) {
      core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(local_150);
    }
    lVar3 = 0;
    uVar4 = unaff_R13;
  }
  else {
LAB_00212cc7:
    lVar3 = auVar5._0_8_;
    core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(local_150);
    uVar4 = auVar5._8_8_;
  }
LAB_00212e2d:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}