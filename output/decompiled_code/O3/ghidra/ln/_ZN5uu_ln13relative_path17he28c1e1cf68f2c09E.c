void __rustcall
uu_ln::relative_path
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uucore::features::fs::canonicalize(&local_d8,param_2,param_3,2,1);
  if (CONCAT44(uStack_d4,local_d8) != -0x8000000000000000) {
    local_98 = local_c8;
    local_a8 = local_d8;
    uStack_a4 = uStack_d4;
    uStack_a0 = uStack_d0;
    uStack_9c = uStack_cc;
                    /* try { // try from 001ba00b to 001ba048 has its CatchHandler @ 001ba10d */
    auVar2 = std::path::Path::parent(param_4,param_5);
    if (auVar2._0_8_ == 0) {
                    /* try { // try from 001ba0e3 to 001ba0ef has its CatchHandler @ 001ba10d */
      uVar1 = core::option::unwrap_failed(&PTR_s_src_uu_ln_src_ln_rs_0022d768);
                    /* catch() { ... } // from try @ 001ba0c2 with catch @ 001ba0f0 */
                    /* catch() { ... } // from try @ 001ba049 with catch @ 001ba0f2 */
      if (CONCAT44(uStack_d4,local_d8) == -0x8000000000000000) {
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                  (&local_d8);
      }
      _Unwind_Resume(uVar1);
      return;
    }
    uucore::features::fs::canonicalize(&local_c0,auVar2._0_8_,auVar2._8_8_,2,1);
    if (local_c0 != -0x8000000000000000) {
      local_78 = local_b0;
      local_88 = local_c0;
      uStack_80 = uStack_b8;
      local_58 = local_98;
      local_68 = local_a8;
      uStack_64 = uStack_a4;
      uStack_60 = uStack_a0;
      uStack_5c = uStack_9c;
                    /* try { // try from 001ba08d to 001ba0a3 has its CatchHandler @ 001ba0f7 */
      uucore::features::fs::make_path_relative_to(&local_48,&local_68,&local_88);
      param_1[2] = local_38;
      *(undefined4 *)param_1 = local_48;
      *(undefined4 *)((long)param_1 + 4) = uStack_44;
      *(undefined4 *)(param_1 + 1) = uStack_40;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
      if (local_c0 == -0x8000000000000000) {
                    /* try { // try from 001ba0c2 to 001ba0cb has its CatchHandler @ 001ba0f0 */
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                  (&local_c0);
      }
      if (CONCAT44(uStack_d4,local_d8) != -0x8000000000000000) {
        return;
      }
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                (&local_d8);
      return;
    }
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
              (&local_c0);
                    /* try { // try from 001ba049 to 001ba052 has its CatchHandler @ 001ba0f2 */
    core::ptr::drop_in_place<std::path::PathBuf>(&local_a8);
    if (CONCAT44(uStack_d4,local_d8) != -0x8000000000000000) goto LAB_001b9fdb;
  }
  core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
            (&local_d8);
LAB_001b9fdb:
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = 0x8000000000000000;
  return;
}