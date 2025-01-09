undefined8 * __rustcall uu_tail::paths::Input::resolve(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  
  if (*(long *)(param_2 + 0x18) != -0x8000000000000000) {
    std::sys::os_str::bytes::Slice::to_owned(&local_90,"/dev/stdin",10);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
                    /* try { // try from 0021108b to 00211095 has its CatchHandler @ 00211206 */
    cVar3 = _<std::path::PathBuf_as_core::cmp::PartialEq>::eq
                      (uVar1,uVar2,CONCAT44(uStack_84,uStack_88),local_80);
    core::ptr::drop_in_place<std::path::PathBuf>(&local_90);
    if (cVar3 == '\0') {
      std::fs::canonicalize(&local_90,uVar1,uVar2);
      if (CONCAT44(uStack_8c,local_90) == -0x8000000000000000) {
        *param_1 = 0x8000000000000000;
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                  (&local_90);
        return param_1;
      }
      param_1[2] = local_80;
      *param_1 = CONCAT44(uStack_8c,local_90);
      param_1[1] = CONCAT44(uStack_84,uStack_88);
      return param_1;
    }
  }
  std::sys::os_str::bytes::Slice::to_owned(local_40,"/dev/stdin",10);
                    /* try { // try from 002110c8 to 002110e7 has its CatchHandler @ 00211215 */
  std::fs::canonicalize(&local_90,local_38,local_30);
  if (CONCAT44(uStack_8c,local_90) == -0x8000000000000000) {
    local_78 = -0x8000000000000000;
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
              (&local_90);
  }
  else {
    local_78 = CONCAT44(uStack_8c,local_90);
    uStack_70 = uStack_88;
    uStack_6c = uStack_84;
    local_68 = local_80;
    if (local_78 != -0x8000000000000000) {
                    /* try { // try from 00211148 to 0021115e has its CatchHandler @ 002111f7 */
      std::sys::os_str::bytes::Slice::to_owned(&local_90,"/dev/fd/0 <==\n",9);
      local_48 = local_80;
      local_58 = local_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
      uStack_4c = uStack_84;
                    /* try { // try from 00211182 to 00211186 has its CatchHandler @ 002111e8 */
      cVar3 = _<std::path::PathBuf_as_core::cmp::PartialEq>::eq
                        (CONCAT44(uStack_6c,uStack_70),local_68,CONCAT44(uStack_84,uStack_88));
      if (cVar3 == '\0') {
                    /* try { // try from 002111c8 to 002111d1 has its CatchHandler @ 002111f7 */
        core::ptr::drop_in_place<std::path::PathBuf>(&local_58);
        param_1[2] = local_68;
        *(undefined4 *)param_1 = (undefined4)local_78;
        *(undefined4 *)((long)param_1 + 4) = local_78._4_4_;
        *(undefined4 *)(param_1 + 1) = uStack_70;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_6c;
      }
      else {
                    /* try { // try from 0021118b to 00211194 has its CatchHandler @ 002111f7 */
        core::ptr::drop_in_place<std::path::PathBuf>(&local_58);
        *param_1 = 0x8000000000000000;
        if (local_78 != -0x8000000000000000) {
                    /* try { // try from 002111a3 to 002111ac has its CatchHandler @ 00211215 */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_78);
        }
      }
      goto LAB_00211108;
    }
  }
  *param_1 = 0x8000000000000000;
LAB_00211108:
  core::ptr::drop_in_place<std::path::PathBuf>(local_40);
  return param_1;
}