undefined  [16] __rustcall
uu_sort::merge::replace_output_file_in_input_files
          (undefined **param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **unaff_R14;
  undefined auVar7 [16];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined **local_168;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined **local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined **local_128;
  undefined **ppuStack_120;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined **local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined **local_c8;
  undefined8 local_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58;
  long local_50;
  long local_48;
  undefined **local_40;
  undefined **local_38;
  
  local_158 = -0x8000000000000000;
  if (param_3 != 0) {
                    /* try { // try from 00229c29 to 00229c41 has its CatchHandler @ 0022a03c */
    std::fs::canonicalize(&local_138,param_3,param_4);
    local_168 = local_128;
    local_178 = local_138;
    uStack_174 = uStack_134;
    uStack_170 = (undefined4)uStack_130;
    uStack_16c = uStack_130._4_4_;
    lVar4 = CONCAT44(uStack_134,local_138);
    local_48 = lVar4;
    lVar6 = -0x7ffffffffffffffe;
    if (-0x7fffffffffffffff < lVar4) {
      local_50 = -0x7ffffffffffffffe;
      local_98 = local_128;
      local_a8 = local_138;
      uStack_a4 = uStack_134;
      uStack_a0 = (undefined4)uStack_130;
      uStack_9c = uStack_130._4_4_;
      local_38 = param_1 + param_2 * 3;
      local_40 = param_1;
      puVar3 = (undefined8 *)
               _<core::slice::iter::IterMut<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_40);
      if (puVar3 != (undefined8 *)0x0) {
        param_1 = (undefined **)&local_f0;
        do {
          std::fs::canonicalize(param_1,puVar3[1],puVar3[2]);
          if (CONCAT44(uStack_ec,local_f0) == -0x8000000000000000) {
LAB_00229ce0:
                    /* try { // try from 00229ce0 to 00229d0b has its CatchHandler @ 0022a093 */
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                      (param_1);
          }
          else {
            local_d8 = local_f0;
            uStack_d4 = uStack_ec;
            uStack_d0 = uStack_e8;
            uStack_cc = uStack_e4;
            local_c8 = local_e0;
                    /* try { // try from 00229d4e to 00229d72 has its CatchHandler @ 0022a060 */
            cVar2 = _<std::path::PathBuf_as_core::cmp::PartialEq>::eq
                              (CONCAT44(uStack_e4,uStack_e8),local_e0,CONCAT44(uStack_9c,uStack_a0),
                               local_98);
            if (cVar2 == '\0') {
LAB_00229eb1:
                    /* try { // try from 00229eb1 to 00229eb8 has its CatchHandler @ 0022a05b */
              core::ptr::drop_in_place<std::path::PathBuf>(&local_d8);
            }
            else {
              if (local_158 != -0x8000000000000000) {
                    /* try { // try from 00229e68 to 00229e76 has its CatchHandler @ 0022a060 */
                _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_138,&local_158);
                local_78 = local_128;
                local_88 = local_138;
                uStack_84 = uStack_134;
                uStack_80 = (undefined4)uStack_130;
                uStack_7c = uStack_130._4_4_;
                    /* try { // try from 00229e91 to 00229e98 has its CatchHandler @ 0022a01f */
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(puVar3);
                puVar3[2] = local_78;
                *(undefined4 *)puVar3 = local_88;
                *(undefined4 *)((long)puVar3 + 4) = uStack_84;
                *(undefined4 *)(puVar3 + 1) = uStack_80;
                *(undefined4 *)((long)puVar3 + 0xc) = uStack_7c;
                goto LAB_00229eb1;
              }
              tmp_dir::TmpDirWrapper::next_file(&local_138,param_5);
              ppuVar5 = local_128;
              uVar1 = local_138;
              if (uStack_130 == (undefined **)0x8000000000000000) {
                    /* try { // try from 00229f46 to 00229f52 has its CatchHandler @ 00229fdf */
                core::ptr::drop_in_place<std::path::PathBuf>(&local_d8);
                unaff_R14 = ppuStack_120;
LAB_00229f92:
                if (CONCAT44(uStack_ec,local_f0) == -0x8000000000000000) {
                    /* try { // try from 00229f9c to 00229fa8 has its CatchHandler @ 00229fda */
                  core::ptr::
                  drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                            (&local_f0);
                }
                    /* try { // try from 00229fa9 to 00229fb5 has its CatchHandler @ 00229fe1 */
                core::ptr::drop_in_place<std::path::PathBuf>(&local_a8);
                if (CONCAT44(uStack_174,local_178) == -0x8000000000000000) {
                    /* try { // try from 00229fbc to 00229fc3 has its CatchHandler @ 0022a03c */
                  core::ptr::
                  drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                            (&local_178);
                }
                core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_158);
                goto LAB_00229f24;
              }
              local_c0 = uStack_130;
              ppuStack_b8 = local_128;
              ppuStack_b0 = ppuStack_120;
              local_128 = local_c8;
              local_138 = local_d8;
              uStack_134 = uStack_d4;
              uStack_130._0_4_ = uStack_d0;
              uStack_130._4_4_ = uStack_cc;
                    /* try { // try from 00229db5 to 00229de1 has its CatchHandler @ 0022a041 */
              auVar7 = std::fs::copy(&local_138,&local_c0);
              if (auVar7._0_8_ != 0) {
                local_138 = CONCAT31(local_138._1_3_,4);
                    /* try { // try from 00229f5f to 00229f68 has its CatchHandler @ 00229fd8 */
                uStack_130 = auVar7._8_8_;
                ppuVar5 = (undefined **)::alloc::boxed::Box<T>::new(&local_138);
                    /* try { // try from 00229f69 to 00229f78 has its CatchHandler @ 00229fd3 */
                core::ptr::drop_in_place<std::path::PathBuf>(&local_c0);
                core::ptr::drop_in_place<std::fs::File>(uVar1);
                unaff_R14 = &PTR_drop_in_place<uu_sort_SortError>_00300230;
                goto LAB_00229f92;
              }
              _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_138,&local_c0);
              local_58 = local_128;
              local_68 = local_138;
              uStack_64 = uStack_134;
              uStack_60 = (undefined4)uStack_130;
              uStack_5c = uStack_130._4_4_;
                    /* try { // try from 00229dfc to 00229e03 has its CatchHandler @ 0022a002 */
              core::ptr::drop_in_place<std::ffi::os_str::OsString>(puVar3);
              puVar3[2] = local_58;
              *puVar3 = CONCAT44(uStack_64,local_68);
              puVar3[1] = CONCAT44(uStack_5c,uStack_60);
              local_128 = ppuStack_b0;
              local_138 = (undefined4)local_c0;
              uStack_134 = local_c0._4_4_;
              uStack_130 = ppuStack_b8;
                    /* try { // try from 00229e36 to 00229e3f has its CatchHandler @ 00229fe9 */
              core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_158);
              local_148 = local_128;
              local_158 = CONCAT44(uStack_134,local_138);
              uStack_150 = (undefined4)uStack_130;
              uStack_14c = uStack_130._4_4_;
              core::ptr::drop_in_place<std::fs::File>(uVar1);
            }
            if (CONCAT44(uStack_ec,local_f0) == -0x8000000000000000) goto LAB_00229ce0;
          }
          puVar3 = (undefined8 *)
                   _<core::slice::iter::IterMut<T>as_core::iter::traits::iterator::Iterator>::next
                             (&local_40);
        } while (puVar3 != (undefined8 *)0x0);
      }
                    /* try { // try from 00229ecc to 00229ed8 has its CatchHandler @ 00229fe1 */
      core::ptr::drop_in_place<std::path::PathBuf>(&local_a8);
      lVar4 = CONCAT44(uStack_174,local_178);
      lVar6 = local_50;
    }
    unaff_R14 = param_1;
    if (lVar4 == -0x8000000000000000) {
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                (&local_178);
    }
    else if ((lVar4 != -0x7fffffffffffffff) && (local_48 < lVar6)) {
                    /* try { // try from 00229f06 to 00229f17 has its CatchHandler @ 0022a03c */
      core::ptr::drop_in_place<std::path::PathBuf>(&local_178);
    }
  }
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_158);
  ppuVar5 = (undefined **)0x0;
LAB_00229f24:
  auVar7._8_8_ = unaff_R14;
  auVar7._0_8_ = ppuVar5;
  return auVar7;
}