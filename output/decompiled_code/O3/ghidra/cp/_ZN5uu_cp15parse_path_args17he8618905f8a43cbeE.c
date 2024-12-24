undefined8 * __rustcall uu_cp::parse_path_args(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined **local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *puStack_78;
  undefined local_70 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar3 = param_2[2];
  if (uVar3 == 0) {
    _<uu_cp::Error_as_core::convert::From<&str>>::from(&local_e8,"missing file operand",0x14);
    param_1[6] = local_b8;
    param_1[7] = uStack_b0;
    param_1[4] = uStack_c8;
    param_1[5] = uStack_c0;
    param_1[2] = local_d8;
    param_1[3] = uStack_d0;
    *(undefined4 *)param_1 = (undefined4)local_e8;
    *(undefined4 *)((long)param_1 + 4) = local_e8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_e0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_e0._4_4_;
  }
  else {
    lVar5 = *(long *)(param_3 + 0x18);
    if ((uVar3 == 1) && (lVar5 == -0x8000000000000000)) {
      local_a0 = param_2[1];
      uStack_98 = _<std::sys::os_str::bytes::Buf_as_core::fmt::Debug>::fmt;
      local_e8 = &PTR_s_missing_destination_file_operand_002b55c0;
      uStack_e0 = 1;
      uStack_c8 = 0;
      local_d8 = &local_a0;
      uStack_d0 = 1;
                    /* try { // try from 002024ea to 002025c7 has its CatchHandler @ 00202767 */
      core::option::Option<T>::map_or_else(&local_60,&local_e8);
      param_1[3] = local_50;
    }
    else {
      if ((uVar3 < 3) || ((*(char *)(param_3 + 0x42) == '\0' || (lVar5 != -0x8000000000000000)))) {
        if (lVar5 == -0x8000000000000000) {
          lVar5 = uVar3 - 1;
          param_2[2] = lVar5;
          local_88 = *(undefined ***)(param_2[1] + lVar5 * 0x18);
          plVar1 = (long *)(param_2[1] + 8 + lVar5 * 0x18);
          uStack_80 = *(undefined4 *)plVar1;
          uStack_7c = *(undefined4 *)((long)plVar1 + 4);
          local_e8 = (undefined **)*plVar1;
          puStack_78 = (undefined8 *)plVar1[1];
          uStack_e0 = plVar1[1];
          if (local_88 == (undefined **)0x8000000000000000) {
                    /* try { // try from 00202758 to 00202764 has its CatchHandler @ 00202767 */
            uVar7 = core::option::unwrap_failed(&PTR_s_src_uu_cp_src_cp_rs_002b55d0);
                    /* catch() { ... } // from try @ 00202677 with catch @ 00202765 */
                    /* catch() { ... } // from try @ 002026b8 with catch @ 00202783 */
                    /* try { // try from 00202786 to 00202797 has its CatchHandler @ 002027a0 */
            core::ptr::drop_in_place<std::path::PathBuf>(&local_88);
            core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(param_2);
            puVar8 = (undefined8 *)_Unwind_Resume(uVar7);
            return puVar8;
          }
          cVar2 = *(char *)(param_3 + 0x45);
        }
        else {
                    /* try { // try from 00202648 to 00202656 has its CatchHandler @ 00202767 */
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_e8,param_3 + 0x18);
          cVar2 = *(char *)(param_3 + 0x45);
          puStack_78 = local_d8;
          uStack_80 = (undefined4)uStack_e0;
          uStack_7c = uStack_e0._4_4_;
          local_88 = local_e8;
        }
        if (cVar2 != '\0') {
                    /* try { // try from 00202677 to 0020267e has its CatchHandler @ 00202765 */
          local_70 = _<&mut_alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::
                     into_iter(param_2);
          puVar6 = (undefined4 *)
                   _<core::slice::iter::IterMut<T>as_core::iter::traits::iterator::Iterator>::next
                             (local_70);
          if (puVar6 != (undefined4 *)0x0) {
            do {
                    /* try { // try from 002026b8 to 002026d4 has its CatchHandler @ 00202783 */
              std::path::Path::components
                        (&local_e8,*(undefined8 *)(puVar6 + 2),*(undefined8 *)(puVar6 + 4));
              uVar7 = std::path::Components::as_path(&local_e8);
              std::sys::pal::unix::os::split_paths::bytes_to_path(&local_a0,uVar7);
                    /* try { // try from 002026d5 to 002026dc has its CatchHandler @ 0020276c */
              core::ptr::drop_in_place<std::path::PathBuf>(puVar6);
              *(undefined8 *)(puVar6 + 4) = local_90;
              *puVar6 = (undefined4)local_a0;
              puVar6[1] = local_a0._4_4_;
              puVar6[2] = (undefined4)uStack_98;
              puVar6[3] = uStack_98._4_4_;
              puVar6 = (undefined4 *)
                       _<core::slice::iter::IterMut<T>as_core::iter::traits::iterator::Iterator>::
                       next(local_70);
            } while (puVar6 != (undefined4 *)0x0);
          }
        }
        uVar7 = param_2[2];
        uVar4 = param_2[1];
        param_1[1] = *param_2;
        param_1[2] = uVar4;
        param_1[3] = uVar7;
        param_1[4] = local_88;
        param_1[5] = CONCAT44(uStack_7c,uStack_80);
        param_1[6] = puStack_78;
        *param_1 = 0xd;
        return param_1;
      }
      local_a0 = param_2[1] + 0x30;
      uStack_98 = _<std::sys::os_str::bytes::Buf_as_core::fmt::Debug>::fmt;
      local_e8 = &PTR_s_extra_operand___002b55e8;
      uStack_e0 = 1;
      uStack_c8 = 0;
      local_d8 = &local_a0;
      uStack_d0 = 1;
      core::option::Option<T>::map_or_else(&local_48,&local_e8);
      param_1[3] = local_38;
      local_60 = local_48;
      uStack_5c = uStack_44;
      uStack_58 = uStack_40;
      uStack_54 = uStack_3c;
    }
    *(undefined4 *)(param_1 + 1) = local_60;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_5c;
    *(undefined4 *)(param_1 + 2) = uStack_58;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_54;
    *param_1 = 4;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(param_2);
  return param_1;
}