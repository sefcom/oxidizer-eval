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
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *puStack_88;
  undefined8 *local_78;
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
  if (uVar3 == 1) {
    if (*(long *)(param_3 + 0x18) != -0x8000000000000000) {
LAB_00202f7a:
                    /* try { // try from 00202f81 to 00202f8a has its CatchHandler @ 002030e3 */
      _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_f8,param_3 + 0x18);
      cVar2 = *(char *)(param_3 + 0x45);
      puStack_88 = local_e8;
      uStack_90 = (undefined4)uStack_f0;
      uStack_8c = uStack_f0._4_4_;
      local_98 = local_f8;
joined_r0x00202fa9:
      if (cVar2 != '\0') {
        local_78 = param_1;
                    /* try { // try from 00202faf to 00202fc3 has its CatchHandler @ 002030e1 */
        local_70 = _<&mut_alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::
                   into_iter(param_2);
        puVar6 = (undefined4 *)
                 _<core::slice::iter::IterMut<T>as_core::iter::traits::iterator::Iterator>::next
                           (local_70);
        param_1 = local_78;
        if (puVar6 != (undefined4 *)0x0) {
          do {
                    /* try { // try from 00203018 to 0020302e has its CatchHandler @ 00203104 */
            std::path::Path::components
                      (&local_f8,*(undefined8 *)(puVar6 + 2),*(undefined8 *)(puVar6 + 4));
            uVar7 = std::path::Components::as_path(&local_f8);
            std::sys::pal::unix::os::split_paths::bytes_to_path(&local_b0,uVar7);
                    /* try { // try from 0020302f to 00203036 has its CatchHandler @ 002030ed */
            core::ptr::drop_in_place<std::path::PathBuf>(puVar6);
            *(undefined8 *)(puVar6 + 4) = local_a0;
            *puVar6 = (undefined4)local_b0;
            puVar6[1] = local_b0._4_4_;
            puVar6[2] = (undefined4)uStack_a8;
            puVar6[3] = uStack_a8._4_4_;
            puVar6 = (undefined4 *)
                     _<core::slice::iter::IterMut<T>as_core::iter::traits::iterator::Iterator>::next
                               (local_70);
            param_1 = local_78;
          } while (puVar6 != (undefined4 *)0x0);
        }
      }
      uVar7 = param_2[2];
      uVar4 = param_2[1];
      param_1[1] = *param_2;
      param_1[2] = uVar4;
      param_1[3] = uVar7;
      param_1[4] = local_98;
      param_1[5] = CONCAT44(uStack_8c,uStack_90);
      param_1[6] = puStack_88;
      *param_1 = 0xd;
      return param_1;
    }
    local_b0 = param_2[1];
    uStack_a8 = _<std::sys::os_str::bytes::Buf_as_core::fmt::Debug>::fmt;
    local_f8 = &PTR_s_missing_destination_file_operand_002b5c90;
    uStack_f0 = 1;
    local_d8 = 0;
    local_e8 = &local_b0;
    uStack_e0 = 1;
    core::option::Option<T>::map_or_else(&local_60,&local_f8);
    param_1[3] = local_50;
    local_48 = local_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
  }
  else {
    if (uVar3 == 0) {
                    /* try { // try from 00202dba to 00202f07 has its CatchHandler @ 002030e3 */
      _<uu_cp::Error_as_core::convert::From<&str>>::from(&local_f8,"missing file operand",0x14);
      param_1[6] = local_c8;
      param_1[7] = uStack_c0;
      param_1[4] = local_d8;
      param_1[5] = uStack_d0;
      param_1[2] = local_e8;
      param_1[3] = uStack_e0;
      *(undefined4 *)param_1 = (undefined4)local_f8;
      *(undefined4 *)((long)param_1 + 4) = local_f8._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_f0;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_f0._4_4_;
      goto LAB_00202f28;
    }
    if (((uVar3 < 3) || (*(char *)(param_3 + 0x42) == '\0')) ||
       (*(long *)(param_3 + 0x18) != -0x8000000000000000)) {
      if (*(long *)(param_3 + 0x18) == -0x8000000000000000) {
        lVar5 = uVar3 - 1;
        param_2[2] = lVar5;
        local_98 = *(undefined ***)(param_2[1] + lVar5 * 0x18);
        plVar1 = (long *)(param_2[1] + 8 + lVar5 * 0x18);
        uStack_90 = *(undefined4 *)plVar1;
        uStack_8c = *(undefined4 *)((long)plVar1 + 4);
        local_f8 = (undefined **)*plVar1;
        puStack_88 = (undefined8 *)plVar1[1];
        uStack_f0 = plVar1[1];
        if (local_98 == (undefined **)0x8000000000000000) {
                    /* try { // try from 002030d4 to 002030e0 has its CatchHandler @ 002030e3 */
          uVar7 = core::option::unwrap_failed(&PTR_s_src_uu_cp_src_cp_rs____warning__002b5cb0);
                    /* catch() { ... } // from try @ 00202faf with catch @ 002030e1 */
                    /* catch() { ... } // from try @ 00203018 with catch @ 00203104 */
                    /* try { // try from 00203107 to 0020311a has its CatchHandler @ 00203123 */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_98);
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(local_100);
          puVar8 = (undefined8 *)_Unwind_Resume(uVar7);
          return puVar8;
        }
        cVar2 = *(char *)(param_3 + 0x45);
        goto joined_r0x00202fa9;
      }
      goto LAB_00202f7a;
    }
    local_b0 = param_2[1] + 0x30;
    uStack_a8 = _<std::sys::os_str::bytes::Buf_as_core::fmt::Debug>::fmt;
    local_f8 = &PTR_s_extra_operand_002b5ca0;
    uStack_f0 = 1;
    local_d8 = 0;
    local_e8 = &local_b0;
    uStack_e0 = 1;
    core::option::Option<T>::map_or_else(&local_48,&local_f8);
    param_1[3] = local_38;
  }
  *(undefined4 *)(param_1 + 1) = local_48;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
  *(undefined4 *)(param_1 + 2) = uStack_40;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_3c;
  *param_1 = 4;
LAB_00202f28:
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(param_2);
  return param_1;
}